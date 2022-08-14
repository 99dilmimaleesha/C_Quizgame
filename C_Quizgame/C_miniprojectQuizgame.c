// C SIMPLE QUIZ GAME FOR TEST YOUR GENERAL KNOWLEDGE
#include<stdio.h>
#include<stdlib.h> // Contains exit , system("cls")
#include<time.h>   // contains time() , ctime()

// Function Prototype

void view_Highestscore();
void Highest_mark(int, char *name,int);
void Reset_Score();
void Game_R1(char *name);
void Game_R2(int c_price , char *name);
void menu();
void Help();
void cyanbold();
void cyan();
void reset();

struct game
{
    char player_name[10];
    int score;
    int cash_price;
}R1,R2;


int main()
{   system("cls");  //Clears the output screen
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\t\t\t\t\t\t\t\tBASIC GENERAL KNOWLEDGE TEST QUIZ GAME\n");
    printf("\n\t\t\t\t\t\t\t\t\tPLAY AND WIN MONEY!\n");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n");
    menu();
}

void cyanbold()
{
     printf("\033[1;36m"); // Set the text color cyanbold
}
void cyan()
{
    printf("\033[0;36m");  // Set the text color to the color cyan
}
void reset()
{
    printf("\033[0;37m"); // Reset the text to default color
}

//Define menu function
/********************************************
 * menu - Display menu driven to the player
 * inputs - no
 * outputs - no
 ********************************************/
void menu()
    {

    char choice;
    printf("MAIN MENU:\n\n");
    printf("Press S to Start Game\n");
    printf("Press V to View Highestscore\n");
    printf("Press R to Reset Score\n");
    printf("Press H to Get Help\n");
    printf("Press Q to Quit\n\n");
    printf("Enter your Choice: ");
    scanf(" %c",&choice);

    switch (choice)
    {
        case 'S':
        {
          printf("\nEnter your Name: ");
          scanf(" %s",&R1.player_name);
          Game_R1(R1.player_name);
        }
        break;
        case 'V':
        view_Highestscore();
        break;
        case 'R':
        system("cls");
        Reset_Score();
        break;
        case 'H':
        Help();
        break;
        case 'Q':
          printf("Exit");
        break;
        default:
          printf("YOU ENTERED WRONG CHOICE");
    }
}


//Define Game_R1 function
/********************************************
 * Game_R1 - Round 01 Quesstions and score calculate
 * inputs - One input (char *name)
 * outputs - no
 ********************************************/
void Game_R1(char *name)
{
    system("cls");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t\tWELCOME TO YOUR FIRST ROUND\n");
    printf("\t\t\t\t*******************************************\n");


    char questions[][100] = {"1.Which animal never drinks water it's entirelife ?",
                             "2.Where were The lord of the rings movies filmed ?",
                             "3.Hormones are produced by?",
                             "4.Who is known as the king of basketball ?",
                             "5.What is the highest-grossing movie of all time ?"};
    char options[][100] = {"1.Kangaroo","2.Hippopotamus","3.Rat","4.Kangaroo rat",
                            "1.Ireland","2.Iceland","3.New Zealand","4.Australia",
                            "1.Endocrine gland","2.Pituitary gland","3.Hypothalamus gland","4.None of these",
                            "1.Rick Barry","2.Paul Arizin","3.Elgin Baylor","4.Lebron James",
                            "1.Titanic","2.Avatar","3.Avengers:Endgame","4.Star wars:The fore Awakens"};
    char *strings[] = {"Kangaroo rat: The tiny kangaroo rat located in the south-western deserts of the United States \ndoes not drink water for its whole lifespan.Kangaroo rats represent an integral part of desert life.",
                     "New zealand:The Lord of the Rings trilogy was filmed entirely in New Zealand. Filming locations spanned more than 150\nlocations in both the North and the South Islands. From the towering Mount Doom in Mordor, to the dreamy \nHobbiton™ in the Shire, New Zealand's otherworldly landscapes brought the movies to life.",
                     "Endocrine gland:Hormones are produced by glands and sent into the bloodstream to the various tissues in the body.",
                     "Lebron James:King LeBron James turns 34 today. He is often considered the best basketball player in the world and regarded\nby some as the greatest player of all time. ... Born December 30, 1984, James was selected as the\nfirst overall pick in the 2003 NBA Draft by the Cleveland Cavaliers.",
                     "Avatar:Avatar reclaimed its title as the biggest movie of all time this year, topping Avengers: Endgame.\nIt was re-released in China, earning $50"};

     int Answers[5] = {4, 3,1,4,2};

     int numberofQuestions = sizeof(questions)/sizeof(questions[0]);
     int guess ,i,c;
     R1.cash_price = 0;
     R1.score = 0;
     char ch;

     for (i = 0; i < numberofQuestions;i++)
     {
         printf("\n%s\n\n",questions[i]);
        for (int j = (i * 4); j < (i * 4) + 4;j++)
        {
            printf("%s\n",options[j]);
        }
        printf("\nguess: ");
        scanf("%d",&guess);

        if (guess == Answers[i])
        {
            printf("WOW YOU ARE GREAT! YOU WIN RS.1000.00\n");
            R1.cash_price = R1.cash_price + 1000.00;
            R1.score++;
            cyan();
            printf("-------------------------------------------------------------------------------------------------------------\n");
            printf("\n%s\n",strings[i]);
            printf("-------------------------------------------------------------------------------------------------------------\n");
            reset();
        }
        else
        {
            printf("Wrong !\n");
            printf("Correct Answer is: %d\n",Answers[i]);
            cyan();
            printf("-------------------------------------------------------------------------------------------------------------\n");
            printf("\n%s\n",strings[i]);
            printf("-------------------------------------------------------------------------------------------------------------\n");
            reset();
        }
        printf("\nEnter Any Key Goto Next:  ",getchar());
        getchar();
        system("cls");
     }
     if (R1.score==5){
          system("cls");
          Highest_mark(R1.score,name,numberofQuestions);
          printf("CONGRATULATIONS %s! YOU HAVE SELECTED NEXT ROUND\n",name);
          printf("\n\nEnter Any key to go Next Round: ");
          getchar();
          system("cls");
          Game_R2(R1.cash_price,name);
     }

     else
     { system("cls");
       printf("\n\n\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n\n");
       printf("\t\t\t\tYOUR SCORE: %d/%d\n",R1.score,numberofQuestions);
       printf("\t\t\t\tTOTAL CASH PRICE = %d.00\n",R1.cash_price);
       printf("\n\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n\n");
       printf("\t\t\nSO SAD %s ! YOUR SCORE IS NOT ENOUGH TO JUMP NEXT ROUND\n",name);
       printf("\n\nEnter Any key to goto main menu: ");
       getchar();
       system("cls");
       menu();
     }
}


