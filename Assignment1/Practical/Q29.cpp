//	Write a C++ program to find the factorial of a given number using a for loop.
#include<iostream>

using namespace std;

int main(){
	int n;
    cout<<"Enter the number n :- ";
    cin>>n;
    again:
    if( n < 0){
        cout<<"You Enter a negative Number plz Enter a postive number "<<endl;
        goto again;
    }

    long long fac = 1  ;
    for(int i =1 ; i<= n ; i++ ){
        fac *= i;
    }

    cout<<n<<"! = "<<fac<<endl;
	return 0;
}