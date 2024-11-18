//          Linear Search

#include <bits/stdc++.h>

using namespace std;

int linear_search(vector<int> arr,int key){
    for(int i=0;i<arr.size();i++){
        if(arr[i] == key){
            return i;
            break;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {5,97,56,34,0,78,34,64,69,2};
    int key;
    cout<<"Enter a number to search: ";
    cin>>key;
    cout<<"Index of "<<key<<" is: "<<linear_search(arr,key);
    
    return 0;
}
