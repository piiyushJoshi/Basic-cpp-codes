#include <iostream>

using namespace std;

// Euclid's Algorithm

int gcd(int a,int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}


//     LCM(a,b) * GCD(a,b) = a*b;
//     LCM(a,b) = a*b/GCD(a,b);
 
int main(){
    int a = 10,b = 9;
    cout<<"HCF or GCD of "<<a<<" and "<<b<<" = "<<gcd(a,b);
    cout<<"\nLCM of "<<a<<" and "<<b<<" = "<<(a*b)/gcd(a,b);

    return 0;
}
