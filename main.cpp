// C++ library
#include <iostream>

using namespace std;

// #define BAI_1 // Implementing the singled linked list class where each node's value as integer
// #define BAI_2 // Create a linked list based on BAI_1 implement with 10 nodes with random value in each node
// #define BAI_3 // Imaging linked list has loop, write a function to detect the loop
#define BAI_4 // Define and Implement a singleton class with 3 attributes: id, name, age

#ifdef BAI_1
#include "BAI_1.hpp"
#endif

#ifdef BAI_2
#include "BAI_1.hpp"
#include "BAI_2.hpp"
#endif

#ifdef BAI_3
#include "BAI_1.hpp"
#include "BAI_3.hpp"
#endif

#ifdef BAI_4
#include "BAI_4.hpp"
#endif

void checkResult(int result) {
    if (result == 1) {
        cout << "Run successful" << endl;
    }
    else {
        cout << "Has error" << endl;
    }
}

int main(void) {

#ifdef BAI_2
    LinkedList list;
    int result2 = bai2(&list);
    checkResult(result2);
#endif

#ifdef BAI_3
    LinkedList list2;
    LinkedList list3;
    int result3 = bai3(&list2, &list3);
    checkResult(result3);
#endif

#ifdef BAI_4
    /*
    Singleton class la class chi co 1 object duy nhat.
    Cac object khac se chi tro den object duy nhat do.
    Singleton van co the la mot class toan cuc nhung phai su dung method de co the truy cap vao object.
    */
    Author *a = Author::getInstance();
    Author *b = Author::getInstance();
    int result4 = bai4(*a, *b);
    checkResult(result4);
#endif
    return 1;
}