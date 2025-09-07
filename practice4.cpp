#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string:";
    cin>>str;
    int left=0,right=str.length()-1;
        while(left<right){


        if(str[left]!=str[right]){


            cout<<"Is it palindrome:No";


            return 0;


        }


        left++;right--;


    }
    cout<<"Is it palindrome:Yes";
    return 0;
}