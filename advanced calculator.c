#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){

int choice,i,sum=1,a,b,result;
float x,y,r;

do{
    // list of operations you want to perform
    printf("enter the type of operation you want to perform:(press 0 to exit):\n");
    printf("1-addition\n2-subtraction\n3-division\n4-multiplication\n");
    printf("5-square root\n6-x^y\n7-x^2\n8-x^3\n");
    printf("9-1/x\n10-x^(1/y)\n11-x^(1/3)\n12-10^x\n");
    printf("13-X!\n14-log10(x)\n15-modulus\n");
    printf("16-sin(x)\n17-cos(x)\n18-tan(x)\n19-cosec(x)\n20-sec(x)\n21-cot(x)\n\n");
    printf("enter choice\n");
    scanf("%d",&choice);
    //condition to close the calculator
    if(choice==0)
        exit(0);
    // different cases starts from here
    switch(choice){
case 1:
    printf("enter the first and second number:\n ");
    scanf("%f%f",&x,&y);
    r=x+y;
    printf("result is = %f\n\n",r);
    break;
case 2:
    printf("enter the first and second number:\n ");
    scanf("%f%f",&x,&y);
    r=x-y;
    printf("result is = %f\n\n",r);
    break;
case 3:
    printf("enter the first and second number:\n ");
    scanf("%f%f",&x,&y);
    r=x/y;
    printf("result is = %f\n\n ",r);
    break;
case 4:
    printf("enter the first and second number:\n ");
    scanf("%f%f",&x,&y);
    r=x*y;
    printf("result is = %f\n\n",r);
    break;
case 5:
    printf("enter number\n");
    scanf("%f",&x);
    r=sqrt(x);
    printf("result is =%f\n\n",r);
    break;
case 6:
    printf("enter the first and second number\n ");
    scanf("%f%f",&x,&y);
    r=pow(x,y);
    printf("result is =%f\n\n",r);
    break;
case 7:
    printf("enter number\n");
    scanf("%f",&x);
    r=pow(x,2);
    printf("result is =%f\n\n",r);
    break;
case 8:
    printf("enter number\n");
    scanf("%f",&x);
    r=pow(x,3);
    printf("result is =%f\n\n",r);
    break;
case 9:
    printf("enter number\n");
    scanf("%f",&x);
    r=pow(x,-1);
    printf("result is =%f\n\n",r);
    break;
case 10:
    printf("enter first and second number\n");
    scanf("%f%f",&x,&y);
    r=pow(x,1/y);
    printf("result is = %f\n\n",r);
    break;
case 11:
    printf("enter number\n");
    scanf("%f",&x);
    r=pow(x,1/3);
    printf("result is =%f\n\n",r);
    break;
case 12:
    printf("enter number\n");
    scanf("%f",&x);
    r=pow(10,x);
    printf("result is = %f\n\n",r);
    break;
case 13:
    printf("enter number\n");
    scanf("%f",&x);
    for(i=1;i<=x;i++){                 //for loop to calculate factorial
        sum=sum*i;
    }
    printf("result is = %d\n\n",sum);
    break;
case 14:
    printf("enter number\n");
    scanf("%f",&x);
    r=log10(x);
    printf("result is =%f\n\n",r);
    break;
case 15:
    printf("enter first and second number\n");
    scanf("%f%f",&a,&b);
    result=a%b;
    printf("result is =%d\n\n",result);
    break;
case 16:
    printf("enter angle\n");
    scanf("%f",&x);
    r=sin(x*3.14/180);
    printf("result is =%f\n\n",r);
    break;
case 17:
    printf("enter angle\n");
    scanf("%f",&x);
    r=cos(x*3.14/180);
    printf("result is =%f\n\n",r);
    break;
case 18:
    printf("enter angle\n");
    scanf("%f",&x);
    r=tan(x*3.14/180);
    printf("result is =%f\n\n",r);
    break;
case 19:
    printf("enter angle\n");
    scanf("%f",&x);
    r=1/sin(x*3.14/180);
    printf("result is =%f",r);
    break;
case 20:
    printf("enter angle\n");
    scanf("%f",&x);
    r=1/cos(x*.014/180);
    printf("result is =%f",r);
    break;
case 21:
    printf("enter angle\n");
    scanf("%f",&x);
    r=1/tan(x*3.14/180);
    printf("result is = %f",r);
    break;
    }
}while(choice);
//do while loop ends here
return 0;
getch();
}
//main function ends here












