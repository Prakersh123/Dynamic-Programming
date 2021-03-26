
#include<iostream>
using namespace std;
#define MAX 10000000
#define lli long long int
lli memo[MAX];
   
lli fibbo(lli n)
{
       memo[0]=0;
       memo[1]=1;
       for(int i=2;i<MAX;i++)
       memo[i]=memo[i-1]+memo[i-2]; 
       return memo[n];
}
int main()
{
    lli n;
    cout<<"Enter the value to be calculated";
    cin>>n;
    cout<<"\n";
    cout<<fibbo(n);
    return 0;
}