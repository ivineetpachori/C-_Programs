#include <iostream>
using namespace std;
void swapAlternate (int arr[], int size){
    for (int i=0; i<size; i+=2){
        if (i+1<size){
            swap(arr[i], arr[i+1]);
        }
    }
}
void printArray (int arr[], int n){
    for (int i=0; i<n; i++){
        cout << arr[i]<< " ";
        cout << endl;
    }
}
int main(){
    int even[6] ={1,5,6,7,8,9};
    int odd[5] = {2,5,6,4,5};
    swapAlternate(even,6);
    printArray(even,6);
    cout<< endl;
    swapAlternate(odd,5);
    printArray(odd,5);
    return 0;
}