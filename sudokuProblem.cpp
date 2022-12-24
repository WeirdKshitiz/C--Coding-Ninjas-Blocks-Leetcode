// #include <iostream>
// using namespace std;
// bool isSafe(int sudoku[100][100],int n,int i,int j,int number){
//     //vertical check
// for(int k=0;k<i;k++){
//     if(sudoku[k][j]==number){
//         return false;
//     }
// }
// //horizontal checkl
// for(int l=0;l<n;l++){
//     if(sudoku[i][l]==number){
//         return false;
//     }
// }

// //box check
// int boxi=i-i%3;
// int boxj=j-j%3;
// for(int k=0;k<3;k++){
//     for(int l=0;l<3;l++){
//         if(sudoku[k][j])
//     }
// }

//     //diagonal check
// }
// bool sudokuSolver(int sudoku[100][100],int n,int i,int j){
//     //base caee
// if(i==n){
// printboard(sudoku,n);
// return true;
// }

// if(j==n){
//     return sudokuSolver(sudoku,n,i+1,0);
// }

//     //recursive case
//     if(sudoku[i][j]!=0){
//         return sudokuSolver(sudoku,n,i,j+1);
//     }
//     for(int number=1;number<10;number++){
//         if(isSafe(sudoku,n,i,j,number))
//         {
//             sudoku[i][j]=number;
//             if(sudokuSolver(sudokui,n,i,j+1)){
//                 return true;
//             }
//             sudoku[i][j]
//         }
//     }
// }
// int main(){
// int sudoku[100][100]={
//     {4,0,9,5,7,0,3,0,0},
//     {7,0,0,4,0,0,2,6,0},
//     {2,0,8,0,0,0,9,0,4},
//     {9,0,0,0,0,1,5,3,2},
//     {0,2,3,9,0,0,1,0,0},
//     {0,1,0,3,2,4,0,0,0},
//     {8,4,5,0,0,0,0,0,9},
//     {0,7,7,1,9,5,0,0,0},
//     {0,0,0,0,4,6,0,5,3}
// };
// int n=9;
// sudokuSolver(sudoku,n,0,0);
// cout<<endl;
// return 0;
// }