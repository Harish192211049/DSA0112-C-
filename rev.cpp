#include<iostream>
using namespace std;
int main(){
	int rev=0,rem,n=123;
	while(n!=0){
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	cout<<rev;
	
}
