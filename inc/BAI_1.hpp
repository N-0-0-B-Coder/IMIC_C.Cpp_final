#ifndef BAI_1_H
#define BAI_1_H

class LinkedList {
private:
public:
    int size;

    class Node {
    public:
        int value;
        Node *next;
        Node(int value);
    };
    Node *head;

    LinkedList();
    ~LinkedList();

    void addNodeToHead(int value);
    void addNodetoTail(int value);
    void adNodeBeforeNode(int value, int valueBefore);
    void deleteNode(int value);
};

#endif