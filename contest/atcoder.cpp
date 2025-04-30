// You are given a 
// 3-character string 
// S, where the first character is a digit, the second character is the character x, and the third character is a digit.

// Find the product of the two numbers in 
// S.

// Constraints
// S is a 
// 3-character string where the first character is an integer between 
// 1 and 
// 9, inclusive, the second character is the character x, and the third character is an integer between 
// 1 and 
// 9, inclusive.


#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    vector<int>v;
    for(int i=0;i<s.size() ;i++){

        if(s[i]>='1' && s[i]<='9'){
            v.push_back(s[i]-'0');
        }
    }
    
    cout<<v[0]*v[1]<<endl;
}