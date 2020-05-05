#ifdef bst_hpp

/*============================PRIVATE_METHODS============================*/
template <class T>
typename bst<T>::bstNode * bst<T>::find (bstNode * bush, T key) {
    if ( bush == nullptr) return nullptr;
    if ( key == bush->key) return bush;

    if (key < bush->key) {
        return find(bush->left,key);
    } else {
        return find(bush->right,key);
    }
}

template <class T>
void bst<T>::display (bstNode * bush, std::ostream & out) {
    if (bush != nullptr) {
        display(bush->left, out);
        out << "key: " << bush->key << std::endl;
        display(bush->right, out);
    }
}

template <class T>
void bst<T>::insert (bstNode * & bush, T key) {
    if (bush == nullptr) {
        count ++;
        bush = new bstNode;
        bush->key = key;
        bush->right = nullptr;
        bush->left = nullptr;
    } else {
        if (key != bush->key) {
            if (key < bush->key) {
                insert(bush->left,key);
            } else {
                insert(bush->right,key);
            }
        }
    }
}

template <class T>
typename bst<T>::bstNode * bst<T>::min (bstNode * bush) {
    if (bush->left == nullptr) {
        return bush;
    } else {
        return min(bush->left);
    }
}

template <class T>
typename bst<T>::bstNode * bst<T>::max (bstNode * bush) {
    if (bush->right == nullptr) {
        return bush;
    } else {
        return max(bush->right);
    }
}
/*======================CONSTRUCTORS_&_DESTRUCTOR======================*/
template <class T>
bst<T>::bst () {
    tree = nullptr;
    count = 0;
}

template <class T>
bst<T>::~bst () {
//    clear();
}
/*==========================ACCESSOR_METHODS============================*/
template <class T>
void bst<T>::display (std::ostream & out) {
    out << "Tree " << tree << " nodes: " << count << std::endl;
    display(tree, out);
}

template <class T>
bool bst<T>::find (T key){
    if (find(tree,key) != nullptr) {
        return true;
    } else {
        return false;
    }
}

template <class T>
bool bst<T>::empty (empty){
    return count == 0 && tree == nullptr;
}

template <class T>
T bst<T>::min (void){
     T val = min(tree)->key;
    return  val;
}

template <class T>
T bst<T>::max (void){
     T val = max(tree)->key;
    return  val;
}
/*==========================MODIFIER_METHODS===========================*/
template <class T>
void bst<T>::insert (T key) {
    insert(tree,key);
}
/*=====================================================================*/












// implementen aca insert y find (publico y privado)


#endif /* bst_hpp */
