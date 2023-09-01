#include <iostream>
#include <unordered_map>
#include<vector>
using namespace std;


    int lengthOfLongestSubstring(string s) {
        vector<int> arr(150,0);
        int len = 0,maxi = 0;
        for(int i=0;i<s.size();i++){

            cout<<"hehe "<<arr[int(s[i])-32]<<" hehe\n";

            if(arr[int(s[i])-32]>=1){
                cout<<int(s[i])-32<<" hmm\n";
                len = 1;
                fill(arr.begin(), arr.end(), 0);
                arr[int(s[i])-32]++;
                continue;
            }
            else{
                cout<<int(s[i])-32<<" ++\n";
            arr[int(s[i])-32]++;
            len++;
            }

            maxi = max(maxi,len);

        }

        return maxi;


        
    }




int main(){

    string ss = "bbbbb";
    int x = lengthOfLongestSubstring(ss);
    cout<<x;




}
