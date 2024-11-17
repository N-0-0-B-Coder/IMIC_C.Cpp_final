#ifndef BAI_5_HPP
#define BAI_5_HPP

enum econnectionType {
    SPI = 1,
    I2C,
    UART,
    ETHERNET
};

//base class
class connectionProtocol {
public:
    virtual ~connectionProtocol();

    virtual bool connect() = 0;
};

// internal class
class internalConnection : public connectionProtocol {
public:
    internalConnection();
};

// concrete class spi
class spiConnection : public internalConnection {
public:
    spiConnection();

    bool connect();
};

// concrete class i2c
class i2cConnection : public internalConnection {
public:
    i2cConnection();

    bool connect();
};

// external class
class externalConnection : public connectionProtocol {
public:
    externalConnection();
};

// concrete class uart
class uartConnection : public externalConnection {
public:
    uartConnection();

    bool connect();
};

// concrete class ethernet
class ethernetConnection : public externalConnection {
public:
    ethernetConnection();

    bool connect();
};

// Factory class
class connectionFactory {
public:
    static connectionProtocol *createConnection(econnectionType type);
};

int bai5();

#endif