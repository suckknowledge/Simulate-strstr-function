#include<stdio.h>
#include<assert.h>

char* my_strstr(const char* arr1, const char* arr2)
{
	assert(arr1 && arr2);
	const char* a1 = NULL;
	const char* a2 = NULL;
	const char* cp = arr1;
	if (arr2 == '\0')//以防传递的是空字符串
	{
		return (char*)arr1;
	}
	while (*cp)//设置变量cp的目的就是防止出现对比时前几个字符相等后面不等，导致arr1无返返回前面重新对比
	{
		a1 = cp;
		a2 = arr2;
		while (*a1&&*a2&&(*a1 == *a2))
		{
			a1++;
			a2++;
		}
		if (*a2 == '\0')
		{
			return cp;
		}
		cp++;
	}
	return NULL;//没找到返回空值
}
int main()
{
	char arr1[] = "adddesf";
	char arr2[] = "des";
	char*ret=my_strstr(arr1, arr2);//调用函数my_strstr模仿strstr函数
	if (ret == NULL)
	{
		printf("没找到\n");
	}
	else
	{
		printf("找到了：%s\n", ret);
	}
	return 0;
}