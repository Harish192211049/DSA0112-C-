#include<iostream>
using namespace std;
class Add{
	private:
		int a,b,sum;
		public:
			void input(){
			cout<<"Enter the  value of a,b:";
			cin>>a>>b;
			}
			void calculate(){
				sum=a+b;
			}
			void output(){
				cout<<sum;
			}
};
int main(){
	Add add;
	add.input();
	add.calculate();
	add.output();
	return 0;
}
