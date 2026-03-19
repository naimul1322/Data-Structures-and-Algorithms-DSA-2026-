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
    for(int i=0; i<n; i++)
    {
        int f=arr[i];
        for(int j=i+1; j<n; j++)
        {
            int s=arr[j];
            int sum=f+s;
            if(sum==target)
            {
                cout<<i<<" "<<j<<endl;
                break;
            }
        }
    }


}
