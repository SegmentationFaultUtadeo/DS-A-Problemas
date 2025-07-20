#include <bits/stdc++.h>
#define endl "\n"
using namespace std;


class Node{
    public:
        int data;
        Node* next;

        Node (int val){
            data = val;
            next = nullptr;
        }
};

class LinkedList{
    private:
        Node* head;

    public:
        LinkedList(){
            head = nullptr;
        }

        Node* get_head() {
            return head;
        }

        void insert(int val){
            Node* newNode = new Node(val);

            if (head == nullptr){
                head = newNode;
            }else {
                Node* temp = head;
                while (temp -> next != nullptr)
                    temp = temp -> next;

                temp -> next = newNode;
            }
        }

        void printList(){
            Node* temp = head;
            while (temp != nullptr){
                cout << temp -> data << " -> ";
                temp = temp -> next;
            }
            cout << "NULL" << endl;
        }
};


void printListNode(Node* head){
    Node* temp = head;
    while (temp != nullptr){
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}


Node* reverse_linked_list(Node* head){
    if (head == nullptr) return nullptr;
    Node* iterator = head;
    Node* prev = nullptr;
    
    while (iterator != nullptr){
        Node* sig = iterator -> next;
        iterator -> next = prev;
        prev = iterator;
        iterator = sig;
    }
    return prev;
}

Node* reverse_linked_stack(Node* head){
    stack<int> s;
    Node* iter = head;
    while (iter != nullptr){
        s.push(iter -> data);
        iter = iter -> next;
    }

    iter = head;
    while (iter != nullptr){
        iter -> data = s.top();
        s.pop();
        iter = iter -> next;
    }
    return head;
}


int main(){
    LinkedList list;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.insert(5);

    cout << "Lista original" << endl; 

    list.printList();

    // cout << endl << "Lista reversed (iterating)" << endl;

    // Node* arr_2 = reverse_linked_list(list.get_head()); 
    // printListNode(arr_2);

    cout << endl << "Lista reversed (stack)" << endl;
    Node* arr_3 = reverse_linked_stack(list.get_head());
    printListNode(arr_3);

    return 0;
}

