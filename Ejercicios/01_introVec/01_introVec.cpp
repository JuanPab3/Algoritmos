#include <vector>
#include <iostream>
// using std::endl;
using namespace std;

void printVectInt(const vector<int> v);

int main() {
	vector<int> vint;
	vint.push_back(-10);
	vint.push_back(-10);
	vint.push_back(-10);
	vint.push_back(-10);
	vint.push_back(-10);
	
	printVectInt(vint);
	return 0;
}

void printVectInt(const vector<int> v){
	cout << "{ ";
	for( int elem : v){
		cout << elem << " ";
	}
	cout << "}" << endl;
}
