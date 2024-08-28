#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cin >> x;
	
	int fib = 0;
	int n1=0, n2=1;
    for(int i=1;i<=x;i++)
    {
    	if(i==1)
    	{
    		cout<<n1<<" ";
		}
		else if(i==2)
		{
			cout<<n2<<" ";
		}
		fib = n1+n2;
		n1 = n2;
		n2 = fib;
		
		cout << fib <<" ";
	}
	
	
}
