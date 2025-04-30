//generate all the subarray with sum <=k

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)cin>>nums[i];
    int k=14;
    
    int maxlen=0;
    // for(int i=0;i<n;i++){
        
    //     int sum=0;
    //     for(int j=i;j<n;j++){
    //         sum = sum+nums[j];
    //         if(sum <=k){
    //             maxlen = max(maxlen,j-i+1);
    //         }
    //         else if(sum >k){
    //             break;
    //         }

    //     }
    // }

    // cout<<maxlen;


    //SLINDING WINDOW -- O(N+N) SC-- O(1)
    // remove while(sum > k ) as if(sum > k) if only want length only.
    int l=0,r=0;
    
    int sum=0;
    vector<int>ans;
    int bestl,bestr;
    bestl=bestr=0;
    while(r <n){
        sum = sum+nums[r];
        while(sum >k){
            sum = sum - nums[l];
            l++;
        }

        if(r-l+1 > maxlen){
            
            maxlen = r-l+1;
            bestl = l;
            bestr = r;
        }
        r =r+1;
    }
    for(int i=bestl;i<=bestr;i++){
        ans.push_back(nums[i]);
    }
    for(auto it:ans) cout<<it<<" ";
    cout<<endl;
    // cout<<l<<" "<<r<<endl;
    

    // cout<<maxlen;


}