/*
水质达标统计水质达标统计 连续 N
天对沙河的水质进行检测，每天的水质value是一个正整数。有水质阈值T，当且仅当当日
value≥T 时认为水质合格，请输出水质合格的天数。 输入格式 第一行是一个正整数
N，表示第二行有 N 个数。 第二行是一个正整数 T，表示指定的水质阈值。 第三行是 N
个用空格隔开的整数。 输出格式 一个整数结果。 数据范围 0 < N < 100 100 ≤ T ≤ 200
0 ≤ 输入的整数 ≤ 40000 输入样例1 5 100 90 80 100 200 400 输出样例1 3 输入样例2 1
100 80 输出样例2 0
*/
#include <stdio.h>

// 你的代码写在 TODO和END OF TODO之间。
// 请勿修改这对标签外的任何代码！！！

/**
 * @brief 循环输入n个正整数表示的水质，输入阈值，统计大于等于阈值的个数
 *
 * @param n 数值的个数
 * @return int 统计值
 */
int qualified(int n) {
  // 在此函数中，需要用到整数输入
  // TODO

  // END OF TODO
}

int main() {
  int N;
  scanf("%d", &N);

  printf("%d\n", qualified(N));
  return 0;
}