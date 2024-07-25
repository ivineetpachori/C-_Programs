#include <iostream>
using namespace std;
bool search(int arr[], int size, int key ){
    for (int i=0; i<size; i++){
        if (arr[i]== key){
            return 1;
        }
    }
    return 0;
}
int main (){
    int arr[10]={1,52,56,55,85,95,66,36,33,44};
    cout <<"Enter The Elment You want to search"<<endl;
    int key;
    cin>>key;
    bool found = search(arr, 10, key );
    if (found){
        cout << "The Key is Present in The Given Array"<< endl;
    }
    else {
        cout << " The Key is Not Presnet in the Array"<<endl;
    }
    return 0; 
}