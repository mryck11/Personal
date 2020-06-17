#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)

{
float p;
float g;
int c;
float a;

//obtain price
do
{
p = get_float("%s", "Total Price:");
}
while (p <= 0.0);

//obtain money
do
{
g = get_float("%s", "Total Received:");
}
while (g < 0.0);

//Received > Price
if (g > p)
{
c = (g - p)*100;

if (c % 5 != 0)
{
c = c - ( c % 100 ) + ((( c % 100 )/5)*5);
}

a = c;

int dollar = 0;
int fifty = 0;
int twenty = 0;
int ten = 0;
int five = 0;

while (c >= 100)
{
  c -= 100;
  dollar++;
}

while (c >= 50)
{
  c -= 50;
  fifty++;
}
while (c >= 20)
{
  c -= 20;
  twenty++;
}
while (c >= 10)
{
  c -= 10;
  ten++;
}
while (c >= 5)
{
  c -= 5;
  five++;
}
float change = a;

change = a/100;

printf("Here is your change of %.2f.\n", change);
printf("Here are your coin(s): %i 1 dollar coin, %i 50 cents coin, %i 20 cents coin, %i 10 cents coin, %i 5 cents coin.\n",dollar,fifty,twenty,ten,five);
}
else if (g < p)
{
  float deficit = (p - g)*100;
  int e;
  float d;

e = deficit; //only int can use mod
  if (e % 5 != 0)
  {
      d = e;
      d = (d - ( e % 100 ) + ((( e % 100 )/5)*5))/100;
  }

else 
{
  d = e;
  d = d/100;
}
  printf("You still need to pay %.2f.\n",d);
}
else
{
  printf("There is no change.\n");
}
}
