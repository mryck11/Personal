#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)

{
float p;
float g;
float c;

do
{
p = get_float("%s", "Total Price:");
g = get_float("%s", "Total Received:");
}
while (p > 0.0 && g > 0.0)

c = 
