/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
const int mx=1e5+12;

void ps(vector<int>&vec,vector<int>&ans,int i)
{

    if(i==vec.size())
    {
        for(auto u: ans)
        {
            cout<<u<<" ";
        }
        cout<<endl;
        return;
    }
    ans.push_back(vec[i]);
    ps(vec,ans,i+1);

    ans.pop_back();
    ps(vec,ans,i+1);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
    vector<int>vec= {1,2,3};
    vector<int>ans;
    ps(vec,ans,0);


}

