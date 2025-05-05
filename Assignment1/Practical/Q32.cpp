//	Write a C++ program to print the Fibonacci series up to a given number of terms using a for loop.
#include<iostream>

using namespace std;

int main(){
	int n ;
	 // 0 1 1 2 3 5 8 13 - fib
    cout<<"Enter the Number n :- ";
    cin>>n;
    int a = 0 , b = 1;
   
    for(int i = 0 ; i<n ; i++){
        cout<<a<<" ";
        int temp = a;
        a = a + b ;
        b = temp ;
    }
	return 0;
}