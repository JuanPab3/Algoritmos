#ifdef _LINKED_LIST_

#include <iostream>

/*======================CONSTRUCTORS_&_DESTRUCTOR======================*/
template <class T>
LinkedList<T>::LinkedList() {
    head = nullptr;
    length = 0;
}
/*==========================ACCESSOR_METHODS============================*/
template <class T>
unsigned LinkedList<T>::size() const{
    return length;
}

template <class T>
T LinkedList<T>::front() const{
    return head->item;
}

template <class T>
T LinkedList<T>::back() const{
    Node *last = head;
    for (unsigned i = 0; i < length - 1; i++) {
        last = last->next;
    }
    return last->item;

}
/*==========================MODIFIER_METHODS===========================*/
template <class T>
void LinkedList<T>::push_front(const T & new_item) {
    if (length == 0) {
        Node *tmp = new Node;
        tmp->item = new_item;
        tmp->next = nullptr;

        head = tmp;
        length++;
    } else {
        Node *tmp = new Node;
        head = tmp;
        head->item = new_item;
        head->next = tmp;

        length++;
    }
}

template <class T>
void LinkedList<T>::push_back(const T & new_item) {
    if (length == 0) {
        Node *tmp = new Node;
        tmp->item = new_item;
        tmp->next = nullptr;

        head = tmp;
        length++;
    } else {
        Node *last = head;
        for (unsigned i = 0; i < length - 1; i++) {
            last = last->next;
        }
        Node *tmp = new Node;
        tmp->item = new_item;
        tmp->next = nullptr;

        last->next = tmp;
        length++;
    }
}
/*========================OPERATORS_OVERLOADING========================*/
template <class T>
std::ostream & operator<<(std::ostream & os, LinkedList<T> & ll){
    os << "length: " << ll.size();
    return os;
}

template <class T>
std::istream & operator>>(std::istream & is, LinkedList<T> & ll){
    T new_item;
    is >> new_item;
    ll.push_back(new_item);
    return is;
}


/*=====================================================================*/

#endif /*_LINKED_LIST_*/
