#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
 /*дһ�δ���������ǵ�ǰ�������ֽ�����ʲô*/
    int a = 1;
    char* p = (char*)&a;
    if (*p == 1)
    {
        printf("С��");

    }
    else
    {
        printf("���");
    }

    return 0;
}
#include < assert.h>
//3.char* my_strcpy(char* a, const char* b)
//{ 
//    char* ret = a;
//    assert(a!= NULL);//����
//    assert(b != NULL);//����
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
//    assert(a!= NULL);//����
//    assert(b != NULL);//����
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
////ʵ������ÿ�����ֵ����
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
////дһ��������ȥ�������м���1
//int count_bit(unsigned int n)//������
//{
//    int count = 0;
//    while (n)
//    {
//        n = n & (n - 1);//n&(n-1)�ǽ��������е������һλ��1����Ϊ0
//        count++;
//  }
//    return count;
//}
//int count_bit(unsigned int n)//�ڶ���
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
////int count_bit(unsigned int n)��һ��
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