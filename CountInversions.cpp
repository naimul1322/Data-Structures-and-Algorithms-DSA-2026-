/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007

const int mx=1e5+12;
int arr[mx];

int merge(int l,int mid,int r)
{
    int p=l;
    int q=mid+1;
    int len=r-l+1;
    int v[len];
    int k=0;
    int invercnt=0;

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
        else
        {
            v[k]=arr[q];
            k++,q++;
            invercnt += (mid - p + 1);
        }
    }

    k=0;
    for(int i=l; i<=r; i++)
    {
        arr[i]=v[k];
        k++;
    }
    return invercnt;
}

int mergesort(int l,int r)
{
    if(l>=r) return 0;

    int mid=l+(r-l)/2;

    int leftinvcnt=mergesort(l,mid);
    int rightinvcnt=mergesort(mid+1,r);
    int invcnt=merge(l,mid,r);

    return leftinvcnt+rightinvcnt+invcnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    for(int i=0; i<n; i++) cin>>arr[i];

    int ans=mergesort(0,n-1);

    cout<<ans<<endl;
}
