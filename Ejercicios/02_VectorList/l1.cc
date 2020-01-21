// constructing lists
#include <iostream>
#include <list>

int main()
{
    // constructors used in the same order as described above:
    std::list<int> first;                   // empty list of ints
    std::list<int> second(4, 100);          // four ints with value 100
    std::list<int> third(second);           // a copy of third
    
    // the iterator constructor can also be used to construct from arrays:
    int myints[] = {16, 2, 77, 29};
    std::list<int> fourth(myints, myints + sizeof(myints) / sizeof(int));
    
    std::cout << "The back of fourth is: " << fourth.back() << '\n';
    std::cout << "The front of fourth is: " << fourth.front() << '\n';
    
    return 0;
}
