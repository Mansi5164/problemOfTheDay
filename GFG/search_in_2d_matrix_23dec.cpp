#include<iostream>
#include<vector>
using namespace std;
bool binarySearch(vector<int> &arr, int x){
        int start =0;
        int end = arr.size()-1;
        while(start <= end){
            int mid = start +(end-start)/2;
            if(arr[mid]==x) return true;
            else if(arr[mid]<x) start = mid+1;
            else end = mid-1;
        }
        return false;
    }
    bool searchRowMatrix(vector<vector<int>> &mat, int x) {
        
        int n = mat.size();
        int m = mat[0].size();
        
        for(int i=0;i<n;i++){
            if(binarySearch(mat[i],x)){
                return true;
        }
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

    bool flag= searchRowMatrix(arr,x);
    if(flag) cout<<"true"<<endl;
    else cout<<"false"<<endl;

    return 0;
}

/*
enter number of rows and columns : 3 3
enter all the elements of an array :
3 4 9
2 5 6
9 25 27
enter element to be found:9
true
*/