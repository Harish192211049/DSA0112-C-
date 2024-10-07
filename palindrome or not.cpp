#include<iostream>
using namespace std;
int main(){
	int rev=0,rem,n=12332;
	int ori=n;
	while(n!=0){
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	if(rev==ori)
	cout<<"Palindrome";
	else
	cout<<"Not a Palindrome";
	return 0;
}
