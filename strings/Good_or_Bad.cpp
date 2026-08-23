#include<iostream>
#include<string>
#include <cstring>
using namespace std;

int main(){
int t ;
string a ;
cin>>t ; 
for (int k = 0 ; k < t ; k++ ){
cin>>a ;
if (size(a) < 3) {
    cout << "Bad";
    return 0;
}
bool status = false ;
for(int i = 0 ; i <= size(a)-3 ; i++ ){
    
    if (string(1, a[i])+string(1, a[i+1])+string(1,a[i+2]) == "010"){
        status = true ;
        break;
    }
    else if (string(1, a[i])+string(1, a[i+1])+string(1,a[i+2]) == "101"){
        status = true ;
        break;
    } 
}

if (status)
    cout<<"Good"<<endl;
else
    cout<<"Bad"<<endl;
}

return 0 ;
}


