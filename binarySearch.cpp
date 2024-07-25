#include <iostream>
using namespace std;
int binarySearch (int arr[], int size, int key){
    int s = 0;
    int e = size-1;
    int mid = s+(e-s)/2;
    while (s<=e){
    if (arr[mid] == key){
        return mid;
    }
    // Go to Right wala Part;
    if (key >arr[mid]){
        s = mid + 1;
    }
    else {
        e = mid - 1; 
    }
    mid= (s+e)/2;
    }
    return -1 ;
}
int main(){
    int even[6]= { 1,5,6,7,8,9};
    int odd [5]= {2,30,52,55,85};
    int index = binarySearch(even, 6, 5);
    cout << "The index of 5 is "<< index << endl;
    int oddIndex = binarySearch(odd, 5, 85);
    cout<< " The index of 85 is "<< oddIndex << endl; 
    return 0;
}