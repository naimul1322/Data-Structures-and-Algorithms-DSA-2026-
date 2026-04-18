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
    int pow=1;
    int ans=0;
    while(n!=0)
    {
        int rem=n%10;
        n/=10;
        ans+=rem*pow;
        pow*=10;
    }
    /// cout<<(int)(log10(n)+1)<<endl;


}
