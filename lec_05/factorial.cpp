<<<<<<< HEAD
#include <iostream>
using namespace std;
int factorial(int n);

int main(){

	int num,facto;

	cin>>num;

	facto=factorial(num);

	cout<<facto<<endl;

}

int factorial(int n){

	int i,ans=1;
	for(i=1;i<=n;++i){

	ans=i*ans;
	}

	return ans;

=======
#include <iostream>
using namespace std;
int factorial(int n);

int main(){

	int num,facto;

	cin>>num;

	facto=factorial(num);

	cout<<facto<<endl;

}

int factorial(int n){

	int i,ans=1;
	for(i=1;i<=n;++i){

	ans=i*ans;
	}

	return ans;

>>>>>>> 4609b6d136ab6f3316e0da619af8bd38d5a335bc
}