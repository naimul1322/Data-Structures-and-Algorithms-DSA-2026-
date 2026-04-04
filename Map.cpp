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
    map<string,int>m;
    m["tv"]=50;
    m["laptop"]=100;
    m["headphones"]=50;
    m.insert({"Cmera",25});

    for(auto p: m)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.count("laptop")<<endl;


}

