#include<stdio.h>
#include<string.h>
#define CANDIDATE_COUNT

#define CANDIDATE1 "Narendra Modi"
#define CANDIDATE2 "Arvind Kejriwal"
#define CANDIDATE3 "Rahul Gandhi"
#define CANDIDATE4 "Akshay Kumar Mishra"

int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0, spoiledtvotes=0;

void castVote()
{
int choice;    
printf("\n\n ### Please choose your Candidate ####\n\n");
printf("\n 1. %s", CANDIDATE1);
printf("\n 2. %s", CANDIDATE2);
printf("\n 3. %s", CANDIDATE3);
printf("\n 4. %s", CANDIDATE4);
printf("\n 5. %s", "None of These");

printf("\n\n Input your choice (1 - 4) : ");
scanf("%d",&choice);

switch(choice)
{
    case 1: votesCount1++;
     break;
    case 2: votesCount2++;
     break;
    case 3: votesCount3++;
     break;
    case 4: votesCount4++;
     break;
    case 5: spoiledtvotes++;
     break;
    default: printf("\n Error: Wrong Choice !! Please retry");
             
             getchar();
}
printf("\n thanks for vote !!");
}

void votesCount()
{
printf("\n\n ##### Voting Statics ####");
printf("\n %s - %d ", CANDIDATE1, votesCount1);
printf("\n %s - %d ", CANDIDATE2, votesCount2);
printf("\n %s - %d ", CANDIDATE3, votesCount3);
printf("\n %s - %d ", CANDIDATE4, votesCount4);
printf("\n %s - %d ", "Spoiled Votes", spoiledtvotes); 
}

void getLeadingCandidate(){
    printf("\n\n  #### Leading Candiate ####\n\n");
    if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4)
    printf("[%s]",CANDIDATE1);
    else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2 >votesCount1)
    printf("[%s]",CANDIDATE2);
    else if(votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3 >votesCount1)
    printf("[%s]",CANDIDATE3);
    else if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3)
    printf("[%s]",CANDIDATE4);
    else
    printf("----- Warning !!! No-win situation----");    
    
    
    
}

int main()
{
int i;
int choice;
 char name[50];
 char lname[50];
int age;


printf("enter age:\n");
scanf("%d",&age);

if(age>=18)
{int gender;
   
do{printf("enter you first name:\n ");
scanf("%s",name);
printf("enter you last name:\n ");
scanf("%s",lname);
printf("press 1 if you are male \n press 2 if you are female:");
scanf("%d",gender);
    if(gender == 1){
    printf("\n\n ###### Welcome to Election/Voting Mr. #####");
    printf("%s %s",name,lname);
    }
    else if(gender ==2){
        printf("\n\n ###### Welcome to Election/Voting Ms. #####");
    printf("%s %s",name,lname);
    }else{printf("invalid input");}
printf("\n\n 1. Cast the Vote");
printf("\n 2. Find Vote Count");
printf("\n 3. Find leading Candidate");
printf("\n 0. Exit");

printf("\n\n Please enter your choice : ");
scanf("%d", &choice);

switch(choice)
{
case 1: castVote();break;
case 2: votesCount();break;
case 3: getLeadingCandidate();break;
default: printf("\n Error: Invalid Choice");
}
}while(choice!=0);
}
else{
    printf("underage.");
    }
getchar();

return 0;
}