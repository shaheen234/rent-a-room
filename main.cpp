#include <iostream>

using namespace std;

int main()
{
     int a,b,c,d,discounted_cost,sales_tax,cost;
   cout<<"enter cost of room"<<endl;
   cin>>a;
   cout<<"enter number of rooms"<<endl;
   cin>>b;
   cout<<"enter sales tax"<<endl;
   cin>>c;
   cout<<"enter number of days"<<endl;
   cin>>d;
   if (b<=9)
   {
       if (d<3)
       {
           cost=a+(a*c/100);
           cout<<"total="<<cost<<endl;
       }
       else
       {   discounted_cost=a-(a*5/100);
           sales_tax=discounted_cost+(discounted_cost*c/100);
           cout<<"discount="<<discounted_cost;
           cout<<"total="<<sales_tax<<endl;
       }

   }
   else if (b>=10 &&b<20)
   {
       if (d<3)
       {
          discounted_cost=a-(a*10/100);
          sales_tax=discounted_cost+(discounted_cost*c/100);
          cout<<"discount="<<discounted_cost;
          cout<<"total="<<sales_tax<<endl;

       }
       else
       {
          discounted_cost=a-(a*15/100);
          sales_tax=discounted_cost+(discounted_cost*c/100);
          cout<<"discount="<<discounted_cost;
          cout<<"total="<<sales_tax<<endl;
       }
   }

   else if(b>=20 && b<30)
   {
       if(d<3)
       {
           discounted_cost=a-(a*20/100);
           sales_tax=discounted_cost+(discounted_cost*c/100);
           cout<<"discount="<<discounted_cost;
           cout<<"total="<<sales_tax<<endl;
       }
        else
        {
            discounted_cost=a-(a*25/100);
            sales_tax=discounted_cost+(discounted_cost*c/100);
            cout<<"discount="<<discounted_cost;
            cout<<"total="<<sales_tax<<endl;
        }
   }

   else if(b>=30)
   {
       if (d<3)
       {
            discounted_cost=a-(a*30/100);
            sales_tax=discounted_cost+(discounted_cost*c/100);
            cout<<"discount="<<discounted_cost;
            cout<<"total="<<sales_tax<<endl;
       }
        else
        {
           discounted_cost=a-(a*35/100);
           sales_tax=discounted_cost+(discounted_cost*c/100);
           cout<<"discount="<<discounted_cost;
           cout<<"total="<<sales_tax<<endl;
        }
   }
}


