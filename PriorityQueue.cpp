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
    priority_queue<int>q;
    q.push(5);
    q.push(3);
    q.push(4);
    q.push(10);
    cout<<q.size()<<endl;
    while(!q.empty())
    {
        cout<<q.top()<<endl;
        q.pop();
    }


}

