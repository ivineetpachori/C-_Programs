#include <iostream>
using namespace std;
void reverseArray (int arr[], int n){
    int start =0;
    int end = n-1;
    while (start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[10]={1,22,55,56,85,57,58,82,96,100};
    reverseArray(arr,10);
    return 0;
}