#include <bits/stdc++.h>
class Solution {
public:
    bool isAnagram(string s, string t) {

  		if(s.length() != t.length())
  			return false;
      
      //Define unordered_maps
  		unordered_map<char, int> MS, MT;
  
      //Make the map for s
  		for (int i = 0; i < s.length(); i++) {
            MS[s[i]]++;
      }
  
      //Make the map for t
  		for (int i = 0; i < t.length(); i++) {
            MT[t[i]]++;
      }
  
  		//Check if the maps match
  		for (int i = 0; i < MS.size(); i++) {
            if(MS[i] != MT[i])
                return false;
      }
  
  		return true;
    }
};
