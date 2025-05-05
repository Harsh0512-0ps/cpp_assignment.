// Write a C++ program to print the sum of all even numbers between 1 and 100 using a for loop.
#include<iostream>

using namespace std;

int main(){
	int sum = 0;
    for(int i = 1 ; i<= 100 ; i++){
        if(i % 2== 0){
            sum += i;
        }
    }
    cout<<sum;
	return 0;
}