#include<stdio.h>
#include<assert.h>

char* my_strstr(const char* arr1, const char* arr2)
{
	assert(arr1 && arr2);
	const char* a1 = NULL;
	const char* a2 = NULL;
	const char* cp = arr1;
	if (arr2 == '\0')//�Է����ݵ��ǿ��ַ���
	{
		return (char*)arr1;
	}
	while (*cp)//���ñ���cp��Ŀ�ľ��Ƿ�ֹ���ֶԱ�ʱǰ�����ַ���Ⱥ��治�ȣ�����arr1�޷�����ǰ�����¶Ա�
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
	return NULL;//û�ҵ����ؿ�ֵ
}
int main()
{
	char arr1[] = "adddesf";
	char arr2[] = "des";
	char*ret=my_strstr(arr1, arr2);//���ú���my_strstrģ��strstr����
	if (ret == NULL)
	{
		printf("û�ҵ�\n");
	}
	else
	{
		printf("�ҵ��ˣ�%s\n", ret);
	}
	return 0;
}