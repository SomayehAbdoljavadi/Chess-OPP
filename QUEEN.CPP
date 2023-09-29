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
	     ch[5][3]='n';
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
	       //	outtextxy(345,10,"enter number (1-7)");
		 // gotoxy(50,3);
		  cout<<endl<<"enter number (1-7)"<<endl;
		   cin>>m;

		  while((m<1)||(m>7))
		   {
		    //cleareb();
		     //clearnb1();
		    //outtextxy(20,400,"enter number (1-7)");
		    //outtextxy(345,10,"enter number (1-7)");
		  //  gotoxy(50,3);
		      cout<<endl<<"enter number (1-7)"<<endl;
		    cin>>m;

		   }
		//   cleareb();



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

		   ch[x+m][y]=ch[x][y];
		    x=x+m;
		    if (x<0) x=x*(-1);
		     y=y;
		     if (y<0) y=y*(-1);

	       break;

	       case(1):
		     ch[x-m][y]=ch[x][y];
		     x=x-m;
		     if (x<0) x=x*(-1);
		     y=y;
		     if (y<0) y=y*(-1);
	       break;

	       case(2):
		    ch[x][y+m]=ch[x][y];
		    x=x;
		    if (x<0) x=x*(-1);
		     y=y+m;
		     if (y<0) y=y*(-1);

	       break;



	       case(3):

		     ch[x][y-m]=ch[x][y];
		     x=x;
		     if (x<0) x=x*(-1);
		     y=y-m;
		     if (y<0) y=y*(-1);

	       break;

	       case(4):
		    ch[x-m][y+m]=ch[x][y];
		    x=x-m;
		    if (x<0) x=x*(-1);
		     y=y+m;
		     if (y<0) y=y*(-1);

	       break;

	       case(5):

		   ch[x+m][y+m]=ch[x][y];
		    x=x+m;
		    if (x<0) x=x*(-1);
		     y=y+m;
		     if (y<0) y=y*(-1);

	       break;


	       case(6):
		     ch[x-m][y-m]=ch[x][y];
		     x=x-m;
		     if (x<0) x=x*(-1);
		     y=y-m;
		     if (y<0) y=y*(-1);
	       break;



	       case(7):

		     ch[x+m][y-m]=ch[x][y];
		     x=x+m;
		     if (x<0) x=x*(-1);
		     y=y-m;
		     if (y<0) y=y*(-1);

	       break;




	     }

		 for(i=y;i<=7;i++)
		  if (ch[x][i]=='k')
		     {
		     if((x<0)||(y<0)||(x>7)||(y>7))
		      break;

			 if(sc==1)
			 {
			      //cleareb();
			      cout<<endl<<"** chech belack **"<<endl;
			    // outtextxy(20,400,"** chech belack **");
			  //   kishb=1;
			  }

		       if(sc==0)
		       {

			      //cleareb();
		       cout<<endl<<"** chech while **"<<endl;
			 //outtextxy(20,400,"** chech white **");
			// kishw=1;
		       }
		     }
		 for(i=y;i>=0;i--)
		  if (ch[x][i]=='k')
		     {

			 if((x<0)||(y<0)||(x>7)||(y>7))
			 break;
			 if(sc==1)
			 {
			      //cleareb();
				  cout<<endl<<"** chech belack **"<<endl;
			     //outtextxy(20,400,"** chech belack **");
			   //  kishb=1;
			  }

		       if(sc==0)
		       {
			      //cleareb();
			    cout<<endl<<"** chech white **"<<endl;
			 //outtextxy(20,400,"** chech white **");
			 //kishw=1;
		       }
		     }

		 for(i=x;i<=7;i++)
		  if (ch[i][y]=='k')
		     {

			 if((x<0)||(y<0)||(x>7)||(y>7))
			 break;
			 if(sc==1)
			 {
			      //cleareb();
				  cout<<endl<<"** chech belack **"<<endl;
			    // outtextxy(20,400,"** chech belack **");
			   //  kishb=1;
			  }

		       if(sc==0)
		       {
			      //cleareb();
				  cout<<endl<<"** chech white **"<<endl;
//			 outtextxy(20,400,"** chech white **");
			 //kishw=1;
		       }
		     }

		 for(i=x;i>=0;i--)
		  if (ch[i][y]=='k')
		     {
			 if((x<0)||(y<0)||(x>7)||(y>7))
			 break;
			 if(sc==1)
			 {
			      //cleareb();
				  cout<<endl<<"** chech belack **"<<endl;
			     //outtextxy(20,400,"** chech belack **");
			     //kishb=1;
			  }

		       if(sc==0)
		       {
			 //cleareb();
			     cout<<endl<<"** chech white **"<<endl;
			 //outtextxy(20,400,"** chech white **");
			 //kishw=1;
		       }

		     }


		for(i=1;i<=7;i++)

		  if (ch[x-i][y-i]=='k')

		  {
		     if((x<0)||(y<0)||(x>7)||(y>7))
		      break;
			 if(sc==1)
			 {
			      //cleareb();
			      cout<<endl<<"** chech belack **"<<endl;

			    // outtextxy(20,400,"** chech belack **");

			  //   kishb=1;
			  }

		       if(sc==0)
		       {

			      //cleareb();
		       cout<<endl<<"** chech while **"<<endl;

			 //outtextxy(20,400,"** chech white **");
					// kishw=1;
		       }
		     }

		 for(i=1;i<=7;i++)
		  if (ch[x+i][y+i]=='k')
		     {

			 if((x<0)||(y<0)||(x>7)||(y>7))
			 break;
			 if(sc==1)
			 {
			      //cleareb();
				  cout<<endl<<"** chech belack **"<<endl;

			     //outtextxy(20,400,"** chech belack **");
					   //  kishb=1;
			  }

		       if(sc==0)
		       {
			      //cleareb();
			    cout<<endl<<"** chech white **"<<endl;

			 //outtextxy(20,400,"** chech white **");
					 //kishw=1;
		       }
		     }
		 for(i=1;i<=7;i++)
		  if (ch[x-i][y+i]=='k')
		     {
			 if((x<0)||(y<0)||(x>7)||(y>7))
			 break;

			 if(sc==1)
			 {
			      //cleareb();
				  cout<<endl<<"** chech belack **"<<endl;

			    // outtextxy(20,400,"** chech belack **");

			   //  kishb=1;
			  }

		       if(sc==0)
		       {
			      //cleareb();
				  cout<<endl<<"** chech white **"<<endl;
//			 outtextxy(20,400,"** chech white **");

			 //kishw=1;
		       }
		     }
		 for(i=1;i<=7;i++)
		  if (ch[x+i][y-i]=='k')
		     {
			 if((x<0)||(y<0)||(x>7)||(y>7))
			 break;
			 if(sc==1)
			 {
			      //cleareb();
				  cout<<endl<<"** chech belack **"<<endl;
			     //outtextxy(20,400,"** chech belack **");

			     //kishb=1;
			  }

		       if(sc==0)
		       {
			 //cleareb();
			     cout<<endl<<"** chech white **"<<endl;
			 //outtextxy(20,400,"** chech white **");

			 //kishw=1;
		       }

		     }

	   //  }

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
