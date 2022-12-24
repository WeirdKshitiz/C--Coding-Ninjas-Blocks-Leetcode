// //rotate the array
// #include <iostream>
// using namespace std;
// void rotateTheArray(int arr[],int d,int n){
//     int temp[n];
//     int k=0;
//     for(int i=d;i<n;i++){
//         temp[k]=arr[i];
//         k++;
//     }
//     for(int i=0;i<d;i++){
//         temp[k]=arr[i];
//         k++;
//     }
//     for(int i=0;i<n;i++){
//         arr[i]=temp[i];
//     }
// }
// void printTheArray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
// }
// int main(){
// int arr[]={1,2,3,4,5,6,7};
// int n=sizeof(arr)/sizeof(arr[0]);
// rotateTheArray(arr,4,n);
// printTheArray(arr,n);
// cout<<endl;
// return 0;
// }






//sieve of eratothenes
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[10000]={0};
// a[2]=1;
// for(int i=3;i<=n;i+=2){
//     a[i]=1;
// }
// for(int i=3;i*i<=n;i+=2){
//     if(a[i]==1){
//         for(int j=i*i;j<=n;j+=i*2){
//             a[j]=0;
//         }
//     }
// }
// for(int i=0;i<=n;i++){
//     if(a[i]!=0){
//         cout<<i<<" ";
//     }
// }
// cout<<endl;
// return 0;
// }




//leaders in array
// #include <iostream>
// using namespace std;
// void printLeaders(int arr[],int size){
//     for(int i=0;i<size;i++){
//         int j;
//         for(j=i+1;j<size;j++){
//             if(arr[i]<=arr[j])
//             break;
//         }
//         if(j==size)
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
// 	int arr[] = {16, 17, 4, 3, 5, 2};
// 	int n = sizeof(arr)/sizeof(arr[0]);
// 	printLeaders(arr, n);
// cout<<endl;
// return 0;
// }



//compressed string
// #include <iostream>
// using namespace std;
// void compressIt(string str){
//     int len=str.length();
//     for(int i=0;i<=len;i++){
//         int count=1;
//         while(i<len-1 && str[i]==str[i+1]){
//             count++;
//             i++;
//         }
//         if(count==1){
//             cout<<str[i];
//         }
//         else if(count==0){
//             cout<<str[i];
//         }
//         else {
//             cout<<str[i]<<count;
//         }
        
//     }
// }
// int main(){
// string str="wwwwaaadexxxxxxywww";
// compressIt(str);
// cout<<endl;
// return 0;
// }







//toggle all characters
// #include<bits/stdc++.h>
// using namespace std;
 
// void toggleChars(char str[])
// {
//     for (int i=0; str[i]!='\0'; i++)
//     {
//         if (str[i]>='A' && str[i]<='Z')
//             str[i] = str[i] + 'a' - 'A';
//         else if (str[i]>='a' && str[i]<='z')
//             str[i] = str[i] + 'A' - 'a';
//     }
// }
 
// // Driver code
// int main()
// {
//     char str[] = "GeKf@rGeek$";
//     toggleChars(str);
//     cout << "String after toggle " << endl;
//     cout << str << endl;
//     return 0;
// }




//highest occuring character

// #include <iostream>
// using namespace std;
// char maxOccuringChar(string str){
//     int ans;
//     int maxFreq=0;
//     int n=str.length();
//     int count[256]={0};
//     for(int i=0;i<n;i++){
//         count[str[i]]++;
//         if(count[str[i]]>maxFreq){
//             maxFreq=count[str[i]];
//             ans=str[i];
//         }
//     }
//     return ans;
// }
// int main(){
// string str="takeyouforwaard";
//  cout << "Maximum occurring character is " <<maxOccuringChar(str) << endl;
// cout<<endl;
// return 0;
// }




//remove character from string
// #include <iostream>
// using namespace std;
// int main(){
// string str;
// cin>>str;

