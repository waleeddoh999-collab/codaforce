#include<iostream>
using namespace std;
int r,c;
long long Summation (int [][100],int [][100],int row = 0,int column = 0);
int main (){
cin>>r>>c ;
int arrayA[100][100]={0};
int arrayB[100][100]={0};
for (int i = 0 ; i < r ; i++){
    for(int j = 0 ; j < c ; j++)
        cin>>arrayA[i][j];
}
for (int i = 0 ; i < r ; i++){
    for(int j = 0 ; j < c ; j++)
        cin>>arrayB[i][j];

}
cout<<Summation(arrayA,arrayB);
}
long long Summation (int A[][100],int B[][100],int row = 0,int column = 0){
if (row  == r && column == c )
    return A[row][column] + B[row][column] ;
    for (int i = row ; i <= row ; i++ ){ 
        for (int j = column ; j <= column;j++)
        return A[i][j] + B[i][j] +  Summation(A,B,row + 1,column +1) ;
    }
}