#include <bits/stdc++.h>
#define endl "\n"

using namespace std;


class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            data = val;
            next = nullptr;
        }
};

class LinkedList {
    private:
        Node* head;

    public:
        LinkedList(){
            head = nullptr;
        }

        Node* get_head() {
            return head;
        }

        
        bool is_empty() {
            return head == nullptr;
        }

        void insert_at_head(int val) {
            Node* newNode = new Node(val);
            newNode->next = head;
            head = newNode;
        }

        void delete_at_head() {
            if (is_empty()) return;
            Node* toDelete = head;
            head = head->next;
            delete toDelete;
        }

        bool search(int val) {
            Node* temp = head;
            while (temp != nullptr) {
                if (temp->data == val)
                    return true;
                temp = temp->next;
            }
            return false;
        }


        void insert(int val){
            Node* newNode = new Node(val);

            if (head == nullptr){
                head = newNode;
            }else{
                Node* temp = head;
                while (temp -> next != nullptr)
                    temp = temp -> next;

                temp -> next = newNode; 
            }
        }
        

        void display(){
            Node* temp = head;

            while (temp != nullptr){
                cout << temp->data << " -> " ;
                temp = temp -> next;
            }
            cout << "NULL" << endl;
        }


        void insert_at_tail(int val){
            if (head == nullptr) insert_at_head(val);
            else{
                Node* newNode = new Node(val);
                Node* temp = head;
                while (temp -> next != nullptr)
                    temp = temp -> next;
                temp -> next = newNode;
            }
        }

        void delete_element(int val){
            if (head == nullptr){
                cout << "Lista vacia" << endl;
                return;
            }

            if (head -> data == val){
                Node* toDelete = head;
                head = head -> next;
                delete toDelete;
                return;
            }else{
                Node* i = head;
                while(i -> next != nullptr && i -> next -> data != val)
                    i = i -> next;

                if (i -> next == nullptr){
                    cout << "No encontrado" << endl;
                    return;
                }else{
                    Node* toDelete = i -> next;
                    i -> next = i -> next -> next;
                    delete toDelete;
                }
            }
            
        }

};

int main() {
    LinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);

    cout << "Lista enlazada: " ;
    list.display();

    cout << "Lista actualizada: ";
    list.insert_at_tail(50);

    cout << "Lista enlazada: ";
    list.display();

    cout << "Eliminar el valor 20";
    list.delete_element(20);

    cout << "Lista enlazada: ";
    list.display();

    cout << "Eliminar elemento que no existe: ";
    list.delete_element(1000);

    cout << "Lista impresa: ";
    list.display();

    cout << "Eliminar el ultimo elemento" << endl; 
    list.delete_element(50);

    cout << "Lista impresa: " << endl;
    list.display();
    
    return 0;
}

    
