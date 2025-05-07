#ifndef SIMPLE_LINKED_LIST_H
#define SIMPLE_LINKED_LIST_H

#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        Node(int val);
};

class LinkedList {
    private:
        Node* head;

    public:
        LinkedList();

        Node* get_head();
        bool is_empty();
        void insert_at_head(int val);
        void delete_at_head();
        bool search(int val);
        void insert(int val);
        void display();
        void insert_at_tail(int val);
        void delete_element(int val);
};

#endif
