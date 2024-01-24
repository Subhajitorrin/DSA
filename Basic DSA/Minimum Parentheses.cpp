#include <bits/stdc++.h> 
int minimumParentheses(string pattern) {
    // create two variables open & close to count brackets
    int open = 0,close = 0;

    // traverse the pattern string
    for(int i=0;i<pattern.length();i++){

        // if there is ) and open is more then 1 open for that close
        if(pattern[i] == ')' && open>0){
            // reduce open
            open--;
        }
        
        // else if there is opening then increase open
        else if(pattern[i] == '('){
            open++;
        }
        
        // else if there is closing then increase close
        else if(pattern[i] == ')'){
            close++;
        }
    }

    // return the total open and close left
    return open+close;
}