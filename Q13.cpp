#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cout << "Enter no of string you want to enter: ";
	cin >> x;
	vector<string>v;
	for(int i=0;i<x;i++)
	{
		string temp;
		cin >> temp;
		v.push_back(temp);
	}
	
	for(int i=0;i<v.size()-1;i++)
	{
		for(int j=i+1;j<v.size();j++)
		{
			if(v[i]==v[j])
			cout << v[i] << endl;
		}
	}
	
	

	
	
}
