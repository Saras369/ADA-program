#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;        // n -> size of array
    cin>>n;
    int arr[n];    // defining array

    for(int i=0;i<n;i++){   
        cin>>arr[i];
    }
//in insertion sort we sort the array from an unsorted array
    for(int i=1;i<n;i++){
        // current refers to the current element
        int current = arr[i];   
        // j refers to the previous of current element
        int j=i-1;              
        while(arr[j]>current && j>=0){
            //we place the current element at it's correct position in sorted array
            // 1 2 6 4 3 12  where 1 2 6 are sorted array and 4 3 12 are unsorted array
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }

    // printing the sorted array

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}