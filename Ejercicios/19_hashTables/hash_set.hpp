#ifndef _HASH_SET_HPP_
#define _HASH_SET_HPP_


#include <list>
#include <vector>
#include <iostream>


const unsigned int INIT_DIM = 23;

template <typename T>
unsigned hashcode(const T &item);


template <typename T>
class hash_set {
private:
    std::vector<std::list<T>> table;
    unsigned count;

public:
    hash_set(int dim = INIT_DIM);
    ~hash_set(){}

    unsigned size() const;
    unsigned capacity() const;

    bool find(const T &item) const;
    void insert(const T &item);
    void erase(const T &item);
};


template <typename T>
hash_set<T>::hash_set(int dim) {
    table = std::vector<std::list<T>>(dim, std::list<T>());
    count = 0;
}


template <typename T>
unsigned hash_set<T>::capacity() const {
    return table.size();
}


template <typename T>
unsigned hash_set<T>::size() const {
    return count;
}

template <typename T>
bool hash_set<T>::find(const T &item) const {
    unsigned hash = hashcode(item),
             indx = hash%capacity();
    for (T elem : table[indx]){
        if (elem == item) return true;
    }
    return false;
}

template <typename T>
void hash_set<T>::insert(const T &item) {
    if (find(item) == false) {
        unsigned hash = hashcode(item);
        unsigned indx = hash%capacity();
        table[indx].push_front(item);
        count++;
    }
}

template <typename T>
void hash_set<T>::erase(const T &item) {
    if (find(item) == false) {
        std::cerr << "*/* THE VALUE IS NOT ON THE SET */*" << '\n';
    } else {
        unsigned hash = hashcode(item);
        unsigned indx = hash%capacity();
        for (T elem : table[indx]){
            if (elem == item){
                table[indx].erase(elem);
                count--;
            }
        }
    }
}


#endif // _HASH_SET_HPP_
