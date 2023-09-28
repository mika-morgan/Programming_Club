#include <bits/stdc++.h>
class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
        vector<int> ans;
        int len = p.length();   

        //S cannot contain an anagram of p if it is smaller than p
        if(p.length() > s.length())
            return {};

        //Define unordered_maps
  		unordered_map<int, int> MS, MP;
        
        //Make the map for s
  		for (int i = 0; i < len; i++) {
            MS[s[i]]++;
        }
        
        //Make the map for p
  		for (int i = 0; i < len; i++) {
            MP[p[i]]++;
        }
  
  		//Check if the maps match
        for(int start = 0; start <= (s.length() - len); start++)
        {
            bool flag = true;

            //Iterate through the lowercase letters
            for (int i = 97; i <= 123 && flag; i++) {
                //If they don't match at any point, it is not a valid anagram
                if(MS[i] != MP[i])
                {
                    flag = false;
                }
            }

            //Push the index to answer vector if the substring was a valid anagram
            if(flag)
                ans.push_back(start);
            
            //Update the S map (pop off the left neighbor and push the right neighbor)
            MS[s[start]]--;
            MS[s[start + len]]++;
        }
        
        return ans;
    }
};
