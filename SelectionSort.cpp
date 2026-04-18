/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
const int mx=1e5+12;
int arr[mx];


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

    for(int i=0; i<n-1; i++)
    {
        int smallIdx=i; ///unsorted part start
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[smallIdx])
            {
                smallIdx=j;
            }
        }
        swap(arr[i],arr[smallIdx]);
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

