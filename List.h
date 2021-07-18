#include "Node.h"

class LinkedList{

    public:
        LinkedList();
        void insertBefore(int data);
        void insertAfter(int data);
        void displayList(void);
        Node *head;    
};