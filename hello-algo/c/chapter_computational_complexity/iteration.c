/*
 * @Author: mazezen
 * @Date: 2026-05-11
 * @LastEditors: mazezen
 * @LastEditTime: 2026-05-11
 * @FilePath: /practice-algorithm/hello-algo/c/chapter_computational_complexity/iteration.c
 * @Description: 基于 for 循环实现求和 1 + 2 + 3 + 4 + ... + n. 求和结果使用变量 res 记录.
 */

#include <stdio.h>
// #include <limits.h>
#include <stdlib.h>
#include <string.h>

/* for 循环, 使用 long long 防止数值溢出 */
long long int forloop(int n)
{
    long long int res = 0;

    /* 初始化条件变量 i = 1 */
    /* 循环实现求和 1 + 2 + 3 + 4 + ... + n */
    for (int i = 1; i < n; i++)
    {
        res += i;
    }

    return res;
}

/* while循环 */
long long int whileloop(int n)
{
    long long int res = 0;

    int i = 1; // 初始化条件变量
    /* 循环实现求和 1 + 2 + 3 + 4 + ... + n */
    while (i < n)
    {
        res += i;
        i++; // 更新条件变量
    }

    return res;
}

// 循环求和 1, 4, 10, ...
// 使用 while . 需要两次更新 循环条件的值
long long int whileloopII(int n)
{
    long long int res = 0;

    int i = 1;
    while (i < n)
    {
        res += i;
        // 更新条件变量
        i++;
        i *= 2;
    }

    return res;
}

/* 双层 for 循环 */
char *nestForloop(int n)
{
    // n * n 为对应点数量，"(i, j), " 对应字符串长最大为 6+10*2，加上最后一个空字符 \0 的额外空间
    int size = n * n * (2 * 10 + 6) + 1;
    char *res = malloc(size * sizeof(char));
    // 循环 i = 1, 2, ..., n-1, n
    for (int i = 1; i <= n; i++)
    {
        // 循环 j = 1, 2, ..., n-1, n
        for (int j = 1; j <= n; j++)
        {
            char tmp[26];
            snprintf(tmp, sizeof(tmp), "(%d, %d)", i, j);
            strncat(res, tmp, size - strlen(res) - 1);
        }
    }

    return res;
}

int main()
{
    // printf("n = %d for 循环求和的结果: %lld\n", INT_MAX, forloop(INT_MAX));
    // printf("n = %d while 循环求和的结果: %lld\n", INT_MAX, whileloop(INT_MAX));
    // printf("n = %d whileloopII 循环求和的结果: %lld\n", INT_MAX, whileloopII(INT_MAX));

    printf("n = 100 for 循环求和的结果: %lld\n", forloop(100));
    printf("n = 100 while 循环求和的结果: %lld\n", whileloop(100));
    printf("n = 100 whileloopII 循环求和的结果: %lld\n", whileloopII(100));
    printf("n = 4 nestForloop 循环嵌套的结果: %s\n", nestForloop(5));

    return 0;
}
