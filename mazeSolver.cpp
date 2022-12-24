//Q.IF PATH EXISTS RETURN 1 ELSE 0


// #include <iostream>
// using namespace std;
// bool findPath(int maze[][20],int n,int x,int y,int path[][20]){
//    // x and y denotes which cell we are on 


// //first check if x and y are within bounds or not
// if(x<0||x>=n||y<0||y>=n){
//     //that means  you are out of bound
//     //so return false;
//     return false;
// }
// if(x==n-1 && y==n-1){
//     return true;
// }
// if(maze[x][y]==0||path[x][y]==1){
//     //it means hum dead end pe phunch gye hain
//     //so return false
//     //or
//     //agar hum apna path traverse kr chuke hain to humein uspe dubara nhi
//     //jana chahiye
//     return false;
// }


// // since humne isko path mein consider kr liya hai
// // to hum ise 1 krdenge
// path[x][y]=1;
// //then hum decide krenge ki konsa path dena hai isko
// //right
// if(findPath(maze,n,x,y+1,path)){
//     path[x][y]=0; //reset kr rhe hain value
//     return true;
// }
// //left
// if(findPath(maze,n,x,y-1,path)){
//      path[x][y]=0; //reset kr rhe hain value
//     return true;
// }
// //top
// if(findPath(maze,n,x-1,y,path)){
//      path[x][y]=0; //reset kr rhe hain value
//     return true;
// }
// //bottom
// if(findPath(maze,n,x+1,y,path)){
//      path[x][y]=0; //reset kr rhe hain value
//     return true;
// }
// path[x][y]=0;
// return false;

 
// }




// bool findPath(int maze[][20],int n){
// int path[20][20]={0};
// return findPath(maze,n,0,0,path);




// }
// int main(){
// int n=3;
// int maze[20][20]={{1,1,0},{1,1,0},{0,1,1}};
// cout<<findPath(maze,n);
// return 0;
// }









//Q.PRINT THE PATH(only 1)

// #include <iostream>
// using namespace std;
// bool findPath(int maze[][20],int n,int x,int y,int path[][20]){
//    // x and y denotes which cell we are on 


// //first check if x and y are within bounds or not
// if(x<0||x>=n||y<0||y>=n){
//     //that means you are out of bound
//     //so return false;
//     return false;
// }
// if(x==n-1 && y==n-1){
//     //jb hum us path pe phunch gye hain to mark it
//     //as 1
// path[x][y]=1;


//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<path[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     return true;
// }
// if(maze[x][y]==0||path[x][y]==1){
//     //it means hum dead end pe phunch gye hain
//     //so return false
//     //or
//     //agar hum apna path traverse kr chuke hain to humein uspe dubara nhi
//     //jana chahiye
//     return false;
// }


// // since humne isko path mein consider kr liya hai
// // to hum ise 1 krdenge
// path[x][y]=1;
// //then hum decide krenge ki konsa path dena hai isko
// //right
// if(findPath(maze,n,x,y+1,path)){
//     path[x][y]=0; //reset kr rhe hain value
//     return true;
// }
// //left
// if(findPath(maze,n,x,y-1,path)){
//      path[x][y]=0; //reset kr rhe hain value
//     return true;
// }
// //top
// if(findPath(maze,n,x-1,y,path)){
//      path[x][y]=0; //reset kr rhe hain value
//     return true;
// }
// //bottom
// if(findPath(maze,n,x+1,y,path)){
//      path[x][y]=0; //reset kr rhe hain value
//     return true;
// }
// path[x][y]=0;
// return false;

 
// }




// bool findPath(int maze[][20],int n){
// int path[20][20]={0};
// return findPath(maze,n,0,0,path);




// }
// int main(){
// int n=3;
// int maze[20][20]={{1,1,0},{1,1,0},{0,1,1}};
// cout<<findPath(maze,n);
// return 0;
// }









//Q.PRINT ALL PATHS;
//important changes
// bool to void
// only return not return true or return false




#include <iostream>
using namespace std;
void findPath(int maze[][20],int n,int x,int y,int path[][20]){
   // x and y denotes which cell we are on 


//first check if x and y are within bounds or not
if(x<0||x>=n||y<0||y>=n){
    //that means you are out of bound
    //so return ;
    return ;
}
if(x==n-1 && y==n-1){
    //jb hum us path pe phunch gye hain to mark it
    //as 1
path[x][y]=1;


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<path[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return ;
}
if(maze[x][y]==0||path[x][y]==1){
    //it means hum dead end pe phunch gye hain
    //so return false
    //or
    //agar hum apna path traverse kr chuke hain to humein uspe dubara nhi
    //jana chahiye
    return ;
}


// since humne isko path mein consider kr liya hai
// to hum ise 1 krdenge
path[x][y]=1;
//then hum decide krenge ki konsa path dena hai isko

//right
findPath(maze,n,x,y+1,path);
 //left
findPath(maze,n,x,y-1,path);
//top
findPath(maze,n,x-1,y,path);
//bottom
findPath(maze,n,x+1,y,path);

path[x][y]=0;
}

void findPath(int maze[][20],int n){
int path[20][20]={0};
findPath(maze,n,0,0,path);

}
int main(){
int n=3;
int maze[20][20]={{1,1,0},{1,1,0},{0,1,1}};
findPath(maze,n);
return 0;
}