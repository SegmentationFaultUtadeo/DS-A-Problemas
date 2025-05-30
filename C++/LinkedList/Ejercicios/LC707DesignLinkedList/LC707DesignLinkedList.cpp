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
        MyLinkedList(){
            head = nullptr;
        }

        int get(int index){
            int i = 0;
            Node* iter = head;

            while (i < index && iter -> next != nullptr){
                i++;
                iter = iter -> next;
            }
            if (iter == nullptr || index < 0)
                return -1;
            return iter -> val;
        }

        void addAtHead(int val){
            Node* nuevoNode = new Node(val);
            nuevoNode -> next = head;
            head = nuevoNode;
        }

        void addAtTail(int val){
            Node* iter = head;
            if (iter == nullptr){
                addAtHead(val);
                return;
            }
            Node* nuevoNode = new Node(val);
            while (iter -> next != nullptr)
                iter = iter -> next;
            iter -> next = nuevoNode;
        }

        void addAtIndex(int index, int val){
            if (index == 0){
                addAtHead(val);
                return;
            }
            Node* iter = head;
            Node* nuevoNode = new Node(val);
            for(int i = 0; i < index - 1; i++)
                iter = iter -> next;
            Node* temp = iter -> next;
            iter -> next = nuevoNode;
            nuevoNode -> next = temp;
        }

        void deleteAtIndex(int index){
            Node* iter = head;
            if (index < 0) return;
            if (index == 0){
                Node* temp = head -> next;
                delete head;
                head = temp;
                return;
            }
            for (int i=0; i < index-1; i++)
                iter = iter -> next;
            if (iter == nullptr) return;
            Node* temp = iter -> next -> next;
            delete iter -> next;
            iter -> next = temp;
        }

        void printList(){
            Node* iter = head;
            while (iter != nullptr){
                cout << iter -> val << " -> ";
                iter = iter -> next;
            }
            cout << "NULL" << endl;
        }
};




int main(){

    MyLinkedList* obj = new MyLinkedList();
//     ["MyLinkedList","addAtHead","deleteAtIndex","addAtHead","addAtHead","addAtHead","addAtHead","addAtHead","addAtTail","get","deleteAtIndex","deleteAtIndex"]
// [[],[2],[1],[2],[7],[3],[2],[5],[5],[5],[6],[4]]

    obj -> addAtHead(2);
    obj -> printList();

    obj -> deleteAtIndex(1);
    obj -> printList();

    obj -> addAtHead(2);
    obj -> printList();

    obj -> addAtHead(7);
    obj -> printList();

    obj -> addAtHead(3);
    obj -> printList();

    obj -> addAtHead(2);
    obj -> printList();

    obj -> addAtHead(5);
    obj -> printList();

    obj -> addAtTail(5);
    obj -> printList();

    int in {obj -> get(5)};

    obj -> deleteAtIndex(6);
    obj -> printList();

    obj -> deleteAtIndex(4);
    obj -> printList();






    return 0;
}
