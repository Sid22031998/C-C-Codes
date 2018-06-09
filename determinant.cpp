// C++ program to find Deteminant of a matrix
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int N ;
void getCofactor(int **mat, int **temp, int p, int q, int n)
{
int i = 0, j = 0;
for (int row = 0; row < n; row++)
{
for (int col = 0; col < n; col++)
{
if (row != p && col != q)
{
temp[i][j++] = mat[row][col];
if (j == n - 1)
{
j = 0;
i++;
}
}
}
}
}
int determinantOfMatrix(int **mat, int n)
{
int D = 0; 
if (n == 1)
return mat[0][0];
int **temp;
temp = new int*[N];
for(int i = 0; i < N; i++)
{
temp[i] = new int[N];
}
int sign = 1; 
for (int f = 0; f < n; f++)
{
getCofactor(mat, temp, 0, f, n);
D += sign * mat[0][f] * determinantOfMatrix(temp, n - 1);
sign = -sign;
}
return D;
}
void display(int **mat, int row, int col)
{
	cout<<"\n\nThe Matrix is : \n\n";
for (int i = 0; i < row; i++)
{
for (int j = 0; j < col; j++)
cout<<"\t "<<mat[i][j];
cout<<"\n";
}
}
int main(){
cout<<"Input the value of N (size of the array will be N*N): ";
cin>>N;
int **Mat;
Mat = new int*[N];
for(int i = 0; i < N; i++)
{
Mat[i] = new int[N];
}
cout<<"\n\nInput Data In The Matrix :\n\n\n";
for(int i = 0 ; i<N;i++){
for(int j = 0; j < N; j++) {
cout<<"Input at "<<i+1<<j+1<<" position: ";
cin>>Mat[i][j];
}
}
display(Mat,N,N);
cout<<"Determinant of the matrix is : "<<determinantOfMatrix(Mat, N);
return 0;
}
