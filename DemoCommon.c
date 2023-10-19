#include<stdio.h>


int main()
{
    //declare variables
    int number1=4357;
    int number2 =5438;
    int number3 = 4749; 
    int digit1[4];
    int digit2[4];
    int digit3[4];

    int count =0;
    int temp =0;

    //defining a loop for splitting the number
    for(int i=0; i<4 ; i++)
    {
        digit1[i]=number1%10;
        number1=number1/10;
    }


      for(int i=0; i<4 ; i++)
    {
        digit2[i]=number2%10;
        number2=number2/10;
    }



      for(int i=0; i<4 ; i++)
    {
        digit3[i]=number3%10;
        number3=number3/10;
    }



    //for reading the digits stored in digits array
    printf("digits are number1 \n");
    for(int j=3 ; j>=0 ; j-- )
    {
        printf("%d\n",digit1[j]);
       
    }

    printf("digits are number2 \n");
    for(int j=3 ; j>=0 ; j-- )
    {
        printf("%d\n",digit1[j]);
       
    }

    printf("digits are number3 \n");
    for(int j=3 ; j>=0 ; j-- )
    {
        printf("%d\n",digit1[j]);
       
    }

for(int i =0; i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                if(digit1[i]==digit2[j] && digit2[j]==digit3[k])
                {
                   count++;
                   temp = digit1[i];
                }
            }
        }
    }

    if(count == 1)
    {

        printf("Common number is %d\n ",temp);
    }
    else
    {
        printf("Invalid number ");
    }

}