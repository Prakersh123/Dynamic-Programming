#include<iostream>
using namespace std;
int dp[1000][1000];
int lcs(string s1,string s2)
{
    int m=s1.length(),n=s2.length();
    for(int i=0;i<=m;i++)
        dp[i][0]=0;
    for(int i=0;i<=n;i++)
        dp[0][i]=0;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(s1[i-1]==s2[j-1])
            dp[i][j]=1+dp[i-1][j-1];
            else
            {
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
            
        }
    }
    return dp[m][n];    
}
int main()
{
    string s1,s2;

    cin>>s1>>s2;
    cout<<lcs(s1,s2);
    return 0;
}