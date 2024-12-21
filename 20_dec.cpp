#include<iostream>
#include<vector>
using namespace std;

 vector<int> spirallyTraverse(vector<vector<int>> &mat) {
        // code here
        int m = mat.size();
        int n = mat[0].size();
        int total = m * n;
        int count = 0;
        int minrow = 0;
        int maxrow = m-1;
        int mincol = 0;
        int maxcol = n-1;
        vector<int> ans(total);
        while(count < total){
            for(int i=mincol ; i<=maxcol&&count < total ; i++){
                ans[count] = mat[minrow][i];
                // ans.push_back(mat[minrow][i]);
                count++;
            }
            minrow++;
            for(int i=minrow ; i<=maxrow &&count < total; i++){
                ans[count] = mat[i][maxcol];
                // ans.push_back(mat[i][maxcol]);
                count++;
            }
            maxcol--;
            for(int i=maxcol;i>=mincol &&count < total; i--){
                ans[count] = mat[maxrow][i];
                // ans.push_back(mat[maxrow][i]);
                count++;
            }
            maxrow--;
            for(int i=maxrow;i>=minrow &&count < total; i--){
                ans[count] = mat[i][mincol];
                // ans.push_back(mat[i][mincol]);
                count++;
            }
            mincol++;
        }
        return ans;
}


int main(){
    int n;
    cout <<"enter rows:";
    cin >> n;
    int m;
    cout <<"enter columns :";
    cin >> m;
    vector<vector<int>> mat(n,vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> mat[i][j];
        }
    }
    vector<int> ans = spirallyTraverse(mat);
    cout << "after spirally traverse : ";
    for(int i=0;i<ans.size();i++){
        cout <<ans[i]<<" ";
    }
}

/*
OUTPUT :
enter rows:4
enter columns :4
1 2 3 4
5 6 7 8 
9 10 11 12
13 14 15 16
after spirally traverse : 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
*/