#include<bits/stdc++.h>
using namespace std;
int main(){
    // string str1="-h-e--llo-";
    // int size=sizeof(str1)/sizeof(str1[]);
    string str1="apple";
    char ch1='a';
    char ch2='p';
    for(int i=0;i<(sizeof(str1)/sizeof(str1[0]));i++){
        if(str1[i]==ch1){
            str1[i]=ch2;
        }
        else if(str1[i]==ch2){
            str1[i]=ch1;
        }
    }
    cout<<str1<<endl;
    return 0;
}