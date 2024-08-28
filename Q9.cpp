#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	vector<int>v;
	int n;
	cin >> n;
	int mod;
	while(n>0)
	{
		mod = n%2;
		v.push_back(mod);
		n = n/2;
	}
	
	reverse(v.begin(), v.end());
	
	for(int i=0;i<v.size();i++)
	cout << v[i] ;
	
	
	
		
}
	
	
	
	

	
