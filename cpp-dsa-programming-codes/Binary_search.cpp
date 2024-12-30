#include<iostream>
#include<vector>
using namespace std;

void Binary_search_algo(vector<int> & array,int n, int key){
    n=array.size();
    int start=0;
    int end=n-1;
    while (start<=end)
    {
        int mid=(start+end)/2;
        if(array[mid]==key){
            cout<<"We got "<<key <<" at index: "<<mid;
            break;
        }
        else if (key>array[mid])
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        // start++;
        // end--;
    }
    
}

void print_array(vector<int> &array,int size){
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    
}
int main(){
    int size;
    int key;
    cout<<"enter size: ";
    cin>>size;
    vector<int> array(size);
    cout<<"enter elements of the array: ";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<"The array is: ";
    print_array(array,size);
    cout<<endl;
    cout<<"enter key to find: ";
    cin>>key;
    Binary_search_algo(array,size,key);
 
    
    return 0;
}