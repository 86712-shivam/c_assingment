#include<bits/stdc++.h>
using namespace std;

struct Student{
	
	void displayStudentName(string s)
	{
		string name = s;
		cout <<"Name: "<< name <<endl;
	}
	void displayRollNumber(string s)
	{
		string rollNo = s;
		cout <<"Roll No: "<< rollNo <<endl;
	}
	void displayTotalMarks(int x)
	{
		int marks = x;
		cout << "Total Marks: "<<marks;
	}
	
};
int main()
{
	Student s1;
	string name;
	cout<<"Enter Student's Name: ";
	cin >> name;
	s1.displayStudentName(name);
    string rollNo;
    cout<<"Enter Student's Roll Number: ";
    cin >> rollNo;
    s1.displayRollNumber(rollNo);
    int totalMarks;
    cout<<"Enter Student's Total Marks: ";
    cin >> totalMarks;
    s1.displayTotalMarks(totalMarks);
	
	
	
}
