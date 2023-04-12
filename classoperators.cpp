#include<iostream>
using namespace std;

class complex{
    int real,imag;
    public:
        void setdata(int r , int i){
            real = r;
            imag = i;
        }

        void getdata(){
            cout<<real<<" + "<<imag<<"i"<<endl;
        }
};

int main(){
    int p,q;
    complex *c1 = new complex [4];
    complex *c1temp = c1;   //store krega initial address ko
    for(int i=0;i<4;i++){
        cout<<"enter p and q"<<endl;
         cin>>p>>q;
         c1->setdata(p,q);
         c1->getdata();
         c1++;
    }
    return 0;
}