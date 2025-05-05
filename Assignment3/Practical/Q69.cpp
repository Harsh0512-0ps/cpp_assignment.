//69. Write a class Logger with a destructor that logs messages when the object is destroyed. 
#include<iostream>
using namespace std;

class Logger{
public:
	~Logger(){
		cout<<"Obbject is Destroyed";
	}
};

int main(){
	Logger l;
	return 0;
}