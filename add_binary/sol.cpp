#include <iostream>
#include <string>
#include <algorithm>

class Solution {
public:
    std::string addBinary(std::string a, std::string b) {
        
        int len1 = a.length();
        int len2 = b.length();
        
        int minLength = std::min(len1, len2);
        int maxLength = std::max(len1, len2);
        
        
        if (len1 < maxLength) {
                 
            for (int j = 0; j < maxLength - minLength; j++){
                a = "0" + a;
            }
        }
        else if (len2 < maxLength) {
            for (int j = 0; j < maxLength - minLength; j++){
                b = "0" + b;
            }
        }
        
        std::string res;
        int temp = 0;
        
        for (int i = maxLength - 1; i >= 0; i--){
            
            if (a[i] == '0' && b[i] == '0'){
                if (temp >= 1){
                    res.append("1");
                    temp = 0;
                }
                else{
                    res.append("0");
                }
            }
            
            if ((a[i] == '1' && b[i] == '0') || (a[i] == '0' && b[i] == '1')){
                
                if (temp >= 1){
                    res.append("0");
                }
                else{
                    res.append("1");

                }
            }
            
            if (a[i] == '1' && b[i] == '1'){
                
                if (temp >= 1){
                    res.append("1");
                    temp = 1;
                }
                else{
                    temp = 1;
                    res.append("0");
                }
                
            }
        }
        
        if (temp == 1){
            res.append("1");
        }
        
        std::reverse(res.begin(), res.end());
        
        
        return res;
    }
};