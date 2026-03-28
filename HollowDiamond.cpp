/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout<<" ";
        }
        cout<<"*";
        if(i!=1)
        {
            for(int j=1; j<=2*i-3; j++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }



    for(int i=n-1; i>=1; i--)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout<<" ";
        }
        cout<<"*";
        if(i!=1)
        {
            for(int j=1; j<=2*i-3; j++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }



}

