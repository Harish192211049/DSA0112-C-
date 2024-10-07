#include<iostream>
using namespace std;
int main(){
	int n=6,fact=0;
	for(int i=1;i<n;i++){
		if(n%i==0){
		fact=fact*i;
	}
	}
	if(fact==n)
	cout<<"perfect num";
	else
	cout<<"Not a perfect number";
}
