#include <stdio.h>

float add (float x, float y)
{
    return x + y;
}

float multi (float x, float y)
{
    return x * y;
}

float sub (float x, float y)
{
    return x - y;
}

float div (float x, float y)
{
    return x / y;
}

float min (float x, float y)
{
	if (x < y)
    return x;
    	else 
    return y;
}

float max (float x, float y)
{
    if (x > y)
    return x;
    	else 
    return y;
}

int mod (int x, int y)
{
	return x % y; 
}

int main()
{
    float a, b, r;
    char op, sel;
    int i[5], j, highest, lowest; 
    
    printf("Do you wish to use calc or max/mid? (c/m)\n"); 
    scanf(" %c", &sel);
    if (sel == 'm') {
    	    printf("Enter 5 integers: \n");
    	    for (j=0; j<5; j++)
    	    	    scanf(" %i", &i[j]); 
    	    
    	    highest = i[0];
    	    lowest = i[0];
    	    for (j=0; j<5; j++) {
    	    	    if (i[j] > highest) {
    	    	    	    highest = i[j]; 
    	    	    }
    	    	    if (i[j] < lowest) {
    	    	    	    lowest = i[j]; 
    	    	    }
    	    }
    	    printf("Highest is: %i and lowest is: %i.\n", highest, lowest); 
    }
 
    else 
    do {
       printf("number  op  number?  ");
       scanf(" %f %c %f", &a, &op, &b);
       switch (op)
       {
           case '+' : r = add(a,b);
                      break;
           case '*' : r = multi(a,b);
                      break;
           case '-' : r = sub(a,b);
                      break;
           case '/' : r = div(a,b);
                      break;
           case 'm' : r = min(a,b);
                      break;
           case 'M' : r = max(a,b);
                      break;
           case '%' : r = mod(a,b);
           	      break; 
           case 'q' : break;
           default  : op='?';
       }
       if (op=='?')
          printf("Unknown operator\n");
       else if (op=='q')
          printf("Bye\n");
       else
          printf("%f %c %f = %f\n", a, op, b, r);
    }
    while (op != 'q');
    
    return 0;
}
