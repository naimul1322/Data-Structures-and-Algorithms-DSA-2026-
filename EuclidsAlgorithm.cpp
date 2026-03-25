/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007

int gcd(int a, int b)
{
    if(b==0)
    {
        return a;
    }

    if(a>b)
    {
        return gcd(a%b,b);
    }
    else
    {
        return gcd(a,b%a);
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;


}

