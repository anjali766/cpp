#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v){
    cout<<"displaying this vector ";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        //cout<<v.at(i)<<" "; //kahan pr kya element h
    }
    cout<<endl;
}
int main(){
    int ele,size = 5;
    vector<int> vec1;//zero length vector
    vector<char> vec2(4); //4 element character vector
    // vec2.push_back('5');
    // display(vec2);
    vector<char> vec3(vec2); 
    display(vec3);
    vector<int> vec4(6,3); //6 element vector of 3 ->   6 baar 3
    display(vec4);
    cout<<vec4.size();


    // cout<<" size ";
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<"enter an element to add to vector ";
    //     cin>>ele;
    //     vec1.push_back(ele);

    // }
    
    //display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // //vec1.insert(iter , 566);   //inserts at begining
    // vec1.insert(iter+1 , 566);  //inserts at 2
    //vec1.insert(iter ,5, 566);  // 5 copies


   // display(vec1);
    return 0;
}