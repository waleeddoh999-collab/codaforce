#include<iostream>
#include<string>
using namespace std;

int main(){
string a ,p ;
cin>>a ;
p = a ;
int length = size(a) -1 ;
for (int i = length , j = 0 ; i > 0 ; i-- , j++)
    p[i]=a[j];

if(a == p)
    cout<<"YES";
else
    cout<<"NO";

}


