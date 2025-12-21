// check anagram-  for same length line
#include <bits/stdc++.h>
using namespace std;

bool areAnagrams(string s1, string s2){


   // for lowercase a-z
  vector<int> freq(26,0);

  // Count frequency of each character in s1
  for(char ch : s1)
    if(isalpha(ch))
       freq[tolower(ch) - 'a']++;

    // Subtract frequency using characters from s2
  for(char ch : s2)
    if(isalpha(ch)) // ignore whitespace and count only alphabets
      freq[tolower(ch) - 'a']--;

    // If any count is not zero, not an anagram
  for(int count: freq){
    if(count!= 0)
       return false;
  }
  return true;

}

int main() {
    
    string s1 = "geeks! and U";
    string s2 = "kseegu dan";
    
    if (areAnagrams(s1, s2))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}