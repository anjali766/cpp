#include <iostream>
using namespace std;

int count =0;

class num{
    public:
    num(){
        count++;
    cout<<"constructor for  number"<<count<<endl;
    
    }

    ~num(){
        cout<<"destructor for number"<<count<<endl;
        count--;
    }
};

int main(){
    cout<<"ob1 "<<endl;
    num ob1;
    {
        cout<<"block entered "<<endl; 
        num ob2,ob3;
        cout<<" block exit "<<endl;
    }
    return 0;
}