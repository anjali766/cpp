#include<iostream>
using namespace std;
int main(){
    int arr[3][3], suml = 0,sumr=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        cin>>arr[i][j];
        }
    }
    cout<<"left diagonal elemnets are:- "<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i][i]<<" ";
        suml += arr[i][i];
    }
    cout<<endl;
    cout<<"right diagonal elemnets are:- "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if( i+j == 2 ){  //i+j = n-1
                cout<<arr[i][j]<<" ";
                sumr += arr[i][j];
            }
        }
    }

    cout<<endl;
    cout<<"non repeting"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if( i+j == 2 && i!=j){  //i+j = n-1
                cout<<arr[i][j]<<" ";
            }
        }
    }

    cout<<endl;
    cout<<"diagonal difference "<<endl;
    cout<< abs(suml - sumr)<<endl;

}

/*
for(int i=1;i<=100;i++){
        if(i%3==0)
        cout<<"Fizz ";
        if(i%5==0)
        cout<<"Buzz, ";
        else{
            cout<<i<<" , ";
    }
*/


//stars pattern
/*
while(i<=n){
        int stars = 1;
        while(stars<=i){
            cout<<"*";
            stars++;
        }
        cout<<endl;
        i++;
    }
*/


//pyramid stars

/*int n,i=1;
    cout<<"enter value of n "<<endl;
    cin>>n;
    while(i<=n){
        int space =1;
        while(space<=n-i){
            cout<<" ";
            space++;
            }
            int stars=1;
            while(stars<=2*i-1){
                cout<<"*";
                stars++;
            }
        cout<<'\n';
        i++;
    }*/