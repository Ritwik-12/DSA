// //give a string remove substring from the given string

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string str = "Ritwik";
//     string substr = "tw";
//     int ol = str.length();
//     int n = substr.length();

//     // Initialize a new string to store the result
//     string result = "";

//     for (int i = 0; i < ol; i++) {
//         bool found = false;
//         for (int j = 0; j < n; j++) {
//             if (i + j >= ol || substr[j] != str[i + j]) {
//                 // If the characters don't match, break the inner loop
//                 found = false;
//                 break;
//             }
//             found = true;
//         }
        
//         // If the substring was found, skip it
//         if (found) {
//             i += (n - 1);
//         }
//         else {
//             result += str[i];
//         }
//     }
    
//     cout << result << endl;

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int  main()
{
    string str="Ritwik";
    string er="it";
    int len=er.length();
    for(int  i=0;i<str.length();i++){
        for(int j=0;j<er.length();j++){
            if(str[i]==er[j]){
                str.erase(i,len);
                 break;
            }
        }
       
    }
    cout<<str;

    
}