#include<iostream>
#include<string>
using namespace std;

int main(){
string x , y ;
cin>>x>>y;
string small = x ;
if (x.size() > y.size() )
    small = y ; 

for (int i = 0 ; i < small.size() ; i++ ){
    if (x[i] == y[i]  )
        continue;
    else if (x[i] > y[i] ){
        cout<<y;
        return 0 ;
    }       
    else if (x[i] < y[i]){
        cout<<x;
        return 0 ;
}
}
cout<<small;


}


