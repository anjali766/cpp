#include<iostream>
#include<math.h>
using namespace std;

class simplecalculator{
    int num1,num2;
    public:
        void set_num(int n1 , int n2){
            num1 = n1;
            num2 = n2;
        }
        void displaysim(){
            cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
            cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
            cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
            cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
        }
};

class scientificcal{
    int no1,no2;
    public:
        void set_no(int n1 , int n2){
            no1 = n1;
            no2 = n2;
        }
        void displayssc(){
            cout<<"square root of "<<no1<<" is "<<sqrt(no1)<<endl;
            cout<<"square root of "<<no2<<" is "<<sqrt(no2)<<endl;
            cout<<"cube root of "<<no1<<" is "<<cbrt(no1)<<endl;
            cout<<"cube root of "<<no2<<" is "<<cbrt(no2)<<endl;
        }
};

class hybrid : public simplecalculator , public scientificcal{
    public:
        void display(){
            displaysim();
            displayssc();
        }
};


int main(){
    hybrid oper;
    oper.set_num(23,45);
    oper.set_no(40,100);
    oper.display();
    return 0;
}