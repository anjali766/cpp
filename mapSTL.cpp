#include<iostream>
#include<map>
#include<string>
using namespace std;


int main(){
    map<string,int> marksmap;
    marksmap["anjali"] =98;
    marksmap["ritviz"] =56;
    marksmap["shivani"] =78;

    marksmap.insert({{"shiva" , 99}, {"mansi", 67}});

    map<string,int> :: iterator iter;
    for (iter = marksmap.begin(); iter != marksmap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    
    return 0;
}