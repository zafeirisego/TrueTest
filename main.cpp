#include <cstdio>
#include "gcd.hpp"

int main(){
  printf("Give me two numbers\n");
  int a,b;
  scanf("%d", &a);
  scanf("%d", &b);
  printf("GCD(a,b)= %d\n", gcd(a,b));
  return 0;
}
