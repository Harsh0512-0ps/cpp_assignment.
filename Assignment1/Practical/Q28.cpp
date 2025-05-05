//	Write a C++ program to print the multiplication table of a given number using a do-while loop.
#include<iostream>

using namespace std;

int main(){
 	int n;
    cout<<"Enter the number n :-  ";
    cin>>n;
    int i = 1;
    do{
        cout<<n<<" X "<<i<<" = "<<(i*n)<<endl;
        i++;
    }while(i <= 10);
	return 0;
}