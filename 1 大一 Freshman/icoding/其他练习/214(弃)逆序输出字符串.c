/*
逆序输出字符串
//题目描述
输入一个字符串，然后逆序输出它。
//输入格式
一行字符串。
//输出格式
一行逆序的字符串。
//数据范围
0 ＜ len(S) ≤ 1000
输入样例1
a
输出样例1
a
输入样例2
abcdef
输出样例2
fedcba
输入样例3
1234cba
输出样例3
abc4321
#include <stdio.h>

// 你的代码写在 TODO和END OF TODO之间。
// 请勿修改这对标签外的任何代码！！！


 * @brief 逆序输出字符串
 *
 * @param s 字符串
 *
void puts_rev(char *s) {
  // 此函数要用到字符输出
  // TODO

  // END OF TODO
}

char S[1000];
int main() {
  scanf("%s", S); // 输入时，用~代替空格
  puts_rev(S);

  return 0;
}
*/
void puts_rev(char *s) {
  // 找到字符串的长度
  int len = 0;
  while (s[len] != '\0') {
    len++;
  }

  // 从字符串的末尾开始，逆序输出每个字符
  for (int i = len - 1; i >= 0; i--) {
    putchar(s[i]);
  }
  putchar('\n');
}
