#include <iostream>
using namespace std;

class emp{
    int id;
    static int count;
    public:
    void setf(void){
        cout<< "enter the id: "<<endl;
        cin>>id;
        count++;
    }
    void getf(void){
        cout<<"the id of this employee is "<<id<<"the employee is: "<<count<<endl;
    
    }

    static void getcount(void){
        cout<<"the value of count is "<<count<<endl;
    }
};

int emp :: count;

int main(){
    emp anjali,alisha,anjali1;
    anjali.setf();
    anjali.getf();
    emp::getcount();

    anjali1.setf();
    anjali1.getf();
    emp::getcount();

    alisha.setf();
    alisha.getf();
    emp::getcount();
}