//this pointer-----------

#include<iostream>
using namespace std;

class Test
{
private:
int x;
int y;
public:
Test(int x = 0, int y = 0) { this->x = x; this->y = y; }
Test &setX(int a) { x = a; return *this; }
Test &setY(int b) { y = b; return *this; }
void print() { cout << "x = " << x << " y = " << y << endl; }
};

int main()
{
Test obj1(5, 5);
obj1.setX(10).setY(20).print();
return 0;
}
/*
gcd----------

int a,b,gcd1;
    cout<<"enter two number"<<endl;
    cin>>a>>b;
    for (int i = 1; i <= min(a,b); i++)
    {
        if(a%i==0 && b%i==0){
            gcd1 =i;
        }
    }
    cout<<gcd1<<endl;
*/