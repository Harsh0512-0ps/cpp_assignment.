//	Write a C++ program to find the sum of all even and odd numbers between 1 and 100 using separate for loops.
#include<iostream>

using namespace std;

int main(){
	int evenSum = 0 ,oddSum = 0;
    for(int i = 1 ; i<=100 ; i++){
        if(i%2 == 0){
            evenSum += i;
        }
    }

    for(int i = 1 ; i<=100 ; i++){
        if(i%2 != 0){
            oddSum += i;
        }
    }

    cout<<"Even Sum = "<<evenSum<<endl
        <<"Odd Sum = "<<oddSum<<endl;

     return 0;
}	