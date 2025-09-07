#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string:";
    cin>>str;
    int left=0,right=sizeof(str)-1;
    while(left<right){
        if(str[left]!=str[right]){
            cout<<"false";
            return 0;
        }
    }
    cout<<"true";
    return 0;
}