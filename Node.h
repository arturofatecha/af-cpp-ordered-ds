#pragma once

class Node{
    public:
        Node(int data);
        int getData(void);
        void setData(int data);
        Node *next;

    private:
        int data_;
};