#include <iostream>
#include <cstdlib>
#include <set>
#include <string>
#include "BAI_1.hpp"
#include "BAI_3.hpp"

using namespace std;
using std::string;

void createNewNodes(LinkedList *_list) {
    for (int i = 1; i <= 10; i++) {
        _list->addNodetoTail(i);
    }
}

void createLoop(LinkedList *_list) {
    LinkedList::Node *temp;
    LinkedList::Node *current = _list->head;
    while (current != NULL) {
        if (current->value == 5) {
            temp = current;
        }
        current = current->next;
    }
    _list->tail->next = temp;
}

void detectLoop(const char *a, LinkedList *_list) {
    LinkedList::Node *current = _list->head;
    set<LinkedList::Node *> nodeSet;

    long long unsigned int size = nodeSet.size();

    do {
        size = nodeSet.size();
        nodeSet.emplace(current);
        current = current->next;
    } while (current != NULL && size != nodeSet.size());


    if (current == NULL) {
        cout << a << ": No loop" << endl;
    }
    else {
        cout << a << ": Loop detected" << endl;
    }

}

int bai3(LinkedList *_listA, LinkedList *_listB) {
    createNewNodes(_listA);
    createNewNodes(_listB);

    createLoop(_listA);

    detectLoop("List A", _listA);
    detectLoop("List B", _listB);
    // printList("List B", _listB);
    // printList("List A", _listA);

    return 1;
}