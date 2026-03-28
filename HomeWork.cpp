/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007

bool isprime(int n)
{
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    for(int i=2; i<=n; i++)
    {
        if(isprime(i))
        {
            cout<<i<<" ";
        }

    }
    cout<<endl;



}

