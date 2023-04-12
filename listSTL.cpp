#include<iostream>
#include<list>
using namespace std;

void display(list<int> &l){
    list<int> :: iterator iter;
   for (iter = l.begin(); iter != l.end() ; iter++)
   {
    cout<<*iter<<" ";
   }
   cout<<endl;
}

int main(){
    list<int>  list1,list3; //length 0
    int n;
    
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(9);
    list1.push_back(1);
    list1.push_back(12);
    
    // list1.pop_back(); ///from last
    // list1.pop_front(); //from start
    // list1.remove(9); //from any->  delete krega saari occurances

    display(list1);
    // list1.sort();
    // display(list1);

    list<int>  list2(3);  //empty ist of size 7
    list<int> :: iterator it = list2.begin();
    *it = 45;
    it++;
    *it = 56;
    it++;
    *it = 2;
    display(list2);
    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout<<"after merging ";
    display(list1); //sorted


    list1.reverse();
    display(list1);

    for(int i=0;i<3;i++){
        cout<<"enter element ";
        cin>>n;
        list3.push_back(n);
    }

    display(list3);

    return 0;
}