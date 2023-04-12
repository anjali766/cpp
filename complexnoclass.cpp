#include<iostream>
using namespace std;

class complex{
    int a;
    int b;

    public:
    void setdata(int v1,int v2){
        a=v1;
        b=v2;
    }

    friend complex setdatabysum(complex o1, complex o2);//can access private data of complex class but not a member of this class
    void printnum(){
        cout<<"your complex no is "<<a<<"+"<<b<<"i"<<endl;
    }
};

complex setdatabysum(complex o1,complex o2){
    complex o3;
    o3.setdata((o1.a +o2.a),(o1.b+o2.b));
    return o3;
    }

int main(){
    complex c1,c2,sum;
    c1.setdata(1,2);
    c1.printnum();

    c2.setdata(3,4);
    c2.printnum();

    sum = setdatabysum(c1,c2);
    sum.printnum();
}