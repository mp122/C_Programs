#include <stdio.h>
int main()
{
   int *ptr, q;
   q = 544;
   /* address of q is assigned to ptr */
   ptr = &q;
   /* display q's value using ptr variable */
   printf("%d", *ptr);
   return 0;
}
