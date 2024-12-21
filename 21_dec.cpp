#include<iostream>
#include<vector>
using namespace std;

void rotateArrayto90(vector<vector<int>> &arr,int n){
    vector<vector<int>> temp(n,vector<int> (n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp[n-j-1][i] = arr[i][j];
        }
    }
    arr = temp;
}
int main(){
    int n;
    cout << "enter size of an array:";
    cin >> n;
    vector<vector<int>> arr(n,vector<int> (n));
    
    cout<<"enter all the elements of an array : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    rotateArrayto90(arr,n);
    cout <<"after rotate 90 degree : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }

}