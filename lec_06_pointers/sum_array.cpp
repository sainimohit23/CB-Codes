<<<<<<< HEAD
#include <iostream>
using namespace std;
int sumarr(int *arr,int sze){
	int sum=0;

	for(int i=0;i<sze;++i){
		sum+=*(arr+i);
		//sum+=*a;
		//a++;
	}

	cout<<sum;
}


int main(){
	int n,sum;
	cin>>n;
	int arr[n];

	for(int i=0;i<n;++i){
		cin>>arr[i];
	}

	sumarr(arr,n);
=======
#include <iostream>
using namespace std;
int sumarr(int *arr,int sze){
	int sum=0;

	for(int i=0;i<sze;++i){
		sum+=*(arr+i);
		//sum+=*a;
		//a++;
	}

	cout<<sum;
}


int main(){
	int n,sum;
	cin>>n;
	int arr[n];

	for(int i=0;i<n;++i){
		cin>>arr[i];
	}

	sumarr(arr,n);
>>>>>>> 38bc4f1fe7d83d7f0a1af987c5fb0ed04d41e761
}