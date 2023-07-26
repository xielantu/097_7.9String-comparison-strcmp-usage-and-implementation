// 097_7.9字符串比较strcmp使用及实现.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include <string.h>
#include <assert.h>

int myStrcmp(char* str1, char* str2)
{
	int ret = 0;
	int n_str1 = 0;
	int n_str2 = 0;
	char* bakStr1 = str1;
	char* bakStr2 = str2;
	while (*str1 && *str2 && (*str1 == *str2))
	{
		str1++;
		str2++;
	}
	if (*str1 || *str2)
	{
		str1 = bakStr1;
		str2 = bakStr2;
		while (*str1)
		{
			n_str1 += *str1;
			str1++;
		}
		while (*str2)
		{
			n_str2 += *str2;
			str2++;
		}
	}
	ret = n_str1 - n_str2;
	if (ret < 0)	ret= -1;
	if (ret > 0)	ret= 1;

	return ret;

}




int main()
{
	const char* p1 = "chenlichena";
	const char* p2 = "chenlichena";
	int ret2 = p1 - p2;
	int ret = myStrcmp((char*)p1,(char*) p2);//-1 0 1
	//int ret = strcmp(p1, p2);
	if (ret == 0)
	{
		puts("两个字符串一样");
	}
	printf("RET=%d\n", ret);
	printf("RET=%d,ret=%d,strlne:%d\n", ret, ret2, strlen(p1));








	return 0;
}

 