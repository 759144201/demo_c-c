#include<iostream>
#include<string.h>

using namespace std;
#define day 7

int main() {
	int a = 0;
	const int month = 30;
	cout << "Hello World \n" << "a = " << a << endl;

	cout << "һ��������" << day << "��" << endl;;

	cout << "one month have " << month << "day" << endl;
	/**
	*	��������
	*/
	cout << "��������" << endl;
	cout << "the length of int is " << sizeof(int) << endl;
	cout << "the length of short is " << sizeof(short) << endl;
	//������
	float num = 3e5;
	double num2 = 3.14;
	cout << "float num = " << num << endl;
	cout << "double float num2 = " << num2 << endl;
	float num3 = 3e-2;
	cout << "float num3 = " << num3 << endl;
	//�ַ���
	char char1 = 'a';
	cout << char1 << endl;
	cout << sizeof(char1) << endl;
	cout << "ASCII of char a is " << (int)char1 << endl;
	char1 = 65;
	cout << char1 << endl; //A

	char1 = 010;//ת���ַ� ����
	cout << char1 << endl;
	cout << "\\" << endl;
	cout << "\tHello" << endl;
	cout << "\n" << endl;
	//�ַ�����
	char str1[] = "this is a string";//c style 
	string str2 = "this is a another string";//c++ style 
	cout << "srt1 is\n" << str1 << endl;
	cout << str2.c_str() << endl;
	//��������
	int in = 0;
	cout << "������" << endl;
	//cin >> in;
	cout << in << endl;
	/*
	*�����
	*/
	cout << "�����" << endl;
	//������,ǰ�õ����ȶԱ�������++���ټ�����ʽ�����õ����෴
	int ope1 = 2;
	cout << "ope1 = " << ope1 << endl;
	cout << "ope1 = " << ope1 << "++ope1 = " << ++ope1 << endl;//ǰ�õ���
	cout << "ope1 = " << ope1 << endl;
	cout << "ope1 = " << ope1 << "ope1++ = " << ope1++ << endl;//���õ���
	/*
	*һά����
	*ð�ݷ�����
	*1. �Ƚ����ڵ�Ԫ�ء������һ���ȵڶ����󣬾ͽ�������������
	*2. ��ÿһ������Ԫ����ͬ���Ĺ�����ִ����Ϻ��ҵ���һ�����ֵ��
	*3. �ظ����ϵĲ��裬ÿ�αȽϴ���-1��ֱ������Ҫ�Ƚ�
	*/
	cout << "һά����	��ð�ݷ�����" << endl;
	int arr[] = { 4,2,8,0,3,8,5,7,1,3,9 };
	int i = 0, j = 0;
	int temp = 0;
	int arrnum = sizeof(arr) / sizeof(arr[0]);//һά�����������
	cout << "arrnum is " << arrnum << endl;

	int arradd = 0;

	cout << "arradd is " << (int)arr << "ele0add is " << (int)&arr[0] << endl;
	//����ĵ�ַ��ע��(int)��(int)&

	cout << "the orginal arr is " << endl;
	for (i = 0; i < arrnum; i++) {
		cout << arr[i] << endl;
	}

	cout << "the bubbling method " << endl;
	for (i = 0; i < arrnum - 1; i++) {
		for (j = 0; j < arrnum - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		//int g = i + 1;
		//cout << "arr after  sort " << g << "time is " << endl;
		//for (int y = 0; y < arrnum; y++) {
		//	cout << arr[y] << endl;
		//}
	}

	cout << "arr after bubbling method sort is " << endl;
	for (i = 0; i < arrnum; i++) {
		cout << arr[i] << endl;
	}
	/*
	*��ά����
	*/
	cout << "��ά����" << endl;
	int arr2[2][3] = {
		{1,2,3},
		{4,5,6}
	};
	cout << "lines of arr is " << sizeof(arr2) / sizeof(arr2[0]) << endl;
	cout << "columns of arr is " << sizeof(arr2[0]) / sizeof(arr2[0][0]) << endl;
	cout << "elements of arr is " << sizeof(arr2) / sizeof(arr2[0][0]) << endl;

	/*
	*ָ��
	*/
	cout << "ָ��" << endl;
	int p_var = 10;
	int *p;
	p = &p_var;
	cout << "point is address, p = " << p << endl;
	cout << "& can show address of variable, &p_var = " << &p_var << endl;
	cout << "* can quote the data of address, *p = " << *p << endl;
	cout << "the size of all point types is 4 byte" << sizeof(char *) << sizeof(float *) << sizeof(double *) << endl;

	int p_a = 10;
	int p_b = 10;
	//const���ε���ָ�룬ָ��ָ����Ըģ�ָ��ָ���ֵ�����Ը���
	const int * p1 = &p_a;
	p1 = &p_b; //��ȷ
	//*p1 = 100; ����
	//const���ε��ǳ�����ָ��ָ�򲻿��Ըģ�ָ��ָ���ֵ���Ը���
	int * const p2 = &p_a;
	//p2 = &p_b; //����
	*p2 = 100; //��ȷ
	//const������ָ�������γ���
	const int * const p3 = &p_a;
	//p3 = &p_b; //����
	//*p3 = 100; //����
	/*
	*ָ��������
	*/
	cout << "ָ�������� " << endl;
	int *p_arr = arr;
	for (i = 0; i < arrnum; i++) {
		//cout << "point's address is " << p_arr
		//	<< "\narr's address is " << &arr[i]
		//	<< "\nthe orginal arr is " << arr[i];
		cout << "\nthe data of point to " << *p_arr << endl;
		p_arr++;
	}
	/*
	*ָ���뺯��
	*��ַ���ݻ�ı�ʵ��
	*/
	/*cout << "ָ���뺯�� " << endl;*/
	//��ַ����
	//void swap2(int * p1, int *p2)
	//{
	//	int temp = *p1;
	//	*p1 = *p2;
	//	*p2 = temp;
	//}
	//swap2(&a,&b)//a,b��ֵҲ��仯
	/*
	*�ṹ��
	*/
	cout << "�ṹ��������ֶ��巽ʽ " << endl;

	struct student {
		int age;
		int score;
		string name;
	}stu1;

	struct student stu2;//or use student stu1 after define struct 
	struct student stu3 = { 27,63,"rookie" };
	stu2.age = 23, stu2.name = "noob", stu2.score = 61;
	stu1.age = 25, stu1.name = "newbie", stu1.score = 62;
	cout << "studen1 is " << stu1.age << "year," << "call " << stu1.name.c_str() << endl;

	cout << "�ṹ��������� " << endl;
	struct student stru_arr[3] = {
		stu1,
		stu2,
		stu3
	};
	for (i = 0; i < 3; i++) {
		cout << "  student's name is " << stru_arr[i].name.c_str()
			<< "  student's age is " << stru_arr[i].age
			<< "  student's score is " << stru_arr[i].score
			<< endl;
	}
	cout << "�ṹ�����ָ�� " << endl;
	struct student *p_stru = &stu1;//define
	p_stru->score = 90;	//point call on members by ->
	cout << "the student's score change to " << p_stru->score << endl;

	cout << "�ṹ��example " << endl;
	struct hero {
		int age;
		string sex;
		string name;
		int ATK;
		int INT;
	};
	struct hero hero1 = { 34,"��","����",98,80 };
	struct hero hero2 = { 28,"��","½ѷ",86,85 };
	struct hero hero3 = { 30,"��","�ŷ�",99,40 };
	struct hero hero4 = { 22,"Ů","����",45,83 };
	struct hero hero5 = { 24,"��","����",100,55 };
	struct hero hero6 = { 55,"��","�����",30,100 };
	struct hero hero7 = { 35,"��","���",60,90 };

	struct hero heros[] = {
		hero1,
		hero2,
		hero3,
		hero4,
		hero5,
		hero6,
		hero7,
	};
	int num_hero = sizeof(heros) / sizeof(heros[0]);
	cout << "the original hero sequence is " << endl;
	for (i = 0; i < num_hero; i++) {
		cout << heros[i].name.c_str() << " , " 
			<< heros[i].age << "   , " 
			<< heros[i].sex.c_str() << "   , "
			<< heros[i].ATK << "   , "
			<< heros[i].INT << "   , "				
			<< endl;
	}
	for (i = 0; i < num_hero - 1; i++) {
		for (j = 0; j < num_hero - 1 - i; j++) {
			if (heros[j].ATK > heros[j + 1].ATK) {
				struct hero hero_temp = heros[j];
				heros[j] = heros[j + 1];
				heros[j + 1] = hero_temp;
			}
		}
	}
	cout << "the most powerful hero sequence is " << endl;
	for (i = 0; i < num_hero; i++) {
		cout << heros[i].name.c_str() << " , "
			<< heros[i].age << "   , "
			<< heros[i].sex.c_str() << "   , "
			<< heros[i].ATK << "   , "
			<< heros[i].INT << "   , "
			<< endl;
	}
	for (i = 0; i < num_hero - 1; i++) {
		for (j = 0; j < num_hero - 1 - i; j++) {
			if (heros[j].INT > heros[j + 1].INT) {
				struct hero hero_temp = heros[j];
				heros[j] = heros[j + 1];
				heros[j + 1] = hero_temp;
			}
		}
	}
	cout << "the most intelligent hero sequence is " << endl;
	for (i = 0; i < num_hero; i++) {
		cout << heros[i].name.c_str() << " , "
			<< heros[i].age << " , "
			<< heros[i].sex.c_str() << "   , "
			<< heros[i].ATK << "   , "
			<< heros[i].INT << "   , "
			<< endl;
	}



	system("pause");
	return 0;
}