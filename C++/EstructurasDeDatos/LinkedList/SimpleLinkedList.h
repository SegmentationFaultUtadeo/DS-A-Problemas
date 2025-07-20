#ifndef SIMPLE_LINKED_LIST_H
#define SIMPLE_LINKED_LIST_H

#include <bits/stdc++.h>
using namespace std;


template<typename T>
class Node {
        public:
                T data;
                Node* next;
                Node(T val){
                        data = val;
                }
};

template<typename T>
class LinkedList {
        private:
                Node<T>* head;

        public:
                LinkedList(){
                        head = nullptr;
                }

                Node<T>* get_head(){
                        return head;
                }

                bool is_empty(){
                        return head == nullptr;
                }

                void insert_at_head(T val){
                        Node<T>* newNode = new Node<T>(val);
                        newNode -> next = head;
                        head = newNode;
                }

                void delete_at_head(){
                        if (is_empty()) return ;
                        Node<T>* toDelete = head;
                        head = head -> next;
                        delete toDelete;
                }

                bool search(T val){
                        Node<T>* temp = head;
                        while (temp != nullptr){
                                if (temp -> data == val) return true;
                                temp = temp -> next;
                        }
                        return false;
                }

                void insert(T val){
                        Node<T>* newNode = new Node<T>(val);
                        if (head == nullptr) head = newNode;
                        else {
                                Node<T>* temp = head;
                                while (temp -> next != nullptr) temp = temp -> next;
                                temp -> next = newNode;
                        }
                }

                void display(){
                        Node<T>* temp = head;
                        while(temp != nullptr) {
                                cout << temp -> data << " -> ";
                                temp = temp -> next;
                        }
                        cout << "NULL" << endl;
                }

                void insert_at_tail(T val){
                        if (head == nullptr) insert_at_head(val);
                        else{
                                Node<T>* newNode = new Node<T>(val);
                                Node<T>* temp = head;
                                while (temp -> next != nullptr) temp = temp -> next;
                                temp -> next = newNode;
                        }
                }

                void delete_element(T val){
                        if (head == nullptr){
                                cout << "Lista empty" << endl;
                        }

                        if (head -> data == val){
                                Node<T>* toDelete = head;
                                head = head -> next;
                                delete toDelete;
                                return;
                        } else {
                                Node<T>* i = head;
                                while (i -> next != nullptr && i -> next -> data != val) i = i -> next;

                                if ( i -> next == nullptr ) {
                                        cout << "No encontrado" << endl;
                                        return ;
                                } else {
                                        Node<T>* toDelete = i -> next;
                                        i -> next = i -> next -> next;
                                        delete toDelete;
                                }
                        }
                }
};

#endif
