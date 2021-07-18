#include "List.h"
#include <iostream>


LinkedList::LinkedList(){
    head = nullptr;
    return;
}

void LinkedList::insertBefore(int data){

    Node *newNode = new Node(data);

    newNode->next = head;
    head = newNode;

    return;
}

void LinkedList::insertAfter(int data){

    Node * newNode = new Node(data);
    Node *ptrNode = head;

    if(ptrNode == nullptr){
        head = newNode;
    }
    else{
        while(ptrNode != nullptr){
            if(ptrNode->next == nullptr){
                ptrNode->next = newNode;
                newNode->next = nullptr;
                break;
            }
            ptrNode = ptrNode->next;
        }
    }
    return;
}

void LinkedList::displayList(void){

    Node *ptrNode = head;

    while (ptrNode != nullptr){
        std::cout << "Value: " << ptrNode->getData() << std::endl;
        ptrNode = ptrNode->next;        
    }

    return;
}