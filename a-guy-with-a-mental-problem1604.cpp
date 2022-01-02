//https://practice.geeksforgeeks.org/problems/a-guy-with-a-mental-problem1604/1#
#include <bits/stdc++.h>
using namespace std;



class Solution{
    public:
    long long minTime(long long a[], long long b[], long long n)
    {
        // Your code goes here
        long long int suma=0,sumb=0;
        //if start from station a
        for(int i=0;i<n;i++){
           if(i%2==0){
            suma=suma+a[i]; 
           }else{
             suma=suma+b[i];  
           } 
        }
        //if start from station b
        for(int i=0;i<n;i++){
           if(i%2!=0){
            sumb=sumb+a[i];   
           } else{
            sumb=sumb+b[i];    
           }
        }
    
     if(suma>sumb){
        return sumb;
     }else{
       return suma;  
     }    
    }
};


int main() {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long a[n], b[n];
        for(long long i=0;i<n;i++)
            cin >> a[i];
        for(long long i=0;i<n;i++)
            cin >> b[i];
        Solution ob;
        cout << ob.minTime(a, b, n) << endl;
    }
    return 0;
}
