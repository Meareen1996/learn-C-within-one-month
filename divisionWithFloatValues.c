// 如前所见，使用整数操作数进行除法运算时，通常会得到整数结果。
// 除非除法运算的左操作数刚好是右操作数的整数倍，否则其结果
// 是不正确的。当然，在将饼干分给孩子们的例子中，整数除法运算
// 的方式是没问题的，但将10尺长的厚板均分为4块时，就有问题了。
// 这时就需要用到浮点数了。
// 试试看：使用float类型值的除法
// 这个例子用一个浮点数除以另一个浮点数,然后显示其结果:
// Program 2.7 Division with values
#include <stdio.h>
int main(void)
{
  float plank_length = 10.0f; // In feet;
  float piece_count = 4.0f;   // Number of equal pieces
  float pieces_length = 0.0f; // Lenth of a pieces in feet
  pieces_length = plank_length / piece_count;
  printf("A plank %8.2f feet long can be cut into %6.0f piece %.2f feet long.\n", plank_length, piece_count, pieces_length);
}

// 使用格式说明符%f显示浮点数.格式说明符一般必须对应输出的值得类型.
// 如果使用格式%d输出float类型的值,就会得到一个垃圾值
