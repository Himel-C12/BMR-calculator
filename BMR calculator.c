#include <stdio.h>
#include <conio.h>
main ()
{
    int g;
    printf("\t\t\t\t\t\t\"BMR Calculator\"\n");
    printf("\t\t\t\t\"This application is made by Hasanuzzaman Himel\"\n");
    printf("Options-\n");
    printf("\n1.Male\n");
    printf("2.Female\n");
    printf("\nYou are: ");
    scanf("%d", &g);
    if (g==2)
        {
        float w,h,a,b;
        printf("\nEnter your weight(Kg):");
        scanf("%f", &w);
        printf("Enter your height(Cm):");
        scanf("%f", &h);
        printf("Enter your age       :");
        scanf("%f", &a);
        b = (655+(9.6*w)+(1.8*h)-(4.7*a));
        printf("\n\tYour BMR is: \"%.2f\" kilo calories\n", b);
        printf("\n");
        printf("How much exercises do you do regularly?                                 Calories you need daily\n");
        printf("\nNot at all          ------------------------------------------------------   Your BMR x 1.2\n");
        printf("A little bit        ------------------------------------------------------   Your BMR x 1.375\n");
        printf("Average             ------------------------------------------------------   Your BMR x 1.55\n");
        printf("More than average   ------------------------------------------------------   Your BMR x 1.725\n");
        printf("Much                ------------------------------------------------------   Your BMR x 1.9\n");
    }
    else {
        float w,h,a,b;
        printf("\nEnter your weight(Kg):");
        scanf("%f", &w);
        printf("Enter your height(Cm):");
        scanf("%f", &h);
        printf("Enter your age       :");
        scanf("%f", &a);
        b = 66+(13.7*w)+(5*h)-(6.8*a);
        printf("\n\tYour BMR is : \"%.2f\" kilo calories\n", b);
        printf("\n");
        printf("How much exercises do you do regularly?                                 Calories you need daily\n");
        printf("\nNot at all          ------------------------------------------------------   Your BMR x 1.2\n");
        printf("A little bit        ------------------------------------------------------   Your BMR x 1.375\n");
        printf("Average             ------------------------------------------------------   Your BMR x 1.55\n");
        printf("More than average   ------------------------------------------------------   Your BMR x 1.725\n");
        printf("Much                ------------------------------------------------------   Your BMR x 1.9\n");
    }
    {
        float x,y,z;
        printf("\n\t\t\t\t\t\t==============\n");
        printf("\t\t\t\t\t\t  Calculator\n");
        printf("\t\t\t\t\t\t==============\n");
        printf("\nPlease insert manually.If you don't want to use the application then simply close it.\n");
        printf("\n\tYour BMR                  : ");
        scanf("%f", &x);
        printf("\tYou want to multiply with : ");
        scanf("%f", &y);
        z=x*y;
        printf("\nYou need \"%.2f\" kilo calories daily.\n", z);
        printf("\n\t\t\t\t\t\t Thanks for using.\n");

    }
getch ();
return 0;
}
