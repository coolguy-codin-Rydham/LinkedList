// 
#include<bits/stdc++.h>
using namespace std;

string toBinary(int n ){
    string ans ="";

    while(n!=0){
        string toP = to_string(n&1);
        ans+=toP;
        n=n>>1;
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){

    cout<<toBinary(6);

    return 0;
}
