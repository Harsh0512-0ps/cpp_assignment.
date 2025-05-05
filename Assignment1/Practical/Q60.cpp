//	Write a C++ program to generate the Fibonacci series up to n terms using a for loop.
#include <iostream>

using namespace std;

int main(){
	int n ;
    cout<<"Enter n :- ";
    cin>>n;
    int a = 0 , b = 1;
    for(int i= 0 ; i<n ; i++){
        cout<<a<<" ";
        int temp = a;
        a = a+b;
        b = temp;
    }
	return 0;
}