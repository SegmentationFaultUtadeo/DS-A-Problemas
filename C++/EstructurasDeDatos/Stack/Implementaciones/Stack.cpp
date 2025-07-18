#include "Stack.h"
#define endl "\n"


Node::Node(int val){
    data = val;
    next = nullptr;
}

Stack::Stack(){
    top = nullptr;
    size = 0;
}

void Stack::push(int val){
    Node* newNode = new Node(val);
    if (top == nullptr){
        top = newNode;
        size++;
        return;
    } else {
        newNode -> next = top;
        top = newNode;
        size++;
        return;
    }
}

Node* Stack::pop(){
    if (top == nullptr){
        cout << "Nada para eliminar" << endl;
        return nullptr;
    }   
    Node* temp = top;
    top = top -> next;
    size--;
    return temp;
}

Node* Stack::peek(){
    if (top == nullptr){
        cout << "Empty" << endl;
        return nullptr;
    }
    return top;
}

bool Stack::is_empty(){
    if (top == nullptr)
        return true;
    return false;
}

int Stack::get_size(){
    return size;
}

void Stack::display(){
    Node* iter = top;
    while (iter != nullptr){
        cout << iter -> data << " ";
        iter = iter -> next;
    }
    return;
}


int main(){
    cout << boolalpha;
    Stack pila;
    cout << "Size inicial de la pila" << endl;
    cout << pila.get_size() << endl;
    cout << "Insertar elementos 1, 2 y 3" << endl;
    pila.push(1);
    pila.push(2);
    pila.push(3);
    cout << "Imprimir pila" << endl;
    pila.display();
    cout << endl;
    cout << "Eliminar el elemento top";
    cout << pila.pop() -> data << endl;
    cout << "Imprimir pila" << endl;
    pila.display();
    cout << endl;
    cout << "Elemento al tope de la pila" << endl;
    cout << pila.peek() -> data << endl;
    cout << "Mirar si está vacía la pila" << endl;
    cout << pila.is_empty() << endl;
    cout << "Tamaño de la pila:" << endl;
    cout << pila.get_size() << endl;
}
