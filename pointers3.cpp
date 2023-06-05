#include<iostream>
using namespace std;



int main(){
	
	int a = 10;
	int b = 5;
	int *ptr = &a;

	cout<<"value of ptr: "<<*ptr<<endl;
	
	*ptr = 20;
	
	cout<<"value of a is: "<<a<<endl;
	ptr = &b;
	cout<<"value of ptr is: "<<*ptr;
	
}
