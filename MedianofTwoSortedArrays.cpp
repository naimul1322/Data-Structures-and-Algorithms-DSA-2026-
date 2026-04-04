/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout<<fixed<<setprecision(5);
    //memset(dp,-1,sizeof(dp));
    int n,m;
    cin>>n>>m;
    vector<int>nums1(n),nums2(m);
    for(int i=0; i<n; i++)cin>>nums1[i];
    for(int i=0; i<m; i++)cin>>nums2[i];

    vector<int> ans;
    for(int i=0; i<n; i++)
    {
        ans.push_back(nums1[i]);
    }
    for(int i=0; i<m; i++)
    {
        ans.push_back(nums2[i]);
    }
    sort(ans.begin(),ans.end());
    int sum=0;
    for(int i=0; i<ans.size(); i++)
    {
        sum+=ans[i];
    }
    double res=(double)sum/ans.size();

    cout<<res<<endl;



}
