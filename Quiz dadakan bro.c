#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

int count, countr;
void correct(int count);
void wrong();
void correct2(int countr);
void wrong2();
void show_record();
void edit_score(float , char [20]);

struct user
{
	char name[20];
	char age[10];
	char jobs[20];	
};

void displayuserinfo(struct user *inf);

struct listnode
{
	char data;
	struct listNode *nextptr;
};
 
typedef struct listnode listnode;
typedef listnode *listnodeptr;

void insert(listnodeptr *sptr, char value);
void printlist(listnodeptr currentptr);

int main()
     
{
	
	char ch;
	 
     int r,r1,i;
     float score;
     float prizemoney;
     char choice;
     mainhome:
     system("cls");
     printf("\t\t\tC PROGRAM QUIZ GAME\n");
     printf("\n\t\t________________________________________");

     printf("\n\t\t\t   WELCOME ");
     printf("\n\t\t\t      to ");
     printf("\n\t\t\t   THE GAME ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t   QUIZ DADAKAN BRO!!!!!!!!!!!    ") ;
     printf("\n\t\t________________________________________");	
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press V to show the highest score");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
     choice=toupper(getch());
	if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     system("cls");
	}
	else if(choice=='V')
	{
		show_record();
		goto mainhome;
	}
	else 
	{
	 printf("ERROR, please enter the right choice!");
	 getch();
	 goto mainhome;
	}
	
	struct user user1;
	
	printf("Enter your nick name: ");
	scanf("%s", user1.name);
	printf("How old are you: ");
	scanf("%s", user1.age);
	printf("What is your occupation: ");
	scanf("%s", user1.jobs);
	
	printf("\n USER DETAILS \n");
	printf("-------------------------------------- \n");
	
	displayuserinfo(&user1);

    system("cls");
    printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------",user1.name);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game,BASIC TEST ROUND & CHALLANGE ROUND");
    printf("\n >> In basic test round you will be asked a total of 3 questions to test your");
    printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
    printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded 10 point!");
    printf("\n    every 10 point you got reward $100");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
	{
    	goto mainhome;
    	system("cls");
    }

     home:
     system("cls");
     
     listnodeptr startptr = NULL;
     int countscore=0;
     
     for(i=1;i<=3;i++)
    {
    system("cls");
     r1=i;

     switch(r1)
		{
		case 1:
		printf("\n\n Who is the maker of this game?");
		printf("\n\nA.Dolce & Gabbana\t\tB.Calvin & Klein\n\nC.Firza & Kevin \t\tD.Mark & Spencer");
		if (toupper(getch())=='C')
			{
			    correct(countscore++);
			    break;
			}
		else
		    {
		      wrong();  ;
		      break;
		    }

        case 2:
		printf("\n\n\n 1 + 1 =");
		printf("\n\nA.1\t\tB.3\n\nC.2\t\tD.4");
		if (toupper(getch())=='C')
			{
			correct(countscore++);
			break;}
		else
		       {
		       wrong();
		       break;}

        case 3:
		printf("\n\n\nWhich one is a legendary band ?");
		printf("\n\nA.Polar Bear\t\tB.The Beatles\n\nC.The Donkey\t\tD.Chimpanzee");
		if (toupper(getch())=='B')
			{
			correct(countscore++);
			break;}
		else
		       {
		       wrong();
		       break;}
		       
		default: printf("ERROR! \n");
			   }
			   
	}

	if(countscore>=2)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, maybe you're not a human'");
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",user1.name);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
		{goto game;}
