/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007

//int fact(int n)
//{
//    if(n==0)return 1;
//    return n*fact(n-1);
//}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    int ans=1;
    for(int i=1; i<=n; i++)
    {
        ans*=i;
    }
    cout<<ans<<endl;

}

