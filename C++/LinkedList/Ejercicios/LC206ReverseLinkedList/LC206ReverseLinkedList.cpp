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

Node* arr_to_linked(int arr[], int size_arr){

    if (size_arr == 0) return nullptr;

    Node* head = new Node(arr[0]);
    Node* current = head;

    for (int i = 1; i < size_arr; i ++){
        current -> next = new Node(arr[i]);
        current = current -> next;
    }
    return head;
}

void printList(Node* head){
    while (head != nullptr){
        cout << head -> data << " -> ";
        head = head -> next;
    }
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



int main(){
    int arr[] = {1, 2, 3};
    int size_arr = sizeof(arr) / sizeof(arr[0]);

    
    Node* List = arr_to_linked(arr, size_arr);
    List = reverse_linked_list(List);
    printList(List);

    return 0;
}

