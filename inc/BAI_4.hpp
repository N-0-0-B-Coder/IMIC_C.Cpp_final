#ifndef BAI_4_HPP
#define BAI_4_HPP

#include <string>

using namespace std;

class Singleton {
private:
    static Singleton *instance;
    static int age;
    static string name;

    Singleton();
    ~Singleton();

    // Delete copy constructor
    Singleton(const Singleton &b);

    // Delete copy assignment operator
    Singleton operator=(const Singleton &b);

public:
    static Singleton *getInstance();
    static void setAge(int age);
    static void setName(string name);
    static void getInfo();
};

typedef Singleton Author;

int bai4(Author &_a, Author &_b);


#endif