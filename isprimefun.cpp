#include<iostream>
using namespace std;
int isprime(int num)
{
    if (num<=1){
        return false;}
    for (int i=2;i<=num/2;i++){
        if (num%i==0)
        return false;}
      return true; 
 }
 int main()
 {
    int number;
    cout<<"enter number : "; cin>>number;
    if (isprime(number)){
        cout<<"the number "<<number<<" is prime."<<endl;
    }
    else {
        cout<<"the number "<<number<<" is not prime."<<endl;
    }
    return 0;
 }