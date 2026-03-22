/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007

int fact(int n)
{
    int f=1;
    for(int i=1; i<=n; i++)
    {
        f*=i;
    }
    return f;
}

int nCr(int n,int r)
{
    int fact_n=fact(n);
    int fact_r=fact(r);
    int fact_nmr=fact(n-r);
    return fact_n/(fact_r*fact_nmr);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
    int n=6,r=3;
    cout<<nCr(n,r)<<endl;

}

