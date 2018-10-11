#include <iostream>
using namespace std;

int ans[100000],cnt=0;

void painter(int arr[],int n,be){

	int sum = 0;
	for(int i=0;i<n;++i){
		int x;

		x = painter(arr,n,i+1);
		sum = sum + arr[i];
		ans[cnt] = max(sum,x);
		++cnt;
	}
}

int main(){
	int n;
	cin>>n;
	arr[n];

	for(int i=0;i<n;++i){
		cin>>arr[i];
	}

	int k;
	cin>>k;

	painter(arr,n,0);
}