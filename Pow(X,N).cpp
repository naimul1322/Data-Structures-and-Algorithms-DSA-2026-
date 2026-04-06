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
    double x;
    int n;
    cin>>x>>n;
    if(n<0)
    {
        x=1/x;
        n=-n;
    }
    double ans=1;
    while(n!=0)
    {
        if(n%2==1)
        {
            ans*=x;
        }
        x*=x;
        n/=2;
    }
    cout<<ans<<endl;

}
















