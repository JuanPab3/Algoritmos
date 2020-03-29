#ifndef _LINKED_LIST_
#define _LINKED_LIST_

#include <iostream>

template <class T>
class LinkedList {
private:
    /*Class  items properties*/
    struct Node {
        T item;
        Node *next;
    };

    /*Class properties*/
    Node *head;
    unsigned length;

public:
    /*Constructors & Destructor*/
    LinkedList();

    /*Accessor Methods*/
    unsigned size() const;
    T front() const;
    T back() const;

    /*Modifier Methods*/
    void push_front(const T & new_item);
    void push_back(const T & new_item);

};

/*Operators Overloading*/
template <class T>
std::ostream & operator<<(std::ostream & os, LinkedList<T> & ll);
template <class T>
std::istream & operator>>(std::istream & is, LinkedList<T> & ll);




#include "linkedlist.cpp"

#endif /*_LINKED_LIST_*/
