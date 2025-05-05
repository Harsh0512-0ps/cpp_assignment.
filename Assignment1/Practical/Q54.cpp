//	Write a C++ program to print all prime numbers between two given numbers using a for loop.
#include<iostream>

using namespace std;

int main(){
	 int min , max ;
    cout<<"Enter the min range : ";
    cin>>min;
    cout<<"Enter the max range : ";
    cin>>max;
    for(int i = min ; i<= max ; i++){
        bool isPrime = true;
        for(int j = 2 ; j <= (i/2) ; j++){
            if(i == 1){
                isPrime = false;
                break;
            }
            if(i%j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cout<<i<<endl;
        }
    }
	return 0;
}