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

    for(int i=1; i<=10; i++)
    {
        int n;
        cin>>n;
        int ans=0,pow=1;
        while(n!=0)
        {
            int rem=n%2;
            n/=2;
            ans+=(rem*pow);
            pow*=10;
        }
        cout<<ans<<endl;
    }



}

