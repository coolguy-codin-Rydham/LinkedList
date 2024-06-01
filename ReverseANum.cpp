// 
#include<bits/stdc++.h>
using namespace std;


int reverseANum(int n){
    int rev = 0;
    while(n!=0){
        int rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }

    return rev;
}

int gcd(int a, int b ){
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }

    return a==0?b:a;
}



bool isArmstrong(int num) {
    // Calculate the number of
    // digits in the given number
    int k = to_string(num).length();
    // Initialize the sum of digits
    // raised to the power of k to 0
    int sum = 0;
    // Copy the value of the input
    // number to a temporary variable n
    int n = num;
    // Iterate through each
    // digit of the number
    while(n > 0){
        // Extract the last
        // digit of the number
        int ld = n % 10;
        // Add the digit raised to
        // the power of k to the sum
        sum += pow(ld, k); 
        // Remove the last digit
        // from the number
        n = n / 10;
    }
    // Check if the sum of digits raised to
    // the power of k equals the original number

    cout<<sum<<" ";
    cout<<num<<" ";
    return sum == num ? true : false;
}
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

int main(){
    int n ;
    cin>>n;
    cout<<isArm(n);


    return 0;
}
