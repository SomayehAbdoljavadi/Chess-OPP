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



	   int m=0,x=0,y=0,n=0;
	   int side1;
	   int side2;

	   for(int i=0;i<8;i++)
	     for(int j=0;j<8;j++)
	       ch[i][j]='a ';

	   for( i=0;i<8;i++)
	     ch[1][i]='b';

	   for( i=0;i<8;i++)
	     ch[6][i]='w';

	     ch[3][7]='k';
	     ch[5][7]='k';
	     ch[4][5]='k';
	     ch[7][7]='k';
	     ch[2][0]='k';
	     ch[7][0]='k';
	     ch[5][3]='n';
	     x=5;
	     y=3;


	   for( i=0;i<8;i++)
	     {
	       for(j=0;j<8;j++)
		 cout<<ch[i][j]<< "  ";
	       cout<<endl;
	     }
	   int sc=0;
	   int a=1;
	   while(a!=0)
	   {
	   cout<<endl<<"enter side(d=0,u=1,r=2,l=3) for move knight:"<<endl;
	     cin>>side1;
	   switch(side1)
	     {
	       case(1):
		 cout<<endl<<"enter side(r=1,l=0) for move knight:"<<endl;
		   cin>>side2;



		    if (side2==1)
		     {
		       ch[x-2][y+1]=ch[x][y];
		       x=x-2;
		       if (x<0) x=x*(-1);
		       y=y+1;
		       if (y<0) y=y*(-1);
		     }
		   else
		     if (side2==0)
		     {
		       ch[x-2][y-1]=ch[x][y];
		       x=x-2;
		       if (x<0) x=x*(-1);
		       y=y-1;
		       if (y<0) y=y*(-1);
		     }

	       break;

	       case(2):
		 cout<<endl<<"enter side(u=1,d=0) for move knight:"<<endl;
		   cin>>side2;

		    if (side2==1)
		     {
		       ch[x-1][y+2]=ch[x][y];
		       x=x-1;
		       if (x<0) x=x*(-1);
		       y=y+2;
		       if (y<0) y=y*(-1);
		     }
		   else
		     if (side2==0)
		     {
		       ch[x+1][y+2]=ch[x][y];
		       x=x+1;
		       if (x<0) x=x*(-1);
		       y=y+2;
		       if (y<0) y=y*(-1);
		     }

	       break;



	       case(3):
		 cout<<endl<<"enter side(u=1,d=0) for move knight:"<<endl;
		   cin>>side2;

		    if (side2==1)
		     {
		       ch[x-1][y-2]=ch[x][y];
		       x=x-1;
		       if (x<0) x=x*(-1);
		       y=y-2;
		       if (y<0) y=y*(-1);
		     }
		   else
		     if (side2==0)
		     {
		       ch[x+1][y-2]=ch[x][y];
		       x=x+1;
		       if (x<0) x=x*(-1);
		       y=y-2;
		       if (y<0) y=y*(-1);
		     }

	       break;

	       case(0):
		 cout<<endl<<"enter side(r=1,l=0) for move knight:"<<endl;
		   cin>>side2;

		    if (side2==1)
		     {
		       ch[x+2][y+1]=ch[x][y];
		       x=x+2;
		       if (x<0) x=x*(-1);
		       y=y+1;
		       if (y<0) y=y*(-1);
		     }
		   else
		     if (side2==0)
		     {
		       ch[x+2][y-1]=ch[x][y];
		       x=x+2;
		       if (x<0) x=x*(-1);
		       y=y-1;
		       if (y<0) y=y*(-1);
		     }

	       break;



	     }



	       if((ch[x-2][y+1]=='k')||(ch[x-2][y-1]=='k')||(ch[x-1][y+2]=='k')||(ch[x+1][y+2]=='k')||(ch[x-1][y-2]=='k')||(ch[x+1][y-2]=='k')||(ch[x+2][y+1]=='k')||(ch[x+2][y-1]=='k'))

		 if (sc==1)
		   {
		   //	cleareb();
		      cout<<endl<<"**chech belack**" ;
		      //kishb=1;
		   }
	       if (sc==0)
		  {
		    //	cleareb();
		   cout<<endl<<"**chech white**" ;
		    //kishw=1;
		  }

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

