//
// Created by wxw on 23-2-28.
//
#include "strings.h"

string Solution541::reverseStr(string s, int k) {
    string result;
    int len_s = s.size();
    int high = len_s -1;
    int count = 0;
    for (int i = 0;i < len_s;i++){
        if (len_s - count*2*k < k) {
            swap(s[i], s[high]);
            high--;
            if (i >= high) break;
        }
        else if (i + 1 == 2*k*count + k){
            for(int j = 2*k*(count++), h = i;j < h; j++,h--){
                swap(s[j], s[h]);
            }
            i += k;
        }
    }
    return s;
}
int make_main541(){
    string s = "abcdefg";
    int k = 8;
    Solution541 wxw;
    string me  = wxw.reverseStr(s, k);
    cout << me << endl;
    return 0;
}