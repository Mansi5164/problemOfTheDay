#include<iostream>
#include<vector>
using namespace std;
void changeCol(vector<vector<int>> &arr,int col){
        for(int i=0;i<arr.size();i++){
            arr[i][col] = 0;
        }
    }
    void changeRow(vector<vector<int>> &arr,int row){
        for(int i=0;i<arr[0].size();i++){
            arr[row][i] = 0;
        }
    }
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
        int row = mat.size();
        int col = mat[0].size();
        int column[col] = {0};
        int rows[row] = {0};
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(mat[i][j]==0){
                   rows[i]=1;
                   column[j]=1;
                }
            }
        }
        for(int i=0;i<row;i++){
            if(rows[i]==1){
                changeRow(mat,i);
            }
        }
        for(int i=0;i<col;i++){
            if(column[i]==1){
                changeCol(mat,i);
            }
        }
        
    }
int main(){
    int n,m;
    cout << "enter number of rows and column:";
    cin >> m>>n;
    vector<vector<int>> arr(m,vector<int> (n));
    
    cout<<"enter all the elements of an array : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    setMatrixZeroes(arr);
    cout <<"after change : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
/*
INPUT:
enter number of rows and column:3 4
enter all the elements of an array :
0 1 2 0
3 4 5 2
1 3 1 5 
after change :
OUTPUT:
0 0 0 0
0 4 5 0
0 3 1 0
*/