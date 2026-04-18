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
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    stack<int>s2;
    s2.swap(s);
    cout<<s.size()<<endl;
    cout<<s2.size()<<endl;
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }

}

