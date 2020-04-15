#ifdef _LINKED_STACK_

#include <iostream>

/*======================CONSTRUCTORS_&_DESTRUCTOR======================*/
template <class T>
LinkedStack<T>::LinkedStack() {
    head = nullptr;
    length = 0;
}

template <class T>
LinkedStack<T>::~LinkedStack() {
    // std::cout << "DESTRUCT" << std::endl;
    head = nullptr;
    length = 0;
}
/*==========================ACCESSOR_METHODS============================*/
template <class T>
unsigned LinkedStack<T>::size() const{
    return length;
}

template <class T>
bool LinkedStack<T>::empty() const{
    return length == 0;
}

template <class T>
T LinkedStack<T>::peek() const{
    return head->item;
}
/*==========================MODIFIER_METHODS===========================*/
template <class T>
void LinkedStack<T>::push(const T & new_item) {
    Node *temp = new Node;
    temp->item = new_item;
    temp->prev = head;

    head = temp;
    length++;
}

template <class T>
void LinkedStack<T>::clear() {
    head = nullptr;
    length = 0;
}

template <class T>
T LinkedStack<T>::pop(){
    if (length == 0)
        std::cerr << "/* You can't pop from an *EMPTY* LinkedStack */" << std::endl;
    T it = head->item;
    head = head->prev;
    --length;
    return it;
}
/*========================OPERATORS_OVERLOADING========================*/
template <class T>
std::ostream & operator<<(std::ostream & os, LinkedStack<T> & ll){
    os << "length: " << ll.size();
    return os;
}

template <class T>
std::istream & operator>>(std::istream & is, LinkedStack<T> & ll){
    T new_item;
    is >> new_item;
    ll.push(new_item);
    return is;
}
/*=====================================================================*/

#endif /*_LINKED_STACK_*/
