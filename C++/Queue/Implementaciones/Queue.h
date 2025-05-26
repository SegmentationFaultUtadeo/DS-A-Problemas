#ifndef QUEUE_H
#define QUEUE_H

#include <bits/stdc++.h>
using namespace std;

template<typename T>
class Node {
    public:
        T data;
        Node* next;

        Node(T val){
                data = val;
                next = nullptr;
        }
};

template<typename T>
class Queue {
    private:
        Node<T>* back;

    public:
        Node<T>* head;
        Queue(){
                head = nullptr;
                back = nullptr;
        }

        void enqueue(T val){
                Node<T>* newNode = new Node<T>(val);
                if (head == nullptr){
                        head = newNode;
                        back = newNode;
                } else {
                        back -> next = newNode;
                        back = newNode;
                }
        }

        Node<T>* dequeue(){
                if (head == nullptr)
                        return nullptr;
                else{
                        Node<T>* temp = head;
                        head = head -> next;
                        return temp;
                }
        }

        bool is_empty(){
                if (head == nullptr)
                        return true;
                return false;
        }

        Node<T>* front(){
                return head;
        }

        Node<T>* rear(){
                return back;
        }

        void display(){
                Node<T>* iter = head;
                while (iter != nullptr){
                        cout << iter -> data << " ";
                        iter = iter -> next;
                }
                cout << endl;
                return;
        }

        int get_size(){
                Node<T>* iter = head;
                int size {0};
                while (iter != nullptr){
                        size++;
                        iter = iter-> next;
                }
                return size;
        }
};

#endif
