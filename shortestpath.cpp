/*
 * shortest path using Floyd-Warshall Algorithm
 */
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;


pair<int,string> p1(0,"Delhi");
pair<int,string> p2(1,"Mumbai");
pair<int,string> p3(2,"Lucknow");
pair<int,string> p4(3,"Jaipur");
pair<int,string> p5(4,"Chennai");
pair<int,string> p6(5,"Hyderabad");
pair<int,string> p7(6,"Bhopal");
pair<int,string> p8(7,"Banglore");
pair<int,string> p9(8,"Goa");



void floyds(int c[][9])
{
    int i, j, k , pc1 , pc2 , choice , f=0;
    int b[9][9];

    for(i = 0 ; i < 9 ; i++)
    {
        for(j = 0 ; j < 9 ; j++)
        {
            b[i][j]=c[i][j];
        }
    }

    for (k = 0; k < 9; k++)
    {
        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 9; j++)
            {
                if ((b[i][k] * b[k][j] != 0) && (i != j))
                {
                    if ((b[i][k] + b[k][j] < b[i][j]) || (b[i][j] == 0))
                    {
                        b[i][j] = b[i][k] + b[k][j];
                    }
                }
            }
        }
    }

    cout<<"Choose any of the following:- \n1.Complete structure of shortest path \n2.Find shortest path between two particular places\nEnter Your Choice:";
    cin>>choice;
    switch(choice)
    {
    case 1:
        {

    for (i = 0; i < 9; i++)
    {
        cout<<"\nMinimum Cost With Respect to Node:";
          if(i==p1.first)
        {
            cout<<p1.second<<endl;
        }
    else if(i==p2.first)
        {
            cout<<p2.second<<endl;
        }
      else  if(i==p3.first)
        {
            cout<<p3.second<<endl;
        }
        else if(i==p4.first)
        {
                cout<<p4.second<<endl;
        }

        else if(i==p5.first)
        {
                cout<<p5.second<<endl;
        }
        else if(i==p6.first)
        {
                cout<<p6.second<<endl;
        }
        else if(i==p7.first)
        {
                cout<<p7.second<<endl;
        }
        else if(i==p8.first)
        {
                cout<<p8.second<<endl;
        }
        else if(i==p9.first)
        {
                cout<<p9.second<<endl;
        }





        for (j = 0; j < 9; j++)
        {
            cout<<b[i][j]<<"\t";
        }



    }
    break;

    }

    case 2:
    {

        cout<<"\nPlaces with respective codes are as follows\n";
        cout<<"\n0: Delhi";
        cout<<"\n1: Mumbai";
        cout<<"\n2: Lucknow";
        cout<<"\n3: Jaipur";
        cout<<"\n4: Chennai";
        cout<<"\n5: Hyderabad";
        cout<<"\n6: Bhopal";
        cout<<"\n7: Banglore";
        cout<<"\n8: Goa";
        cout<<"\nEnter the source:";
        cin>>pc1;
        cout<<"\nEnter the destination:";
        cin>>pc2;

        cout<<"Shortest path= "<<b[pc1][pc2];
        break;
    }
    default:
       break;
}
}
int main()
{
    int c[9][9]={{0,10,8,6,0,0,0,0,0},
                 {0,0,0,0,5,0,0,0,0},
                 {0,8,0,0,0,0,9,0,0},
                 {0,0,7,0,0,0,5,0,0},
                 {0,0,3,0,0,2,0,0,0},
                 {0,0,1,0,0,0,0,5,0},
                 {0,0,0,0,0,9,0,8,9},
                 {0,0,0,0,6,0,0,0,7},
                 {0,0,0,0,0,6,0,0,0},
    };

    floyds(c);
    cout<<endl;
    cout<<endl;
    cout<<endl;
     cout<<"Main Menu:(press any key)";
    getch();
    system("cls");
    system("ds.exe");
return 0;
}
