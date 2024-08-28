#include<bits/stdc++.h>
using namespace std;
int main()
{	
   string s;
   cin >> s;
  
   int flag = 0;
   
   string copy = s;
   reverse(copy.begin(), copy.end());
   
   for(int i=0;i<s.size();i++)
   {
   	if(s[i]!=copy[i])
   	{
   		flag = 1;
   		break;
	}
   }
   
   if(flag == 1)
   cout <<"Given String is not a Palindrome"<<endl;
   else
   cout<<"Given String is Palindrome"<<endl;
   
}
