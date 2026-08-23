#include<iostream>
#include<string>
using namespace std;

int main(){
string s , split = "";
cin>>s;
string splits[1000];
int blance = 0 , c = 0;
for (int i = 0 ; i < s.size(); i++){
    split += s[i];
    if(s[i] == 'L')
        blance++;
    else 
        blance--;
    if (blance == 0){
        splits[c] = split ;
        split ="";
        c++ ;
    }
}
    cout<<c<<endl;
    for (int i = 0 ; i < c ; i++)
        cout<<splits[i]<<endl;


}


