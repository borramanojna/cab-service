   int booking_id=1;
     int taxi1,taxi2,taxi3,taxi4;
      int taxi1_book,taxi2_book,taxi3_book,taxi4_book;
         int taxi_earning[4];
         


          
     struct taxi
    {
        int customer_id;
        char pickup_point[3];
        char drop_point[3];
        int pickup_time;
    };
    struct taxi t[100];

      struct booking
    {
    // static int taxi_earning[4];
        int booking_id;
        int customer_id;
        char from[3];
        char to[3];
        int pickuptime;
        int droptime;
        int amount;
    };
    struct booking b[4][100];
    void booking(struct booking *b,struct taxi t,int no);
    int distance(char *a,char *b);
 void taxiprint(int);
 void decrement();
 void display();