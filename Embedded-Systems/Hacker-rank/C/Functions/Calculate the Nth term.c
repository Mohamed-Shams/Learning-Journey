#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  int i = 3;
  int sum[n];
  sum[0] = a;
  sum[1] = b;
  sum[2] = c;
  if(n == 1)
  {
      return a;
  }
  if(n == 2)
  {
      return b;
  }
  if(n == 3)
  {
      return c;
  }
  
  
  if(((n<1) || (n>20)) || ((a<1) || (a>100))|| ((b<1) || (b>100))|| ((c<1) || (c>100)))
  {
      return -1;
  }
  else {
  while(i<n)
  {
    sum[i] = sum[i-1] + sum[i-2] + sum[i-3];
    i++;
  }
  return sum[i-1];
}
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}