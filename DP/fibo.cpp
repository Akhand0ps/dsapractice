#include<bits/stdc++.h>
using namespace std;
int fibo(int n,vector<int>&dp){

    if(n <=1)return n;
    if(dp[n] != -1)return dp[n];

    return dp[n] = fibo(n-1,dp)+ fibo(n-2,dp);
}


int main(){

    int n;
    cout<<"Enter num: ";
    cin>>n;

    vector<int>dp(n+1,-1);
    cout<<"fibo of "<<n<< " is: "<<fibo(n,dp);
    //tabulation form

    vector<int>dpp(n+1,-1);
    cout<<endl;
    dpp[0]=0,dpp[1]=1;
    for(int i=2;i<=n;i++){
        dpp[i] = dpp[i-1] + dpp[i-2];
    }
    for(auto it:dpp)cout<<it <<" ";

    cout<<endl;
    //optimise SC to NON
    int prev2=0;
    int prev1=1;
    for(int i=2;i<=n;i++){

        int curi = prev1+prev2;
        prev2 = prev1;
        prev1=curi;
    }
    cout<<"fibo of "<<n<<" is: "<<prev1;
}