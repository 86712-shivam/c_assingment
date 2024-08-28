#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s;
	cin >> s;
	
	if(int(s)>=65 && int(s)<=90)
	cout << "UpperCase"<<endl;
	else if(int(s)>=97 && int(s)<=122)
	cout << "LowerCase"<<endl;
	else if(int(s)>=48 && int(s)<=57)
	cout << "Numeric Value"<<endl;
	else if(int(s)>=33 && int(s)<=47)
	cout << "Symbol" << endl;
	
}
