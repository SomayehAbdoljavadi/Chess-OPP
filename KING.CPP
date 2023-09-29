# include<iostream.h>
# include<conio.h>
# include<stdio.h>
# include<stdlib.h>
# include<string.h>
# include<graphics.h>
# include<dos.h>
void main()
	 {


/* request auto detection */
int gdriver=DETECT, gmode=VGA;
/* initialize graphics mode */
initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
cleardevice();
char ch[8][8];



	   int m=0,x=0,y=0;
	   int side1;


	   for(int i=0;i<8;i++)
	     for(int j=0;j<8;j++)
	       ch[i][j]='a ';

	   for( i=0;i<8;i++)
	     ch[1][i]='b';

	   for( i=0;i<8;i++)
	     ch[6][i]='w';

	     //ch[4][2]='k';
	     //ch[4][3]='k';
	     //ch[3][5]='k';
	     //ch[5][7]='k';
	     //ch[6][3]='k';
	     //ch[7][0]='k';
	     ch[5][3]='k';
	     x=5;
	     y=3;


	   for( i=0;i<8;i++)
	     {
	       for(j=0;j<8;j++)
		 cout<<ch[i][j]<< "  ";
	       cout<<endl;
	     }
	   int sc=1;
	   int a=1;

	   while(a!=0)
	   {


	    // outtextxy(345,50,"enter side(d=0,u=1,r=2,l=3,ur=4,dr=5,ul=6;dl=7)");
	    //gotoxy(50,5);
	       cout<<endl<<"enter side(d=0,u=1,r=2,l=3,ur=4,dr=5,ul=6;dl=7)"<<endl;

	     cin>>side1;

	    while((side1<0)||(side1>7))
	      {
			 //clearnb2();
	       //	cleareb();
	       //	outtextxy(20,400,"enter side(d=0,u=1,r=2,l=3,ur=4,dr=5,ul=6;dl=7)");
		//outtextxy(345,50,"enter side(d=0,u=1,r=2,l=3,ur=4,dr=5,ul=6;dl=7)");
		// gotoxy(50,5);
		 cout<<endl<<"enter side(d=0,u=1,r=2,l=3,ur=4,dr=5,ul=6;dl=7)"<<endl;
		cin>>side1;

	      }  //         cleareb();

	   switch(side1)

	     {

	       case(0):

		   ch[x+1][y]=ch[x][y];
		    x=x+1;
		    if (x<0) x=x*(-1);
		     y=y;
		     if (y<0) y=y*(-1);

	       break;

	       case(1):
		     ch[x-1][y]=ch[x][y];
		     x=x-1;
		     if (x<0) x=x*(-1);
		     y=y;
		     if (y<0) y=y*(-1);
	       break;

	       case(2):
		    ch[x][y+1]=ch[x][y];
		    x=x;
		    if (x<0) x=x*(-1);
		     y=y+1;
		     if (y<0) y=y*(-1);

	       break;



	       case(3):

		     ch[x][y-1]=ch[x][y];
		     x=x;
		     if (x<0) x=x*(-1);
		     y=y-1;
		     if (y<0) y=y*(-1);

	       break;

	       case(4):
		    ch[x-1][y+1]=ch[x][y];
		    x=x-1;
		    if (x<0) x=x*(-1);
		     y=y+1;
		     if (y<0) y=y*(-1);

	       break;

	       case(5):

		   ch[x+1][y+1]=ch[x][y];
		    x=x+1;
		    if (x<0) x=x*(-1);
		     y=y+1;
		     if (y<0) y=y*(-1);

	       break;


	       case(6):
		     ch[x-1][y-1]=ch[x][y];
		     x=x-1;
		     if (x<0) x=x*(-1);
		     y=y-1;
		     if (y<0) y=y*(-1);
	       break;



	       case(7):

		     ch[x+1][y-1]=ch[x][y];
		     x=x+1;
		     if (x<0) x=x*(-1);
		     y=y-1;
		     if (y<0) y=y*(-1);

	       break;




	     }


	     gotoxy(20,300);
	     cout<<endl<<x<<"  "<<y;


	   cout<<endl<<"_____________" <<endl;
	   for( i=0;i<8;i++)
	     {
	       for(j=0;j<8;j++)
		 cout<<ch[i][j]<< "  ";
	       cout<<endl;
	     }
	     cout<<endl<<"a" ;
	     cin>>a;
	   }

getch();

	}

