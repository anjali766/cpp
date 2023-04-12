#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"enter the value of n "<<endl;
    // cin>>n;
    char ch = 64;
    for(int i=1; i<=5;i++){
        ch = ch + 2*(i-1)+1;
        for(int j=1;j<=5;j++){
            if(j>=6-i){
                cout<<ch;
                ch--;
            }
            else
                cout<<" ";
    
        } cout<<"\n";
    }

    return 0;
}

/*
*
* *
* * *
* * * *


for(int i=1 ; i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }cout<<endl;
    }
*/


/*
    *
   **
  ***
 **** 


 for(int i=1;i<n;i++){
        for(int j=1;j<=n;j++){
            if(j>=n-i+1)
            cout<<"*";
            else
            cout<<" ";
        }cout<<"\n";
    }
*/


/*
*****
 ****
  ***
   **
    *

for(int i=1; i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j>=i)
            cout<<"*";
            else
            cout<<" ";
        }cout<<"\n";
    }


*/

/*
****
***
**
*

for(int i=1; i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<"*";
        }cout<<"\n";
    }



*/

/*
   *
  ***
 ***** 
*******


int m = n+(n-1);
    for(int i=1; i<=n;i++){
        for(int j=1;j<=m;j++){
            if(j>=n-i+1 && j<=n+i-1)
                cout<<"*";
            else
                cout<<" ";
        } cout<<"\n";
    }

*/


/*
     *
    *  *
  *  *  *
 *  *  *  * 
*  *  *  *  *
  
int m = n+(n-1);
    for(int i=1; i<=n;i++){
        k=1;
        for(int j=1;j<=m;j++){
            if(j>=n-i+1 && j<=n+i-1 && k){
                cout<<"*";
                k=0;
            }
            else{
                cout<<" ";
                k=1;
            }
        } cout<<"\n";
    }


*/


/*
*********
**** ****
***   ***
**     **
*       *


int m = n+(n-1);
    for(int i=1; i<=n;i++){
        for(int j=1;j<=m;j++){
            if(j<=n-i+1 || j>=n+i-1 ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        } cout<<"\n";
    }
*/

/*
    1    
   121   
  12321  
 1234321 
123454321

for(int i=1; i<=n;i++){
        k=1;
        for(int j=1;j<=m;j++){
            if(j>=n-i+1 && j<=n+i-1 ){
                cout<<k;
                j<n?k++:k--;
            }
            else{
                cout<<" ";
            }
        } cout<<"\n";
    }


*/


/*
ABCDEDCBA
ABCD DCBA
ABC   CBA
AB     BA
A       A


for(int i=1; i<=n;i++){
        k = 'A';
        for(int j=1;j<=m;j++){
            if(j<=n-i+1 || j>=n+i-1 ){
                cout<<k;
                j<n?k++:k--;
            }
            else{
                cout<<" ";
                if(j==n)
                k--;
            }
        } cout<<"\n";
    }


*/

/*
   *   
  ***  
 ***** 
*******
 ***** 
  ***  
   *

int k=0;
    for(int i=1; i<=7;i++){
        i<=4?k++: k--;
        for(int j=1;j<=7;j++){
            if(j>=5-k && j<=3+k ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        } cout<<"\n";
    }
----------------------------------

int n,k=0,m;
    cout<<"enter the value of n "<<endl;
    cin>>n;
    m = (n+1)/2;
    for(int i=1; i<=n;i++){
        i<=m?k++:k--;
        for(int j=1;j<=n;j++){
            if(j>=m-k+1 && j<=m+k-1 ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        } cout<<"\n";
    }


*/


/*
    *     
   ***    
  *****   
 *******  
********* 
*********
 *******
  *****
   ***
    *


int n,k=0,m;
    cout<<"enter the value of n "<<endl;
    cin>>n;
    m = (n+1)/2;
    for(int i=1; i<=n;i++){
        if(n%2==0){
            if(i<=m) k++;
            if(i>m+1) k--;
        }
        else
            i<=m?k++: k--;
        for(int j=1;j<=n;j++){
            if(j>=m-k+1 && j<=m+k-1 ){
                cout<<"*";
               
            }
            else{
                cout<<" ";
            }
        } cout<<"\n";
    }



*/

/*

*   
**  
*** 
****
*** 
**  
*  


for(int i=1; i<=7;i++){
        i<=4?k++:k--;
        for(int j=1;j<=4;j++){
            if(j<=k){
                cout<<"*";
                //j<=4?k++:k--;
                
            }
            else{
                cout<<" ";
            }
        } cout<<"\n";
    }
-------------------> even odd
m = (n+1)/2;
    for(int i=1; i<=n;i++){
        if(n%2==0){
            if(i<=n/2) k++;
            if(i>(n/2)+1) k--;
        }
        else{
            i<=m?k++:k--;
        }
        for(int j=1;j<=m;j++){
            if(j<=k){
                cout<<"*";
                
            }
            else{
                cout<<" ";
            }
        } cout<<"\n";
    }

*/


