#include<stdio.h>
#include<conio.h>
struct banka
{
	int accno;
	char fname[100],lname[100];
	char email[100];
	char acctyp[100];
	long int phn;
	int bal;
}banka;
void main()
{
	int i,c=0,cnt=0,x=0,z=0,I=0,B=0,q=0,D=0,f=0;
	struct banka bank[10];
	system("cls");
//@	clrscr();
//	bank[0].accno=001;
	for(i=0;i<80;i++)
		printf("*");
	printf("  abrar bank  ");
	for(i=0;i<80;i++)
		printf("*");
	printf("\n\n\n\n\n\n\t\t\t\t-----------------------------press any key to start-----------------------------\n");
	getch();
	home:
//@	clrscr();
    system("cls");
	for(i=0;i<80;i++)
		printf("*");
		printf("  abrar bank  ");
	for(i=0;i<80;i++)
		printf("*");
	printf("\n\nchose your option:-\n1.add acount \n2.update account\n3.delet account\n4.check balance\n5.exit\n");
	for(i=0;i<80;i++)
	printf("*");
	printf("\n");
	scanf("%d",&c);
//@	clrscr();
    system("cls");
	switch(c)
	{
		case 1:
		{
		   for(z=f;z<10;z++)
		   {
//		   if(x==4)
  //		   {
    //			goto home;
      //		   }
			clear:
			again:
			fflush(stdin);
			printf("ENTER ACCOUNT NUMBER =");
			scanf("%d",&bank[z].accno);
//            if(bank[z].accno<'0' && bank[z].accno>'9')
//                {
//                    printf("account number should be in number only ----try again ---\n");
//      @@              goto again;
//                }
			for(i=0;i<=z;i++)
			{
				if(bank[z].accno==bank[i].accno&&i!=z)
				{
					printf("account number already exist-----try again----");
					goto again;
				}
			}
			fflush(stdin);
			printf("\nHOLDER FIRST NAME :-");
			gets(bank[z].fname);
				for(i=0;bank[z].fname[i]!=0;i++)
				{
				  if(bank[z].fname[i]<97 || bank[z].fname[i]>122)
				   {
					printf("\n ERROR  --  try again");
					goto again;
				   }
				}
				again2:
			fflush(stdin);
			printf("\n\nLAST NSME :-");
			gets(bank[z].lname);
			for(i=0;bank[z].lname[i]!=0;i++)
				{
				  if(bank[z].lname[i]<97 || bank[z].lname[i]>122)
				   {
					printf("\n ERROR  --- try again");
					goto again2;
				   }
				}
			fflush(stdin);
			again3:
			printf("\n\n E-MAIL :-");
			gets(bank[z].email);
				for(i=0;bank[z].email[i]!=0;i++)
					{
						if(bank[z].email[i]!=64);
						else
						cnt++;
					}
				if(cnt==0)
					{
						printf("ERROR ---  \" @ \" NOT FOUND   --- enter again");
						goto again3;
					}
				if((bank[z].email[0]>=48&&bank[z].email[0]<=57))
					{
						printf("ERROR  EMAIL CANT START WITH NUMBER  --- enter again");
						goto again3;
					}
				if(strstr(bank[z].email,".com")||strstr(bank[z].email,".in"));
				else
				{
					printf(" ERROR   \" .com \" and \" .in \" should be enter ");
					goto again3;
				}
				again5:
				fflush(stdin);
			printf("\n\nACCOUNT TYPE (SAVING/CURRENT);-");
			gets(bank[z].acctyp);
				if(strcmp(bank[z].acctyp,"saving")==0||strcmp(bank[z].acctyp,"current")==0);
				else
				{
					printf("\n ERROR --- INVALUD ENTRY --- TRY AGAIN");
					goto again5;
				}
			again6:
			printf("\n\nINITIAL BALANCE :-");
			scanf("%d",&bank[z].bal);
			if(bank[z].bal>1000)
			{
				printf("ERROR --- MAXIMUM LIMIT IS 1000 ---- TRY AGAIN");
				goto again6;
			}
			again66:
			printf("\n\n\nCHOSE YOUT OPTION : \n1.clear\t\t2.add&goto home\t\t3.home\n");
			scanf("%d",&x);
			switch(x)
			{
				case 1:
				    {
				        system("cls");
				        printf("All data has been cleared !! \nEnter new data \n");
					goto clear;
				    }
				case 20000:
				{
//@					clrscr();
                    system("cls");
			       //		bank[z+1].accno=bank[z].accno++;
//@					goto add;
				}
				case 2:
				{
				 //	bank[z+1].accno=bank[z].accno++;
					z++;
					f=z;
					goto home;
				}
				case 3:
				{
					bank[z].bal=0;
					strcpy(bank[z].acctyp,"empty");
					strcpy(bank[z].email,"empty");
				     //	bank[z].accno=0;
					strcpy(bank[z].fname,"empty");
					strcpy(bank[z].lname,"empty");
				//	getch();
					goto home;
				}
				default:
				{
					printf("\n invalid chice\n ");
					getch();
					goto again66;
				}
			}
//@			add:
		   //	if(z>=1)
		     //		goto home;
		     }
		     case 2:
			{
			    system("cls");
				printf("enter account number which you want to update=");
				scanf("%d",&B);
			    //	if(z>=1)
				for(q=0;q<10;q++)
				{
					if(bank[q].accno==B)
					{
							again11:
							fflush(stdin);
							printf("\nNEW HOLDER FIRST NAME :-");
							gets(bank[q].fname);
							for(i=0;bank[q].fname[i]!=0;i++)
							{
								  if(bank[q].fname[i]<97 || bank[q].fname[i]>122)
								   {
									printf("\n ERROR  --  try again");
									goto again11;
								   }
							}
						again12:
					fflush(stdin);
					printf("\n\nENTER NEW LAST NSME :-");
					gets(bank[q].lname);
					for(i=0;bank[q].lname[i]!=0;i++)
					{
						  if(bank[q].lname[i]<97 || bank[q].lname[i]>122)
						   {
							printf("\n ERROR  --- try again");
							goto again12;
						   }
				}
			fflush(stdin);
			again13:
			printf("\n\n ENTER NEW E-MAIL :-");
			gets(bank[q].email);
						for(i=0;bank[q].email[i]!=0;i++)
						{
							if(bank[q].email[i]!=64);
							else
							cnt++;
						}
							if(cnt==0)
							{
								printf("ERROR ---  \" @ \" NOT FOUND   --- enter again");
								goto again13;
							}
						if((bank[q].email[0]>=48&&bank[q].email[0]<=57))
						{
							printf("ERROR  EMAIL CANT START WITH NUMBER  --- enter again");
							goto again13;
						}
							if(strstr(bank[q].email,".com")||strstr(bank[q].email,".in"));
						else
						{
							printf(" ERROR   \" .com \" and \" .in \" should be enter ");
							goto again13;
						}
						again15:
							fflush(stdin);
						printf("\n\nACCOUNT TYPE (SAVING/CURRENT);-");
					gets(bank[q].acctyp);
						if(strcmp(bank[q].acctyp,"saving")==0||strcmp(bank[q].acctyp,"current")==0);
						else
							{
								printf("\n ERROR --- INVALUD ENTRY --- TRY AGAIN");
								goto again15;
							}
							again16:
							printf("\n\nINITIAL BALANCE :-");
							scanf("%d",&bank[q].bal);
							if(bank[q].bal>1000)
							{

								printf("ERROR --- MAXIMUM LIMIT IS 1000 ---- TRY AGAIN");
								goto again16;
							}
					}
				}
				printf("account number not exist");
				getch();
				goto home;
			}
			}
		     case 4:
		     {
			printf("enter your account number =");
			scanf("%d",&I);
			for(i=0;i<10;i++)
			{
				if(bank[i].accno==I)
				{
//@					clrscr();
                    system("cls");
					printf("acc. no.=%d \tname = %s \t last name =%s \t acc bal=%d \t email =%s \t accnt typw =%s",bank[i].accno,bank[i].fname,bank[i].lname,bank[i].bal,bank[i].email,bank[i].acctyp);
					getch();
					goto home;
				}
			}
			printf("account number not exist");
			getch();
			goto home;
		     }
		   case 3:
			{
				printf("ENTER YOUR ACCOUNT NUMBER =");
				scanf("%d",&D);
				for(i=0;i<10;i++)
				{
					if(bank[i].accno==D)
					{
						bank[i].bal=0;
						strcpy(bank[i].acctyp,"empty");
						strcpy(bank[i].email,"empty");
						strcpy(bank[i].fname,"empty");
						strcpy(bank[i].lname,"empty");
						goto home;
					}
				}
			    printf("account not found");
			    getch();
			    goto home;
			}
			case 5:
				exit(0);
			default:
				printf("invalid chice");
				break;
		}
	getch();
}

