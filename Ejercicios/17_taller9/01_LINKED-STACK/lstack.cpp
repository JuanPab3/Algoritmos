#ifdef _LINKED_STACK_

#include <iostream>

/*======================CONSTRUCTORS_&_DESTRUCTOR======================*/
template <class T>
LinkedStack<T>::LinkedStack() {
    head = nullptr;
    length = 0;
}

template <class T>
LinkedStack<T>::LinkedStack(const LinkedStack<T> & src){
    if (src.head == nullptr) {
        head = nullptr;
        length = 0;
    } else {
        Node *iter = src.head;
        Node *new_head = new Node;
        Node *curr = head;
        length = 0;

        while (iter != nullptr) {
            curr->item = iter->item;
            lengt h++;
            curr->prev = new Node;
            curr->prev->prev = nullptr;
            curr->prev = curr->prev->prev;
            std:: cout << size() << '\n';
            std:: cout << iter->item << '\n';
            iter = iter->prev;
        }
        // length = src.length;
        head = new_head;
        // std:: cout << "COPY IS WORKING" << '\n';
    }
    // set_length(src.length);
}

template <class T>
LinkedStack<T>::~LinkedStack() {
    // std::cout << "DESTRUCT" << std::endl;
    head = nullptr;
    length = 0;
}
/*==========================ACCESSOR_METHODS============================*/
template <class T>
int LinkedStack<T>::size() const {
    return length;
}

template <class T>
bool LinkedStack<T>::empty() const {
    // std::cout<<"EMPTY IS WORKING\n";
    return length == 0;
}

template <class T>
T LinkedStack<T>::peek() const {
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
void LinkedStack<T>::reverse() {
    LinkedStack<T> temp;
    while (size() != 0) {
        T a = this->pop();
        temp.push(a);
    }
    while (temp.size() != 0) {
        T b = temp.pop();
        this->push(b);
    }
}

template <class T>
void LinkedStack<T>::clear() {
    head = nullptr;
    length = 0;
}

template <class T>
T LinkedStack<T>::pop(){

    if (size() == 0)
        std::cerr << "/* You can't pop from an *EMPTY* LinkedStack */" << std::endl;
    std::cout<<"POP IS WORKING\n";
    std::cout<<"HEAD: " << /*typeid(head->item).name()*/head->item <<"\n";
    T it = head->item;
    head = head->prev;
    --length;
    return it;
}
/*========================OPERATORS_OVERLOADING========================*/
template <class T>
void LinkedStack<T>::operator=(LinkedStack <T> & src){
    if (src.head == nullptr) {
        head = nullptr;
        length = 0;
    } else {
        Node *iter = src.head;
        // Node *new_head = new Node;
        Node *curr = head;
        length = 0;

        while (iter != nullptr) {
            curr->item = iter->item;
            length++;
            curr->prev = new Node;
            curr->prev->prev = nullptr;
            if (iter->prev != nullptr) {
                curr->prev = curr->prev->prev;
            }
            // std:: cout << size() << '\n';
            // std:: cout << curr->item << '\n';
            iter = iter->prev;
        }
        length = src.length;
        // head = new_head;
        // std:: cout << "COPY IS WORKING" << '\n';
    }
    // set_length(src.length);
}

template <class T>
std::ostream & operator<<(std::ostream & os, LinkedStack<T> & ll){
    // std::cout << "COUT IS WORRKING\n";
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
