#include <bits/stdc++.h>

/*    Names:Cyiza Mugabo Christian 
Github:https://github.com/cyizaslashes

  */
using namespace std;
char MaxOccuringChar(char str[150]){
   int freq[26] = { 0 };
   int maxFreq = -1;
   char maxFreqChar;
   int len = strlen(str);
   for (int i = 0; i < len; i++)
      freq[str[i] - 'a']++;
   for (int i = 0; i < 26; i++)
      if (maxFreq < freq[i]) {
         maxFreq = freq[i];
         maxFreqChar = (char)(i + 'a');
      }
   return maxFreqChar;
}
int main(){
   char str[150];
   cout<<"Enter  a string:";
   cin>>str;
   cout<<"Maximum occurring character of input string is: "<<MaxOccuringChar(str);
   return 0;
}
