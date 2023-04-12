#include<iostream>
using namespace std;

class base{
    public:
        int var_base;
        base(int basevar){
            var_base = basevar;
        }
        virtual void display(){
            cout<<"the value of var base is "<<var_base<<endl;
        }
};

class derived : public base{
        public:
            int var_derived;
            derived(int basevar , int dervar): base(basevar){
                var_derived = dervar;
            }
            void display(){
                cout<<"the value of var base is "<<var_base<<endl;
                cout<<"the value of var derived1 is "<<var_derived<<endl;
            }
};

class derived2 : public base{
        public:
            int var_derived2;
            derived2(int basevar , int dervar): base(basevar){
                var_derived2 = dervar;
            }
            void display(){
                cout<<"the value of var base is "<<var_base<<endl;
                cout<<"the value of var derived2 is "<<var_derived2<<endl;
            }
};

int main(){
    base *base_pointer[2];
    derived obj_der(56 , 78);
    derived2 obj_der2(56 , 98);

    base_pointer[0] = &obj_der;  //points to obj der but will run and initlialize only base fun and mem
    base_pointer[1] = &obj_der2;  
    //base_pointer->base::display();    //base
    base_pointer[0]->display(); 
    base_pointer[1]->display();  









    // base_pointer->var_base = 56;
    // base_pointer->display();

    // derived *der_pointer;
    // der_pointer = &obj_der;
    // der_pointer->var_derived=79;
    // der_pointer->display();

    return 0;
}