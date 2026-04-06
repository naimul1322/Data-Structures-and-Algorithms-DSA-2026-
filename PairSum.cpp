/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007

///TC: O(n)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0; i<n; i++)cin>>arr[i];
    int target;
    cin>>target;
    int l=0,r=n-1;
    while(l<r)
    {
        int sum=arr[l]+arr[r];
        if(sum<target)
        {
            l++;
        }
        else if(sum>target)
        {
            r--;
        }
        else
        {
            cout<<arr[l]<<" "<<arr[r]<<endl;
            break;
        }
    }

}

