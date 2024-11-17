#ifndef BAI_1_HPP
#define BAI_1_HPP

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
    Node *tail;

    LinkedList();
    ~LinkedList();

    void addNodeToHead(int value);
    void addNodetoTail(int value);
    void adNodeBeforeNode(int value, int valueExisted);
    void deleteNode(int value);
};

void printList(const char *a, LinkedList *_list);

#endif