#include <iostream>
#include <vector>

using namespace std;

int fact(int n){
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}

int main(){
    int n,num;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Number of Possible combinations will be: "<<fact(n)/(fact(n-3)*fact(3))<<endl;
    //int nums[] = {-100,-98,-1,2,3,4};
    cout<<"Enter the elements: \n";
    vector<int> nums;
    for(int i=0;i<n;i++){
        cin>>num;
        nums.push_back(num);
    }
    cout<<"Combinations will be: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                cout<<"["<<nums[i]<<","<<nums[j]<<","<<nums[k]<<"]";
            }
            cout<<endl;
        }
    }

    return 0;
}
