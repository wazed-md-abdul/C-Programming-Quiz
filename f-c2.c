#include <stdio.h>
int main()
{
int a;
float v,f,c,convertedc,convertedf;
printf("This is a Programme who will convert the Fahrenheit and Celsius number to their oppposites \nif you want to convert Fahrenheit to Celsius Enter 1 \nif you want to convert Celsius to Fahrenheit Enter 2 ");
printf("Enter the choice:");
scanf("%d",&a);
printf("Enter the Value:");
scanf("%f",&v);


switch(a)
{

case 1:
{
convertedf=(v-32)*.566666;

printf("This is the Celsius number:%f",convertedf);
break;

}

case 2:
{
convertedc=(v*1.8) + 32;
printf("This is the Fahrenhiet number:%f",convertedc);
break;
}

}
return 0;
}

