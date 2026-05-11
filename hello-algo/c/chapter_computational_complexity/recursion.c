/*
 * @Author: mazezen
 * @Date: 2026-05-11
 * @LastEditors: mazezen
 * @LastEditTime: 2026-05-11
 * @FilePath: /practice-algorithm/hello-algo/c/chapter_computational_complexity/recursion.c
 * @Description: 递归 (recursion) 是一种算法策略, 通过函数调用自身来解决问题.
 */

#include <stdio.h>

/* 使用递归计算 1 + 2 + 3 + ... + n */
long long int recur(int n)
{
    long long int res = 1;
    /* 递归终止条件 */
    if (n == 1)
        return 1;

    // 递: 递归调用
    res = recur(n - 1);

    // 归: 返回结果
    return n + res;
}

int main(int n)
{

    printf("递归实现 1+2+...+n的结果: %lld\n", recur(100));

    return 0;
}
