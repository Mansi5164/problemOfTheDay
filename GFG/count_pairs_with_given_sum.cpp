#include<bits/stdc++.h>
using namespace std;
int countPairs(vector<int> &arr, int target) {
        // Code here
        unordered_map<int, int> freq;
        int cnt = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (freq.find(target - arr[i]) != freq.end()) {
            cnt += freq[target - arr[i]]; 
        }
        freq[arr[i]]++; 
    }
    return cnt;
    }

int main(){
    int n;
    cout << "enter size:";
    cin >> n;
    vector<int> arr(n);
     int target;
    cout<<"enter element to be targeted:";
    cin >> target;

    cout<<"enter all the elements of an array : "<<endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
   
    int total = countPairs(arr,target);
    cout << "total : "<<total<<endl;

}