//	Write a C++ program to convert a binary number to a decimal number using a while loop.
#include <iostream>

using namespace std;

int main(){
	int binaryNumber; int power = 1 , ans = 0;
    cout<<"Enter the Binary Number :- ";
    cin>>binaryNumber;
    while(binaryNumber >0 ){
        int rem = binaryNumber%10;
        ans += rem*power;
        power *= 2;
        binaryNumber/= 10;
    }
    cout<<ans;

	return 0;
}