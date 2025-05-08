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
        Node* back;

    public:
        Node* head;                
        Queue();

        void enqueue(int val);
        Node* dequeue();
        bool is_empty();
        Node* front();
        Node* rear();
        void display();
        void reverse_at_k();
        int get_size();
};

#endif
