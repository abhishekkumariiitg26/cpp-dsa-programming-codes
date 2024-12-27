#include<iostream>
using namespace std;

int factorial ( int number ){
    if(number==0 || number == 1){
        return 1;
    }
    return number*factorial(number-1);
}

int count_trailing_zeroes(int number){
    int count=0;
    while(number>=5){
        count=number/5;
        number/=5;
    }
    return count;
}

int main(){
    int number;
    cout<<"enter number: ";
    cin>>number;
    int fact=factorial(number);
    cout<<fact<<endl;
    cout<<"now we find the number of trailing zeroes: ";
    cout<<count_trailing_zeroes(number);

    return 0;
}