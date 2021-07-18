#include "myStack.h"

myStack::myStack(){
    top = nullptr;
}

bool myStack::isEmpty(void){

    if(top == nullptr){
        return true;
    }
    else{
        return false;
    }
}

void myStack::push(int Data){

    Node *newNode = new Node(Data);

    if(top == nullptr){
        top = newNode;
    }
    else{
        newNode->next = top;
        top = newNode;
    }

    return;
}

void myStack::pop(void){

    Node *ptrAux = nullptr;

    if(top != nullptr){
        ptrAux = top;
        top = top->next;
        delete ptrAux;      
    }

    return;
}

int myStack::topOfStack(void){
    return top->getData();
}