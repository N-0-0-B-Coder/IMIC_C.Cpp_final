#include <iostream>
#include "BAI_1.hpp"
#include "BAI_2.hpp"

using namespace std;

void createNodes(LinkedList *_list) {

    // addNoteToHead(value)
    _list->addNodeToHead(1);
    _list->addNodeToHead(7);
    _list->addNodeToHead(6);
    _list->addNodeToHead(10);
    _list->addNodeToHead(9);

    // addNodetoTail(value)
    _list->addNodetoTail(2);
    _list->addNodetoTail(4);
    _list->addNodetoTail(3);

    // addNoteBeforeNode(value, valueBefore)
    _list->adNodeBeforeNode(8, 10);
    _list->adNodeBeforeNode(5, 3);

    // deleteNode(value)
    printList("List", _list);
}

void findMaxValue(LinkedList *_list) {
    int max = 0;
    LinkedList::Node *current = _list->head;
    while (current != NULL) {
        if (current->value > max) {
            max = current->value;
        }
        current = current->next;
    }

    cout << "Max value: " << max << endl;
}

void findMinValue(LinkedList *_list) {
    int min = _list->head->value;
    LinkedList::Node *current = _list->head;
    while (current != NULL) {
        if (current->value < min) {
            min = current->value;
        }
        current = current->next;
    }

    cout << "Min value: " << min << endl;
}

int bai2(LinkedList *_list) {
    createNodes(_list);
    findMaxValue(_list);
    findMinValue(_list);

    return 1;
}