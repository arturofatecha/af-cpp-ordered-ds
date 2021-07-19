#include "myQueue.h"

myQueue::myQueue(){
    front = nullptr;
    rear = nullptr;
    return;
}

void myQueue::push(int data){

    Node *newNode = new Node(data);

    if(front == nullptr && rear == nullptr){
        front = newNode;
        rear = newNode;
        rear->next = nullptr;
        front->prev = nullptr;
    }
    else{
        rear->prev = newNode;
        newNode->next = rear;
        newNode->prev = nullptr;
        rear=newNode;
    }
    return;
}

void myQueue::pop(void){

    Node *ptrAux = front;

    if(front == nullptr && rear == nullptr){
        return;
    }
    else{
        front = front->prev;
        delete ptrAux;
    }
}

int myQueue::queueFront(void){
    return front->getData();
}

int myQueue::queueRear(void){
    return rear->getData();
}

bool myQueue::isEmpty(void){
    if(front == nullptr){
        return true;
    }
    return false;
}

