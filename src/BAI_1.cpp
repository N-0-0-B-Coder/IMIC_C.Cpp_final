#include <iostream>
#include "BAI_1.hpp"

using namespace std;

LinkedList::Node::Node(int value = 0) : value(value), next(NULL) {}

LinkedList::LinkedList() : size(0), head(NULL), tail(NULL) {}
LinkedList::~LinkedList() {
    Node *current = head;
    Node *next;

    while (current != NULL) {
        next = current->next;
        delete current;
        current = next;
    }

    size = 0;
}

void LinkedList::addNodeToHead(int value) {
    Node *newNode = new Node(value);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    }
    else {
        newNode->next = head;
        head = newNode;
    }

    size++;
}

void LinkedList::addNodetoTail(int value) {
    Node *newNode = new Node(value);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    }
    else {
        Node *current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
        tail = newNode;
    }

    size++;
}

void LinkedList::adNodeBeforeNode(int value, int valueBefore) {
    Node *newNode = new Node(value);
    Node *current = head;
    Node *prev = NULL;

    if (head == NULL) {
        head = newNode;
        tail = newNode;
        size++;
        return;
    }

    while (current != NULL && current->value != valueBefore) {
        prev = current;
        current = current->next;
    }

    if (current != NULL) {
        if (prev == NULL) {
            newNode->next = current;
            head = newNode;
        }
        else {
            newNode->next = current;
            prev->next = newNode;
        }
        size++;
    }
    else {
        cout << "The value before is not found in the list" << endl;
    }
}

void LinkedList::deleteNode(int value) {
    Node *current = head;
    Node *prev = NULL;

    while (current != NULL && current->value != value) {
        prev = current;
        current = current->next;
    }
    if (current != NULL) {
        if (prev == NULL) {
            head = current->next;
        }
        else {
            prev->next = current->next;
        }
        delete current;
        size--;
    }
}

void printList(const char *a, LinkedList *_list) {
    LinkedList::Node *current = _list->head;
    cout << a << ": ";
    while (current != NULL) {
        cout << current->value << ":" << &current;
        current = current->next;
        if (current != NULL) {
            cout << " -> ";
        }
        else {
            cout << endl;
        }
    }
}