#include<bits/stdc++.h>
using namespace std;

int countDigits_IterativeDivision(int n){
    if(n == 0) return 1; // Special case for 0
    n = abs(n); // Ignore negative sign
    
    int count =0;
    while(n >0) {
        count++;
        n = n/10; // Remove last digit
    }
    
    return count;
}
int countDigits_stringConverstion(int n) {
    string s = to_string(abs(n));  // Convert number to string and ignore negative sign
    return s.length();
}
int countDigits_logFunction(int n) {
    if (n == 0) return 1;  // log10(0) is undefined, so handle separately
    return floor(log10(abs(n)) + 1);
}
int main(){
    int n;
    cin>>n;
    cout<<countDigits_IterativeDivision(n)<<endl;
    cout<<countDigits_stringConverstion(n)<<endl;
    cout<<countDigits_logFunction(n)<<endl;
    
    return 0;
    
}