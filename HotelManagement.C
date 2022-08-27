#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
int file_create();
int hotel_name1();
int hotel_name2();
int amenities();
int room_features();
int feat_r_d2();
int feat_r_d1(char [],int [],int,int);
int availability();
int booking_room();
int cust_detail();
int food_order();
int food_menu();
int food_bill();
int food_cancle();
int leave_room();

   /*CREATE STRUCTURE FOR CUSTOMER_DATA*/

    struct customer_data
    {
       int room_no,age;
       char country[25];
       char name[50],father[50],city[50],state[50],date[9],time[9];
    }c_d;

   /*CREATE STRUCTURE FOR ROOM AVAILABILITY*/

    struct availability
    {
       int room_no,age;
       char name[50];
    }avail[36];

    /* CREATE 2D STRING FOR FOODLIST */

    char food_list[31][20]={"0","Mix Veg","Veg Kadai","Alu Bhindi","Gobi Mutter","Alu Palak"
		  ,"Panner Palak","Mutter Panner","Mutter Mushroom","Panner Mushroom","Panner Methi"
		  ,"Plane Rice","Ghee Rice","Jeera Rice","Onion Rice","Curd Rice","Plain Roti",
		  "Chapathi","Alu Paratha","Methi Paratha","Muli Paratha","Chicken Chili"
		  ,"Tangdi Kabab","Chicken Wings","Mutton Sheekh","Mutton Boti","Fish Fingers"
		  ,"Prawn Chilli","Fish Tikka","Chicken Lolip","Freid Prawns"};

    /* CREATE AN ARRAY FOR FOOD RATE */

    int food_rate[31]={0,50,60,50,50,55,65,70,55,60,70,30,45,45,45,40,6,10,30,25,
    30,150,170,220,200,270,240,290,280,275,285};

   /*CREATE STRUCTURE FOR FOOD ORDER*/

    struct food_order
    {
      int room_no;
      int food_code;
      char date[9],time[9];
    }order;
    /* FILE POINTER GLOBAL DECLARALATION */ 
    FILE *fp1,*fp2,*fp3,*fp4;
    
			   /* MAIN FUNCTION BODY OPEN */

int main()
{
  int i,n;
  system("CLS");
   file_create();
   hotel_name1();
  system("CLS");
   amenities();
   start:
 system("color F0");
  system("CLS");
  printf("\t\t        .......... HOME PAGE ..........");
  printf("\n\t------------------------------------------------------------------");
  printf("\n\t\t	    -: Choose a Category :-\n");
  printf("\t------------------------------------------------------------------");
  printf("\n\n\t1. Features of room.");
  printf("\n\t2. Know availability of room.");
  printf("\n\t3. Book room.");
  printf("\n\t4. Show customer details.");
  printf("\n\t5. Order food.");
  printf("\n\t6. Bill of order food.");
  printf("\n\t7. Order cancel of food.");
  printf("\n\t8. Leave room.");
  printf("\n\t9. Exit.");
  i=0;
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    fclose(fp4);
  fp1=fopen("room_book.c","r");
  if(fp1==NULL)
  {
    printf("file cannot be open");
    getch();
    goto out;
  }
   /* READ FILE FOR COUNT HOW MANY ROOM IS BOOKED */

  while(fscanf(fp1,"%d %s %s %s %s %d %s %s %s",&c_d.room_no,c_d.name,c_d.father,c_d.city,c_d.state,&c_d.age,c_d.country,c_d.date,c_d.time)!=EOF)
    i++;
    printf("\n\n\nTotal booked room:-    %d",i);
    printf("\n\nTotal unbooked room:-  %d",35-i);
    printf("\n\t\t\t\t\t\t      MADE BY VIKAS YADAV.");
    printf("\n\nChoose any option:-  ");
    fflush(stdin);
    n=getch();
    switch(n)
     {
	 case '1':
		 system("color FC");
		 room_features();
		 goto start;
	 case '2':
		 system("color F2");
		 availability();
		 goto start;
	 case '3':
		 system("color F9");
		 booking_room();
		 goto start;
	 case '4':
		 system("color F2");
		 cust_detail();
		 goto start;
	 case '5':
		 system("color F5");
		 food_order();
		 goto start;
	 case '6':
		 system("color F2");
		 food_bill();
		 goto start;
	 case '7':
		 system("color F6");
		 food_cancle();
		 goto start;
	 case '8':
		 system("color F4");
		 leave_room();
		 goto start;
	 case '9':
		 goto out;
	  default:
		 goto start;
     }
   out:
   	system("CLS");
  	return 0;
}
		     /* MAIN FUNCTION BODY CLOSE */

		 /*FUNCTION FOR FILE CREATE BODY OPEN*/
int file_create()
{
 fp1=fopen("room_book.c","a");
 fp2=fopen("room_leave.c","a");
 fp3=fopen("order.c","a");
 fp4=fopen("order_t.c","a");
 fclose(fp1);
 fclose(fp2);
 fclose(fp3);
 fclose(fp4);
 return 0;
}
		 /*FUNCTION FOR FILE CREATE BODY CLOSE*/

		  /* FUNCTION HOTAL NAME-1 BODY OPEN */
