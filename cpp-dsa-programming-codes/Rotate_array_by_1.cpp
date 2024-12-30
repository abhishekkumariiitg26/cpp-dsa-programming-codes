#include<iostream>
#include<vector>
using namespace std;

void rotate_array(vector<int> &array, int size){
    int temp;
    temp=array[size-1];
    for (int  i = (size-2); i >=0 ; i--)
    {
        array[i+1]=array[i];
    }
    array[0]=temp;
    
}

void print_array(vector<int> &array,int size){
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    
}
int main(){
    int size;
    cout<<"enter size: ";
    cin>>size;
    vector<int> array(size);
    cout<<"enter elements of the array: ";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<"The array is: ";
    print_array(array,size);
    cout<<"rotated array is: ";
    rotate_array(array,size);
    print_array(array,size);
    
    return 0;
}