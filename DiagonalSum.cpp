/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    int matrix[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>matrix[i][j];
        }
    }
    int pd=0,sd=0;;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                pd+=matrix[i][j];
            }
            else if(j==n-i-1)
            {
                sd+=matrix[i][j];
            }
        }
    }
    cout<<pd<<endl;
    cout<<sd<<endl;

}



