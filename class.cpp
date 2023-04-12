#include<iostream>
using namespace std;




class employee{
    private:
    int a,b,c;
    public:
    int d,e;
    void setdata(int a1 ,int b1,int c1);
    void getdata(){
        cout<<"a "<<a<<endl;
        cout<<"b "<<b<<endl;
        cout<<"c "<<c<<endl;
        cout<<"d "<<d<<endl;
        cout<<"e "<<e<<endl;
    }
};

void employee ::setdata(int a1,int b1,int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    employee harry;
    harry.d= 34;
    harry.e = 89;
    harry.setdata(1,2,3);
    harry.getdata();
    return 0;
}