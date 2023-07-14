#include<bits/stdc++.h>
using namespace std;

bool issubset(int arr1[],int arr2[],int n1,int n2){
    unordered_map<int ,int> freq;
    for(int i=0;i<n1;++i){
        freq[arr1[i]]++;
    }
    for(int i=0;i<n2;++i){
        if(freq[arr2[i]] == 0){ return false;
        freq[arr2[i]]-- ;

        }
    }
    return true;
}

int main(){
    int arr1[] = {6,7,3,2,2};
    int arr2[] = {6,7,2,2,1};
    
    int n1 = sizeof(arr1)/sizeof(*arr1);
    int n2 = sizeof(arr2)/sizeof(*arr2);
    cout<<issubset(arr1,arr2,n1,n2)<<endl;
    
}