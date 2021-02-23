// C++ code to demonstrate the working of
// iterator, begin() and end()

#include<iostream>
#include<iterator> // for iterators
#include<vector> // for vectors

using namespace std;

int main()
{
	vector<int> ar = { 1, 2, 3, 4, 5 };

	// Declaring iterator to a vector
	vector<int>::iterator ptr;

	// Displaying vector elements using begin() and end()
	cout << "The vector elements are : ";
	for (ptr = ar.begin(); ptr < ar.end(); ptr++)
		cout << *ptr << " ";



	// >> Advance
	// Declaring iterator to a vector
	vector<int>::iterator ptr1 = ar.begin();

	// Using advance() to increment iterator position
	// points to 4
	advance(ptr, 3);

	// Displaying iterator position
	cout << "\nThe position of iterator after advancing is : ";
	cout << *ptr1 << " ";



	// >> Next Prev
	vector<int>::iterator ftr = ar.end();

	// Using next() to return new iterator
	// points to 4
	auto it = next(ptr1, 3);

	// Using prev() to return new iterator
	// points to 3
	auto it1 = prev(ftr, 3);

	// Displaying iterator position
	cout << "The position of new iterator using next() is : ";
	cout << *it << " ";
	cout << endl;

	// Displaying iterator position
	cout << "The position of new iterator using prev()  is : ";
	cout << *it1 << " ";
	cout << endl;



	// << Inserter
	vector<int> ar2 = { 1, 2, 3, 4, 5 };
	vector<int> ar3 = {10, 20, 30};

	// Declaring iterator to a vector
	vector<int>::iterator ptr3 = ar2.begin();

	// Using advance to set position
	advance(ptr3, 3);

	// copying 1 vector elements in other using inserter()
	// inserts ar1 after 3rd position in ar
	copy(ar3.begin(), ar3.end(), inserter(ar2, ptr3));

	// Displaying new vector elements
	cout << "The new vector after inserting elements is : ";
	for (int &x : ar2)
		cout << x << " ";

	return 0;
}