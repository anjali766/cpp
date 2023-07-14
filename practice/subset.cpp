#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr1[] = {2,3,7,4,9,1};
    int arr2[] = {7,3,6};
    unordered_set<int> freq;
    int n1 = sizeof(arr1)/sizeof(*arr1);
    int n2 = sizeof(arr2)/sizeof(*arr2);
    for(int i=0;i<n1;++i){
        freq.insert(arr1[i]);
    }
    for(int i=0;i<n2;++i){
        if(freq.count(arr2[i]) ==0){
            cout<<"array is not a subset"<<endl;
            return 0;

        }
    }
    cout<<"array is a subset"<<endl;

return 0;
}