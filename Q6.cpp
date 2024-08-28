#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m1[2][2], m2[2][2];
	
	cout << "Enter Values for 2*2 Matrix 1 : " << endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin >> m1[i][j];
		}
	}
	cout << endl;
	
	cout << "Enter Values for 2*2 Matrix 2 : " << endl;
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin >> m2[i][j];
		}
	}
	
	int ans[2][2];
	
	for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            ans[i][j] = 0; 
            for(int k=0; k<2; k++) {
                ans[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		cout << ans[i][j]<<" ";
		cout << endl;
	}
	
	
	
	
}
