#include<bits/stdc++.h> 
using namespace std; 
#define INF 1000000009
int min_operation(vector<int> &v, int n) 
{ 
    int dp[n+1][n+1];
    memset(dp,INF,sizeof(dp));
    for(int i=1;i<n;i++)
    {
        dp[i][i]=0;
    }
    int ran;
    for(int i=2;i<n;i++) 
    { 
        for(int j=1;j<n-i+1;j++) 
        { 
            ran=i+j-1; 
            for(int k=j;k<=ran-1;k++) 
            { 
                dp[j][ran]=min(dp[j][ran],dp[j][k]+dp[k+1][ran]+v[j-1]*v[k]*v[ran]); 
            } 
        } 
    }
    return dp[1][n-1]; 
}
int main() 
{
    int n;
    cin>>n;
    vector<int> chain;
    for(int i=0;i<n+1;i++)
    {
        int x;
        cin>>x;
        chain.push_back(x);
    }
    int ans=min_operation(chain,n+1);
    cout<<ans<<endl;
    return 0;
}