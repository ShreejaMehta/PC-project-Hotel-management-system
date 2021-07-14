//header files
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct 
{
    int num;//room number
    char resident[50];//name of the resident 
    int phnum[10];//phone number of the resident 
    int date_of_arrival;//date at which resident is gonna arrive (dd/mm/yy)
    int month_of_arrival;//mm
    int year_of_arrival;//yy
    int days;//number of days resident is gonna stay in the hotel
}res;

//user defined functions
void admin();// admin funcrions like see personal info about the residents, their phone number, booking date , etc 
int login()//stores login and password for admin//write again 
{   

    char username[15]; 
    char password[15]; 
 
    printf("Enter your username:"); 
    scanf("%s", &username) ; 
 
    printf("Enter your password:"); 
    scanf("%s", &password) ; 
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

/*void bookroom()// to book rooms for the customer(basically add)
{
    
}*/
void cancelbooking();//to cancel the room booked (Basically delete)
void printreceipt(); //self exp. 
float cost(int , int);//to find total cost 

int main()
{
    

return 0;
}




