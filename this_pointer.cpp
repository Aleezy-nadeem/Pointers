#include<iostream>
using namespace std;

class Temp{
	private:
		int a;
		int b;
	public:
		Temp(int a, int b){
			this->a = a;
			this->b = b;	
//			a = a;
//			b = b;
		}
		
		void printAdressOfObject(){
			cout<<"the address of the object whose this function is member of is: "<<this<<endl;
			cout<<this->a<<endl;
		}
};
int main(){
  Temp t(1,2), t1(4,3);
  t.printAdressOfObject();	
  t1.printAdressOfObject();
  cout<<"address of t is: "<<&t<<endl<<"adress of t1 is: "<<&t1;
}
