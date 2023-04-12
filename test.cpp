#include <iostream>
using namespace std;

class marks{
    int roll;
    int marks1;
    int marks2;
    int marks3;
    int arr[3];
    public:
    void init(){
        cout<<"enter roll and  marks"<<endl;
        for(int j=0;j<4;j++){
        cin>>arr[j];
    }
    }

    void sum(){
        int sum=0;
        for(int k=1;k<4;k++){
            sum += arr[k];
        }
        cout<<" sum of ob "<<" is "<<sum<<endl;
    }
};

int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    marks ob[n];
    for(int i=0;i<n;i++){
        ob[i].init();
    }
    for(int a=0;a<n;a++){
        ob[a].sum();
    }
    return 0;
}