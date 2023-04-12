#include<iostream>
using namespace std;

class student{
    protected:
        int roll_no;
    public:
        void setnum(int);
        void getnum(void);
};

void student:: setnum(int r){
    roll_no = r;
}

void student::getnum(){
    cout<<"rollno is "<<roll_no<<endl;
}

class exam : public student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float m ,float p){
            maths = m;
            physics = p;
        }
};
        

class result : public exam{
    public:
        void display_marks(){
            cout<<"maths "<<maths<<endl;
            cout<<"physics "<<physics<<endl;
        }
};



int main(){
    result res;
    res.setnum(101);
    res.getnum();
    res.set_marks(78.6 , 77.0);
    res.display_marks();
    return 0;
}