/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007

void perstr(string &s,int idx,vector<string>&ans)
{
    if(idx==s.size())
    {
      ans.push_back(s);
      return ;
    }
    for(int i=idx; i<s.size(); i++)
    {
        swap(s[idx],s[i]);
        perstr(s,idx+1,ans);
        swap(s[idx],s[i]);
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
    string s;
    cin>>s;
    vector<string>ans;
    perstr(s,0,ans);

    for(auto u: ans)
    {
        cout<<u<<endl;
    }


}

