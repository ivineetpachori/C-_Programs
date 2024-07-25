#include <iostream>
using namespace std;
firstOccurence(int arr[], int key, int n){
    int start = 0;
    int end = n-1;
    int mid = start+(end - start)/2;
    int ans = -1;
    while (start <= end ){
        if(arr[mid]== key){
            ans = mid;
            end=mid-1;
        }
        else if (key>arr[mid]){
            start=mid+1;
        }
        else if (key < arr[mid]){
            end=mid-1;
        }
        mid = start+(end - start)/2;
    }
    return ans;
}
lastOccurence(int arr[], int key, int n){
    int start = 0;
    int end = n-1;
    int mid = start+(end - start)/2;
    int ans = -1;
    while (start <= end ){
        if(arr[mid]== key){
            ans = mid;
            start=mid+1;
        }
        else if (key>arr[mid]){
            start=mid+1;
        }
        else if (key < arr[mid]){
            end=mid-1;
        }
        mid = start+(end - start)/2;
    }
    return ans;
    }
int main(){
    int even [5]={1,2,6,6,9};
    cout << " First Occurence Of 6 is "<<firstOccurence(even, 6, 5)<< endl;
    cout << "Last Occurence Of 6 is "<<lastOccurence(even,6,5)<< endl;
    return 0;
}