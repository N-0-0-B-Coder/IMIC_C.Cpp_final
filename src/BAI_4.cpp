#include <iostream>
#include "BAI_4.hpp"

using namespace std;

Singleton::Singleton() {
    cout << "Create instance" << endl;
}

Singleton::~Singleton() {
    delete instance;
}

Singleton::Singleton(const Singleton &b) {
    instance = b.instance;
    age = b.age;
    name = b.name;
}

Singleton Singleton::operator=(const Singleton &b) {
    instance = b.instance;
    age = b.age;
    name = b.name;
    return *this;
}

Singleton *Singleton::instance = nullptr;
int Singleton::age = 0;
string Singleton::name = "";

Singleton *Singleton::getInstance() {
    if (instance == nullptr) {
        instance = new Singleton();
    }
    return instance;
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