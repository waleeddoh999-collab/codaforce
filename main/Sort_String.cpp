#include<iostream>
#include<string>
#include <cstring>
using namespace std;

int main(){
int n ; 
cin>>n ;
char c ; 

int freq[26] = {0};

for (int i = 0 ; i < n ; i++ ){
    cin>>c ;
    freq[c-'a'] += 1 ;
}
    


for (int i = 0 ; i < 26 ; i++ ){
    for (int j = 0 ; j < freq[i] ; j++ )
        cout<<char(i+'a');
    
}


return 0 ;
}


