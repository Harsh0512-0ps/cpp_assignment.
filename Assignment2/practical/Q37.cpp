// Create an inline function that returns the cube of a number.
#include<iostream>

inline cube(int n){
	return(n*n*n);
}

int main(){
	int n ;
	std::cout<<"Enter the Number : ";
	std::cin>>n;
	std::cout<<cube(n);
	return 0;
}