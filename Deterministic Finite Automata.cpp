
// Write a code for DFA which accepts all string over the regular language ---> a + (aa)* b 

#include <bits/stdc++.h>

using namespace std;

int main(){
    int state = 0;
    string input;
    cin>>input;
    for(char c : input){
        if(state == 0 && c == 'a'){
            state = 1;
            cout<<state<<"\n";
        }
        else if(state == 1 && c == 'a'){
            state = 2;
            cout<<state<<"\n";
        }
        else if(state == 2 && c == 'b'){
            state = 3;
            cout<<state<<"\n";
        }
        else if(state == 2 && c == 'a'){
            state = 5;
            cout<<state<<"\n";
        }
        else if(state == 5 && c == 'a'){
            state = 2;
            cout<<state<<"\n";
        }
        else{
            state = 4;
            cout<<state<<"\n";
            break;
        }
    }
    if(state == 1 || state == 2 || state == 3)
        cout<<"Accepted";
    else
        cout<<"Rejected";
}
