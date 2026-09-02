class Solution {
public:
    string reverseVowels(string s) {
        while(left < right){

                while(left < right && !isVowel(s[left])){
                    left++;
                }
                while(left < right && !isVowel(s[right])){
                    right--;
                }

                swap(s[left], s[right]);

                left++;
                right--;

            }
            return s;
        }
    }
};
