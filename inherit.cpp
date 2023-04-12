#include<iostream>
using namespace std;

class employee{
    public:
    int id;
    float salary;
    employee(int inpid){
        id=inpid;
        salary = 350.0;
    }
    employee(){}//mandatory
};

class programmer : public employee{
    public:
    int langcode;
       programmer(int inpid){
        id = inpid;
        langcode= 9;
       }
       
       void getdata(){
        cout<<id<<endl;
       }
};


int main(){
    employee an(1) , ya(2);
    cout<<an.salary<<endl;
    cout<<ya.salary<<endl;
    programmer prog(10);
    cout<<prog.langcode<<endl;
    cout<<prog.id<<endl;
    prog.getdata();
    return 0;
}
