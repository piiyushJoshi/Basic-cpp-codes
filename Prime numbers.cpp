#include <iostream>
#include <cmath>

using namespace std;

int chk_prime(int z){
    int flag = 1;
    if(z==1)
        flag = 0;
    else if(z==2){
        flag = 1;
    }
    else{
    for(int i=2;i<=sqrt(z);i++){
        if(z%i == 0)
            flag = 0;
    }
    }
    return flag;
}

int main(){
    int a,b;
    cout<<"Enter the values of 'a' and 'b': "<<endl;
    cin>>a>>b;
    cout<<"Prime numbers between "<<a<<" and "<<b<<" will be:"<<endl;
    for(int i=a+1;i<b;i++){
        if(chk_prime(i) == 1)
            cout<<i<<endl;
    }
    
    return 0;
}
