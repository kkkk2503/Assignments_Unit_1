#include <stdio.h>

int main()
{
    //code for assignment operator
    int a=20,b=10;
    printf("a=b:%d\n",a=b);
    printf("a+=b:%d\n",a+=b);
    printf("a-=b:%d\n",a-= b);
    printf("a*=b:%d\n",a*=b);
    printf("a/=b:%d\n",a/=b);
    printf("a%%=b:%d\n",a%=b);
    printf("a&=b:%d\n",a&=b);
    printf("a|=b:%d\n",a|=b);
    printf("a>>=b:%d\n",a>>=b); 
    printf("a<<=b:%d\n",a<<=b);

    return 0;
}
