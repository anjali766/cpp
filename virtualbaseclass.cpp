#include<iostream>
using namespace std;

class student{
    protected:
        int roll_no;
    public:
        void set_num(int a){
            roll_no = a;
        }

        void print_num(){
            cout<<"Your roll number is "<<roll_no<<endl;
        }
};

class test : virtual public student{
    protected:
        float maths,physics;
    public:
        void set_marks(float m,float p){
            maths = m;
            physics = p;
        }

        void print_marks(){
            cout<<"result is "<<endl<<"maths : "<<maths<<endl
            <<"physics: "<<physics<<endl;
        }

};

class sports: virtual public student{
    protected:
        float score;
    public:
        void set_score(float sco){
            score = sco;
        }

        void print_score(){
            cout<<"your sports score is "<<score<<endl;

        }
};

class result : public test , public sports{
    private:
        float total;
    public:
        void display(){
            total = maths+physics+score;
            print_num();
            print_marks();
            print_score();
            cout<<"total score : "<<total<<endl;
        }
};

int main(){
    result res;
    res.set_num(101);
    res.set_marks(78.0,89.0);
    res.set_score(98);
    res.display();
    return 0;
}