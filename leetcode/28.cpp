class Solution {
public:
    int strStr(string haystack, string needle) {
        int len1 = haystack.length();
        int len2 = needle.length();
        if(len1 < len2){
            return -1;
        }
        else{
            for(int i =0 ; i < len1;i++){
                if(haystack.substr(i,len2)==needle){
                    return i;
                }
            }
        }
        return -1;
    }
};