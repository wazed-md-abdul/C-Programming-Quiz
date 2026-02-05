// writting the ASCII value to Charcter 

#include <stdio.h>
int main()
{
 int num;
 printf("enter any number, to know that's spelling:");
 scanf("%d",&num);
 switch(num)
 { 
 case 0:
 printf("its spelling is=Zero");
 break;
 case 1:
 printf("its spelling is=One");
 break;
  case 2:
 printf("its spelling is=Two");
 break;
  case 3:
 printf("its spelling is=Three");
 break;
  case 4:
 printf("its spelling is=Four");
 break;
  case 5:
 printf("its spelling is=Five");
 break;
  case 6:
 printf("its spelling is=Six");
 break;
  case 7:
 printf("its spelling is=Seven");
 break;
  case 8:
 printf("its spelling is=Eight");
 break;
  case 9:
 printf("its spelling is=Nine");
 break;
  case 10:
 printf("its spelling is=Ten");
 break;
 default:
 printf("Its invalid");
 
}

}
