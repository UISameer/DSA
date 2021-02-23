#include<bits/stdc++.h>
using namespace std;

inline int cube(int s) 
{ 
    return s*s*s; 
} 

int main() {

	int x = 10;
	cout << &x << endl;

	x = 20;
	cout << &x << endl;
	cout << x << endl;

	printf("%d\n", x);

	int arr[3] =  {11,22,33};

	printf("Content of array %p, val = %d\n", arr, *arr);
	printf("Content of array+1 %p, val = %d\n", arr+1, *(arr+1));
	printf("Content of array+2 %p, val = %d\n", arr+2, *(arr+2));

    cout << "The cube of 3 is: " << cube(3) << "\n"; 

    int *d = new int(25);
    cout << "The value of d is: " << *d << "\n"; 


	return 0;
}