game:
     countr=0;
     for(i=1;i<=10;i++)
     {
	 system("cls");
     r=i;

     switch(r)
		{
		case 1:
		printf("\n\nWhat is the capital city of Indonesia?");
		printf("\n\nA.Meikarta\t\tB.Kalpataru\n\nC.Jakarta\t\tD.Bandung");
		ch=getch();
		insert(&startptr, ch);
		printlist(startptr);
		if (toupper(ch)=='C')
			{
			 correct2(countr++);	
			 break;}
		else
		       {
		        wrong2();
		        goto score; 
				break;	
		        goto go;}

		case 2:
		printf("\n\n\nWhich one is a religion?");
		printf("\n\nA.Christian\t\tB.Shamanism\n\nC.Paganism\t\tD.Ku Klux Klan");
		ch=getch();
		insert(&startptr, ch);
		printlist(startptr);
		if (toupper(ch)=='A')
			{
			 correct2(countr++);
			 break;}
		else
		       {
		       wrong2();
		       goto score;
		       break;
		       goto go;
		       }

        case 3:
		printf("\n\n\nWhich one is a name of punk band? ");
		printf("\n\nA.Iron Maiden\t\tB.Coldplay\n\nC.Sex Pistols\t\tD.Deadsquad");
		ch=getch();
		insert(&startptr, ch);
		printlist(startptr);	
		if (toupper(ch)=='C')
			{
			 correct2(countr++);
			 break;}
		else
		       {
		       wrong2();
		       goto score;
		       break;
			   goto go;}

        case 4:
		printf("\n\n\nwho is varg vikernes?");
		printf("\n\nA.a Musician\t\tB.Terorist\n\nC.Priest\t\tD.Farmer");
		ch=getch();
		insert(&startptr, ch);
		printlist(startptr);
		if (toupper(ch)=='A')
			{
			 correct2(countr++);
			 break;}
		else
		       {
               wrong2();
               goto score;
		       break;
		       goto go;
		       }

        case 5:
		printf("\n\n\nIn what unit is electric power measured?");
		printf("\n\nA.Coulomb\t\tB.Watt\n\nC.Power\t\tD.Units");
		ch=getch();
		insert(&startptr, ch);
		printlist(startptr);
		if (toupper(ch)=='B')
			{
			 correct2(countr++);
			 break;}
		else
		       {
		       wrong2();
		       goto score;
		       break;
		       goto go;
		       }

		case 6:
		printf("\n\n\nWhich element is found in Vitamin B12?");
		printf("\n\nA.Zinc\t\tB.Cobalt\n\nC.Calcium\t\tD.Iron");
		ch=getch();
		insert(&startptr, ch);
		printlist(startptr);
		if (toupper(ch)=='B' )
			{
			 correct2(countr++);
			 break;}
		else
		       {
		       wrong2();
		       goto score;
		       break;
			   goto go;
			   }

        case 7:
		printf("\n\n\nWhat is the National Name of Japan?");
		printf("\n\nA.Polska\t\tB.Hellas\n\nC.Drukyul\t\tD.Nippon");
		ch=getch();
		insert(&startptr, ch);
		printlist(startptr);
		if (toupper(ch)=='D')
			{
			 correct2(countr++);
			 break;}
		else
		       {
		       wrong2();
		       goto score;
		       break;
			   goto go;
			   }

        case 8:
		printf("\n\n\nHow many times a piece of paper can be folded at the most?");
		printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.Depends on the size of paper");
		ch=getch();
		insert(&startptr, ch);
		printlist(startptr);
		if (toupper(ch)=='B')
			{
			correct2(countr++); 
			break;
			}
		else
		       {
			   wrong2();
		       goto score;
		       break;
			   goto go;
			   }

        case 9:
		printf("\n\n\nWhat is the capital of Denmark?");
		printf("\n\nA.Copenhagen\t\tB.Helsinki\n\nC.Ajax\t\tD.Galatasaray");
		ch=getch();
		insert(&startptr, ch);
		printlist(startptr);
		if (toupper(ch)=='A')
			{
			correct2(countr++);
			break;
			}
		else
		       {
		    	wrong2();
		        goto score;
		        break;
			    goto go;
			   }

        case 10:
		printf("\n\n\nWhich is the longest River in the world?");
		printf("\n\nA.Nile\t\tB.Koshi\n\nC.Ganga\t\tD.Amazon");
		ch=getch();
		insert(&startptr, ch);
		printlist(startptr);
		if (toupper(ch)=='A')
			{
			 correct2(countr++);
			 break;
			 }
		else
		       {
			   wrong2();
			   break;
			   goto score;
			   }
			}
	}

	score:
    system("cls");
	score=(float)countr*10;
	prizemoney=(float)countr*100;
	if(score>=0.00 && score<100)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t Your score is %.2f",score);
	     printf("\n\t Your prize money is $%.2f", prizemoney);
	     printf("\n\t Thank you %s for playing QUIZ DADAKAN BRO game", user1.name);
	     printf("\n\n USER INFO: \n");
	     printf("--------------------------------");
	     printf("\n");
	     displayuserinfo(&user1);
	}
	     
	else if(score=100)
	{
		printf("\n\n\t\t**************** CONGRATULATION *****************");
		printf("\n\t Your score is %.2f",score);
		printf("\n\t You have finished this game");
		printf("\n\t FOR REWARD, YOU OWNED QUIZ DADAKAN BRO GAME ");
		printf("\n\n USER INFO: \n");
	    printf("--------------------------------");
	    printf("\n");
	    displayuserinfo(&user1);
	}
	
	printlist(startptr);
	goto go;


    go:
	printf("\n\n Press Y if you want to play again");
	printf("Press any key if you want to save score and go to main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,user1.name);
		goto mainhome;
		}
		
		return 0;
}


void correct(int count)
{
	printf("\n\nCorrect!!!");
	count++;
	getch();
}

void wrong()
{
	printf("\n\nWrong!!!");
	getch();
}

void correct2(int countr)
{
	printf("\n\nCorrect!!!");
	countr++;
	getch();
}

void wrong2()
{
	printf("\n\nWrong!!!");
	getch();
}

void displayuserinfo(struct user *inf)
{
	puts(inf->name);
	puts(inf->age);
	puts(inf->jobs);
	getch();
}

void edit_score(float sc, char plnm[20])
	{system("cls");
	FILE *f;
	f=fopen("score.txt","w+");
	fprintf(f,"%s\n%.2f",plnm,sc);
	fclose(f);}

void show_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();}

void insert(listnodeptr *sptr, char value)
{
	listnodeptr newptr;
	listnodeptr previousptr;
	listnodeptr currentptr;
	
	newptr = malloc( sizeof( listnode ) ); 
	
	if (newptr != NULL)
	{
		newptr->data = value;
		newptr->nextptr = NULL;
		
		previousptr = NULL;
		currentptr = *sptr;
	
		while(currentptr != NULL) // && value > currentptr->data
		{
			previousptr = currentptr;
			currentptr = currentptr->nextptr;
		}
	
	if(previousptr == NULL)
	{
		newptr->nextptr = *sptr;
		*sptr = newptr;
	}
	else{
		previousptr->nextptr = newptr;
		newptr->nextptr = currentptr;
	}
	}
	
	else
	{
		printf("%c not inserted. No memory available.\n", value);
	}
}
 
void printlist(listnodeptr currentptr)
{
	if(currentptr == NULL)
	{
		printf("list is empty.\n\n");
	}
	
	else
	{
		printf("\n\nyour answers:\n");
	
	while(currentptr != NULL)
	{
		printf("%c -->", currentptr->data);
		currentptr = currentptr->nextptr;
	}
	
	printf("NULL\n\n");
	}
}



