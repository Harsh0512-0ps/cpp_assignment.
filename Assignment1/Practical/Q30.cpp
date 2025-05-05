//	Write a C++ program to reverse a given number using a while loop.
#include<iostream>

using namespace std;
int main(){
	int n;
    cout<<"Enter the number n :- ";
    cin>>n;
    int rem = 0 , digit = 0;
    while(n > 0){
        rem = n % 10;
        digit = digit*10 + rem ;
        n /= 10;
    }   
    cout<<digit;
	return 0;
}