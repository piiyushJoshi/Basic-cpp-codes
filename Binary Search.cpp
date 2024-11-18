//          Binary Search

#include <bits/stdc++.h>

using namespace std;

int binary_search(vector<int> arr,int key){
    int mid,start = 0,end = arr.size()-1;
    
    while(start <= end){
        mid = start + (end - start)/2;
        if(arr[mid] == key)
            return mid;

        if(key>arr[mid])
            start = mid+1;
        else
            end = mid-1;

    }
    return -1;
}

int main(){
    vector<int> arr = {0,2,34,32,56,69,89,97,99,108};
    int key;
    cout<<"Enter a number to search: ";
    cin>>key;
    cout<<"Index of "<<key<<" is: "<<binary_search(arr,key);
    
    return 0;
}
