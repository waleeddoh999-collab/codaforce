#include<iostream>
#include<string>
using namespace std;

int main(){
int n;
cin>>n;
string s ;
cin>>s;
int score  = 0 ;

for (int i = 0 ; i < n ; i++ ){
    if (s[i] == 'W' )
        score += 2 ;
    else if (s[i] == 'V' )
        score += 5 ;
    else if (s[i] == 'X' )
        i++;
    else if (s[i] == 'Y' ){
        s.push_back(s[i+1]);
        i++ ;
        n++ ;
    }
    else{
        if (s[i+1]=='V'){
            score /= 5;
            i ++ ;
        }
        else if (s[i+1]=='W'){
            score /= 2;
            i ++ ;
        }
    }
}
cout<<score ;
}


