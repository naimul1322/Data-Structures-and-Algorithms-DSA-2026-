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
    int n,m;
    cin>>n>>m;
    int matrix[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>matrix[i][j];
        }
    }

    int mxSum=INT_MIN;

    for(int i=0; i<n; i++)
    {
        int sumI=0;
        for(int j=0; j<m; j++)
        {
            sumI+=matrix[j][i];

        }
        mxSum=max(sumI,mxSum);
    }
    cout<<mxSum<<endl;

}

