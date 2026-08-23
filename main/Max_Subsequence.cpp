#include<iostream>
#include<string>
#include <cstring>
using namespace std;

int main(){
int n ; 
cin>>n ;
string a ;
cin>>a ;
int sizea = size(a) ;
if(sizea != n)
    return 1 ;

int count = 1 ;
for (int i = 1 ; i < sizea ; i++ ){
    if (a[i] != a[i-1]){
        count +=1 ;
    }

}
cout<<count;

return 0 ;
}


