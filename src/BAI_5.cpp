#include <iostream>
#include <string>
#include <windows.h>
#include "BAI_5.hpp"

using namespace std;

connectionProtocol::~connectionProtocol() {
    cout << "Connection terminated" << endl;
}

internalConnection::internalConnection() {
    cout << "Choosing internal connection" << endl;
    Sleep(200);
}

externalConnection::externalConnection() {
    cout << "Choosing external connection" << endl;
    Sleep(200);
}

uartConnection::uartConnection() {
    cout << "Using UART connection" << endl;
    Sleep(200);
}

spiConnection::spiConnection() {
    cout << "Using SPI connection" << endl;
    Sleep(200);
}

i2cConnection::i2cConnection() {
    cout << "Using I2C connection" << endl;
    Sleep(200);
}

ethernetConnection::ethernetConnection() {
    cout << "Using Ethernet connection" << endl;
    Sleep(200);
}

bool uartConnection::connect() {
    cout << "Connected via UART" << endl;
    return true;
}

bool spiConnection::connect() {
    cout << "Connected via SPI" << endl;
    return true;
}

bool i2cConnection::connect() {
    cout << "Connected via I2C" << endl;
    return true;
}

bool ethernetConnection::connect() {
    cout << "Connected via Ethernet" << endl;
    return true;
}

connectionProtocol *connectionFactory::createConnection(econnectionType type) {
    connectionProtocol *connection = NULL;

    switch (type) {
    case SPI:
        connection = new spiConnection();
        break;
    case I2C:
        connection = new i2cConnection();
        break;
    case UART:
        connection = new uartConnection();
        break;
    case ETHERNET:
        connection = new ethernetConnection();
        break;
    default:
        break;
    }

    return connection;
}

int bai5() {
    econnectionType type;
    string typeStr;
    cout << "Choose connection type (SPI, I2C, UART, ETHERNET): ";
    cin >> typeStr;

    if (typeStr == "SPI") {
        type = SPI;
    }
    else if (typeStr == "I2C") {
        type = I2C;
    }
    else if (typeStr == "UART") {
        type = UART;
    }
    else if (typeStr == "ETHERNET") {
        type = ETHERNET;
    }
    else {
        cout << "Invalid connection type" << endl;
        return -1;
    }

    connectionProtocol *connection = connectionFactory::createConnection(type);

    if (connection->connect()) {
        cout << "Connection successful" << endl;
        delete connection;
        return 1;
    }
    else {
        cout << "Connection failed" << endl;
        delete connection;
        return 0;
    }
}