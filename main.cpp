#include <cstdio>
//Find the sum of all the multiples of 3 or 5 below 1000.

int main()
{
    unsigned long sum=0;
    for( long num=1; num<1000; ++num)
    //for( long num=1; num<10; ++num)
    {
        if(num%3==0)
        {
            //
            sum+=num;
            //printf("num:%d \n",num);
            //printf("sum:%d \n",sum);
        }
        else if(num%5==0)
        {
            //
            sum+=num;
            //printf("num:%d \n",num);
            //printf("sum:%d \n",sum);
        }
        //printf("sum: %d \n",sum);
    }
    printf("sum: %d \n",sum);
    //sum: 1664 
    
    return 0;
}
