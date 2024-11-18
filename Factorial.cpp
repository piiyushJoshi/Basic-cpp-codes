#include <bits/stdc++.h>

using namespace std;

int main(){
    int i,n,fact = 1;
    cout<<"Enter any number: ";
    cin>>n;
    if(n<0){
        cout<<"Invalid input!";
    }
    else{
    for(i=1;i<=n;i++){
        fact *= i;
    }
    cout<<"Factorial of "<<n<<" is: "<<fact;
    }
    return 0;
}
