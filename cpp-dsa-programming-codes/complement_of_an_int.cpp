#include<iostream>
using namespace std;
int complement(int number){
    if (number==0){
            return 1;
        }
    int rem;
    int ans=0;
    int mul=1;
    while (number)
    {
        rem=number%2;
        rem=rem^1;
        number/=2;
        ans=ans+rem*mul;
        mul*=2;

    }
    return ans;
    
}
int main(){
    int number;
    cout<<"enter number: ";
    cin>>number;
    cout<<complement(number);

    return 0;
}