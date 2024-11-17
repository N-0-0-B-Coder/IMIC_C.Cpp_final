#ifndef BAI_4_HPP
#define BAI_4_HPP

#include <string>

using namespace std;

class Singleton {
private:
    static Singleton *object;
    static int age;
    static string name;

    Singleton();
    ~Singleton();
    Singleton(const Singleton &b) = delete;
    Singleton operator=(const Singleton &b) = delete;

public:
    static Singleton *getObject();
    static void setAge(int age);
    static void setName(string name);
    static void getInfo();
};

typedef Singleton Author;

int bai4(Author &_a, Author &_b);


#endif