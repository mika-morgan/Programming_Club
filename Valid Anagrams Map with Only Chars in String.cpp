#include <bits/stdc++.h>
class Solution {
public:
    bool isAnagram(string s, string t) {

		if(s.length() != t.length())
			return false;
    
        // Define unordered_maps
		unordered_map<char, int> MS, MT;

        //Make the map for s (only insert chars in the input string)
        for (int i = 0; i < s.length(); i++)
        {
            //If you reached the end of the map searching for the letter, it doesn't exist yet
            //Make a new pair with a count of 1 and insert it in the map
            if(MS.find(s[i]) == MS.end()) {
                MS.insert(make_pair(s[i], 1));
            }
            //If the letter already exists in the map, just increment the count
            else {
                MS[s[i]]++;
            }
        }

        //Remove the letters found in string t
        for (int i = 0; i < t.length(); i++)
        {
            //If you find the letter in the map, remove it
            if(MS.find(t[i]) != MS.end()) {
                MS[t[i]]--;

                //Remove the key if it has no more occurrences
                if (MS[t[i]] == 0) {
                    MS.erase(t[i]);
                }
            }
            //If one letter doesn't exist in the other word, they can't be anagrams
            else{
                return false;
            }
        }

		//Check if there are any letters left in the map
        return MS.empty();
    }
};
