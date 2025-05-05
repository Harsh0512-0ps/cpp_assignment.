//	Write a C++ program to find the sum of all elements in an array using a for loop
#include<iostream>

using namespace std;

int main(){
	int arr[]  = { 1 , 2, 3 , 4 ,5 , 6 ,7 ,8 ,9 , 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for(int i =0 ; i<size ; i++){
        sum += arr[i];
    }
    cout<<sum;
	return 0;
}