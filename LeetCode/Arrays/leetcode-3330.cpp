class Solution {
public:
    int possibleStringCount(string word) {
        int totalVariants = 1;  // Start with 1 for the original string
        int n = word.length();

        int i = 0;
        while (i < n) {
            int groupLength = 1;

            // Count how many times the same character repeats
            while (i + 1 < n && word[i] == word[i + 1]) {
                groupLength++;
                i++;
            }

            // If it's a repeated group, we can remove characters from it
            if (groupLength > 1) {
                totalVariants += (groupLength - 1);
            }

            i++;  // Move to the next group
        }

        return totalVariants;
    }
};



// class Solution {
// private:
// int countSingleElements(string word) {
//     int length = word.length();  // Store the length of the string
//     int singleCount = 0;         // Initialize count of single elements to 0

//     // Loop through each character in the string
//     for (int i = 0; i < length; i++) {
//         bool isSingle = true;    // Assume current character is single

//         // Check if it is the same as the previous character (not first index)
//         if (i > 0) {
//             if (word[i] == word[i - 1]) {
//                 isSingle = false;
//             }
//         }

//         // Check if it is the same as the next character (not last index)
//         if (i < length - 1) {
//             if (word[i] == word[i + 1]) {
//                 isSingle = false;
//             }
//         }

//         // If the character is not repeated on either side, count it
//         if (isSingle == true) {
//             singleCount = singleCount + 1;
//         }
//     }

//     return singleCount;  // Return the number of single elements
// }

// public:
//     int possibleStringCount(string word) {
//       int n=word.length();
//       int count=0;
//       int ans=0;
//       for(int i=0;i<n-1;i++){
//         if(word[i]==word[i+1]){
//             count++;
//         }
        
//       }
//       ans=countSingleElements(word);
//       if(n==ans){
//         return 1;
//       }
//       ans=ans+count;
//       return ans;  
//     }
// };