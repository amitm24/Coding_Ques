#include<bits/stdc++.h>
using namespace std;
int large_element(int arr[] , int n){
    int large = INT_MIN ;
    for(int i = 0 ; i< n ; i++){
        if(arr[i]>large){
            large = arr[i];
        }
    }
    return large ; 

}
int main(){
    int n ; 
    cin >> n ;
    int arr [n];

    for(int i = 0 ; i< n ; i++){
        cin >> arr[i] ;
    }

    cout<<"MAX :  " <<large_element( arr  , n) ;
    return 0 ;
}
