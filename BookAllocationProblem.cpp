/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
const int mx=1e5+12;
int arr[mx];
int n,m;

bool isvalid(int arr[], int n, int m,int maxallowedpages)
{
    int stu=1, pages=0;
    for(int i =0; i<n; i++)
    {
        if(arr[i]>maxallowedpages)
        {
            return false;
        }
        if(pages+arr[i]<=maxallowedpages)
        {
            pages+=arr[i];
        }
        else
        {
            stu++;
            pages=arr[i];
        }
    }
    if(stu>m)
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
    int sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        sum+=arr[i];
    }
    int ans=-1;
    int st=0, ed=sum;


    while(st<=ed)
    {
        if(m>n)
        {
            ans=-1;
            break;
        }

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

