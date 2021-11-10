// 算术运算
// 这次要利用输入的直径计算一个圆桌的周长及面积...
// 计算圆的周长及面积时,其数学公式要使用Π或pi(周长=2Πr,面积=Πr²)
// Program 2.8 calculations on a table
#include <stdio.h>
int main(void)
{
  float radius = 0.0f;        // The radius of the table;
  float diamter = 0.0f;       // the diamter of the table;
  float circumference = 0.0f; // the circumference of the table;
  float area = 0.0f;          // the area of the table;
  float Pi = 3.14159265f;

  printf("Input the diamter of the table:");
  scanf("%f", &diamter); // Read the diameter from the keyboard;
}

// 这里将PI定义为一个要被3.14159f取代的符号。使用PI而不是Pi，
// 只要在程序里的表达式中引用PI,预处理器就会用#define指令中的数值取代它。所有的取代动作都在程序编译之前完成。
// 程序开始编译时，不再包含PI这个符号了，因为所有的PI都用#define指令中的数值取代了。
// 这些动作都是在编译器处理时在内部发生的，源程序没有改变，仍包含符号PI
