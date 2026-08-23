#include<iostream>
#include <iomanip>
using namespace std;
int main(){
string s ,compare;
cin>> s;
for (int i = 0 ; i < s.size() ; i++){
    compare = "";
    if (s[i] == 'E'){
        int j ;
        for (j = i ; j < i+5 ; j ++){
            if (j == s.size())
                break;
            compare += s[j];
        }
        if (compare == "EGYPT"){
            cout<<" ";
            i = j-1 ;
            continue;
        }
        else{
            cout<<s[i];  
            continue;
        }
              
    }
    cout<<s[i]; 
    
}

}
