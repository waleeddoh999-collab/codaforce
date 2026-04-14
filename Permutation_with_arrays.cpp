#include <iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int array1[n];
int array2[n];
for (int j =0 ; j < n ; j++)
    cin>>array1[j];

for (int j =0 ; j < n ; j++)
    cin>>array2[j];
    

int count = 0 ;
    for(int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++ ){
            if (array1[i] == array2[j]){
                array2[j] = 0 ;
                count += 1 ;
                break;
            }
            
        }
    }

if (count == n )
    cout<<"yes";
else
    cout<<"no";
    
return 0 ; 

}

