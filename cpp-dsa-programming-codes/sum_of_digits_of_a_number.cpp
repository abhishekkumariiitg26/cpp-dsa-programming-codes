#include<iostream>
using namespace std;
int main(){
    int num=5;
    int sum=0;
    while (num!=0)
    {
        int rem=num%10;
        num/=10;
        sum+=rem;
        
    }
    int new_sum=0;
    while (sum!=0)
    {
        int new_rem=sum%10;
        sum/=10;
        new_sum+=new_rem;
        
    }
    cout<<new_sum;
    
    return 0;
}