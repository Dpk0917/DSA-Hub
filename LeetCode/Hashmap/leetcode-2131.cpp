#include <bits/stdc++.h>
using namespace std;

class Solution{
private:
    void rev(string &word){
        int s=0;
        int e=word.length()-1;
        while(s<e){
            swap(word[s],word[e]);
            s++;
            e--;
        }
    }
public:
    int longestPalindrome(vector<string>& words){
        unordered_map<string,int> map;
        int result=0;

        for(int i=0;i<words.size();i++){
            string word=words[i];
            string demo=word;
            rev(demo);

            if(map[demo]>0){
                result+=4;
                map[demo]--;
            }else{
                map[word]++;
            }
        }

        for(auto it=map.begin();it!=map.end();it++){
            string word=it->first;
            if(word[0]==word[1] && it->second>0){
                result+=2;
                break;
            }
        }

        return result;
    }
};