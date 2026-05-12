/*
 * @Author: mazezen
 * @Date: 2026-05-11
 * @LastEditors: mazezen
 * @LastEditTime: 2026-05-12
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

/* 尾递归 */
int tailRecur(int n, int res)
{
    if (n == 0)
        return res;
    return tailRecur(n - 1, res + n);
}

/* 斐波那契数列: 递归 */
int fib(int n)
{
    // 终止条件 f(1) = 0, f(2) = 1
    if (n == 1 || n == 2)
        return n - 1;
    // 递归调用 f(b) = f(n-1) + f(n-2)
    int res = fib(n - 1) + fib(n - 2);
    return res;
}

/* 使用迭代模拟递归 */
int forLoopRecur(int n)
{
    int stack[1000]; // 借助一个大数组模拟栈
    int top = -1;    // 栈顶的索引
    int res = 0;

    // 递: 递归调用
    for (int i = 0; i <= n; i++)
    {
        stack[1 + top++] = i;
    }

    // 归: 返回结果
    while (top > 0)
    {
        res += stack[top--];
    }
    // res = 1+2+3+4+...+n
    return res;
}

int main(int n)
{

    printf("递归实现 1+2+...+n的结果: %lld\n", recur(100));

    int res = 0;
    printf("尾递归实现 1+2+...+n的结果: %d\n", tailRecur(100, res));

    // 斐波那契数列的第5项为: 3
    printf("斐波那契数列递归结果: %d\n", fib(5));

    printf("使用迭代模拟递归结果: %d\n", forLoopRecur(100));

    return 0;
}
