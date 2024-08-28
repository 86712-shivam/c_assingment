#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<string>nameOfStudents;
	
	for(int i=0;i<10;i++)
	{
		string temp;
		cin >> temp;
		nameOfStudents.push_back(temp);
	}
	
	sort(nameOfStudents.begin(), nameOfStudents.end());
	
	for(int i=0;i<nameOfStudents.size();i++)
	cout << nameOfStudents[i]<<endl;
	
	
}
