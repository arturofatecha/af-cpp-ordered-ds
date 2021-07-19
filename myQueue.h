#pragma once
#include "Node.h"

class myQueue{
    public:
        myQueue();
        Node *front;
        Node *rear;
        bool isEmpty(void);
        void push(int data);
        void pop(void);
        int queueFront(void);
        int queueRear(void);
};