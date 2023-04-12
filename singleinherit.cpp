#include<iostream>
using namespace std;

class base{
    int data1;
    public:
        int data2;
        void setdata();
        int getdata1();
        int getdata2();
};

void base :: setdata(){
    data1 = 10;
    data2 = 20;
}

int base :: getdata1(){
    return data1;
}

int base :: getdata2(){
    return data2;
}

class child : public base{
    int data3;
    public:
        void process();
        void display();
};

void child ::process(){
    data3 = data2 * getdata1();
}

void child :: display(){
    cout<<"data1 = "<<getdata1()<<endl;
    cout<<"data2 = "<<data2<<endl;
    cout<<"data3 = "<<data3<<endl;
}

int main(){
    child obj;
    obj.setdata();
    obj.process();
    obj.display();
    return 0;
}