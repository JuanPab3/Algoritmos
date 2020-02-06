#include<iostream>
#include<string>
#include<vector>

using namespace std;

void two_smallest ( vector < string > & arr );

int main() {

  vector < string > s = {"012345","012","0","0123456789","01","01234","01234567","0123","0123456","012345678"};
  two_smallest(s);

  return 0;
}

void two_smallest ( vector < string > & arr ){
  string small,smallest;
  if (arr.size() == 0) {                                                        /*Case 1: The vector is empty.*/
    cout << "¡Your vector is empty!" << endl;
  } else if (arr.size() == 1) {                                                 /*Case 2: There's only one item on the vector.*/
    cout << "The smallest string is: " << smallest << endl;
    cout << "There is only one string in these vector :D" << small << endl;
  } else {                                                                      /*Case 3: The vector have 2 or more items.*/
    if ( arr[0].size() < arr[1].size()){                                          /*Choosing the smallest between the first two items.*/
      small = arr[1];
      smallest = arr[0];
    } else if ( arr[0].size() > arr[1].size()){                                   /*Choosing the smallest between the first two items.*/
      small = arr[0];
      smallest = arr[1];
    }

    for (size_t i = 2; i < arr.size();++i){
      if ( arr[i].size() >= small.size()){                                        /*If the new item is longer or has the same lenght as the second smallest item.*/
        continue;
      } else if (arr[i].size() < smallest.size()) {                               /*If the new item is smaller than the actual smallest one.*/
        small = smallest;
        smallest = arr[i];
      } else {                                                                    /*IF the new item is only smaller than the second smallest item.*/
        small = arr[i];
      }
    }
    cout << "The smallest string is: " << smallest << endl;
    cout << "The second smallest string is: " << small << endl;
  }

}
