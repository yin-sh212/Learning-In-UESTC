/*
数字颜色三元组(R,G,B)对应的灰度（颜色）是三元组(I,I,I)（R,G,B,I是在0~255之间的整数）。

其中，I是颜色的亮度，可以用如下公式计算： I = R * 30% + G * 59% + B * 11%

现要求编码实现：从键盘输入一种颜色三元组，输出该颜色对应的灰度颜色。请按如下范例安排输入和输出：
(174,68,200)（按回车） (114,114,114)
*/
#include <math.h>
#include <stdio.h>

int main() {
  int R, G, B;
  int I;
  scanf("%d,%d,%d", &R, &G, &B);
  I = round((R * 0.3 + G * 0.59 + B * 0.11));
  printf("(%d,%d,%d)\n", I, I, I);

  return 0;
}

// 此题貌似无法通过，不知道什么原因（代码应该没问题）