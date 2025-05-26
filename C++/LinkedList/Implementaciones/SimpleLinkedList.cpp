#include "SimpleLinkedList.h"
#define endl "\n"


int main(){

    LinkedList<int> lli;
    lli.insert_at_head(2);
    lli.insert(1);
    lli.insert(3);
    lli.insert(4);
    lli.insert(5);
    lli.display();

    LinkedList<string> lls;
    lls.insert_at_head("Hello");
    lls.insert("World");
    lls.display();

    return 0;
}
