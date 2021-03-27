#include<iostream>
using namespace std;
int lcs(string s1,string s2,int m,int n,  int  (* memo)[1000] )
{
        if(memo[m][n]!=-1) return memo[m][n];
        if(m==0 || n==0) memo[m][n]=0;
        else if(s1[m-1]==s2[n-1])
        {
            memo[m][n]=1+lcs(s1,s2,m-1,n-1,memo);

        }        
        else
        memo[m][n]=max(lcs(s1,s2,m-1,n,memo),lcs(s1,s2,m,n-1,memo));
        return memo[m][n];
}
int main()
{
    string s1,s2;

    cin>>s1>>s2;
    int m=s1.length();
    int n=s2.length();
    int memo[m+1][1000];
    for(int i=0;i<m+1;i++)
    {
        for(int j=0;j<n+1;j++)
        memo[i][j]=-1;
    }
    cout<<lcs(s1,s2,m,n,memo);
}