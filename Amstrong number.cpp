#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,i=0,sum = 0;
    cout<<"Enter a number: ";
    cin>>n;
    int temp = n;
    while(temp>0){
        i++;
        temp/=10;
    }
    temp = n;
    for(int j=0;j<i;j++){
        sum = sum + pow(n%10,i);
        n/=10;
    }
    if(sum==temp)
        cout<<"Entered number is Amstrong's number.";
    else
        cout<<"Entered number is not Amstrong's number.";
    
    return 0;
}
