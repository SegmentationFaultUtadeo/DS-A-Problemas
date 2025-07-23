#ifndef STACK_H
#define STACK_H

#include <bits/stdc++.h>
using namespace std;

class Node {
        public:
                int data;
                Node* next;
                Node(int val);
};

class Stack{
        private:
                Node* top;
                int size;

        public:
                Stack();
                void push(int element);
                Node* pop();
                Node* peek();
                bool is_empty();
                int get_size();
                void display();
};

#endif

