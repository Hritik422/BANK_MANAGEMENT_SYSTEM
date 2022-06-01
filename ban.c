#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void bankfn(){
    int a,end;
         printf("                                 CUSTOMER ACCOUNT BANKING MANAGEMENT SYSTEM\n");
    printf("\n                                       WELCOME TO THE MAIN MENU\n");
   printf("1.CREATE NEW ACCOUNT\n");
   printf("2.UPDATE INFORMATION OF EXISTING ACCOUNT\n");
   printf("3.FOR TRANSACTIONS\n");
   printf("4.CHECK DETAILS OF EXISTING USERS\n");
   printf("5.REMOVE EXISTING USERS\n");
   printf("6.VIEW CUSTOMERS LIST\n");
   printf("7.EXIT\n");
   printf("ENTER YOUR CHOICE: ");
   scanf("%d",&a);
   if(a==1){
       char name[50],gender[10];
       long long int num,id;
       printf("Enter your name: ");
       scanf("%s",&name);
       printf("Enter your Phone number: ");
       scanf("%lld",&num);
       printf("Enter your gender: ");
       scanf("%s",&gender);
       printf("Enter your account number: ");
       scanf("%lld",&id);
       FILE *bank,*bank1;
       bank=fopen("ba.txt","a");
       bank1=fopen("bank1.txt","a");
       fprintf(bank,"%s %lld %s %lld\n",name,num,gender,id);
      // fclose(bank);
       printf("User added successfully to the system\n");
       fprintf(bank1,"%s                  %lld                    %s                      %lld\n",name,num,gender,id);
        fclose(bank);
        fclose(bank1);
        printf("\nPress 1 to perform some other action or press 0 to exit: ");
        scanf("%d",&end);
        if(end==1){
            bankfn();
        }
        else{}
       
   }  
    if(a==2){
        int ad=0;
        char name1[20];
         char name[50],gender[10];
       long long int num,id,id1;
       int acn1,i=1,newn;
       printf("Enter account number: ");
       scanf("%lld",&id1);
       char *ptr=name1;
        FILE *bank,*bank1;
        bank=fopen("ba.txt","r+");
        bank1=fopen("bank1.txt","w");
        while(fscanf(bank,"%s %d %s %lld\n",&name,&num,&gender,&id)!=EOF){
              if(bank,id1==id){
              printf("User found\n");
              ad=ad+2;
               break;
              }
              else{
                //  printf("User invalid\n");
              }}
              
              fseek(bank,0,SEEK_SET);
              if(ad>0){
                  
           while(fscanf(bank,"%s %lld %s %lld\n",&name,&num,&gender,&id)!=EOF){
               if(bank,id1!=id){
                   fprintf(bank1,"%s %lld %s %lld\n",name,num,gender,id);
                   
               }
               else{
              printf("Enter new mobile number: ");
              scanf("%d",&newn);
             fprintf(bank1,"%s %lld %s %lld",name,newn,gender,id);
             printf("Mobile number updated successfully\n");
              fprintf(bank1,"\n");
              
              }
              }
              }
             else{
                  printf("User does not exist\n");
              }
         
        fclose(bank);
        fclose(bank1);
         printf("\nPress 1 to perform some other action or press 0 to exit: ");
        scanf("%d",&end);
        if(end==1){
            bankfn();
        }
        else{}
         
    }

    if(a==3){
        int b,amount,number;
        printf("Enter recievers account number: ");
        scanf("%d",&b);
        printf("Enter amount: ");
        scanf("%d",&amount);
        printf("           SEND                Cancel\n");
        printf("Enter 1 to confirm and 0 to cancel\n");
        scanf("%d",&number);
        if(number==1){
            printf("Transaction Successfull");
        }
        else{
            printf("Transaction failed");
        }
         printf("\nPress 1 to perform some other action or press 0 to exit: ");
        scanf("%d",&end);
        if(end==1){
            bankfn();
        }
        else{}
    }
    if(a==4){
          char name1[20];
         char name[50],gender[10];
       long long int num,id,id1;
       int acn1,i=1,newn;
        FILE *bank;
        bank=fopen("ba.txt","r");
       
        printf("Enter your account number: ");
        scanf("%d",&id1);
         fseek(bank,0,SEEK_SET);
         while(fscanf(bank,"%s %d %s %lld\n",&name,&num,&gender,&id)!=EOF){
               if(id1==id){
                   printf("NAME                  MOBILE      GENDER       ACC.NO\n\n");
                   printf("%s        %d           %s          %lld\n",name,num,gender,id);
                   i++;
                   break;
               }
         }
         if(i==0){
             printf("User Does not exist\n");
         }
          fclose(bank);
            printf("\nPress 1 to perform some other action or press 0 to exit: ");
        scanf("%d",&end);
        if(end==1){
            bankfn();
        }
        else{}
         
        
    }
    if(a==5){
         char name1[20];
         char name[50],gender[10];
       long long int num,id,id1;
       int acn1,i=0,newn,confirm;
        printf("You can remove your account from this portal\n\n");
        printf("Enter account number: ");
        scanf("%lld",&id1);
        FILE *bank,*bank1;
        bank=fopen("ba.txt","r");
        bank1=fopen("bank1.txt","w");
         while(fscanf(bank,"%s %lld %s %lld\n",&name,&num,&gender,&id)!=EOF){
               if(id1==id){
                   printf("User Found\n");
                   printf("%s %lld %s %lld\n",name,num,gender,id);
                   i++;
                   break;
               }
         }
         //fclose(bank);
         fseek(bank,0,SEEK_SET);
         if(i>0){
             printf("Press 1 to confirm: ");
             scanf("%d",&confirm);
             if(confirm==1){
             while(fscanf(bank,"%s %lld %s %lld\n",&name,&num,&gender,&id)!=EOF){
                 if(id1!=id){
                     fprintf(bank1,"%s %lld %s %lld\n",name,num,gender,id);
                 }
                 else{
                     printf("Account removed successfully\n");
                 }
             }
             }
             else{
                 printf("Your account has not been removed\n");
             }
         }
         else{
             printf("Invalid User\n");
         }
          fclose(bank);
        fclose(bank1);
        // fclose(remove);
            printf("\nPress 1 to perform some other action or press 0 to exit: ");
        scanf("%d",&end);
        if(end==1){
            bankfn();
        }
        else{}
       

    }
    if(a==6){
         char name1[20];
         char name[50],gender[10];
       long long int num,id,id1;
        printf("                                 CUSTOMERS LIST           \n\n");
        printf("S.No  NAME                  MOBILE                    GENDER                      ACC.NO\n\n");
        int i=1;
        FILE *bank;
        bank=fopen("bank1.txt","r");
          while(fscanf(bank,"%s %lld %s %lld\n",&name,&num,&gender,&id)!=EOF){
                   printf("%d.  %s                  %lld                    %s                      %lld\n",i,name,num,gender,id);
                   i++;
          }
               
        fclose(bank);
        printf("\nPress 1 to perform some other action or press 0 to exit: ");
        scanf("%d",&end);
        if(end==1){
            bankfn();
        }
        else{}
    }
    if(a==7){

    }
}
void login(){
       char password[20]="Hritik";
    char pass[20];
    printf("                                    Enter password : ");
    scanf("%s",&pass);
    if(strcmp(pass,password)==0){
        printf("Password successfully matched\n");
        printf("\n\n\n\n\n\n");
        bankfn();
    }
    else{
        printf("                     WRONG PASSWORD.ENTER YOUR PASSWORD AGAIN\n");
        login();
    }
}
int main(){
   login();
   return 0;
}