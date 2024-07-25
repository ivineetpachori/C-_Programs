/* WAP to Print the Following Pattern 
* 
* * 
* * * 
* * * *
Where n = 4  
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n"<<endl;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while (col<=row){
            cout<<" * ";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
      
}