/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
const int mx=1e5+12;
int arr[mx];
int n,m;

bool isvalid(int arr[],int n, int m, int mid)
{
    int painter=1, time=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>mid)
        {
            return false;
        }
        if(time+arr[i]<=mid)
        {
            time+=arr[i];
        }
        else
        {
            painter++;
            time=arr[i];
        }
    }
    if(painter>m)
    {
        return false;
    }
    else
    {
        return true;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
    cin>>n>>m;
    for(int i=0; i<n; i++)cin>>arr[i];
    long long sum=0;
    int mx=INT_MIN;
    for(int i=0; i<n; i++)
    {
        sum+=arr[i];

    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]>mx)
        {
            mx=arr[i];
        }

    }
    int ans=-1;

    long long st=mx, ed=sum;
    while(st<=ed)
    {
        int mid=st+(ed-st)/2;
        if(isvalid(arr,n,m,mid))
        {
            ans=mid;
            ed=mid-1;
        }
        else
        {
            st=mid+1;
        }
    }

    cout<<ans<<endl;


}

