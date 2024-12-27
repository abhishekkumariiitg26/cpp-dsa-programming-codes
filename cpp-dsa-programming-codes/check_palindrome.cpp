#include<iostream>
using namespace std;

bool check_palindrome(int number){
    int ans=0;
    int rem;
    int original=number;
    while (number!=0)
    {
        rem=number%10;
        number/=10;
        ans=ans*10+rem;
    }
    return original==ans;
    
}
int main(){
    int number;
    cout<<"enter number to check palindrome:";
    cin>>number;
    if(check_palindrome(number)){
        cout<<"yes palindrome.";
    }
    else{
        cout<<"no palindrome";
    }
    
    
    return 0;

}