#include <iostream>
#include <string>
#include <stack>

void inverseString(std::string & w);

 int main() {

   std::string word;
   std::cout << "Enter a word: ";
   getline(std::cin,word);
   inverseString(word);




   return 0;
 }

 void inverseString(std::string & w){
   std::stack<char> s;
   for (char elem:w){
     s.push(elem);
   }
   while (!(s.empty())) {
     std::cout << s.top();
     s.pop();
   }
   std::cout << std::endl;

 }
