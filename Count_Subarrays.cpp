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

        int small ;
        int num = 0 , count= 0  ;
        for (int i = 1 ; i < n+1 ; i ++ ){
            long subarray[i];
            for (int j = 0 ; j < n-(i-1) ; j ++ ){
                for (int m = 0 ; m <= i - 1   ;  m++){
                    subarray[m] =  array[j+m] ;
                }
                if (i != 1){
                    for (int m = 1 ; m <= i - 1   ;  m++){
                        if (subarray[m-1] < subarray[m] )
                            count++ ;
            }
            }            
            
                if (count == i -1 )
                    num++ ;
                    count= 0 ;
                }
    }

cout <<num<<endl;
}
return 0 ; 
}