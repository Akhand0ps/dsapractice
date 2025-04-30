#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];

    vector<int>pos(n);
    int index_even = 0;
    int index_odd = 1;
    for(int i=0;i<n;i++){
        if(nums[i] >=0){
            pos[index_even]= nums[i];
            index_even +=2;
        }
        else if(nums[i]<0){
            pos[index_odd] = nums[i];
            index_odd +=2;
        }
    }
    for(auto it:pos)cout<<it<<" ";

}

/*

 test cases
     -1 3 -5 6 -7 8
    3 -1 6 -5 8 -7

 */