// 
#include<bits/stdc++.h>
using namespace std;

bool isArm(int n){
    int k = to_string(n).length();
    int sum = 0;
    int n2 = n;
    while(n2>0){
        int ld = n2%10;
        sum+=pow(ld, k);
        n2/=10;
    }
    cout<<sum<<" ";
    cout<<n<<" ";

    return sum==n?true:false;
}

//Kadane's algo

int maxSubArraySum(vector<int>arr, int n){
    int maxi = INT_MIN;

    for(int i = 0;i<n;i++){
        int summ = 0;
        for(int j=i;j<n;j++){
            summ+=arr[j];
            maxi = max(maxi, summ);
        }
    }
    return maxi;
}

vector<int>negPos(vector<int>arr){
    vector<int>pos; 
    vector<int>neg;

    for(int i =0;i<arr.size();i++){
        if(arr[i]>0){
            pos.push_back(arr[i]);
        }
        else neg.push_back(arr[i]);
    }

    int i=0, j=0;

    int ij=0;

    

    while(i<pos.size() && j<neg.size()){
        arr[ij++]=pos[i++];
        arr[ij++]=neg[j++];
    }

    while(i<pos.size()){
        arr[ij++]=pos[i++];
    }
    
    while(j<neg.size()){
        arr[ij++]=neg[j++];
    }

    return arr;
}


int main(){
    vector<int>arr = {-2,1,-3,4,-1,2,1,-5,4, -9, -10, };

    vector<int>ans = negPos(arr);

    for(auto i:ans){
        cout<<i<<" ";
    }

    return 0;
}
