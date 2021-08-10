#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
 /*写一段代码告诉我们当前机器的字节序是什么*/
    int a = 1;
    char* p = (char*)&a;
    if (*p == 1)
    {
        printf("小端");

    }
    else
    {
        printf("大端");
    }

    return 0;
}
#include < assert.h>
//3.char* my_strcpy(char* a, const char* b)
//{ 
//    char* ret = a;
//    assert(a!= NULL);//断言
//    assert(b != NULL);//断言
//    while (*a++ = *b++)
//    {
//       ;
//       
//    }
//    return ret;
//}
//int main()
//{
//    char arr1[] = "***********";
//    char arr2[] = "bit";
//     printf("%s\n", my_strcpy(arr1, arr2));
//        return 0;
//    }
//
//#include < assert.h>
//void my_strcpy(char* a, char* b)
//{ 
//    assert(a!= NULL);//断言
//    assert(b != NULL);//断言
//    while (*a++ = *b++)
//    {
//       ;
//       
//    }
//
//}
//void my_strcpy(char* a, char* b)
//{
//    if(a!=NULL &&b!=NULL)
//    while (*a++ = *b++)
//    {
//       ;
//       
//    }
//
//}
//void my_strcpy(char* a, char* b)
//{
//    while (*b != '\0')
//    {
//        *a = *b;
//        a++;
//        b++;
//    }
//    *a = *b;//\0
//}
//int main()
//{
//    char arr1[] = "***********";
//    char arr2[] = "bit";
//    my_strcpy(arr1, arr2);
//    printf("%s\n", arr1);
//    return 0;
//}
////实现数字每个数字的相加
//int my_num(unsigned int n)
//{
//    if (n > 9)
//    {
//        return my_num(n / 10) + n % 10;
//    }
//    else
//    {
//        return n;
//    }
//}
//int main()
//{
//    unsigned int a = 0;
//    scanf("%d", &a);
//    int ret = my_num(a);
//    printf("%d", ret);
//    return 0;
//}
////写一个函数算去二进制有几个1
//int count_bit(unsigned int n)//第三种
//{
//    int count = 0;
//    while (n)
//    {
//        n = n & (n - 1);//n&(n-1)是将二进制中的最后面一位的1给变为0
//        count++;
//  }
//    return count;
//}
//int count_bit(unsigned int n)//第二种
//{
//    int count = 0;
//    int i = 0;
//    for (i = 0; i < 32; i++)
//    {
//        if (((n >> i) & 1 )== 1)
//        {
//            count++;
//        }
//    }
//    return count;
//}
////int count_bit(unsigned int n)第一种
//{
//    int count = 0;
//    while (n)
//    {
//        if (n % 2 == 1)
//        {
//            count++;
//        }
//        n = n / 2;;
//    }
//    return count;
//}
//int main()
//{
//    int a = 0;
//    scanf("%d", & a);
//    int count=count_bit(a);
//    printf("count=%d", count);
//    return 0;
// }