// char c;
// cin>>c;

// string newstr="";
// for(int i=0;i<str.length();i++){
//     if(str[i]!=c){
//         newstr+=string(1,str[i]);
//     }
// }
// cout<<newstr;
// return 0;
// }




//min length word

// #include<iostream>
// #include<cstring>
// using namespace std;
// void minMaxLengthWords(string str){
//    int StrLength = str.length();

//    int startIndex = 0, endIndex = 0;
//    int minLength = StrLength, maxLength = 0, currentLength;
//    string smallest, largest;
//    while (endIndex <= StrLength){
//       if (str[endIndex] != '\0' && str[endIndex] != ' ')
//          endIndex++;
//       else{
//          currentLength = endIndex - startIndex;
//          if (currentLength < minLength){
//             smallest = str.substr(startIndex, currentLength);
//             minLength = currentLength;
//          }
//          if (currentLength > maxLength){
//             largest = str.substr(startIndex, currentLength);
//             maxLength = currentLength;
//          }
//          endIndex++;
//          startIndex = endIndex;
//       }
//    }
//    cout<<"Smallest Word from the string is "<<smallest<<"\n";
//    cout<<"Largest Word from the string is "<<largest;
// }
// int main() {
//    string a = "Learn Programming at TutorialsPoint";
//    minMaxLengthWords(a);
// }




//reverse a word in a string
// #include<iostream>
// using namespace std;
// string result(string s)
// {
//     int left = 0;
//     int right = s.length()-1;
    
//     string temp="";
//     string ans="";
    
//     //Iterate the string and keep on adding to form a word
//     //If empty space is encountered then add the current word to the result
//     while (left <= right) {
//         char ch= s[left];
//         if (ch != ' ') {
//             temp += ch;
//         } else if (ch == ' ') {
//             if (ans!="") ans = temp + " " + ans;
//             else ans = temp;
//             temp = "";
//         }
//         left++;
//     }
    
//     //If not empty string then add to the result(Last word is added)
//     if (temp!="") {
//         if (ans!="") ans = temp + " " + ans;
//         else ans = temp;
//     }
    
//     return ans;    
// }
// int main()
// {
//     string st="TUF is great for interview preparation";
//     cout<<"Before reversing words: "<<endl;
//     cout<<st<<endl;
//     cout<<"After reversing words: "<<endl;
//     cout<<result(st);
//     return 0;
// }





//remove consecutive duplicates
// #include <iostream>
// using namespace std;
// string removeDuplicates(string s){
//     int n=s.length();
//     string str="";

//     if(n==0){
//         return str;
//     }
//     for(int i=0;i<n-1;i++){
//         if(s[i]!=s[i+1]){
//             str+=s[i];
//         }
//     }
//     str.push_back(s[n-1]);
//     return str;
// }
// int main(){
// string s="aabcca";
// cout<<removeDuplicates(s)<<endl;
// return 0;
// }






//check Permutation

// #include <iostream>
// using namespace std;
// bool isPermutation(string str1,string str2){
//     int n1=str1.length();
//     int n2=str2.length();

//     if(n1!=n2)
//     return false;

//     sort(str1.begin(),str1.end());
//     sort(str2.begin(),str2.end());

//     for(int i=0;i<n1;i++){
//         if(str1[i]!=str2[i])
//         return false;
//     }
//     return true;
// }
// int main(){
// string str1="test";
// string str2="sett";
// if(isPermutation(str1,str2)){
//     cout<<"Yes";
// }
// else{
//     cout<<"No";
// }
// return 0;
// }






//form the largest number
// #include <iostream>
// #include <cmath>
// using namespace std;

// int no_of_digits(int n){
//     int count=0;
//     while(n>0){
//         count++;
//         n/=10;
//     }
// return count;
// }


// bool compare(int a,int b){
//     return a*pow(10,no_of_digits(b))+b>b*pow(10,no_of_digits(a));
//     //ye true ya false return kregi
// }



