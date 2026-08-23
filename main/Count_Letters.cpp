#include<iostream>
#include<string>
#include <cstring>
using namespace std;

int main(){
string a ;
int freq[26]={0};
cin>>a ;
for (int i = 0 ; i < size(a) ; i++ )
    freq[a[i]-'a'] += 1 ;

for (int i = 0 ; i < size(freq) ; i++ ){
    if(freq[i] != 0)
        cout <<char(i+'a')<<" : "<<freq[i]<<endl;
}
    
return 0 ;
}


