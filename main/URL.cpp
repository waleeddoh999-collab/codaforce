#include<iostream>
#include <iomanip>
using namespace std;
int main(){
string s , key, value;
cin>> s;
for (int i = 0 ; i < s.size() ; i++){
    key ="", value="" ;
    if (s[i]=='?' ||s[i]=='&' ){
        while (s[i+1] != '='){
            key += s[i+1] ;
            i++ ;
        }
        i++;
        while (s[i+1] != '&' && i +1 != s.size()){
            value += s[i+1] ;
            i++ ;
        }
        cout<<key<<": "<<value<<endl;
    }

}

}
