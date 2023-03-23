#include "array/array.h"  //数组头文件
#include "linked_list/linked_list.h"  //链表头文件
#include "hash_table/hash_table.h"  //链表头文件
#include "strings/strings.h"
#include "stack_queue/stack_queue.h"
#include "binary_tree/binary_tree.h"
#include "backtracking/backtracking.h"

int test(){
    vector<int> Arrs {1,2,3,4,5,6,7,8,9}; // 假设有这么个数组,要截取中间第二个元素到第四个元素：2，3，4
    vector<int>::const_iterator First = Arrs.begin() + 1; // 找到第二个迭代器
    vector<int>::const_iterator Second = Arrs.end() - 1; // 找到第三个迭代器
    vector<int> Arr2;
    Arr2.assign(First,Second); //使用assign() 成员函数将Arrs对应位置的值存入Arrs2数组中
    cout<< Arrs.back();
    return 0;
}


int main ()
{
    //test();
    make_main538();
    return 0;
}
