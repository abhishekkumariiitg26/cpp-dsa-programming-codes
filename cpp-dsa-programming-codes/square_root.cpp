#include<iostream>
using namespace std;
int get_sq_root(int number){
    for (int i = 1; i <= number; i++)
    {
        if(i*i>=number){
            return i-1;
        }
    }
    
}
int main(){
    int number;
    cout<<"enter number to find the square root: ";
    cin>>number;
    cout<<get_sq_root(number);
    return 0;
}