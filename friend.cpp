#include<iostream>
using namespace std;

class complex;

class calculate{
    public:
    int sum(int a,int b){
        return (a+b);
    }

    int sumrealcomplex(complex, complex);
};

class complex{
    int a;
    int b;

    public:
    void setdata(int v1,int v2){
        a=v1;
        b=v2;
    }

    friend int calculate :: sumrealcomplex(complex o1,complex o2);
    void printnum(){
        cout<<"your complex no is "<<a<<"+"<<b<<"i"<<endl;
    }
};

int calculate :: sumrealcomplex(complex o1,complex o2){
        return(o1.a + o2.a);
}


int main(){
    complex o1,o2;
    o1.setdata(1,4);
    o1.printnum();
    o2.setdata(5,3);
    o2.printnum();

    calculate calc;
    int result = calc.sumrealcomplex(o1,o2);
    cout<<"result: "<<result<<endl;

}