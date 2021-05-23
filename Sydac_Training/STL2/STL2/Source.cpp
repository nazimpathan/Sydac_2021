
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	cout << "size : " << v.size() << endl; 

	v.push_back(11); 
	v.push_back(22); 
	v.push_back(33); 
	v.push_back(44); 
	cout << "size : " << v.size() << endl; 
	cout << "v[2] = " << v[2] << endl; // random accessed using index operator

	// traversing vector like array using index
	for (unsigned i = 0; i < v.size(); i++)
		cout << v[i] << endl;

	// traversing vector using iterator.
	vector<int>::iterator itr;
	itr = v.begin();
	while (itr != v.end()) {
		cout << *itr << ", ";
		itr++;
	}
	cout << endl;

	return 0;
}



