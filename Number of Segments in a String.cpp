class Solution {
public:
    int countSegments(string s) {
        //An empty string does not have any segments
        if(s.length() == 0)
            return 0;

        //Check for 1 character strings
        if(s.length() == 1)
        {
            if(s == " ")
                return 0;
            else
                return 1;
        }
        
        //Iterate through rest of string
        int count = 0;

        for(int i = 1; i < s.length(); i++)
        {
            //Count number of blank spaces NOT preceded by another blank
            if(s[i] == ' ' && s[i - 1] != ' ') 
                count++;
        }

        //Add one to the blank space count to get the number of segments
        //Don't add one if the count should be zero (all blanks)
        if(s[s.length() - 1] == ' ')
            return count;
        else
            return count + 1;
    }
};
