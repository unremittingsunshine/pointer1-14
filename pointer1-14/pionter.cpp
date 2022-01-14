//#include<stdio.h>
////函数指针的数组
//int ADD(const int x, const int y)
//{
//	return x + y;
//}
//int SUB(const int x, const int y)
//{
//	return x - y;
//}
//int MUL(const int x, const int y)
//{
//	return x * y;
//}
//int DIV(const int x, const int y)
//{
//	return x / y;
//}
//int main()
//{
//	int(*p[4])(const int, const int) = { ADD,SUB,MUL,DIV };
//	int i = 0;
//	while (i < 4)
//	{
//		printf("%d\n", p[i](2, 3));
//		i++;
//	}
//}
#include<stdio.h>
#include<assert.h>
#include<string.h>

char* my_strcpy1(char* arr1, const char* arr2)
{
	assert(arr1 != "NULL");
	assert(arr2 != "NULL");
	char*p = arr1;
	for (int i = 0; arr2[i] != '\0'; i++)
	{
		arr1[i] = arr2[i];
	}
	return p;
}
char* my_strcpy2(char* arr1, const char* arr2)
{
	assert(arr1 != "NULL");
	assert(arr2 != "NULL");
	char*p = arr1;
	while (*arr1++ = *arr2++)
	{
		;
	}
	return p;
}
int main()
{
	char arr1[] = { "##################" };
	char arr2[] = { "my little girl" };
	char*(*p[2])(char*, const char*) = { my_strcpy1,my_strcpy2 };
	for (int i = 0; i < 2; i++)
	{
		printf("%s\n", p[i](arr1, arr2));
	}
}
