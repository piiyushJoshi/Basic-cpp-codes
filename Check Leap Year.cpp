#include<iostream>
using namespace std;

class a{
    public:
    int leap(int n);
};
int a :: leap(int n){
    int temp = 0;
    if (n%400 == 0){
        temp = 1;
    }
    else if (n%100 == 0){
        temp = 0;
    }
    else if (n%4 == 0){
        temp = 1;
    }
    return temp;
}

int main()
{
    int year1;
    cout<<"Enter the year to be checked: ";
    cin>>year1;
    a a1;
    if (a1.leap(year1) == 0){
        cout<<year1<<" is not a leap year.";
    }
    else{
        cout<<year1<<" is a leap year.";
    }
    return 0;
}
