#include <iostream>
using namespace std;
class shop
{
    int item_no[100];
    int item_price[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setprice();
    void displayprice();
};

void shop ::setprice()
{
    cout << "enter id for item no" << counter + 1 << ": " << endl;
    cin >> item_no[counter];
    cout << "enter price for ur item: " << endl;
    cin >> item_price[counter];
    counter++;
}

void shop ::displayprice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << item_no[i] << " : " << item_price[i]<<endl;
    }
}

int main()
{
    shop num1;
    num1.initcounter();
    num1.setprice();
    num1.setprice();
    num1.setprice();
    num1.setprice();
    num1.displayprice();
}