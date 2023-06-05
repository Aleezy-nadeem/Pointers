#include<iostream>
using namespace std;



int main(){
	
	int a=10,b = 20,c;
	
	int *ptr_a = &a;
	ptr_a = &b;
//	int *ptr_b = &b;
	//cout<<"value of a  is: "<<*ptr_a;
	cout<<"value of b is: "<<*(ptr_a + 2);
	
//	cout<<"address of a: "<<&a<<endl;
//	cout<<"address in ptr: "<<*ptr_a;
//	*ptr_a = 20;
//	cout<<"address of a: "<<a<<endl;
	return 0;
}
