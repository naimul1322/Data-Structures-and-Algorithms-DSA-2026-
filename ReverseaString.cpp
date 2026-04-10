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

    char ch[100];
    cin>>ch;
    int len=0;
    while(ch[len]!='\0')len++;
    for(int i=0; i<len/2; i++)
    {
        char c=ch[len-i-1];
        ch[len-i-1]=ch[i];
        ch[i]=c;
    }
    cout<<ch<<endl;



}

