#include "Node.h"

Node::Node(int data){
    data_ = data;
    next = nullptr;
    prev = nullptr;
    return;
}

int Node::getData(void){
    return data_;
}

void Node::setData(int data){
    data_ = data;
    return;
}