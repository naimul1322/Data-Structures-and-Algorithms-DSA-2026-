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
    int target;
    cin>>target;
    int ans=-1;
    int st=0, ed=n-1;
    while(st<=ed)
    {
        int mid=(st+ed)/2;
        if(arr[mid]==target)
        {
            ans=mid;
            break;
        }
        else if(arr[mid]<target)
        {
            st=mid+1;
        }
        else{
            ed=mid-1;
        }
    }
    cout<<ans<<endl;


}

