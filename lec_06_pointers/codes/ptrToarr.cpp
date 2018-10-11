<<<<<<< HEAD
#include <iostream>
#include <typeinfo>
using namespace std;
int main(){
	int arr[2][5] = {
		{1,2,3,4},
		{6,7,8,9}
	};

	int (*ptr2D)[5];	//ptr to an array of 5 integers
	int ax[5] ={};
	ptr2D = &ax;
	cout << ptr2D[0][0];


	// cout <<typeid(ptr2D[1]).name() << endl;
	// int *ptrRow = arr[0];
	// int *ptrEle = &arr[0][0];
	
	return 0;
}
=======
#include <iostream>
#include <typeinfo>
using namespace std;
int main(){
	int arr[2][5] = {
		{1,2,3,4},
		{6,7,8,9}
	};

	int (*ptr2D)[5];	//ptr to an array of 5 integers
	int ax[5] ={};
	ptr2D = &ax;
	cout << ptr2D[0][0];


	// cout <<typeid(ptr2D[1]).name() << endl;
	// int *ptrRow = arr[0];
	// int *ptrEle = &arr[0][0];
	
	return 0;
}
>>>>>>> 38bc4f1fe7d83d7f0a1af987c5fb0ed04d41e761
	