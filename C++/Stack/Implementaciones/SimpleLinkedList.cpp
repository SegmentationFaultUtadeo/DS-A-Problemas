#include "SimpleLinkedList.h"
#define endl "\n"


Node::Node(int val){
    data = val;
    next = nullptr;
}

LinkedList::LinkedList(){
    head = nullptr;
}

Node* LinkedList::get_head(){
    return head;
}

bool LinkedList::is_empty(){
    return head == nullptr;
}

void LinkedList::insert_at_head(int val){
    Node* newNode = new Node(val);
    newNode -> next = head;
    head = newNode;
}

void LinkedList::delete_at_head(){
    if (is_empty()) return;
    Node* toDelete = head;
    head = head -> next;
    delete toDelete;
}

bool LinkedList::search(int val){
    Node* temp = head;
    while (temp != nullptr){
        if (temp -> data == val)
            return true;
        temp = temp -> next;
    }
    return false;
}

void LinkedList::insert(int val){
    Node* newNode = new Node(val);
    if (head == nullptr){
        head = newNode;
    } else {
        Node* temp = head;
        while (temp -> next != nullptr)
            temp = temp -> next;
        temp -> next = newNode;
    }
}

void LinkedList::insert_at_tail(int val){
    if (head == nullptr) insert_at_head(val);
    else {
        Node* newNode = new Node(val);
        Node* temp = head;
        while (temp -> next != nullptr)
            temp = temp -> next;
        temp -> next = newNode;
    }
}

void LinkedList::delete_element(int val){
    if (head == nullptr){
        cout << "Lista vacía" << endl;
        return;
    }

    if (head -> data == val){
        Node* toDelete = head;
        head = head -> next;
        delete toDelete;
        return;
    } else {
        Node* i = head;
        while (i -> next != nullptr && i -> next -> data != val)
            i = i -> next;

        if (i -> next == nullptr){
            cout << "No encontrado" << endl;
            return;
        } else {
            Node* toDelete = i -> next;
            i -> next = i -> next -> next;
            delete toDelete;
        }
    }
}

void LinkedList::display(){
    Node* temp = head;
    while (temp != nullptr){
        cout << temp -> data <<  " -> ";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}
