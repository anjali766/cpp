#include<iostream>
#include<set>
using namespace std;

void display(set<int> &s){
    set<int> :: iterator it;
    
    for(it = s.begin(); it != s.end();it++){
        cout<<*it<<" ";
    }
}
int main(){
    set<int> set1;
    set1.insert(12);
    set1.insert(45);
    set1.insert(56);
    set1.insert(67);
    set1.insert(23);
    display(set1);
    
    cout<<endl;
    cout<<"after insert ";
    set1.insert(set1.begin() ,54);
    display(set1);
    cout<<endl;


    //remove
    // cout<<"after erase ";
    // set1.erase(set1.begin(), set1.find(1));
    // display(set1);

    // cout<<endl;
    // cout<<"lower bound ";
    // cout<<*set1.lower_bound(67);
    if(set1.count(12)==1){
        cout<<"12 is present";
    }
        return 0;
}