int hotel_name1()
{
   system("color F1");
   system("CLS");
   printf("\n********************************************************************************");
   printf("\n                      :::::::::::::::::::::::::::::::::::::");
   printf("\n                     ||                                   ||");
   printf("\n                     ||                                   ||");
   printf("\n                     ||      @ @ @ @ @ @ @ @ @ @ @ @      ||");
   printf("\n                     ||      @                     @      ||");
   printf("\n                     ||      @      WELCOME TO     @      ||");
   printf("\n                     ||      @                     @      ||");
   printf("\n                     ||      @    SOFTWATE HOTEL   @      ||");
   printf("\n                     ||      @                     @      ||");
   printf("\n                     ||      @ @ @ @ @ @ @ @ @ @ @ @      ||");
   printf("\n                     ||                                   ||");
   printf("\n                     ||                                   ||");
   printf("\n                      :::::::::::::::::::::::::::::::::::::\n");
   printf("\n********************************************************************************");
   printf("\nNear MMMUT Engineering College,Deoria Road,Gorakhpur Uttar Pradesh 273016,INDIA.");
   printf("\n\t\t\t\tMOB.NO:- 8417800574\n");
   printf("\n\nPress any character to continue:- ");
   getch();
   return 0;
}
		    /* FUNCTION HOTAL NAME-1 BODY CLOSE */

		    /* FUNCTION HOTAL NAME-2 BODY OPEN */
