bool isValid(char ch){
    if( (ch >= 'a'&& ch <= 'z') || (ch >= 'A'&& ch <= 'Z') || (ch >= '0'&& ch <= '9') )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
char toLower(char ch){
    if( (ch>='a' && ch <= 'z') || (ch>='0'&& ch<='9'))
    {
        return ch;
    }
    else
    {
        return ch-'A'+'a';
    }
}
class Solution {
public:
    bool isPalindrome(string s)
    {
        string temp = "";
        for(int i = 0; i < s.length();i++){
            if(isValid(s[i]))
            {
                temp.push_back(s[i]);
            }
        }
        cout <<  temp;
        int i = 0;
        int e = temp.length()-1;
        while(i<e)
        {
            if(toLower(temp[i])!=toLower(temp[e]))
            {
                return 0;
            }
            else
            {
                i++;
                e--;
            }
        }
        return 1;
    }
};