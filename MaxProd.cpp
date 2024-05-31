// 
#include<bits/stdc++.h>
using namespace std;



long long int maxProd(int n, vector<long long int>&dp, bool flag ){
    if(n<=1){
        return 1;
    }

    if(dp[n]!=-1)return dp[n];
    long long int maxProdu = 0;
    int newnn=n+1;
    for(int i = 1;i<n;i++){
        maxProdu=flag?max(maxProdu, i*maxProd(newnn-i, dp, false)):max(maxProdu, i*maxProd(n-i, dp, false));
    }

    dp[n] = maxProdu;

    return maxProdu;
}

long long int maxProd2(int n, vector<long long int>&dp ){
    if(n<=1){
        return 1;
    }

    if(dp[n]!=-1)return dp[n];
    long long int maxProdu = 0;
    for(long long int i = 1;i<n;i++){
        long long int temp = i*(n-i);
        maxProdu=max(maxProdu, max(i*maxProd2(n-i, dp), temp));
    }

    dp[n] = maxProdu;

    return maxProdu;
}


int main(){
    vector<long long int>dp(58, -1);
    cout<<maxProd2(42, dp)<<endl;


    return 0;
}
