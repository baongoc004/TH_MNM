#include<stdio.h>

float tinhDtb(float van, float toan, float anh)
{
   return (van*2 + toan*2 +anh)/5;
}
float xepLoaiHocLuc(float dtb)
{
   
   if(dtb<3)
      printf("Yeu\n");
   else if(dtb<5)
      printf("Trung binh\n");
   else if(dtb<7.9)
      printf("Kha\n");
   else
      printf("Gioi\n");
}

