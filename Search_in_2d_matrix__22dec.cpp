/*
Given a 2D integer matrix mat[][] of size n x m, where every row and column is sorted in increasing order and a number x, the task is to find whether element x is present in the matrix.
*/

#include<iostream>
#include<vector>
using namespace std;
bool matSearch(vector<vector<int>> &mat, int x) {
        int row =mat.size();
        int col = mat[0].size();
        int rowIndex = 0;
        int colIndex = col - 1;
        
        while(rowIndex < row && colIndex>= 0){
            int element = mat[rowIndex][colIndex];
            if(element == x) return true;
            else if(element < x) rowIndex++;
            else colIndex--;
        }
        return false;
    }
int main()
{
    int n;
    int m;
    cout<<"enter number of rows and columns : ";
    cin >> n >> m;

    vector<vector<int>> arr(n,vector<int>(m));

    cout <<"enter all the elements of an array :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }

    int x ;
    cout <<"enter element to be found:";
    cin >>x;

    bool flag= matSearch(arr,x);
    if(flag) cout<<"true"<<endl;
    else cout<<"false"<<endl;

    return 0;
}


/*

INPUT:
enter number of rows and columns : 1 6
enter all the elements of an array :
18 21 27 38 55 67
enter element to be found:55

OUTPUT:
true

*/