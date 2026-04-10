/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
const int mx=1e5+12;
int arr[mx];
int part(int arr[],int st,int ed)
{
    int idx=st-1,pivet=arr[ed];
    for(int j=st; j<ed; j++)
    {
        if(arr[j]<=pivet)
        {
            idx++;
            swap(arr[j],arr[idx]);
        }

    }
    idx++;
    swap(arr[ed],arr[idx]);
    return idx;
}

void quicksort(int arr[],int st,int ed)
{
    if(st<ed)
    {
        int pividx=part(arr,st,ed);
        quicksort(arr,st,pividx-1);
        quicksort(arr,pividx+1,ed);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    for(int i=0; i<n; i++)cin>>arr[i];
    quicksort(arr,0,n-1);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

