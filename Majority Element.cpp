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
    int arr[n+1];
    for(int i =0; i<n; i++)cin>>arr[i];

    int freq=0, ans=0;
    for(int i=0; i<n; i++)
    {
        if(freq==0)
        {
            ans=arr[i];
        }
        if(ans==arr[i])freq++;
        else freq--;
    }
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(ans==arr[i])
        {
            cnt++;
        }
    }
    if(cnt>(n/2))
    {
        cout<<ans<<endl;
    }
    else cout<<-1<<endl;



}
