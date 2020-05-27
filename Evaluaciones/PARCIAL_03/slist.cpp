//
//  slist.cpp
//  Created by Julian Rincon on 2020-05-05.
//

#ifdef slist_hpp


// IMPLEMENTAR METODOS ACA ABAJO

template <typename T>
T List<T>::back() const{
    if (count == 0)
        std::cerr << "/* UPPPS!: Al parecer tu tren no tiene vagones :( */" << '\n';

    Node *curr = head;
    while (curr->next != nullptr) {
        curr = curr->next;
    }
    // std::cout << "BACK IS WORKING\n";
    return curr->data;
}

template <typename T>
int List<T>::range_counting(T begin, T end) const{
    if (begin > end) return -1;
    if (count == 0) return 0;

    Node *curr = head;
    int num = 0;

    while (curr->next != nullptr) {
        curr = curr->next;
        if (curr->data >= begin and curr->data <= end) num++;
    }
    return num;
}

// NO PASARSE DE ESTE COMENTARIO


template <typename T>
List<T>::List() {
    count = 0;
    head = nullptr;
}


template <typename T>
List<T>::~List() {
    clear();
    head = nullptr;
}


template <typename T>
bool List<T>::empty() const {
    return count == 0;
}


template <typename T>
unsigned List<T>::size() const {
    return count;
}


template <typename T>
void List<T>::display() const {
    Node *curr = head;

    std::cout << "HEAD(" << size() << ") -> ";
    while (curr != nullptr) {
        std::cout << curr->data << " -> ";
        curr = curr->next;
    }
    std::cout << "nullptr\n";
}


template <typename T>
void List<T>::push_front(T item) {
    Node *node = new Node;
    node->data = item;

    if (head == nullptr)
        node->next = nullptr;
    else
        node->next = head;

    head = node;
    count++;
}


template <typename T>
T List<T>::front() const {
    if (head == nullptr) {
        std::cout << "ERROR: peeking on empty List\n";
        std::exit(EXIT_FAILURE);
    }
    return head->data;
}


template <typename T>
void List<T>::pop_front() {
    if (count == 1) {
        delete head;
        head = nullptr;
    } else {
        Node *node = head->next;
        delete head;
        head = node;
    }
    count--;
}


template <typename T>
void List<T>::clear() {
    while (!empty()) {
        pop_front();
    }
}


#endif /* slist_hpp */
