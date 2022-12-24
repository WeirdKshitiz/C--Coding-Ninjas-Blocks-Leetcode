#include <iostream>
using namespace std;

int main(){
int n;
cin>>n;
int n1 = n;
int quo = 0;
int sum = 0; 
int i = 2;
while(quo != 1)
{
    if(n%i == 0)
    {
        quo = n/i;
        n = quo;
        sum+=i;
    }
    else
    {
        i++;
    }
}
int digit = 0;
int sum1 = 0;
while(n1 > 0)
{
    digit = n1%10;
    sum1+=digit;
    n1 = n1/10;
}
if(sum == sum1)
{
    cout<<"The given number is Boston Number"<<endl;
}
else
{
    cout<<"The given number is not Boston Number"<<endl;
}

return 0;
}