#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node(int data){
            val = data;
            next = nullptr;
        }
};

class MyLinkedList{
    public:
        Node* head;
        int length_list;
        MyLinkedList(){
            head = nullptr;
            length_list = 0;
        }

        void printList(){
            Node* iter = head;
            while (iter != nullptr){
                cout << iter -> val << " -> ";
                iter = iter -> next;
            }
            cout << "NULL" << endl;
        }

        int get(int index){

            if (index < 0 || index >= length_list) return -1;

            Node* iter = head;

            for (int i = 0; i < index; i++) iter = iter -> next;

            return iter -> val;

        }

        void addAtHead(int val){
            Node* newNode = new Node(val);

            if (head == nullptr){
                head = newNode;
                length_list++;
                return;
            }

            newNode -> next = head;
            head = newNode;
            length_list++;
        }

        void addAtTail(int val){

            if (head == nullptr){addAtHead(val); return;};

            Node* newNode = new Node(val);
            Node* iter = head;

            while (iter -> next != nullptr) iter = iter -> next;

            iter -> next = newNode;
            length_list++;
        }

        void addAtIndex(int index, int val){

            if (index > length_list) return;

            if (index == length_list) {addAtTail(val); return;};

            Node* newNode = new Node(val);
            Node* iter = head;

            for (int i = 0; i < index - 1; i++) iter = iter -> next;

            newNode -> next = iter -> next;
            iter -> next = newNode;
            length_list++;

        }

        void deleteAtIndex(int index){
            if (index >= length_list) return;

            if (index == 0){
                Node* temp = head;
                head = temp -> next;
                length_list--;
                delete temp;
                temp = nullptr;
                return;
            }

            Node* iter = head;
            for (int i = 0; i < index -1 ; i++) iter = iter -> next;

            Node* temp = iter -> next;
            iter -> next = temp -> next;
            length_list--;
            delete temp;
            temp = nullptr;
        }
};




int main(){

    MyLinkedList* obj = new MyLinkedList();

    cout << "agregar tres elementos" << endl;
    obj -> addAtHead(1);
    obj -> addAtHead(2);
    obj -> addAtTail(3);
    obj -> printList();

    cout << "Len de la lista" << endl;
    cout << obj -> length_list << endl;

    cout << "Quitar el elemento del indice 1" << endl;
    obj -> deleteAtIndex(1);
    obj -> printList();

    cout << "Len de la lista" << endl;
    cout << obj -> length_list << endl;

    cout << "Agregar al final y eliminar al final" << endl;
    obj -> addAtTail(4);
    obj -> printList();
    obj -> deleteAtIndex(2);
    obj -> printList();


    cout << "Quiero obtener el valor del indice 1" << endl;
    obj -> addAtTail(4);
    obj -> printList();
    int i1 {obj -> get(1)};
    cout << i1 << endl;


    return 0;
}
