#ifndef QUEUE_H
#define QUEUE_H

#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        Node(int val);
};

class Queue {
    private:
        Node* head;
        Node* back;

    public:
        Queue();

        void enqueue(int val);
        Node* dequeue();
        bool is_empty();
        Node* front();
        Node* rear();
        void display();
};

#endif
