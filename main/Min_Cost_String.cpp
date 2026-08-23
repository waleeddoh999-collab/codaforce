#include<iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
string s ;
cin>> s;
int array[26] ;
for(int i = 0 ; i < 26 ; i++)
    cin>>array[i];

for (int i = 0 ; i<s.size();i++){
    if(s[i]=='?'){
        int j = i;
        while(j < s.size() && s[j]=='?')
            j++;
        char L = (i-1 >= 0 ? s[i-1] : '?');
        char R = (j <s.size() ? s[j] : '?');
        int small =INT_MAX ;
        char bestchar = 'z';
        for (int k = 0 ; k < 26 ; k++){
            int cost = 0 ;
            if(L != '?')
                cost +=abs(array[k]-array[L-'a']);
            if(R != '?')
                cost+=abs(array[k]-array[R-'a']);

            if(cost < small ||(small == cost && k+ 'a'<bestchar)){
                small = cost;
                bestchar = k+ 'a' ;
            }
            
        }
        for (int m = i; m < j ; m++)
             s[m]=bestchar ;
           
             i = j - 1 ;       
    }
        
}
int cost = 0 ;
for (int i = 0 ; i < s.size()-1; i++){
cost+= abs(array[s[i]-'a']-array[s[i+1]-'a']);
}
cout<<s<<endl<<cost;

}
