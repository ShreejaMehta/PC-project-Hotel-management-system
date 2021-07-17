//header files
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <unistd.h>


struct rooms
{
    int num;//room number
    char resident[50];//name of the resident 
    double phnum;//phone number of the resident 
    int days;//number of days resident is gonna stay in the hotel
}; // 10 rooms available initially

//user defined functions
void admin();// admin funcrions like see personal info about the residents, their phone number, booking date , etc 
void printreceipt(); //self exp.
float cost(int , int);//to find total cost  
int login()//stores login and password for admin//write again 
{   

    char username[15]; 
    char password[15]; 
 
    printf("Enter your username:"); 
    scanf("%s", username) ; 
 
    printf("Enter your password:"); 
    scanf("%s", password) ; 
    if(strcmp(username,"User")==0)
    { 
        if(strcmp(password,"pass123")==0)
            { 
                printf("\nWelcome.Login Success!"); 
                return 0;//success:)
            }
        else
            { 
                printf("\nwrong password"); 
                return 1;// do while loop runs 3 times 
            } 
    }
    else
    { 
        printf("\nUser doesn't exist"); 
        return -1;//exit out of the login function 
    } 

}
/*int searchroom(int rm)//to search for available rooms 
{
    struct rooms r;
    int av;
	FILE *fp;
	fp=fopen("Hotelbookings.txt", "r");
	if(fp == NULL)
    {
        printf("\nFile not found :(" );
        exit(-1);
    }
	while(fread(&r, sizeof(r),1,fp)==1)
	{
		if(strcmp(rm, r.num)==0)
		{
	        av=1;
		}
        else
        {
            av=0;
        }
        
    }
    return av;
    fclose(fp);

}*/
void bookroom()// to book rooms for the customer(basically add)
{
    /*int flag=0;
    FILE *fp;
    int room=0;
    int available=0;
    char ch='y';
    struct rooms r;
    fp= fopen("Hotelbookings.txt", "a+");
    if(fp == NULL)
    {
        printf("\nFile not found :(" );
        exit(-1);
    }
        printf("Enter room number:");
        scanf("%d ", &room);
        /*available = searchroom(room);//if the room is occupied, return 1 otherwise return 0;
        while(fread(&r, sizeof(r),1,fp)==1)
	    {
            if(room == r.num)
            {
                available=0;
            }
            else
            {
                available=1;
            }*/

      //  if(available == 0)
        
          /*  printf("Enter name:");
            scanf("%s", &r.resident); 
            printf("\nEnter phone number:");
            scanf("%lf", &r.phnum); 
            printf("\nNumber of days:");
            scanf("%d ", &r.days );
            printf("\nconfirm booking?");
            scanf("%c ", &ch);
            if(ch=='y'|| ch=='Y')
            {
                fwrite(&r,sizeof(r),1,fp);
                printf("\nBooking confirmed!!");
                printf("\nThank you for choosing us!! ");
                printf("\nRedirecting to the payment page");
                //printreceipt();
           
            fclose(fp);
             }
        
            printf("\nSorry room not available");
            printf("\nWould you like to book some other room?");
            scanf("%c ", &ch);
            if(ch=='y'|| ch=='Y')
            {
                bookroom();
            }
            else
            {
                printf("\nThank you for visiting us");
                exit(0);
            }*/

        FILE *fp;
        struct rooms r;
        char ch;
        fp=fopen("Hotelbookings.txt", "a");
        if(fp==NULL)
        {
            printf("File uanble to open" );
            exit(-1);
        }
        else
        {
            printf("Enter room number: ");
            scanf("%s",&r.num);
            printf("\nEnter name: ");
            scanf("%s",&r.resident);
            printf("\nEnter Phone number:");
            scanf("%lf",&r.phnum);
            printf("\nEnter days:");
            scanf("%d",&r.days);
            fwrite(&r,sizeof(r),1,fp);
            printf("\nBooking confirmed!!\nThank you for choosing us!!\nRedirecting to the payment page");
            sleep(2);
            printf("\e[1;1H\e[2J");
            //printreceipt();

        fclose(fp);
    
        }
}


int main()
{
    bookroom();

    return 0;
}
