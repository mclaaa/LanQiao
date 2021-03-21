#include <stdio.h> 
#include <string.h>
struct Student
{
	int age;
	char sex;
	char name[100];
};//分号不能省略 

void InputStudent(struct Student *);
void OutputStudent(struct Student ss);

int main (void)
{
	struct Student st;
	
	InputStudent(&st);
	printf("%d %c %s\n",st.age,st.sex,st.name);
	
	//OutputStudent();
	return 0;

}
void OutputStudent(struct Student ss);void OutputStudent(struct Student ss)
{
	printf("%d %c %s\n", ss.age, ss.sex, ss.name);
}
void InputStudent(struct Student * pstu) //pstu只占4个字节
{
	(*pstu).age=10;
	strcpy(pstu->name,"张三");
	pstu->sex='F'; 
}



/*
void InputStudent(struct Student stu)
{
	stu.age=10;
	strcpy(stu.name,"张三");
	stu.sex='F';
}*/
