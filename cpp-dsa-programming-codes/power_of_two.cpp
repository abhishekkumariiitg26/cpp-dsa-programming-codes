#include<iostream>
using namespace std;
bool power_of_two(int number){
    if(number<=0){
        return false;
    }
    while (number!=1)
    {
        if(number%2==1){
            return false;
        }
        number/=2;
    }
    return true;
    
}
int main(){
    int number;
    cout<<"enter number to check whether it is power of 2 or not: ";
    cin>>number;
    if(power_of_two(number)){
        cout<<"Yes power of two";
    }
    else{
        cout<<"Not power of two";
    }
    return 0;
}