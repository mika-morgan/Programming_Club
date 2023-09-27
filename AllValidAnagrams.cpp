#include <bits/stdc++.h>
class Solution {
public:

    vector<int> findAnagrams(string s, string p) 
    {
        vector<int> ans;
        int len = p.length();
        int index = 0;
      
      //Define unordered_maps
  		unordered_map<char, int> MS, MP;
  
        //Make the map for s
  		for (int i = 0; i < len; i++) {
            MS[s[i]]++;
        }
  
        //Make the map for p
  		for (int i = 0; i < len; i++) {
            MP[p[i]]++;
        }
  
  		//Check if the maps match
        for(int start = 1; start < (s.length() - len); start++)
        {
            bool flag = true;
            for (int i = 97; i <= 123; i++) {
                if(MS[i] != MP[i])
                {
                    flag = false;
                    break;
                }
            }

            if(flag)
                ans.push_back(index);

            //Update the S map
            MS[index - 1]--;
            MS[index + len + 1]++;

            index += len;
        }

        return ans;
    }
};
