#include<iostream>
#include <algorithm>
using namespace std;
int main(){
string s , split1="",split2 ,small ;
cin>> s;
small =s ;
for(int i = 0 ; i < s.size()-1;i++){
    split1 += s[i];
    split2="";
    for(int j = i+1 ; j<s.size() ;j++ )
        split2 += s[j];
    sort(split1.begin(), split1.end());
    sort(split2.begin(), split2.end());
    if(split1+split2 < small)
        small =split1+split2;
    
}
cout<<small;
}
