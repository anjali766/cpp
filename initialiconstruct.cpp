#include <iostream>
using namespace std;

class bankdeposit
{
    int principal;
    int interestrate;
    int year;
    float returnvalue;

public:
    bankdeposit() {}
    bankdeposit(int p, int y, float r);
    bankdeposit(int p, int y, int r);
    void show();
};

bankdeposit :: bankdeposit(int p, int y, float r){//when in percentage or float
    principal = p;
    year = y;
    interestrate = r;
    returnvalue = principal;
    for(int i=0;i<y;i++){
        returnvalue = returnvalue *(1+interestrate);
    }
}


bankdeposit :: bankdeposit(int p, int y, int r){//runs when in int 
    principal = p;
    year = y;
    interestrate = float(r)/100;
    returnvalue = principal;
    for(int i=0;i<y;i++){
        returnvalue = returnvalue *(1+interestrate);
    }
}

void bankdeposit ::show(){
    cout<<"principal amount before "<<year<<" years was "<<principal<<" and after it is "<<returnvalue<<endl;
}

int main()
{
    bankdeposit bd1,bd2,bd3;
    int p,y;
    float r;
    int R;
    cout<<"enter the value of p,y,r "<<endl;
    cin>>p>>y>>r;
    bd1 = bankdeposit(p,y,r);
    bd1.show();

    cout<<"enter the value of p,y,R "<<endl;
    cin>>p>>y>>R;
    bd2 = bankdeposit(p,y,R);
    bd2.show();

    return 0;
}
