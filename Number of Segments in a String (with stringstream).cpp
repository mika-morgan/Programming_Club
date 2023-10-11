    int countSegments(string s) {
        
        int count = 0;
        string temp;
        stringstream ss(s);  

        //Read in each word from the string
        //Whitespace delimited, just like cin
        while(ss >> temp)
            count++;

        return count;
    }
