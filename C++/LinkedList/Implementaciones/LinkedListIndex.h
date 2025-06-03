#ifndef LINKED_LIST_INDEX_H
#define LINKED_LIST_INDEX_H

#include <bits/stdc++.h>

using namespace std;

template<typename T>
class Node{
    public:
        T val;
        Node* next;
        Node(T data){
            val = data;
            next = nullptr;
        }
};

template<typename T>
class LinkedListIndex{
    private:
        Node<T>* head;
        int length_list;

    public:
        LinkedListIndex(){
            head = nullptr;
            length_list = 0;
        }

        void printList(){
            Node<T>* iter = head;
            while (iter != nullptr){
                cout << iter -> val << " -> ";
                iter = iter -> next;
            }
            cout << "NULL" << endl;
        }

        T get(int index){

            if (index < 0 || index >= length_list) return -1;

            Node<T>* iter = head;

            for (int i = 0; i < index; i++) iter = iter -> next;

            return iter -> val;
        }

        void addAtHead(T val){
            Node<T>* newNode = new Node(val);

            if (head == nullptr){
                head = newNode;
                length_list++;
                return;
            }

            newNode -> next = head;
            head = newNode;
            length_list++;
        }

        void addAtTail(T val){

            if (head == nullptr){addAtHead(val); return;};

            Node<T>* newNode = new Node(val);
            Node<T>* iter = head;

            while(iter -> next != nullptr) iter = iter -> next;

            iter -> next = newNode;
            length_list++;
        }

        void addAtIndex(int index, T val){

            if (index > length_list) return;

            if (index == length_list) {addAtTail(val); return;};

            Node<T>* newNode = new Node(val);
            Node<T>* iter = head;

            for (int i = 0; i < index - 1; i++) iter = iter -> next;

            newNode -> next = iter -> next;
            iter -> next = newNode;
            length_list++;
        }

        void deleteAtIndex(int index){
            if (index >= length_list) return;

            if (index == 0){
                Node<T>* temp = head;
                head = temp -> next;
                length_list--;
                delete temp;
                temp = nullptr;
                return;
            }

            Node<T>* iter = head;
            for (int i = 0; i < index - 1; i++) iter = iter -> next;

            Node<T>* temp = iter -> next;
            iter -> next = temp -> next;
            length_list--;
            delete temp;
            temp = nullptr;
        }
};

#endif
