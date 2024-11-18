#include<iostream>
using namespace std;

int main(){
    int n,i,t1 = 0,t2 = 1,t3 = 0;
    cout<<"Enter any number: ";
    cin>>n;
    if(n<=0){
        cout<<"Invalid input!";
    }
    else if(n==1){
        cout<<"Fibonacci series will be: "<<t2;
    }
    else{
        cout<<"Fibonacci series will be: "<<t2;
        for(i=1;i<n;i++){
            t3 = t1+t2;
            t1 = t2;
            t2 = t3;
            cout<<" "<<t3;
        }
    }
    return 0;
}
