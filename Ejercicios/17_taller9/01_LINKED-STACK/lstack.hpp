#ifndef _LINKED_STACK_
#define _LINKED_STACK_

#include <iostream>

template <class T>
class LinkedStack {
private:
    /*Class  items properties*/
    struct Node {
        T item;
        Node *prev;
    };

    /*Class properties*/
    Node *head;
    unsigned length;

public:
    /*Constructors & Destructor*/
    LinkedStack();
    ~LinkedStack();

    /*Accessor Methods*/
    unsigned size() const;
    bool empty() const;
    T peek() const;

    /*Modifier Methods*/
    void push(const T & new_item);
    void clear();
    T pop();

    /*Class Operators*/
    void operator=(LinkedStack <T> & src){
        LinkedStack <T> temp;
        while (!src.empty())
            temp.push(src.pop());
        while (!temp.empty()){
            Node *tempN = new Node;
            tempN->item = temp.peek();
            tempN->prev = head;

            head = tempN;
            length++;
            src.push(temp.pop());
        }
    }

};

/*Operators Overloading*/
template <class T>
std::ostream & operator<<(std::ostream & os, LinkedStack<T> & ll);
template <class T>
std::istream & operator>>(std::istream & is, LinkedStack<T> & ll);




#include "lstack.cpp"

#endif /*_LINKED_STACK_*/
