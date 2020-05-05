#include <iostream>
#include <string>
#include <random>
#include "bst.hpp"

int main(void) {
    // integer random number generation
    std::string msg;
    std::random_device rd;
    std::default_random_engine generator{rd()};
    std::uniform_int_distribution<int> distribution(-9, 9);

    // binary search tree declaration
    bst<int> test;

    // fill out tree
    for (int i = 0; i < 9; i++) {
        int number = distribution(generator);
        std::cout << "number " << number << std::endl;
        test.insert(number);
    }

    // print tree using inorder traversal
    test.display();

    // checking whether an int is in tree
    for (int i = -9; i <= 9; i++) {
        msg = test.find(i) ? "true" : "false";
        std::cout << "find: " << i << " " << msg << std::endl;
    }

    bst<int> test2;
    for (int i = 0; i < 30; i++) {
        test2.insert(i);
    }


    std::cout << "Max: " << test2.max() << '\n';
    std::cout << "Min: " << test2.min() << '\n';

    return 0;
}
