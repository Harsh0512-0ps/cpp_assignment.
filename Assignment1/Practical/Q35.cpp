// Write a C++ program to find the largest number in an array using a for loop.
#include<iostream>

using namespace std;

int main(){
	int arr[] = {123 , 43 ,132 ,21334 ,112000 ,2 , 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max =  arr[0];
    for(int i = 0 ; i<size ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout<<max<<endl;
    return 0;
}