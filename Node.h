#pragma once

class Node{
    public:
        Node(int data);
        int getData(void);
        void setData(int data);
        Node *next;
        Node *prev;

    private:
        int data_;
};