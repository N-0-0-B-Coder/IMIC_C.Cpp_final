// C++ library
#include <iostream>

using namespace std;

#define BAI_1 // Implementing the singled linked list class where each node's value as integer
#define BAI_2 // Create a linked list based on BAI_1 implement with 10 nodes with random value in each node

#ifdef BAI_1
#include "BAI_1.hpp"
#endif

#ifdef BAI_2
#include "BAI_2.hpp"
#endif

int main(void) {

#ifdef BAI_2

    LinkedList list;
    bai2(&list);

#endif

    return 1;
}