#include<iostream>
#include<vector>
using namespace std;
bool sortedMatrix(vector<vector<int>> & mat,int x){
    int n = mat.size();
    int m = mat[0].size();
    int start = 0;
    int end = n *m-1;
    int mid = (start + end)/2;
    while(start <= end){
        int element = mat[mid / m][mid % m];
        if(element == x) return true;
        else if(element<x) start = mid+1;
        else end = mid -1;
        mid = (start + end)/2;
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

    bool flag= sortedMatrix(arr,x);
    if(flag) cout<<"true"<<endl;
    else cout<<"false"<<endl;

    return 0;
}

/*

INPUT:
enter number of rows and columns : 3 3 
enter all the elements of an array :
1 2 5
6 10 14
25 31 35
enter element to be found:25
OUTPUT:
true

-----------------------------------------------

INPUT:
enter number of rows and columns : 3 3
enter all the elements of an array :
1 2 4
5 7 9
11 13 14
enter element to be found:20
OUTPUT:
false

*/