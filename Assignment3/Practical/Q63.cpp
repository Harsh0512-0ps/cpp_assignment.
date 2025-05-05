//63. Write a class Student with a static data member to keep track of the total number of students enrolled. 

#include<iostream>
using namespace std;

class Student{
private:
	static int noOfStudents;
	int id;
public:
	Student(int stdID){
		id = stdID;
		noOfStudents++;
	}

	~Student(){
		noOfStudents--;
	}

	static int getTotalStudent(){
		return noOfStudents;
	}


};

int Student :: noOfStudents = 0;

int main(){
	Student s1(100);
	Student s2(101);
	Student s3(102);

	cout<<Student :: getTotalStudent()<<endl;
	return 0;
}
