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
    list<int>l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_front(5);
    cout<<l.size()<<endl;
    for(auto u: l)
    {
        cout<<u<<" ";
    }
    cout<<endl;



}

