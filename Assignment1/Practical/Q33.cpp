// Write a C++ program to count the number of digits in a given number using a while loop.
#include<iostream>

int main(){
	int n , count = 0;
    cout<<"Enter the number n :- ";
    cin>>n;
    if(n == 0){
        count = 1;
    }
    while(n > 0){
        n /= 10;
        count++;
    }

    cout<<count;
	return 0;
}