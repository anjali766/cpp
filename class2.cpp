#include<iostream>
using namespace std;

 class binary{
    string s; //can be used by class members only
    public:
    void read(void);
    void chk_bin(void);
    void ones(void);
    void display(void);
 };

 void binary :: read(void){
    cout<<"enter a binary no "<<endl;
    cin>>s;
 }

 void binary ::chk_bin(void){
    for(int i=0;i<s.length();i++){
        if(s[i] != '0' && s[i]!='1' ){
            cout<<"incorrect"<<endl;
            exit(0);
        }
    }
 }

 void binary ::ones(void){
   chk_bin(); //nested //directly calls withour scope resolution
   for(int i=0;i<s.length();i++){
        if(s[i] == '0' )
            s[i] = '1';
         else
         s[i]= '0';  
      }
 }

 void binary ::display(void){
   cout<<"number is: ";
   for(int i=0;i<s.length();i++){
        cout<<s[i];
      }
 }

 int main(){
    binary b;
    b.read();
    //b.chk_bin();
    b.display();
    b.ones();
    b.display();
 }

/*
void substrings(string s,int l){
    string sub;
    for(int pos=0;pos<l;pos++){
        for(int len=1;len<=l-pos;len++){
            sub = s.substr(pos,len);
            cout<<sub<<endl;
        }
    }
}

int main(){
    // string s;
    // int l;
    // cout<<"string ";
    // cin>>s;
    // l= s.length();
    //substrings(s,l);
}
void revarr(int* arr,int l){
    for(int i=l-1;i>=0;i--){
        cout<<arr[i]<<' ';
    }
}

int main(){
    int arr[4]={10,20,30,40};
    revarr(arr,4);
    return 0;
}
*/