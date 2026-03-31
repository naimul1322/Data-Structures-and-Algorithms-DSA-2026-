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
    for(int i=0; i<n; i++)cin>>arr[i];

    int large=INT_MIN;

    for(int i=0; i<n; i++)
    {
       // large=max(arr[i],large);
       if(arr[i]>large)
       {
           large=arr[i];
       }
    }
    cout<<large<<endl;


}

