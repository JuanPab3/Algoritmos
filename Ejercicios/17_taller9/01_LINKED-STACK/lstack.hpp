#ifndef _LINKED_STACK_
#define _LINKED_STACK_

#include <iostream>
#include <typeinfo>

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
    int length;

public:
    /*Constructors & Destructor*/
    LinkedStack();
    LinkedStack(const LinkedStack<T> & src);
    ~LinkedStack();

    /*Accessor Methods*/
    int size() const;
    bool empty() const;
    T peek() const;

    /*Modifier Methods*/
    void push(const T & new_item);
    void reverse();
    void clear();
    T pop();

    /*Class Operators*/
    void operator=(LinkedStack <T> & src);

};

/*Operators Overloading*/
template <class T>
std::ostream & operator<<(std::ostream & os, LinkedStack<T> & ll);
template <class T>
std::istream & operator>>(std::istream & is, LinkedStack<T> & ll);




#include "lstack.cpp"

#endif /*_LINKED_STACK_*/
