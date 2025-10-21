#include<stdio.h>
#include<math.h>

void giaiPhuongTrinhBac2(float a, float b, float c)
{
   printf("Nhap a, b, c: "); scanf("%f%f%f",&a, &b, &c);
   if(a == 0)
   {
      if(b==0)
         printf("Phuong trinh vo nghiem\n");
      else
         printf("x = %.2f\n",-c/b);
   }
   else
   {
      float delta = b*b - 4*a*c;
      if(delta < 0)
      {
         printf("Phuong trinh vo nghiem\n");
      }
      else if(delta == 0)
      {
         printf("x = %.2f (nghiem kep)\n", -b/(2*a));
      }
      else
      {
         float x1 = (-b + sqrt(delta)) / (2*a); 
         float x2 = (-b - sqrt(delta)) / (2*a); 
         printf("x1 = %.2f, x2 = %.2f\n ", x1, x2);
      }
   }
}

