#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n ;
    int t ;
    cin>>t ;
    for (int i = 0 ;i < t ; i++ ){
    cin>>n;
    long array[n];
    for (int i = 0 ;i < n ; i++ ){
        long j ;
        cin>>j;
        array[i]=j;
    
    }

    int larg ;
    for (int i = 1 ; i < n+1 ; i ++ ){
        long subarray[i];
        for (int j = 0 ; j < n-(i-1) ; j ++ ){
            for (int m = 0 ; m <= i - 1   ;  m++){
                subarray[m] =  array[j+m] ;
            }
            
            larg =  subarray[0];
            for (int k = 0 ; k < i ;  k++){
                if (subarray[k] > larg){
                larg = subarray[k] ;
            }
            }
            cout<<larg<<" " ;
            }
    }

cout << endl;
   }
return 0 ; 
}