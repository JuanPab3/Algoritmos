// constructing vectors
#include <iostream>
#include <vector>

int main()
{
    // constructors used in the same order as described above:
    std::vector<int> first;                   // empty vector of ints
    std::vector<int> second(4, 100);          // four ints with value 100
    std::vector<int> third(second);           // a copy of third
    
    // the iterator constructor can also be used to construct from arrays:
    int myints[] = {16, 2, 77, 29};
    std::vector<int> fourth(myints, myints + sizeof(myints) / sizeof(int));
    
    std::cout << "The contents of fourth are:";
    for (unsigned int i = 0; i < fourth.size(); ++i)
        std::cout << ' ' << fourth[i];
    std::cout << '\n';
    
    return 0;
}
