/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
const int mx=1e5+12;
int arr[mx];
int n,c;

bool isvalid(int arr[],int n,int c,int mid)
{
    int cow=1,laststall=arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]-laststall>=mid)
        {
            cow++;
            laststall=arr[i];
        }
        if(cow==c)return true;
    }
    return false;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
    cin>>n>>c;
    for(int i=0; i<n; i++)cin>>arr[i];
    sort(arr,arr+n);
    int mn=arr[0];
    int mx=arr[n-1];
    int st=1, ed=mx-mn;
    int ans=-1;
    while(st<=ed)
    {
        int mid=st+(ed-st)/2;

        if(isvalid(arr,n,c,mid))
        {
            ans=mid;
            st=mid+1;

        }
        else
        {
            ed=mid-1;
        }
    }
    cout<<ans<<endl;


}

