#include"cabdeclare.h"
void booking(struct booking *b,struct taxi t,int no)
{
b->customer_id=t.customer_id;
b->booking_id=booking_id++;
strcpy(b->from,t.pickup_point);
strcpy(b->to,t.drop_point);
b->pickuptime=t.pickup_time;
b->droptime =distance(t.pickup_point,t.drop_point)+t.pickup_time;
if(b->droptime>12)
{
 b->droptime-=12;
}
b->amount=100+((distance(t.pickup_point,t.drop_point)*15)-5)*10;
taxi_earning[no]+=b->amount;
}


int distance(char *a,char *b)
{
 char start=a[0];
 char stop=b[0];
 return (abs(start-stop));
}
void taxiprint(int taxino)
{
 printf("\n Taxi can be Allocated\n");
 printf("\n taxi- %d is allocated\n\n",taxino);
}


void decrement()
{
 if(taxi1>0)
 taxi1--;
 if(taxi2>0)
 taxi2--;
 if(taxi3>0)
 taxi3--;
 if(taxi4>0)
 taxi4--;
}

void display()
{
// printf("%d %d %d %d",taxi1_book,taxi2_book,taxi3_book,taxi4_book);
 if(taxi1_book>0)
 {
  printf("\nTaxi 1 \n total Earning= %d\n",taxi_earning[0]);
     printf("\n Booking_Id   Customer_Id   From  to  pickup_time  Drop_time  Amount\n");
  for(int i=0;i<taxi1_book;i++)
  {
   printf("%d     %d      %s      %s      %d     %d     %d\n",b[0][i].booking_id,b[0][i].customer_id,b[0][i].from,b[0][i].to,b[0][i].pickuptime,b[0][i].droptime,b[0][i].amount);
  }
 }
 if(taxi2_book>0)
 {
  printf("\nTaxi 2 \n total Earning= %d\n",taxi_earning[1]);
     printf("\n Booking_Id   Customer_Id   From  to  pickup_time  Drop_time  Amount\n");
  for(int i=0;i<taxi2_book;i++)
  {
   printf("%d     %d      %s      %s      %d     %d     %d\n",b[1][i].booking_id,b[1][i].customer_id,b[1][i].from,b[1][i].to,b[1][i].pickuptime,b[1][i].droptime,b[1][i].amount);
  }
 }if(taxi3_book>0)
 {
  printf("\nTaxi 3 \n total Earning= %d\n",taxi_earning[2]);
     printf("\n Booking_Id   Customer_Id   From  to  pickup_time  Drop_time  Amount\n");
  for(int i=0;i<taxi3_book;i++)
  {
   printf("%d     %d      %s      %s      %d     %d     %d\n",b[2][i].booking_id,b[2][i].customer_id,b[2][i].from,b[2][i].to,b[2][i].pickuptime,b[2][i].droptime,b[2][i].amount);
  }
 }if(taxi4_book>0)
 {
  printf("\nTaxi 1 \n total Earning= %d\n",taxi_earning[3]);
     printf("\n Booking_Id   Customer_Id   From  to  pickup_time  Drop_time  Amount\n");
  for(int i=0;i<taxi4_book;i++)
  {
   printf("%d     %d      %s      %s      %d     %d     %d\n",b[3][i].booking_id,b[3][i].customer_id,b[3][i].from,b[3][i].to,b[3][i].pickuptime,b[3][i].droptime,b[3][i].amount);
  }
 }
}