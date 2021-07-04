#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include"cabdeclare.h"

int main()
{

    while(1)
    {
        int user_choice,count,i;
        
        printf("\n...................Taxi_Booking..............................................\n");
        printf("\n 1.Booking  2.Details 3.exit \n");
        printf("Enter Choice:");
  scanf("%d",&user_choice);
        if(user_choice==1)
        {
            printf("\nnumber of Booking :");
            scanf("%d",&count);
            for(i=0;i<count;i++)
            {
                printf("\nInput %d:\n",i+1);
                printf("\nCustomer Id :");
                scanf("%d",&t[i].customer_id);
                printf("\npickup point :");
                scanf("%s",t[i].pickup_point);
                printf("\ndrop point :");
                scanf("%s",t[i].drop_point);
                printf("\npickup time :");
                scanf("%d",&t[i].pickup_time);
                if(taxi1==0)
                {
                booking(&b[0][taxi1_book++],t[i],0);
                taxi1=distance(t[i].pickup_point,t[i].drop_point);
                taxiprint(1);
                }
                else if(taxi2==0)
                {
                booking(&b[1][taxi2_book++],t[i],1);
                taxi2=distance(t[i].pickup_point,t[i].drop_point);
                taxiprint(2);
                }
                else if(taxi3==0)
                {
                 booking(&b[2][taxi3_book++],t[i],2);
                taxi3=distance(t[i].pickup_point,t[i].drop_point);
                taxiprint(3);
                }
                else if(taxi4==0)
                {
                 booking(&b[3][taxi4_book++],t[i],3);
                taxi4=distance(t[i].pickup_point,t[i].drop_point);
                taxiprint(4);
                }
                else
                {
                 printf("ALL Taxi Are Busy.. Please Try after Some time");
                }
                decrement();
            }
        }
        else if(user_choice==2)
        {
display();
        }
        else
        {
            return 0;
        }
    }
    
}

