#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
string s ;
while(getline(cin,s)){

    
long long size = s.size();
for(int i = 0 ; i < size ; i++){
    if (s[i]=='/' && s[i+1]=='/'){
        while(s[i] !='\n')
                i++;
            continue;
    }
    else if (s[i]=='/' && s[i+1]=='*'){
        i += 2;
        while(s[i] !='*' && s[i+1] !='/')
                i++;
        i++ ;
        continue;
    }

    cout<<s[i];
}
}
}
