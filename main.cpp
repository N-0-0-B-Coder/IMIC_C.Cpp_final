// C++ library
#include <iostream>

using namespace std;

// #define BAI_1 // Implementing the singled linked list class where each node's value as integer
// #define BAI_2 // Create a linked list based on BAI_1 implement with 10 nodes with random value in each node
#define BAI_3 // Imaging linked list has loop, write a function to detect the loop

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

int main(void) {

#ifdef BAI_2
    LinkedList list;
    int result2 = bai2(&list);
    if (result2 == 1) {
        cout << "BAI_2 run successful" << endl;
    }
    else {
        cout << "BAI_2 has error" << endl;
    }
#endif

#ifdef BAI_3
    LinkedList list2;
    LinkedList list3;
    int result3 = bai3(&list2, &list3);

    if (result3 == 1) {
        cout << "BAI_3 run successful" << endl;
    }
    else {
        cout << "BAI_3 has error" << endl;
    }
#endif
    return 1;
}