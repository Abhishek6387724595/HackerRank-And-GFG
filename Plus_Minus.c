#include <stdio.h>

int main()
{
   int size,inp[100]; 
   scanf("%d",&size);
   int pos=0,neg=0,zer=0;
   for(int i=0;i<size;i++) {
        scanf("%d",&inp[i]);
        if(inp[i]>0) pos++;
        else if(inp[i]<0) neg++;
        else zer++;
   }
   printf("%6f\n",(float)pos / size);
   printf("%6f\n%6f\n",(float)neg / size ,(float)zer / size);
   return 0;
}
