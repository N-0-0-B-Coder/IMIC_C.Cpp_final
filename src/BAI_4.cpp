#include <iostream>
#include "BAI_4.hpp"

using namespace std;

Singleton::Singleton() {
    cout << "Object created" << endl;
}

Singleton::~Singleton() {
    delete object;
}

Singleton *Singleton::object = nullptr;
int Singleton::age = 0;
string Singleton::name = "";

Singleton *Singleton::getObject() {
    if (object == nullptr) {
        object = new Singleton();
    }
    else {
        cout << "Object already created" << endl;
    }
    return object;
}

void Singleton::setAge(int age) {
    Singleton::age = age;
}

void Singleton::setName(string name) {
    Singleton::name = name;
}

void Singleton::getInfo() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

int bai4(Author &_a, Author &_b) {
    _a.setName("Nghia");
    _a.setAge(30);

    _a.getInfo();
    _b.getInfo();

    return 1;
}