#include<iostream>
#include <iomanip>
using namespace std;
int main(){
string s ;
string Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"; 
int q ;
cin>>q;

if (q == 1){
cin>> s;
for (int i = 0 ; i < s.size() ; i++){
    for (int j = 0 ; j < Original.size();j++){
        if(Original[j] ==s[i] ){
            cout<<Key[j];
            break;
        }
    }
}
}
else if (q == 2){
cin>> s;
for (int i = 0 ; i < s.size() ; i++){
    for (int j = 0 ; j < Key.size();j++){
        if(Key[j] ==s[i] ){
            cout<<Original[j];
            break;
        }
    }
}
}
}
