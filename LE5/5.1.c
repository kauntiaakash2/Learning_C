/*Enter 3 sides of a triangle. WAP to check whether those sides form a valid
triangle or not (it is valid if sum of the two sides is greater than the largest
of three sides). Then classify the given triangle is isosceles, equilateral or
right-angled or scalene..
Input: Enter 3 sides of a triangle: 7 7 7
Output: This is an equilateral triangle*/
#include<stdio.h>
#include<math.h>

void main(){
    //a,b,c are 3 sides of triangle
    // h,bs,p are height,base & perpendicular respectively
    int a,b,c,h,bs,p,g;
    printf("Enter 3 sides of triangle:");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c)
    {
        h=a;
        bs=b;
        p=c;
    }
    else if (b>a && b>c)
    {
        h=b;
        bs=a;
        p=c;
    }
    else if (c>a && c>b)
    {
        h=c;
        bs=a;
        p=b;
    }
    
    g=(float)sqrt(pow(bs,2)+pow(p,2));
    
    if (a+b>c && a+c>b && b+c>a);
    {
        printf("Yes,sides form a valid triangle\n");
        
        if (a==b || a==c || b==c)
        {
            printf("It's an isosceles triangle\n");
        }

        else if (a==b==c)
        {
            printf("It's an equilateral triangle\n");
        }
        else if (h==g)
        {
            printf("It's a right-angled triangle\n");
        }
        else{
            printf("It's a scalene triangle\n");
        }
        
        
    }
    
}