//Define Game_R2 function
/********************************************
 * Game_R2- Round 02 Questions and Score calculation
 * inputs - two inputs array[],size
 * outputs - no
 ********************************************/
void Game_R2(int c_price , char *name)
{
    system("cls"); // Clear console
    R2.cash_price = 0;
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t\tWELCOME TO YOUR SECOND ROUND\n");
    printf("\t\t\t\t*******************************************\n");

    char questions[][100] = {"1.What is the largest continent on Earth ?",
                             "2.Who is the only man to play both cricket and football world cups?",
                             "3.What is the capital of Australia?",
                             "4.Which country is said to be shaped like boot?",
                             "5.Who is known as the father of zoology ?"};
    char options[][100] =   {"1.Amwrica","2.Asia","3.Europe","4.Africa",
                             "1.Kumar sangakkara","2.Lionel Messi","3.Viv richards","4.Henry blofeld",
                             "1.Melbourne","2.Canberla","3.Brisbane","4.Sydney",
                             "1.Australia","2.Portugal","3.Iceland","4.Italy",
                             "1.Albert Einstein","2.Issac Newton","3.Aristotle","4.Thomas Henry Huxley"};
     char *strings[]  =    {"Asia:No matter how many continents you count (the old-school way teaches seven, while new methods have six)\nthe biggest of them all is Asia. It spans 17,139,445 square miles\n29.1 percent of Earth's total land mass — and has a population of 4.1 billion people.",
                           "Viv richard:Cricket legend Viv Richards is the only man to play in cricket and football World Cups. Richards,\nwho was born on March 7, 1952, won the first two editions ",
                           "Canberla:Canberra, federal capital of the Commonwealth of Australia. It occupies part of the Australian Capital\nTerritory (ACT), in southeastern Australia, and is about 150 miles (240 km) southwest of Sydney.\nCanberra lies astride the Molonglo River, which is a tributary of the Murrumbidgee River.",
                           "Italy:Many people know Italy as a boot-shaped country. It's a well-known symbol of the country and a basis for\nmany jokes and anecdotes",
                           "Aristotal:Zoology is the branch of science dealing with animal life. Here, we study the evolution, behaviour, habitats,\netc. of animals. Aristotle is regarded as the father of zoology because of his valuable contributions in this field."};

     int Answers[5] = {2,3,2,4,3};

     int numberofQuestions = sizeof(questions)/sizeof(questions[0]);
     int guess,i;
     R2.score = 0;
     char ch;

     for (i = 0; i < numberofQuestions;i++)
     {
         printf("\n%s\n\n",questions[i]);

        for (int j = (i * 4); j < (i * 4) + 4;j++)
        {
            printf("%s\n",options[j]);
        }
        printf("\nguess: ");
        scanf("%d",&guess);

        if (guess == Answers[i])
        {
            printf("WOW YOU ARE GREAT! YOU WIN RS.5000.00\n");
            R2.cash_price = R2.cash_price + 5000.00;
            R2.score++;
            cyan();
            printf("---------------------------------------------------------------------------------------------------------------------\n");
            printf("\n%s\n",strings[i]);
            printf("---------------------------------------------------------------------------------------------------------------------\n");
            reset();
        }
        else
        {
            printf("WRONG !\n");
            printf("Correct Answer is: %d",Answers[i]);
            cyan();
            printf("--------------------------------------------------------------------------------------------------------------------\n");
            printf("\n%s\n",strings[i]);
            printf("--------------------------------------------------------------------------------------------------------------------\n");
            reset();
        }
        printf("\nEnter Any Key Goto Next:  ",getchar());
        getchar();
        system("cls");
     }
     if(R2.score==5)
     {
         FILE* f;
         time_t t;   // Show date and time
         time(&t);
         system("cls");
         printf("CONGRATULATIONS %s YOU SCORED HIGHEST!!!",name);
         f = fopen("highestmark.txt","a");
           fprintf(f,"\t\t\t%d/%d\t\t\t %s\n",R2.score,numberofQuestions,ctime(&t));
           fclose(f);
     }
     else
     {
         FILE* f;
         time_t t;   // Show date and time
         time(&t);
         f = fopen("highestmark.txt","a+");
             fprintf(f,"\t\t\t-\t\t\t %s\n",ctime(&t));
             fclose(f);
     }
     printf("\n\n\n\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
     printf("\n\t\t\tFINAL SCORE: %d/%d\n",R2.score,numberofQuestions);
     printf("\t\t\tTOTAL CASH PRICE YOU WIN FROM TWO ROUNDS = %d.00\n",R1.cash_price + R2.cash_price);
     printf("\n\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
     printf("\nEnter Any Key Goto Main menu:  ",getchar());
     getchar();
     system("cls");
     menu();
}


//Define Highest_mark function
/********************************************
 * Highest_mark - Append Highest marks to the highestmark.txt file
 * inputs - three outputs(int score, char  *username,int questions)
 * outputs - no
 ********************************************/
void Highest_mark(int score , char *username,int questions)
{
FILE *file;

  file = fopen("highestmark.txt", "a");
  if(file == NULL)
  {
      printf("File create fail\n");
      exit(0);
  }
  else
  {
    printf("File created Succesfully !\n");
  }
    fprintf(file,"%s\t\t\t\t%d/%d",username,score,questions);
    fclose(file);
}


//Define view_Highestscore function
/********************************************
 * view_Highestscore - Read highestmark.txt file
 * inputs - two inputs array[],size
 * outputs - no
 ********************************************/
void view_Highestscore()
{

  system("cls");
  FILE *file;
  file = fopen("highestmark.txt","r+");
  char read;
  if(file == NULL)
  {
      printf("File not execute\n");
      exit(0);
  }
  else
     printf("\n\t\t\t\t\t---HIGHESTSCORE---\n\n");
     cyanbold();
     printf("*************************************************************************************************************\n");
     printf("USERNAME\t\t\tROUND01\t\t\tROUND02\t\t\tDATE AND TIME\n");
     printf("*************************************************************************************************************\n\n\n");
     reset();
     while((read = getc(file))!=EOF)  // read file
    {
     printf("%c",read);
    }

     fclose(file);
     printf("\n\nEnter Any key Goto main menu: ",getchar());
     getchar();
     system("cls");
     menu();
}


//Define Reset_score function
/********************************************
 * Reset_Score - Reset highestmark.txt file
 * inputs - two inputs array[],size
 * outputs - no
 ********************************************/
void Reset_Score()
{
    FILE *f;
    f = fopen("highestmark.txt","w");
    if (f == NULL)
    {
        printf("Error !");
    }
    printf("File reset successfully !");
    fclose(f);
    printf("\n\nEnter Any key Goto main menu: ",getchar());
    getchar();
    system("cls");
    menu();
}


//Define Help() function
/********************************************
 * Reset_Score - Give Game rules and Instructions to the user
 * inputs - no
 * outputs - no
 ********************************************/
void Help()
{
    system("cls");
    cyan();
    printf("--------------------------------------------------------------------------------\n");
    printf("ROUND 01 INSTRUCTIONS:\n");
    printf("--------------------------------------------------------------------------------\n");
    printf("\nGive the answers for each questions and Win Cash price for each question!\n");
    printf("You will get 5 questions in this Round\n");
    printf("You Can win Rs:1000.00 for each correct answer\n");
    printf("If you answered all questions correctly you can jump to the next round\n\n");
    printf("If you unable to get 5 score this round you can't go to the second round\n");
    printf("---------------------------------------------------------------------------------\n");
    printf("ROUND 02 INSTRUCTIONS:\n");
    printf("---------------------------------------------------------------------------------\n");
    printf("\nGive the answers for each questions and win cash price for each question!\n");
    printf("You will get 5 questions in this round\n");
    printf("This round you Can win Rs. 5000.00 for each questions\n");
    reset();
    printf("\n\nEnter Any key Goto main menu: ",getchar());
    getchar();
    system("cls");
    menu();
}

