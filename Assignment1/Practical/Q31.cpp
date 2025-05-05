//	Write a C++ program to check if a given number is a prime number using a for loop.
#include<iostream>

using namespace std;

int main(){
	int n ; 
    bool isPrime  = true;
    cout<<"Enter the number n :- ";
    cin>>n;

    for(int i = 2 ; i <= (n/2) ; i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime){
        cout<<"Prime";
    }else{
        cout<<"NOT prime";
    }
	return 0;
}