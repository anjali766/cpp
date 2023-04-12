#include<iostream>
using namespace std;

class base1{
    int data1;
    public:
            base1(int i){
                data1 = i;
                cout<<"base1 class constructor is called"<<endl;
            
            }

            void printdata1(){
                cout<<"value of data1 "<<data1<<endl;
            }
};

class base2{
    int data2;
    public:
        base2(int i){
            data2 = i;
                cout<<"base2 class constructor is called"<<endl;
        }

        void printdata2(){
                cout<<"value of data2 "<<data2<<endl;
            }

};

class derived : public base1, virtual public base2{
    int derive1 , derive2;
    public:
        derived(int i, int j, int k, int l): base1(i) , base2(j){
            derive1 = k;
            derive2 = l;
            cout<<"derived class constructor is called"<<endl;
        }

        void print(){
            cout<<"value of derive1 "<<derive1<<endl;
            cout<<"value of derive2 "<<derive2<<endl;
        }
};

int main(){
    derived der(10,20,30,40);
    der.printdata1();
    der.printdata2();
    der.print();
    return 0;
}