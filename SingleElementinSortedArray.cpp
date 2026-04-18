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
    int st=0, ed=n-1;
    int ans=-1;
    while(st<=ed)
    {
        int mid=st+(ed-st)/2;
        if(arr[mid-1]!=arr[mid] && arr[mid]!=arr[mid+1])
        {

            ans=arr[mid];
        }
        if(mid%2==0)
        {
            if(arr[mid-1]==arr[mid])
            {
                ed=mid-1;
            }
            else
            {
                st=mid+1;
            }
        }
        else
        {
            if(arr[mid-1]==arr[mid])
            {
                st=mid+1;
            }
            else
            {
                ed=mid-1;
            }
        }
    }
    cout<<ans<<endl;

}

