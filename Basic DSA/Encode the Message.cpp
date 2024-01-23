#include <bits/stdc++.h> 
string encode(string &message)
{
    // initially count 1 for the first char
    int count=1;

    // create a variable for result string
    string ans="";

    // run a loop from 0 to less than length of string
    for(int i=0;i<message.size();i++){

        // increase count if the next char is same
        if(message[i]==message[i+1]){
            count++;
        }
        
        // if char i is not equal to next char then put ans and count
        // then set the count to 1 for the next iteration
        else{
            ans+= message[i] + to_string(count);
            count=1;
        }
    }

    // return the ans
    return ans;
}