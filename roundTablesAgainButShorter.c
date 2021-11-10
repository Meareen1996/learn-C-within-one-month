// 定义一个其值固定的变量
// 在前面的例子中使用一个常量，但代码短一些
//  Program 2.10 Round tables agsin but  shorter
#include <stdio.h>
int main(void)
{
  float diameter = 0.0f;     // The diameter of the table;
  float radius = 0.0f;       // The radius of the table;
  const float Pi = 3.14159f; // Defines the value of Pi as fixed
  printf("Input the diameter of the table:");
  scanf("%f", &diameter);
}