/*
*******
 ***** 
  ***  
   *


for(int i=1; i<=4;i++){
        for(int j=1;j<=7;j++){
            if(j>=i && j<=8-i){
                cout<<"*";
                
            }
            else{
                cout<<" ";
            }
        } cout<<"\n";
    }


--------------------
cout<<"enter the value of n "<<endl;
    cin>>n;
    for(int i=1; i<=n;i++){
        for(int j=1;j<=2*n-1;j++){
            if(j>=i && j<=2*n-i){
                cout<<"*";
                
            }
            else{
                cout<<" ";
            }
        } cout<<"\n";
    }
*/

/*
   1   
  232  
 34543 
4567654

int k;
    for(int i=1; i<=4;i++){
        k=i;
        for(int j=1;j<=7;j++){
            if(j>=5-i && j<=3+i){
                cout<<k;
                j<4?k++:k--;
            }
            else{
                cout<<" ";
            }
        } cout<<"\n";


*/

/*
6543210
543210
43210
3210
210
10
0

int k;
    for(int i=1; i<=7;i++){
        k=7-i;
        for(int j=1;j<=7;j++){
           
            if(j<=8-i){
                cout<<k;
                k--;
            }
            else{
                cout<<" ";
            }
        } cout<<"\n";
    } 


*/

/*
    1
   12
  123
 1234
12345
 1234
  123
   12
    1


int k=0,x; 
    for(int i=1; i<=9;i++){
        i<=5?k++:k--;
        x=1;
        for(int j=1;j<=5 ;j++){
            if(j>=6-k){
                cout<<x;
                x++;
                
            }
            else{
                cout<<" ";
            }
        } cout<<"\n";
    } 



*/

/*

*********
**** ****
***   ***
**     **
*       *
**     **
***   ***
**** ****
*********


int k=0;
    for(int i=1; i<= 9;i++){
        i<=5?k++:k--;
        for(int j=1;j<=9 ;j++){
            if(j<=6-k || j>=4+k){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        } cout<<"\n";
    }
*/

/*
   A   
  ABA
 ABCBA
ABCDCBA

for(int i=1; i<= 4;i++){
        char ch='A';
        for(int j=1;j<=7 ;j++){
            if(j>=5-i && j<=3+i){
                cout<<ch;
                j<4?ch++:ch--;
            }
            else{
                cout<<" ";
            }
        } cout<<"\n";
    }
*/
/*
   A1   
  AB12
 ABC123
ABCD1234

for(int i=1; i<= 4;i++){
        char ch='A';
        for(int j=1;j<=8 ;j++){
            if(j>=5-i && j<=4+i){
                if(j==5)
                ch='1';
                cout<<ch;
                ch++;
            }
            else{
                cout<<" ";
            }
        } cout<<"\n";
    }

*/

/*
   ****
  ****
 ****
****

for(int i=1; i<= 4;i++){
        for(int j=1;j<=7 ;j++){
            if(j>=5-i && j<=8-i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        } cout<<"\n";
    }

*/

/*
   1   
  12A
 123AB
1234ABC

for(int i=1; i<= 4;i++){
        char ch='1';
        for(int j=1;j<=7 ;j++){
            if(j>=5-i && j<4+i){
                if(j==5)
                ch='A';
                cout<<ch;
                ch++;
            }
            else{
                cout<<" ";
            } 
*/

/*
1     
10
101
1010
10101
101010

for(int i=1; i<= 6;i++){
        int k=1;
        for(int j=1;j<=6 ;j++){
            if(j<=i){
                cout<<k;
               // j%2 == 0?k++:k--;
                k=1-k;
            }
            else{
                cout<<" ";
            }
        } cout<<"\n";
    }

*/

/*
A   
BA
CBA
DCBA

char ch;
    for(int i=1; i<= 4;i++){
        ch =64+i;
        for(int j=1;j<=4 ;j++){
            if(j<=i){
                cout<<ch;
                ch--;
            }
            else{
                cout<<" ";
            }
        } cout<<"\n";
    }
*/

/*
   1   
  212
 32123
4321234

for(int i=1; i<=4;i++){
        k=i;
        for(int j=1;j<=7;j++){
            if(j>=5-i && j<=3+i){
                cout<<k;
                j<4?k--:k++;
            }
            else{
                cout<<" ";
            }
        } cout<<"\n";
    }

*/

/*
1        
3*2
5*6*7
13*12*11*10
17*18*19*20*21

 int k=0,flag,p;
    for(int i=1; i<=5;i++){
        
        if(i%2 == 1)
            k=k+1;
        else{
            k--;
            k=k+i;}
        flag =1;
        p=k;
        for(int j=1;j<=9;j++){
            if(j<=2*i-1){
            if(flag ==1){
                cout<<p;
                if(i%2){
                p++;
                k++;}
                else
                    p--;
                }
            else{
                cout<<"*";
                k++;}
            flag = 1-flag;
            }
            else{
                cout<<" ";
            }

*/