#include <iostream>
using namespace std;
int main()
{
int n, m ;
cin>>n>>m;
char array[n][m];

for(int i = 0 ; i < n ; i++){
    for (int j = 0 ; j < m ; j++ )
        cin>>array[i][j];
}
int x , y ;
cin>>x>>y;
x-- , y-- ;
bool T = true ;


for (int k = x -1 ; k <= x +1 ; k++){
    for (int l = y - 1 ; l <= y + 1 ; l++){
        if ((k < n)&&(k >= 0)&&(l >= 0)&&(l < m)){
            if (array[k][l] != 'x'){
                if ((k == x)&&(l == y))
                        continue;
                    T = false ;
            }       
        }
     }
}
        
if (T)
    cout<<"yes";
else
    cout<<"no";

return 0 ; 
}

