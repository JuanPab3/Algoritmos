#ifndef bst_hpp
#define bst_hpp

#include <iostream>

template <class T>
class bst {

private:
    /*Class  items properties*/
    struct bstNode {
        T key;
        bstNode *left;
        bstNode *right;
    };

    /*Class properties*/
    size_t count;  // number of nodes: internal and leaves
    bstNode *tree; // root of the binary search tree

    /*Private Methods*/
    void display (bstNode * bush, std::ostream & = std::cout);
    bstNode * find (bstNode * bush, T key);
    void insert (bstNode * & bush, T key);
    bstNode * min (bstNode * bush);
    bstNode * max (bstNode * bush);


public:
    /*Constructors & Destructor*/
    bst();
    ~bst();

    /*Accessor Methods*/
    void display (std::ostream & = std::cout);
    bool find (T key);
    bool empty (void);
    T min (void);
    T max (void);

    /*Modifier Methods*/
    void insert (T key);
    void remove (void);

};

#include "bst.cpp"

#endif /* bst_hpp */
