#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#define write for(i=1;i<=7;i++)
#define letter for(j=1;j<=5;j++)
#define newline printf("\n")
#define tab printf("\t");
#define space printf("  ")
#define image printf("\2 ")
int i,j;
void A()
{
	write
	{
		if(i==1)
			letter
				(j==1||j==5)?space:image;
		else if(i==4)
			letter
				image;
		else
			letter
				(j==1||j==5)?image:space;
		newline;
	}
}
void B()
{
	write
	{
		if(i==1||i==4||i==7)
			for(j=1;j<5;j++)
				image;
		else
		{
			letter
			{
				if(j==1||j==5)
				image;
				else
				for(j=1;j<4;j++)
				space;
			}
		}
		newline;
	}
}
void C()
{
	write
	{
		if(i==1||i==7)
		{
			space;
			for(j=1;j<4;j++)
			image;
		}
		else if(i==2||i==6)
		{
			image;
			for(j=1;j<4;j++)
			space;
			image;
		}
		else
		image;
		newline;
	}
}

void D()
{
	write
	{
		letter
		{
			if(j==1||(i==1&&j!=5)||(i==7&&j!=5)||(j==5&&i!=7&&i!=1))
				image;
			else
				space;
		}
		newline;
	}
}
void E()
{
	write
	{
		if(i==1||i==4||i==7)
			letter
				image;
		else
			letter
				(j==1)?image:space;
		newline;
	}
}
void F()
{
	write
	{
		if(i==1)
			letter
				image;
		else if(i==4)
			letter
				(j==5)?space:image;
		else
			image;
		newline;
	}
}
void G()
{
	write
	{
		if(i==1||i==7)
			letter
				(j==1||j==5)?space:image;
		else if(i==2||i==5||i==6)
			letter
				(j==1||j==5)?image:space;
		else if(i==4)
			letter
				(j==2)?space:image;
		else
			image;
		newline;
	}
}
void H()
{
	write
	{
		if(i==4)
			letter
				image;
		else
			letter
				(j==1||j==5)?image:space;
		newline;
	}
}
void I()
{
	write
	{
		if(i==1||i==7)
		letter
			(j==1||j==5)?space:image;
		else
		letter
			(j==3)?image:space;
		newline;
	}
}
void J()
{
	write
	{
		if(i<5)
			letter
				(j==5)?image:space;
			else if(i<7)
				letter
					(j==1||j==5)?image:space;
				else
					letter
						(j==1||j==5)?space:image;
		newline;
	}
}
void K()
{
	write
	{
		if(i==1||i==7)
			letter
				(j==1||j==5)?image:space;
			else if(i==2||i==6)
				letter
					(j==1||j==4)?image:space;
				else if(i==3||i==5)
					letter
						(j==1||j==3)?image:space;
					else
						for(j=1;j<=2;j++)
							image;
		newline;
	}
}
void L()
{
	write
	{
		if(i==7)
			letter
				image;
		else
			image;
		newline;
	}
}
void M()
{
	write
	{       if(i==3||i==4)
		letter
			(j==2||j==4)?space:image;
		else if(i==2)
		letter
			(j==3)?space:image;
		else
		letter
			(j==1||j==5)?image:space;
		newline;
	}
}
void N()
{
	write
	{
		letter
			((j==1||j==5)||(i==j&&i<5))?image:space;
		newline;
	}
}
void O()
{
	write
	{
		if(i==1||i==7)
		letter
			(j==1||j==5)?space:image;
		else
		letter
			(j==1||j==5)?image:space;
		newline;
	}
}
void P()
{
	write
	{
		if(i==1||i==4)
		letter
			(j!=5)?image:space;
		else if(i==2||i==3)
		letter
			(j==1||j==5)?image:space;
		else
			image;
		newline;
	}
}
void Q()
{
	write
	{
		if(i==1)
		letter
			(j==1||j==5)?space:image;
		else if(i>1&&i<5)
		letter
			(j==1||j==5)?image:space;
		else if(i==5)
		letter
			(j%2==0)?space:image;
		else if(i==6)
		letter
			(j==1||j==4)?image:space;
		else
		letter
			(j==1||j==4)?space:image;
		newline;
	}
}
void R()
{
	write
	{
		if(i==1||i==4)
		letter
			(j!=5)?image:space;
		else if(i==2||i==3)
		letter
			(j==1||j==5)?image:space;
		else
		letter
			(j==1||i-j==2)?image:space;
		newline;
	}
}
void S()
{
	write
	{
		if(i==1||i==4||i==7)
		letter
			(j==1||j==5)?space:image;
		else if(i==2||i==6)
		letter
			(j==1||j==5)?image:space;
		else if(i==5)
		letter
			(j==5)?image:space;
		else
			image;
		newline;
	}
}
void T()
{
	write
	{
		letter
			(i==1||j==3)?image:space;
		newline;
	}
}
void U()
{
	write
	{
		if(i<7)
		letter
			(j==1||j==5)?image:space;
		else
		letter
			(j==1||j==5)?space:image;
		newline;
	}
}
void V()
{
	write
	{
		if(i<6)
		letter
			(j==1||j==5)?image:space;
		else if(i==6)
		letter
			(j==2||j==4)?image:space;
		else
		letter
			(j==3)?image:space;
		newline;
	}
}
void W()
{
	write
	{
		if(i<4||i>6)
		letter
			(j==1||j==5)?image:space;
		else if(i<6)
		letter
			(j%2==0)?space:image;
		else
		letter
			(j==3)?space:image;
		newline;
	}
}
void X()
{
	write
	{
		if(i<2||i>6)
		letter
			(j==1||j==5)?image:space;
		else
		letter
			(i-1==j||i+j==7)?image:space;
		newline;
	}
}
void Y()
{
	write
	{
		if(i<3)
		letter
			(j==1||j==5)?image:space;
		if(i>5)
		letter
			(j==3)?image:space;
		else
		letter
			(i-2==j||i+j==8)?image:space;
		newline;
	}
}
void Z()
{
	write
	{
		if(i<2||i>6)
		letter
			image;
		else
		letter
			(i+j==7)?image:space;
		newline;
	}
}
void Block_Letters(char *p)
{
	int i,j;
	char ch;
	if(*p>=97&&*p<=122)
		*p-=32;
	for(i=0;*(p+i)!='\0';i++)
	{
		if(*(p+i)==32)
		{
			if(*(p+i+1)>=97&&*(p+i+1)<=122)
				*(p+i+1)-=32;
		}
	}
}
void print_name(char *p)
{
	int i,j=0;
	for(i=0;*(p+i)!='\0';i++)
	{
		if(*(p+i)==32)
		{
			for(;*(p+j)!=32;j++)
				printf("%c",*(p+j));
			break;
		}
	}
	if(j==0)
	printf("%s",p);
}
void check_gender(char *p)
{
	int exit=1;
	while(exit)
	{
		printf("\n Male(M) / Female(F) : ");
		scanf("%s",p);
		switch(*p)
		{
			case 'f':
			case 'F':
				printf("\n Hi Lady,");
				exit=0;
				break;
			case 'm':
			case 'M':
				printf("\n Hello Sir,");
				exit=0;
				break;
			default:
				printf("\n !!! EROR !!!\n Please Enter M or F\n Try Again ");
				getch();
		}
	}
}
void name_tag(char *p)
{
	if(*p=='F' || *p=='f')
		printf(" Lady ");
	else
		printf(" Sir ");
}
void main()
{
	char name[50],gender,ch;
	int i;
	system("cls");
	check_gender(&gender);
	printf("\e[1;1H\e[2J");
	printf("\n What is Your Name : ");
	fflush(stdin);
	gets(name);
	system("cls");
	newline;
	Block_Letters(name);
	name_tag(&gender);
	print_name(name);
	printf(", \n I Have Got Some Thing For You",name);
	printf("\n Just Press a Key\n");
	for(i=0;name[i]!='\0';i++)
	{       ch=name[i];
		switch(ch)
		{
			case 'A':
			case 'a':
				getch();
				newline;
				A();
				break;
			case 'B':
			case 'b':
				getch();
				newline;
				B();
				break;
			case 'C':
			case 'c':
				getch();
				newline;
				C();
				break;
			case 'D':
			case 'd':
				getch();
				newline;
				D();
				break;
			case 'E':
			case 'e':
				getch();
				newline;
				E();
				break;
			case 'F':
			case 'f':
				getch();
				newline;
				F();
				break;
			case 'G':
			case 'g':
				getch();
				newline;
				G();
				break;
			case 'H':
			case 'h':
				getch();
				newline;
				H();
				break;
			case 'I':
			case 'i':
				getch();
				newline;
				I();
				break;
			case 'J':
			case 'j':
				getch();
				newline;
				J();
				break;
			case 'K':
			case 'k':
				getch();
				newline;
				K();
				break;
			case 'L':
			case 'l':
				getch();
				newline;
				L();
				break;
			case 'M':
			case 'm':
				getch();
				newline;
				M();
				break;
			case 'N':
			case 'n':
				getch();
				newline;
				N();
				break;
			case 'O':
			case 'o':
				getch();
				newline;
				O();
				break;
			case 'P':
			case 'p':
				getch();
				newline;
				P();
				break;
			case 'Q':
			case 'q':
				getch();
				newline;
				Q();
				break;
			case 'R':
			case 'r':
				getch();
				newline;
				R();
				break;
			case 'S':
			case 's':
				getch();
				newline;
				S();
				break;
			case 'T':
			case 't':
				getch();
				newline;
				T();
				break;
			case 'U':
			case 'u':
				getch();
				newline;
				U();
				break;
			case 'V':
			case 'v':
				getch();
				newline;
				V();
				break;
			case 'W':
			case 'w':
				getch();
				newline;
				W();
				break;
			case 'X':
			case 'x':
				getch();
				newline;
				X();
				break;
			case 'Y':
			case 'y':
				getch();
				newline;
				Y();
				break;
			case 'Z':
			case 'z':
				getch();
				newline;
				Z();
				break;
			default :
				printf("\n\n");
		}
	}
	getch();
	//clrscr();
	printf("\n Thank You");
	name_tag(&gender);
	print_name(name);
	printf(",\n For Using The Program.\n I Hope You Have Injoyed it.");
	getch();
}
