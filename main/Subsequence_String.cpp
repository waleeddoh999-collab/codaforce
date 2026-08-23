#include<iostream>
#include<string>
#include <cstring>
using namespace std;

int main(){
string a , h = "hello";
cin>>a ;

int count = 0 ;
int index = -1 ;
int sizeh = size(h), sizea = size(a) ;
for (int i = 0 ; i < sizeh ; i++ )
for(int j = 0 ; j < sizea ; j++ ){
    
    if ((h[i] ==a[j] )&&(j > index)){
        count += 1 ;
        index = j ;
        break;
    }
}
if (count == sizeh )
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;


return 0 ;
}


