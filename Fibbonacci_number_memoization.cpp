#include<iostream>
using namespace std;
#define MAX 10000000
#define lli long long int
lli memo[MAX];
   
lli fibbo(lli n)
{
    if(memo[n]!=-1) return memo[n];
    if(n==0 || n==1) memo[n]=n;
    else memo[n]=fibbo(n-1)+fibbo(n-2);
    return memo[n];
}
int main()
{
    fill(memo,memo+MAX,-1);
    lli n;
    cout<<"Enter the value to be calculated";
    cin>>n;
    cout<<"\n";
    cout<<fibbo(n);
    return 0;
}