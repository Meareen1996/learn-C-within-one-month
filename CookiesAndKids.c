// 假设你有一罐饼干(45块饼干和7个孩子。要把饼干平分给每个孩子，
// 计算每个孩子可得到几块饼干，分完后剩下几块饼干)。
// Program 2.6 Cookies and  kids
#include <stdio.h>
int main(void)
{
  int cookies = 45;          // Number of Cookies in the jar
  int children = 7;          // Number of children
  int cookie_per_child = 0;  // Number of cookie per child
  int cookies_left_over = 0; // Number of cookies left
  // Calculate how many cookies each child gets when they are divided up
  cookie_per_child = cookies / children; // Number of cookies per child
  printf("You have %d children and %d cookies\n", children, cookies);
  printf("Give each child %d cookies.\n", cookie_per_child);
  // Calculate how many cookies are left over
  cookies_left_over = cookies % children;
  printf("There are %d cookie left over.\n", cookies_left_over);
  return 0;
}