int hotel_name2()
{
    printf("\n                     .........HOTEL SOFTWATE.........");
    printf("\n- - - - - - - - - - - -- - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
    return 0;
}
		   /* FUNCTION HOTAL NAME-2 BODY CLOSE */

		    /* FUNCTION AMENITIES BODY OPEN */
int amenities()
{
  system("color F6");
  system("CLS");
  hotel_name2();
  printf("\t------------------------------------------------------------------");
  printf("\n\t\t\t...........AMENITIES............\n");
  printf("\t------------------------------------------------------------------");
  printf("\n\n\t1.  24 hours light.\n");
  printf("\t2.  Automatic lift.\n");
  printf("\t3.  Enough parking space.\n");
  printf("\t4.  Round the clock security.\n");
  printf("\t5.  System of hot and cold water.\n");
  printf("\t6.  Free internet service.\n");
  printf("\t7.  24 hours room service.\n");
  printf("\t8.  AC room.\n");
  printf("\t9.  Enough playing space.");
  printf("\n\n\n\n\nPress any character to continue:- ");
  getch();
  return 0;
}
			/* FUNCTION AMENITIES BODY CLOSE*/

		      /* FUNCTION FEATURES OF ROOM BODY OPEN */
int room_features()
{
int feat_r_type1();
int feat_r_type2();
int feat_r_type3();
int feat_r_type4();
int feat_r_type4();
int feat_r_type5();
int feat_r_type6();
int feat_r_type7();
char c,n;
	 start:
	 system("CLS");
	 hotel_name2();
	 printf("\t------------------------------------------------------------------");
	 printf("\n\t\t     -:Different Room Types in hotels:-");
	 printf("\n\t------------------------------------------------------------------");
	 printf("\n->   Room categories depending upon room type.\n");
	 printf("->   Total number of room in a hotel 35 only.\n");
	 printf("->   Room cost depending upon the room type.\n");
	 printf("\n\tRoom Type No.:-       Room Type:-           Number of Room:-\n");
	 printf("\n\t    1.               Single Room         5 [ from Room no 1  to 5  ]");
	 printf("\n\t    2.               Double Room         5 [ from Room no 6  to 10 ]");
	 printf("\n\t    3.               Deluxe Room         5 [ from Room no 11 to 15 ]");
	 printf("\n\t    4.               Twin Room           5 [ from Room no 16 to 20 ]");
	 printf("\n\t    5.               Cabana Room         5 [ from Room no 21 to 25 ]");
	 printf("\n\t    6.               Studio Room         5 [ from Room no 26 to 30 ]");
	 printf("\n\t    7.               Lanai Room          5 [ from Room no 31 to 35 ]");
	 printf("\nHOME PAGE :- When press invailid option.\n");
	 printf("\nSelect Room Type No. for show details:- ");
	 n=getch();
	   switch(n)
	     {
	       case '1':
			 n=feat_r_type1();
				  if(n==1)
					  goto start;
				  return 0;
	       case '2':
			 n=feat_r_type2();
				 if(n==1)
					   goto start;
				 return 0;
	       case '3':
			 n=feat_r_type3();
				  if(n==1)
					  goto start;
				  return 0;
	       case '4':
			 n=feat_r_type4();
				  if(n==1)
					  goto start;
				  return 0;
	       case '5':
			 n=feat_r_type5();
				  if(n==1)
					 goto start;
				  return 0;
	       case '6':
			 n=feat_r_type6();
				  if(n==1)
					 goto start;
				  return 0;
	       case '7':
			 n=feat_r_type7();
				  if(n==1)
					 goto start;
				  return 0;
	       default:
				  return 0;
	     }
}
		       /* FUNCTION FEATURES OF ROOM BODY CLOSE */

		    /* FUNCTION FEATURES OF ROOM TYPE-1 BODY OPEN */
int feat_r_type1()
{
   int a[5]={1,2,3,4,5},n;
   char ch[12]="Single";
   system("CLS");
   feat_r_d1(ch,a,1,1000);
   printf("    A room with the facility of single bed. It is meant for single occupancy.\
 It has anattached bathroom, a small dressing table, a small bedside table, and a  \
 small  writing table. Sometimes it has a single chair too.");
   n=feat_r_d2();
   return(n);
}
		    /* FUNCTION FEATURES OF ROOM TYPE-1 BODY CLOSE */

		    /* FUNCTION FEATURES OF ROOM TYPE-2 BODY OPEN */
int feat_r_type2()
{
   int a[5]={6,7,8,9,10},n;
   char ch[12]="Double";
   system("CLS");
   feat_r_d1(ch,a,2,2000);
   printf("   A room with the facility of double bed. There are two variants in this type\
  depending upon the size of the bed It is equipped with adequate furniture such   as\
 dressing table and a writing table, a TV, and a small fridge.");
   n=feat_r_d2();
   return(n);
}
		    /* FUNCTION FEATURES OF ROOM TYPE-2 BODY CLOSE */

		    /* FUNCTION FEATURES OF ROOM TYPE-3 BODY OPEN */
int feat_r_type3()
{
   int a[5]={11,12,13,14,15},n;
   char ch[12]="Deluxe";
   system("CLS");
   feat_r_d1(ch,a,2,2500);
   printf("   They are available in Single Deluxe and Double Deluxe variants. \
Deluxe room   is well furnished. Some amenities are attached bathroom,\
a dressing table, a     bedside table, a small writing table, a TV, and a small fridge.\
 The floor is     covered with carpet and most suitable for small families.");
   n=feat_r_d2();
   return(n);
}
		     /* FUNCTION FEATURES OF ROOM TYPE-3 BODY CLOSE */

		     /* FUNCTION FEATURES OF ROOM TYPE-4 BODY OPEN */
int feat_r_type4()
{
   int a[5]={16,17,18,19,20},n;
   char ch[12]="Twin";
   system("CLS");
   feat_r_d1(ch,a,2,3000);
   printf("   This room provides two single beds with separate headboards. It is meant for  \
two independent people. It also has a single  bedside table shared between the two beds.");
   n=feat_r_d2();
   return(n);
}
		      /* FUNCTION FEATURES OF ROOM TYPE-4 BODY CLOSE */

		      /* FUNCTION FEATURES OF ROOM TYPE-5 BODY OPEN */
int feat_r_type5()
{
   int a[5]={21,22,23,24,25},n;
   char ch[12]="Cabana";
   system("CLS");
   feat_r_d1(ch,a,1,3500);
   printf("This type of room faces water body, beach, or a swimming pool.\
 It generally has a large balcony.");
   n=feat_r_d2();
   return(n);
}
		       /* FUNCTION FEATURES OF ROOM TYPE-5 BODY CLOSE */

		       /* FUNCTION FEATURES OF ROOM TYPE-6 BODY OPEN */
int feat_r_type6()
{
   int a[5]={26,27,28,29,30},n;
   char ch[12]="Stduio";
   system("CLS");
   feat_r_d1(ch,a,2,4000);
   printf("  They are twin adjacent rooms: A living room with sofa, coffee table and chairs,\
 and a bedroom. It is also equipped with fan air conditioner, a small kitchen  corner, and a\
 dining area. The furniture is often compact.");
   n=feat_r_d2();
   return(n);
}
		       /* FUNCTION FEATURES OF ROOM TYPE-6 BODY CLOSE */

		       /* FUNCTION FEATURES OF ROOM TYPE-7 BODY OPEN */
int feat_r_type7()
{
   int a[5]={31,32,33,34,35},n;
   char ch[12]="Lanai";
   system("CLS");
   feat_r_d1(ch,a,1,5000);
   printf("This room faces a landscape, a waterfall, or a garden.");
   n=feat_r_d2();
   return(n);
}
		       /* FUNCTION FEATURES OF ROOM TYPE-7 BODY CLOSE*/

		      /* FUNCTION FEATURES OF ROOM DETAIL-1 BODY OPEN */
int feat_r_d1(char type[12],int room_no[5],int no_bed,int room_char)
{
   int i;
   system("CLS");
   hotel_name2();
   printf("\t------------------------------------------------------------------");
   printf("\n                              -:Features of Room:-");
   printf("\n\t------------------------------------------------------------------\n\n");
   printf("\t=> Room Type        ->><<-  %s\n",type);
   printf("\t=> Room No.         ->><<-  ");
     for(i=0;i<5;i++)
     printf("%d,",room_no[i]);
   printf("\n\t=> No. of Bed       ->><<-  %d",no_bed);
   printf("\n\t=> Room Charge      ->><<-  %d  per day \n",room_char);
   printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
   printf("                              -:Additional Features:-        \n");
   printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
}
		     /* FUNCTION FEATURES OF ROOM DETAIL-1 BODY CLOSE */

		     /* FUNCTION FEATURES OF ROOM DETAIL-2 BODY OPEN */
int feat_r_d2()
{
   char c;
   printf("\n-------------------------------------------------------------------------------\n");
   printf("    Back:-       When press '1'.\n");
   printf("    HOME PAGE:-  When press enter key or invailid key.\n");
   printf("\n  Enter your choice :-  ");
   c=getch();
    if(c=='1')
      return(1);
      return(3);
}
		    /* FUNCTION FEATURES OF ROOM DETAIL-2 BODY CLOSE */

			/* FUNCTION ROOM AVAILABILITY BODY OPEN */
int availability()
{
 int i;char c;

 /* THIS LOOP FOR CLEAR AVIALAVILITY OLD RECORDS */

 for(i=1;i<=35;i++)
   avail[i].room_no=0;
  fclose(fp1);
  fclose(fp2);
  fclose(fp3);
  fclose(fp4);
   fp1=fopen("room_book.c","r");
   if(fp1==NULL)
   {
     printf("file cannot open.");
     getch();
     goto out;
   }

   /* READ THE FILE FOR ADD AVIALAVILITY NEW RECORDS */

   while(fscanf(fp1,"%d %s %s %s %s %d %s %s %s",&c_d.room_no,c_d.name,c_d.father,c_d.city,c_d.state,&c_d.age,c_d.country,c_d.date,c_d.time)!=EOF)
   {
    avail[c_d.room_no].room_no=c_d.room_no;
    strcpy(avail[c_d.room_no].name,c_d.name);
    avail[c_d.room_no].age=c_d.age;
   }
   start:
   system("CLS");
   hotel_name2();
   printf("\t------------------------------------------------------------------");
   printf("\n                            -:Know Availability of Room:-\n");
   printf("\t------------------------------------------------------------------");
   printf("\n Room No     Type     Charge     Availability     Customer Name            Age\n");
   for(i=1;i<=15;i++)
   {
     if(avail[i].room_no==0)
     {
      if(i<=5)
      printf("\n   %-2d        Single    1000          Yes          N.A.                      0",i);
      else
	if(i<=10)
	printf("\n   %-2d        Double    2000          Yes          N.A.                      0",i);
	else
	 if(i<=15)
      printf("\n   %-2d        Deluxe    2500          Yes          N.A.                      0",i);
     }
     else
    {
      if(i<=5)
      printf("\n   %-2d        Single    1000          No           %-26s%d",i,avail[i].name,avail[i].age);
      else
       if(i<=10)
       printf("\n   %-2d        Double    2000          No           %-26s%d",i,avail[i].name,avail[i].age);
       else
	if(i<=15)
	printf("\n   %-2d        Deluxe    2500          No           %-26s%d",i,avail[i].name,avail[i].age);
    }
 }
   printf("\n  More:-      When press '1'.");
   printf("\n  Home page:- When press enter key or invalid key.");
   printf("\n  Enter your choice:- ");
   c=getch();
   if(c=='1')
   {
      system("CLS");
      hotel_name2();
      printf("\t------------------------------------------------------------------");
      printf("\n                            -:Know Availability of Room:-\n");
      printf("\t------------------------------------------------------------------");
      printf("\n Room No     Type     Charge     Availability     Customer Name            Age\n");
       for(;i<=35;i++)
       {
	if(avail[i].room_no==0)
	{
	 if(i<=20)
	  printf("\n    %d       Twin      3000  	     Yes          N.A.                      0",i);
	 else
	 if(i<=25)
	   printf("\n    %d       Cabana    3500   	     Yes          N.A.                      0",i);
	 else
	 if(i<=30)
	   printf("\n    %d       Studio    4000  	     Yes          N.A.                      0",i);
	 else
	 if(i<=35)
	   printf("\n    %d       Lanai     5000   	     Yes          N.A.                      0",i);
	}
	else
	{
	 if(i<=20)
	  printf("\n    %d       Twin      3000          No           %-26s%d",i,avail[i].name,avail[i].age);
	 else
	 if(i<=25)
	   printf("\n    %d       Cabana    3500          No           %-26s%d",i,avail[i].name,avail[i].age);
	 else
	 if(i<=30)
	   printf("\n    %d       Stduio    4000          No           %-26s%d",i,avail[i].name,avail[i].age);
	 else
	 if(i<=35)
	   printf("\n    %d       Lanai     5000          No           %-26s%d",i,avail[i].name,avail[i].age);
	}
   }
   printf("\n  Back:-       When press '1'.");
   printf("\n  HOME PAGE:-  When press enter key or invalid key.");
   printf("\n  Enter your choice:- ");
   c=getch();
   if(c=='1')
     goto start;
  }
  out:
  return 0;
}
			 /* FUNCTION ROOM AVAILABILITY BODY CLOSE */

			    /* FUNCTION ROOM BOOK BODY OPEN */
int booking_room()
{
  int r,i;
  char ch;
  start:
  system("CLS");
  hotel_name2();
  printf("\t------------------------------------------------------------------");
  printf("\n\t\t\t         -:Book Room:-\n");
  printf("\t------------------------------------------------------------------");
  printf("\nNote:- You want to back any time Home Page .Press '0' then ENTER.");
  printf("\nNote:-Space do not use here. '_''.' or any symbol is allow.");
  fclose(fp1);
  fclose(fp2);
  fclose(fp3);
  fclose(fp4); 
  fp1=fopen("room_book.c","a+");
  if(fp1==NULL)
  {
    printf("File can not be open");
    getch();
    goto out;
  }
  printf("\n\tEnter room no:- ");
  fflush(stdin);
  scanf("%d",&r);
    if(r==0)
    goto out;

  /* CONDITION FOR CHECK THE ROOM NUMBER IS VALID OR NOT */

 if(1<=r&&r<=35)
 {

  /* READ THE FILE FOR CHECK ROOM IS BOOK OR NOT */

     while(fscanf(fp1,"%d %s %s %s %s %d %s %s %s",&c_d.room_no,c_d.name,c_d.father,c_d.city,c_d.state,&c_d.age,c_d.country,c_d.date,c_d.time)!=EOF)
      if(c_d.room_no==r)
      {
	printf("\tThis room_no is also booked.");
	goto check;
      }
	c_d.room_no=r;
 name:
      printf("\t1. Enter customer name        :- ");
      fflush(stdin);
      gets(c_d.name);
	 for(i=0;c_d.name[i]!='\0';i++)
	  if(c_d.name[i]==32)
	  {
	   printf("\tSpace not allow.\n");
	   goto name;
	  }
	   if(strcmp("0",c_d.name)==0)
	   goto out;
 father:
      printf("\t2. Enter customer father name :- ");
      fflush(stdin);
      gets(c_d.father);
	 for(i=0;c_d.father[i]!='\0';i++)
	  if(c_d.father[i]==32)
	  {
	   printf("\tSpace not allow.\n");
	   goto father;
	  }
	   if(strcmp("0",c_d.father)==0)
	   goto out;
 city:
      printf("\t3. Enter the city name        :- ");
      fflush(stdin);
      gets(c_d.city);
	 for(i=0;c_d.city[i]!='\0';i++)
	  if(c_d.city[i]==32)
	 {
	  printf("\tSpace not allow.\n");
	  goto city;
	 }
	 if(strcmp("0",c_d.city)==0)
	 goto out;
 state:
      printf("\t4. Enter the state name       :- ");
      fflush(stdin);
      gets(c_d.state);
	for(i=0;c_d.state[i]!='\0';i++)
	 if(c_d.state[i]==32)
	 {
	  printf("\tSpace not allow.\n");
	  goto state;
	 }
	if(strcmp("0",c_d.state)==0)
	goto out;
 age:
     printf("\t5. Enter the age 18 to 80     :- ");
     fflush(stdin);
     scanf("%d",&c_d.age);
       if(c_d.age==0)
	goto out;
       if(c_d.age>17&&c_d.age<81);
       else
       {
	printf("\tInvalid age. Please enter valid age.\n");
	goto age;
       }
 country:
     printf("\t6.Enter the country name.     :- ");
     fflush(stdin);
     scanf("%s",&c_d.country);
	for(i=0;c_d.country[i]!='\0';i++)
	 if(c_d.country[i]==32)
	 {
	  printf("\tSpace not allow.\n");
	  goto country;
	 }
	 if(strcmp("0",c_d.country)==0)
	 goto out;

   /* SEEK THE POINTER AT END FOR WRITING DATA */

    fseek(fp1,0,SEEK_END);

    /* WRITE BOOKING ROOM DETAIL GIVEN BY COUSTOMER IN FILE  */

    fprintf(fp1,"\n%d %s %s %s %s %d %s %s %s",c_d.room_no,c_d.name,c_d.father,c_d.city,c_d.state,c_d.age,c_d.country,_strdate(c_d.date),_strtime(c_d.time));
    printf("\n\tThis room_no is successfully book.");
 }
 else
 {
  printf("\tInvailid room_no.");
  printf("\n\tPlease enter the room_no between 1 to 35.");
 }
  check:
  printf("\n\tDo you want to book another room Y/N:-  ");
  ch=getch();
  if(ch=='y'||ch=='Y')
   goto start;
  out:
  return 0;
}
			/* FUNCTION ROOM BOOK BODY CLOSE */

		     /* FUNCTION CUSTOMER DETAIL BODY OPEN */
int cust_detail()
{
  char ch;
  int r,i,r_check;
  start:
     fclose(fp1);
     fclose(fp2);
     fclose(fp3);
     fclose(fp4);
    fp2=fopen("room_book.c","r");
    fp1=fopen("order.c","r");
     if(fp2==NULL||fp1==NULL)
     {
       printf("file cannot be opened");
       getch();
       goto out;
     }
  system("CLS");
  hotel_name2();
  printf("\t------------------------------------------------------------------");
  printf("\n\t\t\t    -:Show customers details:-\n");
  printf("\t------------------------------------------------------------------");
  printf("\nNote:- You want to back Home Page .Press '0' then ENTER.");
  printf("\n\tEnter the Room No. :- ");
  fflush(stdin);
  scanf("%d",&r);
  if(r==0)
  goto out;

 /* CONDITION FOR CHECK THE ROOM NUMBER IS VALID OR NOT */

 if(r>35||r<1)
 {
  printf("\n\tInvailid Room No.\n\tPlease enter the room_no between 1 to 35.");
  goto check;
 }
 else
 {
    r_check=1;

   /* READ THE FILE FOR CHECK ROOM IS BOOK OR NOT */

    while(fscanf(fp2,"%d %s %s %s %s %d %s %s %s",&c_d.room_no,c_d.name,c_d.father,c_d.city,c_d.state,&c_d.age,c_d.country,c_d.date,c_d.time)!=EOF)
    if(c_d.room_no==r)
    {
      r_check=0;
	  break;
    }
    if(r_check==0)
    {
     i=0;
     printf("\n\t1. Customer Name          : %s",c_d.name);
     printf("\n\t2. Father name            : %s",c_d.father);
     printf("\n\t3. City                   : %s",c_d.city);
     printf("\n\t4. State                  : %s",c_d.state);
     printf("\n\t5. Age                    : %d",c_d.age);
     printf("\n\t6. Country                : %s",c_d.country);
     printf("\n\t7. Booking date           : %s",c_d.date);
     printf("\n\t8. Booking time           : %s",c_d.time);

    /* READ THE FILE FOR CHECK FOOD IS ORDER OR NOT */

    while(fscanf(fp1,"%d %d %s %s",&order.room_no,&order.food_code,order.date,order.time)!=EOF)
       if(order.room_no==r)
       i++;
     if(i!=0)
     printf("\n\t9. Food order             : YES\n\t10.No. of food item       : %d",i);
     else
     printf("\n\t9. Food order             : NO");
    }
    else
    printf("\n\tThis room_no is not book.");
 }
   check:
   printf("\n\n\tDo you want to check another room_no Y/N:- ");
   ch=getch();
   if(ch=='y'||ch=='Y')
   goto start;
   out:
   return 0;
}
		    /* FUNCTION CUSTOMER DETAIL BODY CLOSE */

		      /* FUNCTION FOOD ORDER BODY OPEN */
int food_order()
{
  char ch;
  int f_check,r,r_check,f_c,i,j;
  system("CLS");
  food_menu();
  printf("\nYou want to order Y/N:- ");
    ch=getch();
      if(ch!='Y'&&ch!='y')
	goto out;
  start:
   fclose(fp1);
   fclose(fp2);
   fclose(fp3);
   fclose(fp4);
   fp1=fopen("room_book.c","r");
   if(fp1==NULL)
   {
     printf("File cannot open.");
     getch();
     goto out;
   }
  system("CLS");
  food_menu();
  printf("\nEnter the room_no. :-  ");
  fflush(stdin);
  scanf("%d",&r);

  /* CONDITION FOR CHECK THE ROOM NUMBER IS VALID OR NOT */

  if(r>35||r<1)
  {
    printf("Invalid room_no.\nPlease enter the room_no between 1 to 35.");
    goto check;
  }
   r_check=0;

   /* READ THE FILE FOR CHECK ROOM IS BOOK OR NOT */

   while(fscanf(fp1,"%d %s %s %s %s %d %s %s %s",&c_d.room_no,c_d.name,c_d.father,c_d.city,c_d.state,&c_d.age,c_d.country,c_d.date,c_d.time)!=EOF)
    if(c_d.room_no==r)
      r_check=1;
  if(r_check==1)
  {
      fp2=fopen("order.c","a+");
      if(fp2==NULL)
      {
	printf("File cannot open");
	getch();
	goto out;
      }
      start1:
      i=0;
      system("CLS");
      food_menu();
      rewind(fp2);

      /* READ THE FILE FOR COUNT ORDERED FOOOD ITEMS */

      while(fscanf(fp2,"%d %d %s %s",&order.room_no,&order.food_code,order.date,order.time)!=EOF)
       if(order.room_no==r)
       i++;
      printf("\nYou can only maximum 10 food item order. Ordered food items== %d",i);
      if(i==10)
      {
	 printf("\nYou can not order more than 10 .Your order alredy 10.");
	 printf("\nPress any character to HOME PAGE:- ");
	 getch();
	 goto out;
      }
     printf("\nEnter the valid food item code from menu card:- ");
     fflush(stdin);
     scanf("%d",&f_c);

      /* CONDITION FOR CHECK THE FOOD ITEM CODE IS VALID OR NOT */

      if(f_c<1||f_c>30)
      {
       printf("Invalid food code.");
       printf("\nDo you want to enter another food code Y/N:- ");
       ch=getch();
       if(ch=='y'||ch=='Y')
	goto start1;
	goto out;
      }
     f_check=0;
    rewind(fp2);

     /* READ THE FILE FOR CHECK THE FOOD ITEM IS BOOKED OR NOT */

    while(fscanf(fp2,"%d %d %s %s",&order.room_no,&order.food_code,order.date,order.time)!=EOF)
    if(order.room_no==r&&order.food_code==f_c)
    f_check=1;
    if(f_check==1)
    {
	 printf("This food item already booked by you.");
	 printf("\nYou want order another food item Y/N.");
	 ch=getch();
	 if(ch=='y'||ch=='Y')
	 goto start1;
	 goto out;
    }
    else
    {

       /* SEEK THE POINTER AT END FOR WRITING DATA */

	fseek(fp2,0,SEEK_END);

      /* WRITE BOOK FOOD ITEM  GIVEN BY COUSTOMER IN FILE  */

	fprintf(fp2,"\n%d %d %s %s",r,f_c,_strdate(order.date),_strtime(order.time));
	printf("\nYou want order another food item Y/N.");
	ch=getch();
	 if(ch=='y'||ch=='Y')
	  goto start1;
	  goto out;
    }
 }
 else
 {
   printf("This room_no is not boook.");
   check:
   printf("\nDo you want to check another room_no Y/N:- ");
   ch=getch();
   if(ch=='y'||ch=='Y')
   goto start;
 }
   out:
   return 0;
}
			   /* FUNCTION FOOD ORDER BODY CLOSE */

			   /* FUNCTION FOOD MENU BODY OPEN */
int food_menu()
{
   int i;
   hotel_name2();
   printf("\t------------------------------------------------------------------");
   printf("\n\t\t\t         -:MENU CARD :-\n");
   printf("\t------------------------------------------------------------------");
   printf("\n      -:VEG ITEMS:-        -:RICE AND ROTI ITEMS:-         -:NON-VEG ITEMS:-   ");
   printf("\n------------------------  --------------------------  -------------------------");
   printf("\nCode  Name        Rate  || Code  Name         Rate || Code  Name          Rate");
   for(i=1;i<=10;i++)
    printf("\n%-2d.%-15s: %-7d%-2d.%-16s:%-7d%-2d.%-17s:%d",i,food_list[i],food_rate[i],i+10,food_list[i+10],food_rate[i+10],i+20,food_list[i+20],food_rate[i+20]);
    return 0;
}
			    /* FUNCTION FOOD MENU BODY CLOSE */

			    /* FUNCTION FOOD BILL BODY OPEN */
int food_bill()
{
   char ch;
   int r,f_c,i,sum,r_check;
   start:
   fclose(fp1);
   fclose(fp2);
   fclose(fp3);
   fclose(fp4);
   fp1=fopen("room_book.c","r");
   fp2=fopen("order.c","r");
   if(fp1==NULL||fp2==NULL)
   {
   printf("File cannot open.");
   getch();
   goto out;
   }
   sum=0;
   system("CLS");
   hotel_name2();
   printf("\t------------------------------------------------------------------");
   printf("\n\t\t\t     -:Bill of food order:-\n");
   printf("\t------------------------------------------------------------------");
   printf("\nNote:- You want to back Home Page .Press '0' then ENTER.");
   printf("\n\tEnter the room no:- ");
   scanf("%d",&r);
    if(r==0)
    goto out;

    /* CONDITION FOR CHECK THE ROOM NUMBER IS VALID OR NOT */

    if(r>35||r<1)
    {
      printf("\tInvailid room no.\n");
      goto check;
    }
 r_check=0;

  /* READ THE FILE FOR CHECK ROOM IS BOOK OR NOT */

 while(fscanf(fp1,"%d %s %s %s %s %d %s %s %s",&c_d.room_no,c_d.name,c_d.father,c_d.city,c_d.state,&c_d.age,c_d.country,c_d.date,c_d.time)!=EOF)
 if(c_d.room_no==r)
   r_check=1;
 if(r_check==1)
 {
    i=0;
    printf("\t    -:NAME:-                 -:RATE:-       -:DATE:-      -:TIME:-");
    printf("\n\t------------------------------------------------------------------");

    /* READ THE FILE FOR CHECK FOOD ITEMS ORDER OR NOT  */

    while(fscanf(fp2,"%d %d %s %s",&order.room_no,&order.food_code,order.date,order.time)!=EOF)
    {
      f_c=order.food_code;
      if(order.room_no==r)
      {
	printf("\n\t%-2d.  %-27s%-3d         %s       %s",++i,food_list[f_c],food_rate[f_c],order.date,order.time);
	sum=sum+food_rate[f_c];
      }
    }
   printf("\n\t------------------------------------------------------------------");
   printf("\n\t     TOTAL:-                    %d",sum);
   printf("\n\t------------------------------------------------------------------\n");
   if(i==0)
   printf("\n\tThis room no. not order food.\n");
   goto check;
 }
 else
 {
   printf("\tThis room no. not booked.\n");
   check:
   printf("\tDo you want to check another room_no Y/N.:- ");
   ch=getch();
   if(ch=='y'||ch=='Y')
   goto start;
 }
   out:
   return 0;
}
			 /* FUNCTION FOOD BILL BODY CLOSE */

			/* FUNCTION FOOD CANCLE BODY OPEN */
int food_cancle()
{
   char ch;
   int r,r_check,f_check,i,f_c,f_check1;
   start:
   system("CLS");
   hotel_name2();
   printf("\t------------------------------------------------------------------");
   printf("\n\t\t\t         -:Cancle Food Items:-\n");
   printf("\t------------------------------------------------------------------");
   printf("\nNote:- You want to back Home Page .Press '0' then ENTER.");
   printf("\n\tEnter the room no :- ");
   fflush(stdin);
   scanf("%d",&r);
   if(r==0)
     goto out;

   /* CONDITION FOR CHECK THE ROOM NUMBER IS VALID OR NOT */

   if(r<1||r>35)
   {
   printf("\tInvalid room_no.\n\tPlease enter the valid room_no from 1 to 35.");
   goto check;
   }
   fclose(fp1);
   fclose(fp2);
   fclose(fp3);
   fclose(fp4);
   fp1=fopen("room_book.c","r");
   if(fp1==NULL)
   {
   printf("File cannot open");
   getch();
   goto out;
   }
   r_check=0;

   /* READ THE FILE FOR CHECK ROOM IS BOOK OR NOT */

   while(fscanf(fp1,"%d %s %s %s %s %d %s %s %s",&c_d.room_no,c_d.name,c_d.father,c_d.city,c_d.state,&c_d.age,c_d.country,c_d.date,c_d.time)!=EOF)
   if(c_d.room_no==r)
   r_check=1;
if(r_check==0)
{
   printf("\n\tThis room_no is not booked.");
   goto check;
}
else
{
   start1:
   system("CLS");
   hotel_name2();
   printf("\t------------------------------------------------------------------");
   printf("\n\t\t\t         -:Cancle Food Items:-\n");
   printf("\t------------------------------------------------------------------");
   printf("\n\tEnter the room no :- %d\n",r);
   i=0,f_check=0;
     fclose(fp2);
     fp2=fopen("order.c","r");
     if(fp2==NULL)
     {
       printf("File cannot open");
       getch();
       goto out;
     }
    printf("\t-:S.NO.:-      -:ITEM NAME:-           -:ITEM CODES:-     -:RATE:-");
    printf("\n\t------------------------------------------------------------------");

    /* READ THE FILE FOR CHECK FOOD ITEMS ORDER OR NOT  */

    while(fscanf(fp2,"%d %d %s %s",&order.room_no,&order.food_code,order.date,order.time)!=EOF)
    {
       if(r==order.room_no)
       {
	 f_check=1;
	 printf("\n\t  %-15d%-28s%-15d%d",++i,food_list[order.food_code],order.food_code,food_rate[order.food_code]);
       }
    }
    if(f_check==1)
    printf("\n\t------------------------------------------------------------------");
}
 if(f_check==1)
 {
   printf("\n Note:- You want to back Home Page .Press '0' then ENTER.");
   printf("\n\tEnter the food item code. Which you want to cancle:- ");
   fflush(stdin);
   scanf("%d",&f_c);
   if(f_c==0)
   goto out;
   rewind(fp2);
   f_check1=0;
   fclose(fp3);
   fp3=fopen("order_t.c","w");
   if(fp3==NULL)
   {
    printf("File cannot open");
    getch();
    goto out;
   }

   /* READ THE FOOD ORDER MAIN FILE */

   while(fscanf(fp2,"%d %d %s %s",&order.room_no,&order.food_code,order.date,order.time)!=EOF)
   if(order.room_no==r&&order.food_code==f_c)
   f_check1=1;
   else

   /* WRITE IN TEMPORARY FILE APART CANCLE FOOD ITEM */

   fprintf(fp3,"\n%d %d %s %s",order.room_no,order.food_code,order.date,order.time);
   if(f_check1==0)
      printf("\n\tThis food item code not match.");
   else
     {
       fclose(fp2);
       fclose(fp3);
       fp2=fopen("order.c","w");
       fp3=fopen("order_t.c","r");

       /* READ THE FOOD ORDER TEMPORARY FILE */

       while(fscanf(fp3,"%d %d %s %s",&order.room_no,&order.food_code,order.date,order.time)!=EOF)

       /* WRITE IN FOOD ORDER MAIN FILE */

       fprintf(fp2,"\n%d %d %s %s",order.room_no,order.food_code,order.date,order.time);
     }
   printf("\n\tDo you want to cancle another food item code Y/N:- ");
   ch=getch();
    if(ch=='y'||ch=='Y')
      goto start1;
}
 else
    printf("\n\tThis room_no not order food.");
  check:
  printf("\n\tDo you want to check another room_no Y/N:- ");
  ch=getch();
  if(ch=='y'||ch=='Y')
   goto start;
   out:
   return 0;
}
		      /* FUNCTION FOOD CANCLE BODY CLOSE */

		       /* FUNCTION LEAVE ROOM BODY OPEN */
int leave_room()
{
 int r,r_check,f_check;
 char date[9],time[9],ch;
 start:
 system("CLS");
 hotel_name2();
 printf("\t------------------------------------------------------------------");
 printf("\n\t\t\t        -:Leave Room:-\n");
 printf("\t------------------------------------------------------------------");
 printf("\nNote:- You want to back Home Page .Press '0' then ENTER.");
 printf("\n\tEnter the room no:- ");
 fflush(stdin);
 scanf("%d",&r);
 if(r==0)
 goto out;

 /* CONDITION FOR CHECK THE ROOM NUMBER IS VALID OR NOT */

 if(r<1||r>35)
 {
   printf("\n\tInvalid room no.");
   goto check;
 }
  fclose(fp1);
  fclose(fp2);
  fclose(fp3);
  fclose(fp4);
  fp1=fopen("room_book.c","r");
  fp2=fopen("room_leave.c","w+");
  fp3=fopen("order.c","r");
  fp4=fopen("order_t.c","w+");
  if(fp1==NULL||fp2==NULL||fp3==NULL||fp4==NULL)
  {
    printf("file cannot open.");
    getch();
    goto out;
  }
 r_check=0,f_check=0;

 /* READ THE FILE FOR CHECK ROOM IS BOOK OR NOT */

 while(fscanf(fp1,"%d %s %s %s %s %d %s %s %s",&c_d.room_no,c_d.name,c_d.father,c_d.city,c_d.state,&c_d.age,c_d.country,c_d.date,c_d.time)!=EOF)
 {
  if(r==c_d.room_no)
  {
   r_check=1;

   /* READ THE FOOD ORDER MAIN FILE */

   while(fscanf(fp3,"%d %d %s %s",&order.room_no,&order.food_code,order.date,order.time)!=EOF)
   {
     if(order.room_no==r)
     f_check++;
     else

     /* WRITE THE FOOD ITEMS IN TEMPORARY FILE APART THE CANCLED ROOM NUMBER*/

     fprintf(fp4,"\n%d %d %s %s",order.room_no,order.food_code,order.date,order.time);
   }
    printf("\n\tCustomer Name     : %s",c_d.name);
    printf("\n\tFather name       : %s",c_d.father);
    printf("\n\tCity              : %s",c_d.city);
    printf("\n\tState             : %s",c_d.state);
    printf("\n\tAge               : %d",c_d.age);
    printf("\n\tCountry           : %s",c_d.country);
    printf("\n\tBooking date      : %s      Leaving date      : %s",c_d.date,_strdate(date));
    printf("\n\tBooking time      : %s      Leaving time      : %s",c_d.time,_strtime(time));
    if(f_check!=0)
    printf("\n\tFood order        : YES\n\tNo. of food item   : %d",f_check);
    else
    printf("\n\tFood order        : NO");
  }
  else

  /* WRITE THE BOOKED ROOM DETAILS IN TEMPORARY FILE APART THE CANCLED ROOM NUMBER*/

  fprintf(fp2,"\n%d %s %s %s %s %d %s %s %s",c_d.room_no,c_d.name,c_d.father,c_d.city,c_d.state,c_d.age,c_d.country,_strdate(c_d.date),_strtime(c_d.time));
 }
 if(f_check!=0)
 {
  fclose(fp3);
  fp3=fopen("order.c","w");
  rewind(fp4);

   /* READ THE FOOD ORDER TEMPORARY FILE */

  while(fscanf(fp4,"%d %d %s %s",&order.room_no,&order.food_code,order.date,order.time)!=EOF)

  /* WRITE IN FOOD ORDER MAIN FILE */

  fprintf(fp3,"\n%d %d %s %s",order.room_no,order.food_code,order.date,order.time);
 }
 if(r_check==1)
 {
  fclose(fp1);
  fp1=fopen("room_book.c","w");
  rewind(fp2);

   /* READ THE ROOM DETAIL IN TEMPORARY FILE */

  while(fscanf(fp2,"%d %s %s %s %s %d %s %s %s",&c_d.room_no,c_d.name,c_d.father,c_d.city,c_d.state,&c_d.age,c_d.country,c_d.date,c_d.time)!=EOF)

  /* WRITE ROOM DETAILS IN MAIN FILE */

  fprintf(fp1,"\n%d %s %s %s %s %d %s %s %s",c_d.room_no,c_d.name,c_d.father,c_d.city,c_d.state,c_d.age,c_d.country,_strdate(c_d.date),_strtime(c_d.time));
  printf("\n\n\tThis room_no is successfully cancle.\n");
 }
 else
 printf("\n\tThis room_no is not book.");
  check:
  printf("\n\tYou want to leave another room Y/N:-  ");
  ch=getch();
  if(ch=='y'||ch=='Y')
    goto start;
  out:
  return 0;
}
			    /* FUNCTION FOOD CANCLE BODY CLOSE */

	/*------------------------PROGRAM END------------------------- */
