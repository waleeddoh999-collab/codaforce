#include <iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    long array[1000];
    for (int i = 0 ;i < n ; i++ ){
        long j ;
        cin>>j;
        array[i]=j;
    }
    int larg = array[0] , idxlarg = 0;
    int small = array[0] , idxsmall =0 ;
    int temp ;
    for (int i = 0 ; i < n ; i++ ){
        if (array[i] > larg){
            idxlarg = i ;
            larg = array[i];
        }
        
        else if (array[i] < small){
            idxsmall = i ;
            small = array[i] ;
        }
        } 
        temp = array[idxlarg];
        array[idxlarg] = array[idxsmall] ;
        array[idxsmall] = temp ;
        for (int i = 0 ; i < n; i++){
            cout<<array[i]<<" " ;

        }
        return 0 ; 
    }

