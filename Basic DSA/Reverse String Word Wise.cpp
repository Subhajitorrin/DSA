#include <iostream>
using namespace std;

string reverseStringWordWise(string input)
{
    // get the length of string
    int n = input.length();

    // create a variable to store result
    string ans="";

    // run a loop from 0 to less than n
    for(int i=0;i<n;i++){

        // create a temp variable
        string temp = "";

        // run a loop to skip to next index if it is space
        while(input[i]==' ' && i<n){
            i++;
        }

        // if the index is not space then store it in temp
        while(input[i]!=' ' && i<n){
            temp+=input[i++];
        }

        // if something stored in temp then execute the if
        if(temp.length()>0){

            // if ans is empty put temp as anss
            if(ans.length()==0){
                ans=temp;
            }
            
            // otherwise put temp first then ans to create reverse order
            else{
                ans = temp + ' ' + ans;
            }
        }
    }

    // return the ans
    return ans;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}