#include<iostream>
#include<string>
using namespace std;

int main(){
int t ;
string a ;
cin>>t ;
for (int i = 0 ; i < t ; i++ ){
    cin>>a ;
    int length = size(a);
    if (length > 10 )
        cout<<a[0]<<length - 2<<a[length-1]<<endl;
    else
    cout<<a<<endl;
}
    return 0 ;
}


