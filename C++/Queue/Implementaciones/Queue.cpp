#include "Queue.h"
#define endl "\n"


Node::Node(int val){
    data = val;
    next = nullptr;
}

Queue::Queue(){
    head = nullptr;
    back = nullptr;
}

void Queue::enqueue(int element){
    Node* newNode = new Node(element);
    if (head == nullptr){
        head = newNode;
        back = newNode;
        return;
    }
    else{
        back -> next = newNode;
        back = newNode;
        return;
    }
}

Node* Queue::dequeue(){
    if (head == nullptr)
        return nullptr;
    else{
        Node* temp = head;
        head = head -> next;
        return temp;
    }
}

bool Queue::is_empty(){
    if (head == nullptr)
        return true;
    return false;
}

Node* Queue::front(){
    return head;
}

Node* Queue::rear(){
    return back;
}

void Queue::display(){
    Node* iter = head;
    while(iter != nullptr){
        cout << iter -> data << " ";
        iter = iter -> next;
    }
    cout << endl;
    return;
}

int main(){
    Queue cola;
    cout << "Insertar elementos 1, 2 y 3" << endl;
    cola.enqueue(1);
    cola.enqueue(2);
    cola.enqueue(3);
    cout << "Imprimir la cola" << endl;
    cola.display();
    cout << "Hacer dequeue()" << endl;
    cola.dequeue();
    cout << "Imprimir la cola" << endl;
    cola.display();
    cout << boolalpha;
    cout << "Mirar si la cola esta empty" << endl;
    cout << cola.is_empty() << endl;
    cout << "Mirar el primer elemento de la cola" << endl;
    cout << cola.front() -> data << endl;
    cout << "Mirar el último elemento de la cola" << endl;
    cout << cola.rear() -> data << endl;
}
