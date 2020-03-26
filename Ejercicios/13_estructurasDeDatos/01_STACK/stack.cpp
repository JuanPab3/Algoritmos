#ifdef _STACK_HPP_

/*======================CONSTRUCTORS_&_DESTRUCTOR======================*/

template <class T> /*Object constructor*/
Stack<T>::Stack(){
    std::cout << "Constructor del stack\n";
    length = 0;
    capacity = INIT_CAP;
    data = new T[capacity];
}

template <class T> /*Copy constructor*/
Stack<T>::Stack(const Stack &other){
    std::cout << "Constructor copia del stack\n";
    length = other.length;
    capacity = other.capacity;
    data = other.data;
}

template <class T> /*Object destructor*/
Stack<T>::~Stack(){
    std::cout << "Destructor del stack\n";
    delete[] data;
    capacity = 0;
    data = nullptr;
}

/*==========================ACCESSOR_METHODS==========================*/
template <class T> /*Returns a bool, meaning that the Stack is empty or not*/
bool Stack<T>::empty() const{
    return length == 0;
}

template <class T> /*Return the size of the stack*/
unsigned Stack<T>::size() const{
    return length;
}

template <class T>/*Returns the actual capacity of the stack*/
unsigned Stack<T>::max_items() const{
    return capacity;
}

template <class T> /*Returns the last item added to the stack*/
T Stack<T>::top() const{
    return data[length-1];
}

/*==========================MODIFIER_METHODS==========================*/

template <class T> /*Removes the last item added to the stack*/
void Stack<T>::pop(){
    length--;
}

template <class T> /*It doubles de capacity of the stack*/
void Stack<T>::extend_capacity(){
    T *oldData = data;
    capacity *= 2;
    data = new T[capacity];
    for (unsigned i = 0; i < length; i++)
        data[i] = oldData[i];
    delete oldData;
}

template <class T> /*It adds a new item to the Stack*/
void Stack<T>::push(const T & ch) {
    if (length == capacity) extend_capacity();
    data[length] = ch;
    length++;
}

/*==============================OPERATORS==============================*/

template <typename T> /*stream insertion operator*/
std::ostream & operator<<(std::ostream & os, const Stack<T> & stk) {
    os << "Stack size: " << stk.size() << "\n";
    os << "Stack capacity: " << stk.max_items() << "\n";
    os << "Stack empty: " << stk.empty() << "\n";
    os << "Stack top: " << stk.top() << "\n";

    // para imprimir el contenido de stk, crear una copia con el
    // constructor copia (TAREA) y desocupar la copia

    return os;
}

template <typename T> /*stream extraction operator*/
std::istream & operator>>(std::istream & is, Stack<T> & stk){
    T elem;
    is >> elem;
    stk.push(elem);
    return is;
}
/*=====================================================================*/

#endif /*_STACK_HPP_*/
