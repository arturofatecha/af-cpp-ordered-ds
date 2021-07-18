#pragma once
#include "Node.h"

class myStack{

    public:
        myStack();
        bool isEmpty(void);
        void push(int Data);
        void pop(void);
        int topOfStack(void);

        Node *top;

};