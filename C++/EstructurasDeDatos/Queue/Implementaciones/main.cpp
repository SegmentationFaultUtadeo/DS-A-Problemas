#include "Queue.h"
#define endl "\n"


int main(){
    Queue<int> intQueue;
    intQueue.enqueue(1);
    intQueue.enqueue(2);
    intQueue.display();

    Queue<std::string> strQueue;
    strQueue.enqueue("hello");
    strQueue.enqueue("world");
    strQueue.display();

    return 0;
}
