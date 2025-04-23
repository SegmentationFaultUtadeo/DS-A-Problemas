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

        void deleteValue(int val){
            if (head == nullptr) return;

            if (head -> data == val){
                Node* toDelete = head;
                head = head -> next;
                delete toDelete;
                return;
            }

            Node* temp = head;
            while (temp -> next != nullptr && temp -> next -> data != val)
                temp = temp -> next;

            if (temp -> next == nullptr){
                cout << "No encontrado" << endl;
                return;
            }

            Node* toDelete = temp -> next;
            temp -> next = temp -> next -> next;
            delete toDelete;
        }

};

int main() {
    LinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);

    cout << "Lista enlazada: " ;
    list.display();

    cout << "Eliminar elemento 20" << endl;
    list.deleteValue(20);

    cout << "Lista actualizada: ";
    list.display();

    return 0;
}

    
