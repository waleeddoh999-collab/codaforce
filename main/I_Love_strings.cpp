#include<iostream>
#include<string>
#include <cstring>
using namespace std;

int main(){
int t ;
string a ,b , s , l;
cin>>t ;
for (int i = 0 ; i < t ; i++ ){
    cin>>a>>b; 


    if(size(a) == size(b)){
        for (int i = 0 ; i < size (a); i++)
        cout<<string(1,a[i])+string(1,b[i]);
    }
    else{
        string larg = a , small = b ;
        if (size(a) < size(b)){
            larg = b;
            small = a;
        }
        int sizesm = size(small) , sizela = size(larg) ;
        for (int i = 0 ; i < sizesm ; i++)
            cout<<string(1,a[i])+string(1,b[i]);
        for (int i = sizesm  ; i < sizela  ; i++)
            cout<<string(1,larg[i]);

    } 


    cout<<endl;

}


return 0 ;
}


