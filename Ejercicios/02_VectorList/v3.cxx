// vector::operator[]
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> myvector(10); // 10 zero-initialized elements
    unsigned int sz = myvector.size();
    
    // assign some values:
    for (unsigned int i = 0; i < sz; i++)
        myvector[i] = i;
    
    // reverse vector using operator[]:
    for (unsigned int i = 0; i < sz/2; i++) {
        int temp;
        temp = myvector[sz-1-i];
        myvector[sz-1-i] = myvector[i];
        myvector[i] = temp;
    }
    
    std::cout << "myvector contains:";
    for (unsigned int i = 0; i < sz; i++)
        std::cout << ' ' << myvector[i];
    std::cout << '\n';
    
    return 0;
}
