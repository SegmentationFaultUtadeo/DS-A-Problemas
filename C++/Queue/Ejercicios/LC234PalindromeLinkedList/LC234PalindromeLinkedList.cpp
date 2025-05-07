#include "SimpleLinkedList.h"

int get_length(Node* head){
    int len {0};
    Node* iter = head;
    while (iter != nullptr){
        len++;
        iter = iter -> next;
    }
    return len;
}

bool isPalindrome(Node* head){
    int n {get_length(head)};
    vector<int> arr(n);
    int i{0};
    Node* iter = head;
    while (i < n/2){
        arr[i] = iter -> data;
        i++;
        iter = iter -> next;
    }

    if (n % 2 == 1)
        iter = iter -> next;

    while (iter != nullptr){
        i--;
        if (iter -> data != arr[i])
            return false;
        iter = iter -> next;
    }
    return true;
}



int main(){

    LinkedList list;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(2);
    list.insert(1);

    list.display();
    cout << boolalpha;
    cout << isPalindrome(list.get_head()) << endl;

    return 0;
}