// void printa(int arr[],int n){
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
// }
// int main(){
// int arr[]={321,4532,67,234,89,34};
// int n=sizeof(arr)/ sizeof(int);
// sort(arr,arr+n,compare);
// printa(arr,n);
// cout<<endl;
// return 0;
// }







//BOSTON NUMBER

// #include <iostream>
// #include <cmath>
// using namespace std;
// int SumOfDigit(int n){
//     int sum=0;
//     while(n!=0){
//         int rem=n%10;
//         sum+=rem;
//         n/=10;
//     }
//     return sum;
// }
// int prime_factor(int n){
//     int sum=0;
//     for(int i=2;i<=sqrt(n);i++){
//         while(n%i==0){
//             n/=i;
//             sum+=SumOfDigit(i);
//         }
//     }
//     if(sum==0){
//         return sum;
//     }
//     if(n>1){
//         //agar hmara n ,1 se bda bch jaaye(koi factor bch jaaye) even after passing through functions,then we 
//         //need to pass it again in the SumOfDigit function again
//         sum+=SumOfDigit(n);
//     }
//     return sum;
// }
// void Boston_num(int n){
//     int sumn,sumPrime;
//     sumn=SumOfDigit(n);
//     sumPrime=prime_factor(n);

//     if(sumPrime==sumn){
//         cout<<1;
//     }
//     else{
//         cout<<0;
//     }
// }
// int main(){
// int n;
// cin>>n;
// Boston_num(n);
// cout<<endl;
// return 0;
// }







//print all substrings of a given array
// C++ program to print all possible
// substrings of a given string

// #include<iostream>
// #include <cstring>
// using namespace std;

// // Function to print all sub strings
// void subString(char str[], int n)
// {
// 	// Pick starting point
// 	for (int len = 1; len <= n; len++)
// 	{
// 		// Pick ending point
// 		for (int i = 0; i <= n - len; i++)
// 		{
// 			// Print characters from current
// 			// starting point to current ending
// 			// point.
// 			cout<<"value of len"<<len<<endl;
// 			int j = i + len - 1;		
// 			for (int k = i; k <= j; k++)
// 				cout << str[k];
			
// 			cout << endl;
// 		}
// 	}
// }

// // Driver program to test above function
// int main()
// {
// 	char str[] = "hello";
// 	subString(str, strlen(str));
// 	return 0;
// }




//remove spaces from string
// #include <iostream>
// using namespace std;
// char *removeSpaces(char *str){
//     int i=0;
//     int j=0;
//     while(str[i]){
//         if(str[i]!=' ')
//         str[j++]=str[i];
//         i++;
//     }
//     str[j]=' ';
//     return str;
// }
// int main(){
// char str1[]="gee k ";
// cout<<removeSpaces(str1);

// cout<<endl;
// return 0;
// }




// reverse a string
// #include <iostream>
// using namespace std;
// void getReverse(string &str,int i){
//     if(i>(str.length()-1-i)){
//         return;
//     }
//     swap(str[i],str[str.length()-i-1]);
//     i++;
//     getReverse(str,i);
// }
// int main(){
// string name="geeksforgeeks";
// getReverse(name,0);
// cout<<name<<endl;
// return 0;
// }





//replace a character
// #include <iostream>
// using namespace std;
// void replaceCharacter(char input[],char c1,char c2){
//     if(input[0]=='\0'){
//         return;
//     }
//     if(input[0]==c1){
//         input[0]=c2;
//     }
//     return replaceCharacter(input+1,c1,c2);
// }
// int main(){
// char str[]="abacd";
// char c1='a';
// char c2='x';
// cout<<"before replacing the character " ;
// cout<<str<<endl;
// replaceCharacter(str,c1,c2);
// cout<<"before replacing the character ";
// cout<<str;
// return 0;
// }

