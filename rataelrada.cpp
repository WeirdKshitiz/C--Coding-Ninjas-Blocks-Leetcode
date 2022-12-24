// #include <iostream>
// using namespace std;


// void printSolution(int** solution,int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<solution[i][j]<<" ";
//         }
//     }
//     cout<<endl;
// }



// void mazeHelp(int maze[][20],int n,int** solution,int x,int y){

// if(x==n-1 && y==n-1){
//     solution[x][y]=1;
//     printSolution(solution,n);
//     return;
// }

//     if(x>=n || x<0 ||y>=n || y<0 || maze[x][y]==0 || solution[x][y]==1){
//         return;
//     }
//     solution[x][y]=1;
//     mazeHelp(maze,n,solution,x-1,y);//up
//     mazeHelp(maze,n,solution,x+1,y);//down
//     mazeHelp(maze,n,solution,x,y-1);//left
//     mazeHelp(maze,n,solution,x,y+1);//bottom

//     solution[x][y]=0; //baad mein 0 krdo
// }




// void ratInAMaze(int maze[][20],int n){
//     int** solution=new int*[n];
//     for(int i=0;i<n;i++){
//         solution[i]=new int[n];
//     }
//     mazeHelp(maze,n,solution,0,0);
// }
// int main(){
// int N;
// cin>>N;
//  int maze[20][20] = { { 1, 0, 0, 0 },
//                        { 1, 1, 0, 1 },
//                        { 0, 1, 0, 0 },
//                        { 1, 1, 1, 1 } };
    
//   ratInAMaze(maze,N);

// cout<<endl;
// return 0;
// }
















#include <iostream>
using namespace std;
//dynamically memory allocate kr rhe hain
//hum so that's why ** is used

//x and y denotes konse hum particular block
//ke liye check kr rhe hain

//aur n hoga us matrix ka size(ismein hum square matrix hi use kr rhe hain)
bool isSafe(int** arr,int x,int y,int n){
    if(x<n && y<n && arr[x][y]==1){
        return true;
    }
    return false;
}


bool ratinMaze(int** arr,int x,int y,int n,int** solArr){
   
   //base condition
   //agar rat apni shi pposition pe phunch gya hai ti return true
   if(x==n-1 && y==n-1){
    solArr[x][y]=1;
    return true;
   }
   
   
   
    if(isSafe(arr,x,y,n)){
solArr[x][y]=1;
//for down
if(ratinMaze(arr,x+1,y,n,solArr)){
    return true;
}
//for right
if(ratinMaze(arr,x,y+1,n,solArr)){
    return true;
}

//agar answer nhi mila to backktrack
//aur apni solution array mein jinko humne 1 set krliya that
//unhein 0 krdenge

solArr[x][y]=0;    //backtracking
return false;
    }
    //agar issafe bhi nhi aata to bhi isfalse krdo
    return false;
}
int main(){

    int n;
    cin>>n;
    int** arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
        //is se hmari memory allocate hogyi
        //of size n*n
    }

       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
cin>>arr[i][j];
        }
    }

    int** solArr=new int*[n];
    for(int i=0;i<n;i++){
        solArr[i]=new int[n];
        for(int j=0;j<n;j++){
            solArr[i][j]=0;
        }
    }

    if(ratinMaze(arr,0,0,n,solArr)){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<solArr[i][j]<<" ";
            }
           cout<<endl; 
        }
    }

return 0;
}