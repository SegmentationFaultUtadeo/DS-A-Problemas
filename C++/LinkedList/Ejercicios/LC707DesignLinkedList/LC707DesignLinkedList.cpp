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
};




int main(){

    MyLinkedList* obj = new MyLinkedList();







    return 0;
}
