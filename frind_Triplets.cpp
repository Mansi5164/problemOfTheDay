#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> findTriplets(vector<int> &arr) {
        // Code here
        int i=0,j=i+1;
        int n = arr.size();
        vector<vector<int>> ans;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    if(arr[i]+arr[j]+arr[k]==0){
                        vector<int> triplet;
                        triplet.push_back(i);
                        triplet.push_back(j);
                        triplet.push_back(k);
                        ans.push_back(triplet);
                    }
                }
            }
        }
        return ans;
    }

int main(){
    int n;
    cout << "enter size:";
    cin >> n;
    vector<int> arr(n);

    cout<<"enter all the elements of an array : "<<endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
   
    vector<vector<int>> ans;
    ans = findTriplets(arr);
    cout <<"triplets are : "<<endl;
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout << ans[i][j]<<" ";
        }
        cout<<endl;
    }

}

/*
enter size:5
enter all the elements of an array :
0 -1 2 -3 1
triplets are :
0 1 4
2 3 4
*/