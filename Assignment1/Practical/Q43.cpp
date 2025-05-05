//	Write a C++ program to print the first N even numbers using a for loop.
#include<iostream>

using namespace std;

int main(){
	int n;
    cout<<"Enter the number n :- ";
    cin>>n;

    for(int i =1 ; i<= n  ; i++){
        if(i % 2== 0){
            cout<<i<<"  ";
        }
    }
    return 0;
}