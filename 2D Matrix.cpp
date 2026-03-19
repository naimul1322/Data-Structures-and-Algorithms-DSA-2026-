/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
    int matrix[4][3];
    int target=8;

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>matrix[i][j];
        }
    }
    int ans=-1;
    pair<int,int>p= {-1,-1};

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(matrix[i][j]==target)
            {
                p= {i,j};
                break;
            }
        }
        cout<<endl;
    }
    cout<<p.first<<" "<<p.second<<endl;

}

