<<<<<<< HEAD
#include <iostream>
using namespace std;

bool comp(char w1[], char w2[]){
	return w1[0] > w2[0];
}

bool isBigger(char word1[], char word2[],bool (*func)(char w1[], char w2[])){
	//function ptr
	return func(word1, word2);
}


int main(){
	char name1[] = "ABC";
	char name2[] = "CDE";
	cout << isBigger(name1, name2, comp);
	return 0;
=======
#include <iostream>
using namespace std;

bool comp(char w1[], char w2[]){
	return w1[0] > w2[0];
}

bool isBigger(char word1[], char word2[],bool (*func)(char w1[], char w2[])){
	//function ptr
	return func(word1, word2);
}


int main(){
	char name1[] = "ABC";
	char name2[] = "CDE";
	cout << isBigger(name1, name2, comp);
	return 0;
>>>>>>> 38bc4f1fe7d83d7f0a1af987c5fb0ed04d41e761
}