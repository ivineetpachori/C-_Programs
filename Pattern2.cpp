/* WAP to Print the Following Pattern 
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
Where n = 4  
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< " Enter n"<<endl;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while (col<=n){
            cout<< col ;
            col++;
        }
        cout<<endl;
        row++;

    }
    return 0;

}