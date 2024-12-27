#include<iostream>
using namespace std;
int get_rev_number(int number){
    int rev_number=0;
    while (number!=0)
    {
        int rem=number%10;
        number/=10;
        rev_number=rev_number*10+rem;
    }
    return rev_number;
    
}
int main(){
    int number;
    cout<<"enter number: ";
    cin>>number;
    cout<<get_rev_number(number);
    return 0;
}