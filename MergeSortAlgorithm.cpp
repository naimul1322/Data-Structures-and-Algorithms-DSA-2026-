/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
const int mx=1e5+12;
int arr[mx];

void merge(int l,int mid,int r)
{
    int p=l;
    int q=mid+1;
    int len=r-l+1;
    int k=0;
    int v[len];
    for(int i=l; i<=r; i++)
    {
        if(p>mid)
        {
            v[k]=arr[q];
            k++,q++;
        }
        else if(q>r)
        {
            v[k]=arr[p];
            k++,p++;
        }
        else if(arr[p]<=arr[q])
        {
            v[k]=arr[p];
            k++,p++;
        }
        else{
            v[k]=arr[q];
            k++,q++;
        }
    }
    k=0;
    for(int i=l; i<=r; i++)
    {
        arr[i]=v[k];
        k++;
    }
}

void mergesort(int l,int r)
{
    if(l==r)return;
    int mid=l+(r-l)/2;
    mergesort(l,mid);
    mergesort(mid+1,r);
    merge(l,mid,r);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    for(int i=0; i<n; i++)cin>>arr[i];
    mergesort(0,n-1);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
