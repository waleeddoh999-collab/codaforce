#include <iostream>
#include <string>
using namespace std;
int main()
{
int a , b ;
cin>>a >> b ;
string s ;
cin>> s ;
if (size(s) != a+b+1 ){
    cout<<"No"; 
    return 0 ; 
}
if (s[a] != '-'){
    cout<<"No"; 
    return 0 ; 

}

for (int i = 0 ; i <a+b+1 ; i++ ){
    if ((s[i] < '0' )||(s[i] > '9')){

            if (i == a)
            continue;

            cout<<"No"; 
            return 0 ;   
      }
    
}
cout<<"Yes";
return 0 ; 

}

