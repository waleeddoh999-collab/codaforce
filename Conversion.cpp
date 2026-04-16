#include<iostream>
#include<string>
using namespace std;

int main(){
string a ;
cin>>a ;
for (int i = 0 ; i < size(a) ; i++ ){
    if(a[i] == ',')
        a[i] = ' ';
    else if (isupper(a[i]))
        a[i] = tolower(a[i]);
    else if (islower(a[i]))
        a[i] = toupper (a[i]);
}
cout<<a;
return 0 ;
}


