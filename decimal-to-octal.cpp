#include<iostream>
using namespace std;
int main()
{
	// Declaring variables
	int a,b,x;
	char c;
	int i=0;
	int temp;
	// Taking decimal as input
	cout<<"Enter a number: "<<endl;
	cin>>a;
	// loop til decimal is greater than 0
	while(a!=0){
		// Taking mod to get remainder
		b = a%8;
		// Converting the previous value to hex
		x = b<10?b+48:b+55;
		// dividing to decrease the value of a
		a = a /8;
		// adding the generated hex value to a temporary variable and multiplying by 100 to make room for next value
		temp+=x;
		temp*=100;
	}
	// dividing by 100 to get rid of last 2 0's
	temp/=100;
	// loop to print the reult in characters
	while(temp>0){
		c = temp%100;
		temp = temp/100;
		cout << c;
	}
}