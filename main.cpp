#include "List.h"
#include <iostream>
#include <queue>
#include <stack>
#include "myStack.h"

int main(void){

    LinkedList testList = LinkedList();
    std::queue<int> testQueue1;
    std::stack<int> testStack1;
    myStack testStack2 = myStack();

    int i = 0;

    /*FIRST: testing Singly Linked Lists*/
    std::cout << "*** FIRST: testing Singly Linked Lists " << std::endl;
    for(i=0;i<10;i++){
        testList.insertBefore(i);
        testList.insertAfter(i);

    }

    std::cout << "Displaying list: " << std::endl;
    testList.displayList();

    /*SECOND: testing C++ "Queue" library */
    std::cout << "*** SECOND: testing C++ Queue library " << std::endl;
    for(i=0;i<10;i++){
        testQueue1.push(i);
    }

    std::cout << "Displaying C++ queue library based queue: " << std::endl;
    std::cout << "Queue Size: " << testQueue1.size() << std::endl;
    std::cout << "Queue Front: " << testQueue1.front() << std::endl;
    std::cout << "Queue Back: " << testQueue1.back() << std::endl;
    
    while(!testQueue1.empty()){
        std::cout << "Value: " << testQueue1.front() << std::endl;
        testQueue1.pop();
    }

    /*THIRD: testing C++ "Stack" library */
    std::cout << "*** THIRD: testing C++ Stack library " << std::endl;
    for(i=0;i<10;i++){
        testStack1.push(i);
    }

    std::cout << "Displaying C++ stack library based stack: " << std::endl;
    std::cout << "Stack Size: " << testStack1.size() << std::endl;
    std::cout << "Stack Top: " << testStack1.top() << std::endl;
    
    while(!testStack1.empty()){
        std::cout << "Value: " << testStack1.top() << std::endl;
        testStack1.pop();
    }

    /*FOURTH: implementing stack through linked lists*/
    std::cout << "*** FOURTH: testing Stack implemented through Linked List" << std::endl;
    for(i=0;i<10;i++){
        testStack2.push(i);
    }

    std::cout << "Displaying stack implemented through linked list: " << std::endl;
    std::cout << "Stack Top: " << testStack2.topOfStack() << std::endl;
    
    while(!testStack2.isEmpty()){
        std::cout << "Value: " << testStack2.topOfStack() << std::endl;
        testStack2.pop();
    }   

    return 0;
}