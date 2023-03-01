//
// Created by wxw on 23-3-1.
//
#include "strings.h"
void Solution151::reverse(string& s, int start, int end){
    for (int i = start, j = end; i < j; i++, j--) {
        swap(s[i], s[j]);
    }
}

string Solution151::reverseWords(std::string s) {
    int slow = 0;   //整体思想参考https://programmercarl.com/0027.移除元素.html
    for (int i = 0; i < s.size(); ++i) { //
        if (s[i] != ' ') { //遇到非空格就处理，即删除所有空格。
            if (slow != 0)
                s[slow++] = ' '; //手动控制空格，给单词之间添加空格。slow != 0说明不是第一个单词，需要在单词前添加空格。
            while (i < s.size() && s[i] != ' ') { //补上该单词，遇到空格说明单词结束。
                s[slow++] = s[i++];
            }
        }
    }
    s.resize(slow); //slow的大小即为去除多余空格后的大小。
    reverse(s, 0, s.size() - 1);

    int start = 0; //removeExtraSpaces后保证第一个单词的开始下标一定是0。
    for (int i = 0; i <= s.size(); ++i) {
        if (i == s.size() || s[i] == ' ') { //到达空格或者串尾，说明一个单词结束。进行翻转。
            reverse(s, start, i - 1); //翻转，注意是左闭右闭 []的翻转。
            start = i + 1; //更新下一个单词的开始下标start
        }
    }
    return s;
}

int make_main151(){
    string s = "the sky is blue";
    Solution151 wxw;
    string me = wxw.reverseWords(s);
    cout << me ;
    return 0;
}
