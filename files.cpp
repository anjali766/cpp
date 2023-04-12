#include<iostream>
#include<fstream>
using namespace std;


int main(){
    string st;
    ifstream in;
    in.open("sample.txt");
    while(in.eof() == 0){
        getline(in , st);
        cout<<st<<endl;
    }
    in.close();
    return 0;
}


/*

string name , content;
    ofstream wr("sample.txt");
    cout<<"enter ur name ";

    cin>>name;
    wr<<"My name is "+name;
    wr.close();

    ifstream rd("sample.txt");
    getline(rd , content);
    cout<<"content is " <<content;
    rd.close();
    return 0;
*/