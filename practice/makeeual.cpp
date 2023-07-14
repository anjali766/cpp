#include<bits/stdc++.h>
using namespace std;

int makeequal(int arr1[] ,int n1){
    unordered_map<int,int> mp;
    int maxfreq =0;
    for(int i=0;i<n1;i++){
        mp[arr1[i]]++;
    }
    for(auto x:mp){
        if(x.second > maxfreq) 
            maxfreq = x.second;
    }
return n1 - maxfreq;
}
int main(){
    int arr1[] ={1,2,3,4};
    int n1 = sizeof(arr1)/sizeof(*arr1);
    
    cout<<makeequal(arr1,n1)<<endl;
    return 0;
}