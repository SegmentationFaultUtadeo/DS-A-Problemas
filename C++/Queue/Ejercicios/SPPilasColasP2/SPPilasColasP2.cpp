#include "Queue.h"
#define endl "\n"


Node* null_fun(){
    return nullptr;
}

void reverse_at_k_2(Queue cola, int k){
    if (k < 0 | k > cola.get_size() | cola.is_empty() == true) {
        cout << "NULL" << endl;
        return;
    }
    Node* iter = cola.front() -> next;
    Node* prev = cola.front();
    for (int i =0; i < k-1; i++){
        Node* post = iter -> next;
        iter -> next = prev;
        prev = iter;
        iter = post;
    }
    cola.head -> next = iter;
    cola.head = prev;
    cola.display();
    return;
}


int main(){
    Queue cola;
    cola.enqueue(10);
    cola.enqueue(-20);
    cola.enqueue(30);
    cola.enqueue(40);
    cola.enqueue(-50);
    cola.enqueue(60);
    cola.enqueue(70);
    cola.enqueue(80);
    // cola.enqueue(9);
    // cola.enqueue(10);
    cola.display();
    reverse_at_k_2(cola, -3);
    // cola_2.display();
}

