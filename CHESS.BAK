# include<iostream.h>
# include<conio.h>
# include<stdio.h>
# include<stdlib.h>
# include<string.h>
# include<graphics.h>
# include<dos.h>
int kishb=0,kishw=0;
int ch[8][8];
int t=1;
//\/\/\/\/\/\/\/\/\/\/\/\/\/\/\CLASS BORD/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\

class chessbord
{
   private:

       int bx1,by1,bx2,by2;
       int rx1,ry1,rx2,ry2;


   public:

//       chessbord();
       void printbord();
       void printch();

};

/*chessbord::chessbord()
	 {

	   this->bx1=10;
	   this->by1=10;
	   this->bx2=50;
	   this->by2=50;

	   this->rx1=50;
	   this->ry1=10;
	   this->rx2=91;
	   this->ry2=50;

	 }
*/
void chessbord::printbord()
	 {
	   setcolor(15);

	   this->bx1=10;
	   this->by1=10;
	   this->bx2=50;
	   this->by2=50;

	   this->rx1=50;
	   this->ry1=10;
	   this->rx2=91;
	   this->ry2=50;

	   setfillstyle(1,0);
	   bar(10,10,335,330);


	   for(int j=1;j<=8;j++)
	     {

	       for(int i=1;i<=4;i++)
		 {
		   setfillstyle(1,15);
		   bar(bx1,by1,bx2,by2);
		   rectangle(rx1,ry1,rx2,ry2);

		   bx1=bx1+81;
		   bx2=bx2+81;
		   rx2=rx2+81;
		 }

	       by1=by1+40;
	       by2=by2+40;
	       ry1=ry1+40;
	       ry2=ry2+40;
	       if (!(j%2))
		 {
		   bx1=10;
		   bx2=51;
		   rx1=51;
		   rx2=91;
		 }
	       else
		 if (j%2)
		   {
		     bx1=51;
		     bx2=91;
		     rx1=10;
		     rx2=51;
		   }
	     }

			 }
void chessbord::printch()
{

setcolor(8);
int x=17,y=25;

for(int i=0;i<=7;i++)
   {
      for(int j=0;j<=7;j++)
	 {
		  switch(ch[i][j])
		    {
			case(10):
			   outtextxy(x,y,"sw1");
			   x=x+41;

			break;

			case(11):
			   outtextxy(x,y,"sw2");
			   x=x+41;

			break;



			case(12):
			   outtextxy(x,y,"sw3");
			   x=x+41;

			break;



			case(13):
			   outtextxy(x,y,"sw4");
			   x=x+41;

			break;


			case(14):
			   outtextxy(x,y,"sw5");
			   x=x+41;

			break;


			case(15):
			   outtextxy(x,y,"sw6");
			   x=x+41;

			break;


			case(16):
			   outtextxy(x,y,"sw7");
			   x=x+41;

			break;


			case(17):
			   outtextxy(x,y,"sw8");
			   x=x+41;

			break;



			case(20):
			   outtextxy(x,y,"cw1");
			   x=x+41;

			break;

			case(21):
			   outtextxy(x,y,"nw1");
			   x=x+41;

			break;

			case(22):
			   outtextxy(x,y,"bw1");
			   x=x+41;

			break;

			case(23):
			   outtextxy(x,y,"qw");
			   x=x+41;

			break;

			case(24):
			   outtextxy(x,y,"kw");
			   x=x+41;

			break;

			case(25):
			   outtextxy(x,y,"bw2");
			   x=x+41;

			break;

			case(26):
			   outtextxy(x,y,"nw2");
			   x=x+41;

			break;

			case(27):
			   outtextxy(x,y,"cw2");
			   x=x+41;

			break;



		       case(30):
			   outtextxy(x,y,"sb1");
			   x=x+41;

			break;

			case(31):
			   outtextxy(x,y,"sb2");
			   x=x+41;

			break;



			case(32):
			   outtextxy(x,y,"sb3");
			   x=x+41;

			break;



			case(33):
			   outtextxy(x,y,"sb4");
			   x=x+41;

			break;


			case(34):
			   outtextxy(x,y,"sb5");
			   x=x+41;

			break;


			case(35):
			   outtextxy(x,y,"sb6");
			   x=x+41;

			break;


			case(36):
			   outtextxy(x,y,"sb7");
			   x=x+41;

			break;


			case(37):
			   outtextxy(x,y,"sb8");
			   x=x+41;

			break;



			case(40):
			   outtextxy(x,y,"cb1");
			   x=x+41;

			break;

			case(41):
			   outtextxy(x,y,"nb1");
			   x=x+41;

			break;

			case(42):
			   outtextxy(x,y,"bb1");
			   x=x+41;

			break;

			case(43):
			   outtextxy(x,y,"qb");
			   x=x+41;

			break;

			case(44):
			   outtextxy(x,y,"kb");
			   x=x+41;

			break;

			case(45):
			   outtextxy(x,y,"bb2");
			   x=x+41;

			break;

			case(46):
			   outtextxy(x,y,"nb2");
			   x=x+41;

			break;

			case(47):
			   outtextxy(x,y,"cb2");
			   x=x+41;

			break;

			case(55):
			   outtextxy(x,y,"   ");
			   x=x+41;

			break;



		   }

	 }
      y=y+40;
      x=17;
   }

}
//\/\/\/\/\/\/\/\/\/\/\/\/\/\/\CHESS/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/
class geraphic
  {
//    protected:
//	 int ch[8][8];
     public:
//	geraphic();
	void clearbk()const;
	void cleareb()const;
	void clearnb1()const;
	void clearnb2()const;
	void clearna1()const;
	void clearna2()const;


    };
/*geraphic::geraphic()
   {
     for(int i=1;i<=8;i++)
	for(int j=1;j<=8;j++)
	   this->ch[i][j]=0;
   } */
void geraphic::clearbk()const
{

setfillstyle(1,9);
bar(340,5,650,550);
bar(1,335,400,550);

}

void geraphic::cleareb()const
{
outtextxy(70,350," ** ERRORS BOX **");
setfillstyle(1,4);
bar(5,370,340,470);
}

void geraphic::clearnb1()const
{

setfillstyle(1,9);
bar(340,20,650,47);
}

void geraphic::clearnb2()const
{

setfillstyle(1,9);
bar(340,60,650,100);

}

void geraphic::clearna1()const
{
setfillstyle(1,9);
bar(340,300,650,330);
}

void geraphic::clearna2()const
{

setfillstyle(1,9);
bar(400,325,650,370);
}
//\/\/\/\/\/\/\/\/\/\/\/\/\/\/\SOLDIER/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/
class soldier:public geraphic
{
   private:
       int x,y,sc;

   public:
       soldier(int,int,int);
       void move();
//       int getx()const;
//       int gety()const;

};

soldier::soldier(int x,int y,int sc)
	 {
	   this->x=x;
	   this->y=y;
	   this->sc=sc;
//	   clearbk();
//	   cleareb();
//	   clearnb1();
//	   clearnb2();
	 }

void soldier::move()
	 {

//	   this->x=x;
//	   this->y=y;
//	   this->sc=sc;
	   int m=0;
	   int side;
	   int xp=0,yp=0;

	       clearbk();
	       clearnb1();
	       cleareb();
	     outtextxy(345,10,"enter side(u=1,r=2,l=3,)");
	     gotoxy(50,3);
	     cin>>side;
	     while((side<1)||(side>3))
	     {

	       clearnb1();
	       cleareb();
	      outtextxy(20,400,"enter side(u=1,r=2,l=3)");
	      outtextxy(345,10,"enter side(u=1,r=2,l=3,)");
	      gotoxy(50,3);
	      cin>>side;

	     }    cleareb();



	   if (side==1)
	     {
		   clearnb2();
		     cleareb();
		outtextxy(345,50,"enter number (1-2)");
		 gotoxy(50,5);
		 cin>>m;

	       while((m>2)||(m<=0))
		 {
		    clearnb2();
		     cleareb();
		    outtextxy(20,400,"enter number (1-2)");
		    outtextxy(345,50,"enter number (1-2)");
		     gotoxy(50,5);
		     cin>>m;
		 }
		  cleareb();
	     }

	     xp=x;
	     yp=y;
	   switch(side)
	     {
	       case(1):      //up
		 if (sc==0)
		   {
		     ch[x+m][y]=ch[x][y];
		     x=x+m;
		     y=y;
		     ch[xp][yp]=55;
		   }
		 else
		   if (sc==1)
		     {
		       ch[x-m][y]=ch[x][y];
		       x=x-m;
		       y=y;
		       ch[xp][yp]=55;
		     }
	       break;

	       case(2):     //right
		 if (sc==0)
		   {
		     if (ch[x+1][y+1]!=55)
		       {
			 ch[x+1][y+1]=ch[x][y];
			 x=x+1;
			 y=y+1;
		       ch[xp][yp]=55;
		       }
		   }
		 else
		   if (sc==1)
		     {
		       if (ch[x-1][y+1]!=55)
			 {
			   ch[x-1][y+1]=ch[x][y];
			   x=x-1;
			   y=y+1;
		       ch[xp][yp]=55;
			 }
		     }
	       break;

	       case(3):
		 if (sc==0)
		   {
		     if(ch[x+1][y-1]!=55)
		       {
			 ch[x+1][y-1]=ch[x][y];
			 x=x+1;
			 y=y-1;
		       ch[xp][yp]=55;
		       }

		   }

		 else
		   if (sc==1)
		     {
		       if(ch[x-1][y-1]!=55)
			 {
			   ch[x-1][y-1]=ch[x][y];
			   x=x-1;
			   y=y-1;
		       ch[xp][yp]=55;
			 }

		     }
	       break;

	     }
	  if (sc==0)
	     {
	       if((ch[x+1][y]==24)||(ch[x+2][y]==24)||(ch[x+1][y+1]==24)||(ch[x+1][y-1]==24))
		 {

		     cleareb();
		    outtextxy(20,400,"** check white **");
		   kishw=1;
		 }
	     }

	   if (sc==1)
	     {
	       if((ch[x-1][y]==44)||(ch[x-2][y]==44)||(ch[x-1][y+1]==44)||(ch[x-1][y-1]==44))
		 {

		    cleareb();
		    outtextxy(20,400,"** check belack **");
		   kishb=1;
		 }

	     }
	   if (x<0) x=x*(-1);
	   if (y<0) y=y*(-1);

	 }


/*int soldier::getx()const
     {
     return x;
     }
int soldier::gety()const
     {
     return y;
     }
*/
//\/\/\/\/\/\/\/\/\/\/\/\/\/\/\KNIGHT/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/
class knight:public geraphic
{
   private:
       int x,y,sc;

   public:
       knight(int,int,int);
       void move();


};

knight::knight(int x,int y,int sc)
	 {
	   this->x=x;
	   this->y=y;
	   this->sc=sc;
//	   clearbk();
//	   cleareb();
	 }

void knight::move()
	 {

//	   this->x=x;
//	   this->y=y;
//	   this->sc=sc;
	   int side1;
	   int side2;
	   int xp=0,yp=0;
	       clearbk();
	   clearnb1();
	       cleareb();
	    outtextxy(345,10,"enter side(d=0,u=1,r=2,l=3)");
	    gotoxy(50,3);
	     cin>>side1;

	    while((side1<0)||(side1>3))
	      {
	       clearnb1();
		cleareb();
		outtextxy(20,400,"enter side(d=0,u=1,r=2,l=3)");
		outtextxy(345,10,"enter side(d=0,u=1,r=2,l=3)");
		 gotoxy(50,3);
		cin>>side1;

	      }           cleareb();

	      xp=x;
	      yp=y;
	   switch(side1)
	     {
	       case(1):
	       clearnb2();
	       cleareb();
		  outtextxy(345,50,"enter side(r=1,l=0)");
		  gotoxy(50,5);
		   cin>>side2;

		  while((side2>1)||(side2<0))
		   {
		     clearnb2();
		    cleareb();
		    outtextxy(20,400,"enter side(r=1,l=0)");
		    outtextxy(345,50,"enter side(r=1,l=0)");
		    gotoxy(50,5);
		    cin>>side2;

		   }
		   cleareb();


		    if (side2==1)
		     {
		       ch[x-2][y+1]=ch[x][y];
		       x=x-2;
		       y=y+1;
		     }
		   else
		     if (side2==0)
		     {
		       ch[x-2][y-1]=ch[x][y];
		       x=x-2;
		       y=y-1;
		     }

	       break;

	       case(2):
	       clearnb2();
		      cleareb();

		  outtextxy(345,50,"enter side(u=1,d=0)");
		  gotoxy(50,5);
		   cin>>side2;

		   while((side2>1)||(side2<0))
		    {
		    clearnb2();
		      cleareb();
		      outtextxy(20,400,"enter side(u=1,d=0)");
		      outtextxy(345,50,"enter side(u=1,d=0)");
		      gotoxy(50,5);
		      cin>>side2;

		    }
		   cleareb();




		    if (side2==1)
		     {
		       ch[x-1][y+2]=ch[x][y];
		       x=x-1;
		       y=y+2;
		     }
		   else
		     if (side2==0)
		     {
		       ch[x+1][y+2]=ch[x][y];
		       x=x+1;
		       y=y+2;
		     }

	       break;




	       case(3):

	       clearnb2();
		      cleareb();

		  outtextxy(345,50,"enter side(u=1,d=0)");
		  gotoxy(50,5);
		   cin>>side2;

		   while((side2>1)&&(side2<0))
		    {
		    clearnb2();
		      cleareb();
		      outtextxy(20,400,"enter side(u=1,d=0)");
		      outtextxy(345,50,"enter side(u=1,d=0)");
		      gotoxy(50,5);
		      cin>>side2;

		    }
		   cleareb();



		    if (side2==1)
		     {
		       ch[x-1][y-2]=ch[x][y];
		       x=x-1;
		       y=y-2;
		     }
		   else
		     if (side2==0)
		     {
		       ch[x+1][y-2]=ch[x][y];
		       x=x+1;
		       y=y-2;
		     }

	       break;

	       case(0):

	       clearnb2();
		      cleareb();

		  outtextxy(345,50,"enter side(r=1,l=0)");
		  gotoxy(50,5);
		   cin>>side2;

		  while((side2>1)&&(side2<0))
		    {
		    clearnb2();
		      cleareb();
		      outtextxy(20,400,"enter side(r=1,l=0)");
		      outtextxy(345,50,"enter side(r=1,l=0)");
		      gotoxy(50,5);
		      cin>>side2;

		    }
		   cleareb();


		    if (side2==1)
		     {
		       ch[x+2][y+1]=ch[x][y];
		       x=x+2;
		       y=y+1;
		     }
		   else
		     if (side2==0)
		     {
		       ch[x+2][y-1]=ch[x][y];
		       x=x+2;
		       y=y-1;
		     }

	       break;



	     }
		ch[xp][yp]=55;

		  if(sc==1)
		    if((ch[x-2][y+1]==44)||(ch[x-2][y-1]==44)||(ch[x-1][y+2]==44)||(ch[x+1][y+2]==44)||(ch[x-1][y-2]==44)||(ch[x+1][y-2]==44)||(ch[x+2][y+1]==44)||(ch[x+2][y-1]==44))

		    {
			cleareb();
			outtextxy(20,400,"** check belack **");
			kishb=1;
		     }

		 if (sc==0)
		 if((ch[x-2][y+1]==24)||(ch[x-2][y-1]==24)||(ch[x-1][y+2]==24)||(ch[x+1][y+2]==24)||(ch[x-1][y-2]==24)||(ch[x+1][y-2]==24)||(ch[x+2][y+1]==24)||(ch[x+2][y-1]==24))

		    {
			cleareb();
		     outtextxy(20,400,"** check white **");
		     kishw=1;

		     }

	     if (x<0) x=x*(-1);
//	   x=this->x;
	   if (y<0) y=y*(-1);
//	   y=this->y;

	 }


//\/\/\/\/\/\/\/\/\/\/\/\/\/\/\CASTLE/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/
class castle:public geraphic
{
   private:
       int x,y,sc;

   public:
       castle(int,int,int);
       void move();


};

castle::castle(int x,int y,int sc)
	 {
	   this->x=x;
	   this->y=y;
	   this->sc=sc;
//	   clearbk();
//	   cleareb();
//	   clearnb1();
//	   clearnb2();
	 }

void castle::move()
	 {

//	   this->x=x;
//	   this->y=y;
//	   this->sc=sc;
	   int m=0;
	   int side1;
	   int xp=0,yp=0;
		       clearbk();
	   clearnb1();
		      cleareb();

			outtextxy(345,10,"enter number (1-7");
		  gotoxy(50,3);
		   cin>>m;

		  while((m<1)||(m>7))
		   {
		      clearnb1();
		      cleareb();
		      outtextxy(20,400,"enter number (1-7)");
		      outtextxy(345,10,"enter number (1-7)");
		      gotoxy(50,3);
		      cin>>m;

		   }
		  cleareb();


		   clearnb2();
		      cleareb();

	     outtextxy(345,50,"enter side(d=0,u=1,r=2,l=3)");
	    gotoxy(50,5);
	     cin>>side1;

	    while((side1<0)||(side1>3))
	      {
		  clearnb2();
		  cleareb();
		  outtextxy(20,400,"enter side(d=0,u=1,r=2,l=3)");
		  outtextxy(345,50,"enter side(d=0,u=1,r=2,l=3)");
		  gotoxy(50,5);

		cin>>side1;

	      }
	   cleareb();

	   xp=x;
	   yp=y;
	   switch(side1)
	     {
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

	       case(0):

		   ch[x+m][y]=ch[x][y];
		    x=x+m;
		    if (x<0) x=x*(-1);
		     y=y;
		     if (y<0) y=y*(-1);

	       break;



	     }
		ch[xp][yp]=55;


		for(int i=y;i<=7;i++)

		     {

			 if(sc==1)
			 if (ch[x][i]==44)
			 {
			     cleareb();
			    outtextxy(20,400,"** check belack **");
			    kishb=1;
			  }

		       if(sc==0)
		       if (ch[x][i]==24)
		       {

			    cleareb();
			    outtextxy(20,400,"** check white **");
			    kishw=1;
		       }
		     }

		 for(i=y;i>=0;i--)

		     {

			 if(sc==1)
		     if (ch[x][i]==44)
			 {
			    cleareb();
			    outtextxy(20,400,"** check belack **");
			    kishb=1;
			  }

		       if(sc==0)
			  if (ch[x][i]==24)
		       {
			    cleareb();
			    outtextxy(20,400,"** check white **");
			    kishw=1;
		       }
		     }

		 for(i=x;i<=7;i++)

		     {

			 if(sc==1)
			  if (ch[i][y]==44)
			 {
			     cleareb();
			     outtextxy(20,400,"** check belack **");
			     kishb=1;
			  }

		       if(sc==0)
			if (ch[i][y]==24)
		       {
			   cleareb();
			   outtextxy(20,400,"** check white **");
			   kishw=1;
		       }
		     }

		 for(i=x;i>=0;i--)

		     {
			 if(sc==1)
			   if (ch[i][y]==44)
			 {
			     cleareb();
			     outtextxy(20,400,"** check belack **");
			     kishb=1;
			  }

		       if(sc==0)
			 if (ch[i][y]==24)
		       {
			   cleareb();
			   outtextxy(20,400,"** check white **");
			   kishw=1;
		       }

		     }

	     }


//\/\/\/\/\/\/\/\/\/\/\/\/\/\/\BISHOP/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/
class bishop:public geraphic
{
   private:
       int x,y,sc;

   public:
       bishop(int,int,int);
       void move();


};

bishop::bishop(int x,int y,int sc)
	 {
	   this->x=x;
	   this->y=y;
	   this->sc=sc;
//	   clearbk();
//	   cleareb();
//	   clearnb1();
//	   clearnb2();
	 }

void bishop::move()
	 {

//	   this->x=x;
//	   this->y=y;
//	   this->sc=sc;
	   int m=0;
	   int side1;
	   int xp=0,yp=0;
			       clearbk();
		   clearnb1();
		      cleareb();

		outtextxy(345,10,"enter number (1-7)");
		 gotoxy(50,3);
		   cin>>m;

		  while((m<1)||(m>7))
		   {
		     cleareb();
		     clearnb1();
		     outtextxy(20,400,"enter number (1-7)");
		     outtextxy(345,10,"enter number (1-7)");
		     gotoxy(50,3);
		     cin>>m;

		   }
		     cleareb();


			   clearnb2();
		      cleareb();

	     outtextxy(345,50,"enter side(d=0,u=1,r=2,l=3)");
	    gotoxy(50,5);
	     cin>>side1;

	    while((side1<0)||(side1>3))
	      {
			clearnb2();
			cleareb();
			outtextxy(20,400,"enter side(d=0,u=1,r=2,l=3)");
			outtextxy(345,50,"enter side(d=0,u=1,r=2,l=3)");
			gotoxy(50,5);
		       cin>>side1;

	      }

	      cleareb();

	      xp=x;
	      yp=y;
	   switch(side1)
	     {
	       case(1):
		     ch[x-m][y-m]=ch[x][y];
		     x=x-m;
		     if (x<0) x=x*(-1);
		     y=y-m;
		     if (y<0) y=y*(-1);
	       break;

	       case(2):
		    ch[x-m][y+m]=ch[x][y];
		    x=x-m;
		    if (x<0) x=x*(-1);
		     y=y+m;
		     if (y<0) y=y*(-1);

	       break;



	       case(3):

		     ch[x+m][y-m]=ch[x][y];
		     x=x+m;
		     if (x<0) x=x*(-1);
		     y=y-m;
		     if (y<0) y=y*(-1);

	       break;

	       case(0):

		   ch[x+m][y+m]=ch[x][y];
		    x=x+m;
		    if (x<0) x=x*(-1);
		     y=y+m;
		     if (y<0) y=y*(-1);

	       break;



	     }
		   ch[xp][yp]=55;


		for(int i=1;i<=7;i++)


		     {

			 if(sc==1)
			   if (ch[x-i][y-i]==44)
			 {
			     cleareb();
			     outtextxy(20,400,"** chech belack **");
			     kishb=1;
			  }

		       if(sc==0)
			 if (ch[x-i][y-i]==24)
		       {

			      cleareb();
			      outtextxy(20,400,"** check white **");
			      kishw=1;
		       }
		     }

		 for(i=1;i<=7;i++)

		     {

			 if(sc==1)
			   if (ch[x+i][y+i]==44)
			 {
			      cleareb();
			      outtextxy(20,400,"** check belack **");
			      kishb=1;
			  }

		       if(sc==0)
			 if (ch[x+i][y+i]==24)
		       {
			   cleareb();
			   outtextxy(20,400,"** check white **");
			   kishw=1;
		       }
		     }
		 for(i=1;i<=7;i++)

		     {

			 if(sc==1)
			  if (ch[x-i][y+i]==44)
			 {
			      cleareb();
			      outtextxy(20,400,"** check belack **");
			      kishb=1;
			  }

		       if(sc==0)
			if (ch[x-i][y+i]==24)
		       {
			   cleareb();
			   outtextxy(20,400,"** check white **");
			   kishw=1;
		       }
		     }
		 for(i=1;i<=7;i++)

		     {
			 if(sc==1)
			  if (ch[x+i][y-i]==44)
			 {
			    cleareb();
			    outtextxy(20,400,"** check belack **");
			    kishb=1;
			  }

		       if(sc==0)
			if (ch[x+i][y-i]==24)
		       {
			    cleareb();
			    outtextxy(20,400,"** check white **");
			    kishw=1;
		       }

		     }

	    }





//\/\/\/\/\/\/\/\/\/\/\/\/\/\/\QUEEN/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/
class queen:public geraphic
{

    private:
       int x,y,sc;

   public:
       queen(int,int,int);
       void move();


};

queen::queen(int x,int y,int sc)
	 {
	   this->x=x;
	   this->y=y;
	   this->sc=sc;
//	   clearbk();
//	   cleareb();
//	   clearnb1();
//	   clearnb2();
	 }

void queen::move()
	 {

//	   this->x=x;
//	   this->y=y;
//	   this->sc=sc;
	   int m=0;
	   int side1;
	   int xp=0,yp=0;
				       clearbk();
			   clearnb1();
		      cleareb();

		outtextxy(345,10,"enter number (1-7)");
		  gotoxy(50,3);
		  cin>>m;

		  while((m<1)||(m>7))
		   {
		      cleareb();
		      clearnb1();
		      outtextxy(20,400,"enter number (1-7)");
		      outtextxy(345,10,"enter number (1-7)");
		      gotoxy(50,3);
		      cin>>m;

		   }
	      cleareb();

				   clearnb2();
		      cleareb();

	    outtextxy(345,50,"side" );
	    outtextxy(340,60,"(d=0,u=1,r=2,l=3,ur=4,dr=5,ul=6,dl=7)");
	    gotoxy(50,6);
	     cin>>side1;

	    while((side1<0)||(side1>7))
	      {
			clearnb2();
			cleareb();
			outtextxy(10,400,"side(d=0,u=1,r=2,l=3,ur=4,dr=5,ul=6,dl=7)");

			outtextxy(345,50,"side" );
			outtextxy(340,60,"(d=0,u=1,r=2,l=3,ur=4,dr=5,ul=6,dl=7)");
			gotoxy(50,6);
			cin>>side1;

	      }
		       cleareb();

		       xp=x;
		       yp=y;
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
	     ch[xp][yp]=55;

		 for(int i=y;i<=7;i++)

		     {
		     if((x<0)||(y<0)||(x>7)||(y>7))
		      break;

			 if(sc==1)
			  if (ch[x][i]==44)
			 {
			    cleareb();
			     outtextxy(20,400,"** check belack **");
			    kishb=1;
			  }

		       if(sc==0)
			if (ch[x][i]==24)
		       {

			     cleareb();
			     outtextxy(20,400,"** check white **");
			     kishw=1;
		       }
		     }
		 for(i=y;i>=0;i--)

		     {

			 if((x<0)||(y<0)||(x>7)||(y>7))
			 break;
			 if(sc==1)
			   if (ch[x][i]==44)
			 {
			       cleareb();
			       outtextxy(20,400,"** check belack **");
			       kishb=1;
			  }

		       if(sc==0)
			 if (ch[x][i]==24)
		       {
			     cleareb();
			     outtextxy(20,400,"** check white **");
			     kishw=1;
		       }
		     }

		 for(i=x;i<=7;i++)

		     {

			 if((x<0)||(y<0)||(x>7)||(y>7))
			 break;
			 if(sc==1)
			 if (ch[i][y]==44)
			 {
			     cleareb();
			     outtextxy(20,400,"** check belack **");
			     kishb=1;
			  }

		       if(sc==0)
			  if (ch[i][y]==24)
		       {
			    cleareb();
			    outtextxy(20,400,"** check white **");
			    kishw=1;
		       }
		     }

		 for(i=x;i>=0;i--)

		     {
			 if((x<0)||(y<0)||(x>7)||(y>7))
			 break;
			 if(sc==1)
			   if (ch[i][y]==44)
			 {
			      cleareb();
			      outtextxy(20,400,"** check belack **");
			      kishb=1;
			  }

		       if(sc==0)
			 if (ch[i][y]==24)
		       {
			     cleareb();
			     outtextxy(20,400,"** check white **");
			     kishw=1;
		       }

		     }


		for(i=1;i<=7;i++)



		  {
		     if((x<0)||(y<0)||(x>7)||(y>7))
		      break;

			 if(sc==1)
			  if (ch[x-i][y-i]==44)
			 {
			      cleareb();
			      outtextxy(20,400,"** check belack **");
			      kishb=1;
			  }

		       if(sc==0)
			if (ch[x-i][y-i]==24)
		       {

			      cleareb();
			      outtextxy(20,400,"** check white **");
			      kishw=1;
		       }
		     }

		 for(i=1;i<=7;i++)

		     {

			 if((x<0)||(y<0)||(x>7)||(y>7))
			 break;
			 if(sc==1)
			  if (ch[x+i][y+i]==44)
			 {
			      cleareb();
			      outtextxy(20,400,"** check belack **");
			      kishb=1;
			  }

		       if(sc==0)
			if (ch[x+i][y+i]==24)
		       {
			     cleareb();
			     outtextxy(20,400,"** check white **");
			     kishw=1;
		       }
		     }
		 for(i=1;i<=7;i++)

		     {
			 if((x<0)||(y<0)||(x>7)||(y>7))
			 break;

			 if(sc==1)
			 if (ch[x-i][y+i]==44)
			 {
			      cleareb();
			      outtextxy(20,400,"** check belack **");
			      kishb=1;
			  }

		       if(sc==0)
			  if (ch[x-i][y+i]==24)
		       {
			     cleareb();
			     outtextxy(20,400,"** check white **");
			     kishw=1;
		       }
		     }
		 for(i=1;i<=7;i++)

		     {
			 if((x<0)||(y<0)||(x>7)||(y>7))
			 break;
			 if(sc==1)
			 if (ch[x+i][y-i]==44)
			 {
			      cleareb();
			      outtextxy(20,400,"** check belack **");
			      kishb=1;
			  }

		       if(sc==0)
		       if (ch[x+i][y-i]==24)
		       {
			   cleareb();
			   outtextxy(20,400,"** check white **");
			   kishw=1;
		       }

		     }

	    }


//\/\/\/\/\/\/\/\/\/\/\/\/\/\/\KING/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/
class king:public geraphic
{

    private:
       int x,y,sc;

   public:
       king(int,int,int);
       void move();


};

king::king(int x,int y,int sc)
	 {
	   this->x=x;
	   this->y=y;
	   this->sc=sc;
//	   clearbk();
//	   cleareb();
//	   clearnb1();
//	   clearnb2();
	 }

void king::move()
	 {

//	   this->x=x;
//	   this->y=y;
//	   this->sc=sc;
	   int side1;
	   int xp=0,yp=0;
		       clearbk();
	   clearnb1();
		      cleareb();

	    outtextxy(345,50,"side" );
	    outtextxy(340,60,"(d=0,u=1,r=2,l=3,ur=4,dr=5,ul=6,dl=7)");
	    gotoxy(50,6);
	     cin>>side1;
	    while((side1<0)||(side1>7))
	      {
		    clearnb2();
		    cleareb();
		    outtextxy(345,50,"side" );
		    outtextxy(340,60,"(d=0,u=1,r=2,l=3,ur=4,dr=5,ul=6,dl=7)");
		    gotoxy(50,6);
		   cin>>side1;

	      }

	    cleareb();
	      xp=x;
	      yp=y;
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
	     ch[xp][yp]=' ' ;

	}

//\/\/\/\/\/\/\/\/\/\/\/\/\/\/\MAIN/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\

void main()
{
//   struct m
//   {
//    char n[3];
//   };
//   struct m mw[16];
//   strcpy(mw[0].n,"sw1");strcpy(mw[1].n,"sw2");strcpy(mw[2].n,"sw3");strcpy(mw[3].n,"sw4");strcpy(mw[4].n,"sw5");strcpy(mw[5].n,"sw6");strcpy(mw[6].n,"sw7");strcpy(mw[7].n,"sw8");strcpy(mw[8].n,"nw1");strcpy(mw[9].n,"nw2");strcpy(mw[10].n,"cw1");strcpy(mw[11].n,"cw2");strcpy(mw[12].n,"bw1");strcpy(mw[13].n,"bw2");strcpy(mw[14].n,"qw");strcpy(mw[15].n,"kw");
//   char mb[16][3];
//   mb[0]="sb1";mb[1]="sb2";mb[2]="sb3";mb[3]="sb4";mb[4]="sb5";mb[5]="sb6";mb[6]="sb7";mb[7]="sb8";mb[8]="nb1";mb[9]="nb2";mb[10]="cb1";mb[11]="cb2";mb[12]="bb1";mb[13]="bb2";mb[14]="qb";mb[15]="kb";
//   int sw;

//------------------------------VAR-------------------------------------------


	  for(int i=0;i<8;i++)
	     for(int j=0;j<8;j++)
	       ch[i][j]=55;

	   for( i=0;i<8;i++)
	     ch[1][i]=30+i;

	   for( i=0;i<8;i++)
	     ch[0][i]=40+i;

	   for( i=0;i<8;i++)
	     ch[6][i]=10+i;

	   for( i=0;i<8;i++)
	     ch[7][i]=20+i;

 /* request auto detection */
 int gdriver=DETECT, gmode=VGA;
 /* initialize graphics mode */
 initgraph(&gdriver, &gmode, "C:\\TC\\BGI");

 cleardevice();

 // char chess[8][8];
 chessbord bord;
 bord.printbord();
 bord.printch();

 geraphic b;
 b.clearbk();
 b.cleareb();
 b.clearnb1();
 b.clearnb2();
 b.clearna1();
 b.clearna2();


soldier sw1(6,0,1),sw2(6,1,1),sw3(6,2,1),sw4(6,3,1),sw5(6,4,1),sw6(6,5,1),sw7(6,6,1),sw8(6,7,1);
soldier sb1(1,0,0),sb2(1,1,0),sb3(1,2,0),sb4(1,3,0),sb5(1,4,0),sb6(1,5,0),sb7(1,6,0),sb8(1,7,0);
//sw1.move(2,2,1);

knight nw1(7,1,1),nw2(7,6,1);
knight nb1(0,1,0),nb2(0,6,0);
//ns1.move(2,2,1);

castle cw1(7,0,1),cw2(7,7,1);
castle cb1(0,0,0),cb2(0,7,0);
//cw1.move(2,2,1);

bishop  bw1(7,2,1),bw2(7,5,1);
bishop  bb1(0,2,0),bb2(0,5,0);
//bs1.move(2,2,1);

queen qw(7,3,1);
queen qb(0,3,0);
//qs1.move(2,2,1);

king kw(7,4,1);
king kb(0,4,0);
//ks.move(2,2,1);

int ssw1=0;
char chw[5]={" "},chb[5]={" "};
while(1)
{
 if(t%2)
  {
    b.clearbk();
    b.clearna1();
    b.clearna2();
    outtextxy(350,300,"white  enter name mohre");
    outtextxy(340,310,"sw1-sw8_nw1,nw2_cw1,cw2_bw1,bw2_qw_kw");
    gotoxy(55,22);
    cin>>chw;
    if(strcmp(chw,"exit")==0)
      exit(1);



    while((strcmp(chw,"sw1")!=0)&&(strcmp(chw,"sw2")!=0)&&(strcmp(chw,"sw3")!=0)&&(strcmp(chw,"sw4")!=0)&&(strcmp(chw,"sw5")!=00)&&(strcmp(chw,"sw6")!=0)&&(strcmp(chw,"sw7")!=0)&&(strcmp(chw,"sw8")!=0)&&(strcmp(chw,"nw1")!=0)&&(strcmp(chw,"nw2")!=0)&&(strcmp(chw,"cw1")!=0)&&(strcmp(chw,"cw2")!=0)&&(strcmp(chw,"bw1")!=0)&&(strcmp(chw,"bw2")!=0)&&(strcmp(chw,"qw")!=0)&&(strcmp(chw,"kw")!=0) )
	      {

		   b.clearbk();
		   b.clearna2();
		   b.cleareb();
		   outtextxy(350,300,"white  enter name mohre");
		   outtextxy(340,310,"sw1-sw8_nw1,nw2_cw1,cw2_bw1,bw2_qw_kw");
		   outtextxy(10,400,"enter name mohre");
		   outtextxy(10,410,"sw1-sw8_nw1,nw2_cw1,cw2_bw1,bw2_qw_kw");
		   gotoxy(55,22);
		   cin>>chw;
		   if(strcmp(chw,"exit")==0)
		      exit(1);


	      }




		  if (strcmp(chw,"sw1")==0)
			     sw1.move();
		  if (strcmp(chw,"sw2")==0)
			     sw2.move();
		  if (strcmp(chw,"sw3")==0)
			     sw3.move();
		  if (strcmp(chw,"sw4")==0)
			     sw4.move();
		  if (strcmp(chw,"sw5")==0)
			     sw5.move();
		  if (strcmp(chw,"sw6")==0)
			     sw6.move();
		  if (strcmp(chw,"sw7")==0)
			     sw7.move();
		  if (strcmp(chw,"cw1")==0)
			     cw1.move();
		  if (strcmp(chw,"cw2")==0)
			     cw2.move();
		  if (strcmp(chw,"nw1")==0)
			     nw1.move();
		  if (strcmp(chw,"nw2")==0)
			     nw2.move();
		  if (strcmp(chw,"bw1")==0)
			     bw1.move();
		  if (strcmp(chw,"bw2")==0)
			     bw2.move();
		  if (strcmp(chw,"qw")==0)
			     qw.move();
		  if (strcmp(chw,"kw")==0)
			     kw.move();

		  bord.printbord();
		  bord.printch();

  }
 if((t%2)==0)
  {
    b.clearbk();
    b.clearna1();
    b.clearna2();
    outtextxy(350,300,"Black  enter name mohre");
    outtextxy(340,310,"sb1-sb8_nb1,nb2_cb1,cb2_bb1,bb2_qb_kb");
    gotoxy(55,22);
    cin>>chb;
    if(strcmp(chb,"exit")==0)
      exit(1);



    while((strcmp(chb,"sb1")!=0)&&(strcmp(chb,"sb2")!=0)&&(strcmp(chb,"sb3")!=0)&&(strcmp(chb,"sb4")!=0)&&(strcmp(chb,"sb5")!=00)&&(strcmp(chb,"sb6")!=0)&&(strcmp(chb,"sb7")!=0)&&(strcmp(chb,"sb8")!=0)&&(strcmp(chb,"nb1")!=0)&&(strcmp(chb,"nb2")!=0)&&(strcmp(chb,"cb1")!=0)&&(strcmp(chb,"cb2")!=0)&&(strcmp(chb,"bb1")!=0)&&(strcmp(chb,"bb2")!=0)&&(strcmp(chb,"qb")!=0)&&(strcmp(chb,"kb")!=0) )
	      {

		   b.clearbk();
		   b.clearna2();
		   b.cleareb();
		   outtextxy(350,300,"Black  enter name mohre");
		   outtextxy(340,310,"sb1-sb8_nb1,nb2_cb1,cb2_bb1,bb2_qb_kb");
		   outtextxy(10,400,"enter name mohre");
		   outtextxy(10,410,"sb1-sb8_nb1,nb2_cbl1,cb2_bb1,bb2_qb_kb");
		   gotoxy(55,22);
		   cin>>chb;
		   if(strcmp(chb,"exit")==0)
		      exit(1);


	      }




		  if (strcmp(chb,"sb1")==0)
			     sb1.move();
		  if (strcmp(chb,"sb2")==0)
			     sb2.move();
		  if (strcmp(chb,"sb3")==0)
			     sb3.move();
		  if (strcmp(chb,"sb4")==0)
			     sb4.move();
		  if (strcmp(chb,"sb5")==0)
			     sb5.move();
		  if (strcmp(chb,"sb6")==0)
			     sb6.move();
		  if (strcmp(chb,"sb7")==0)
			     sb7.move();
		  if (strcmp(chb,"cb1")==0)
			     cb1.move();
		  if (strcmp(chb,"cb2")==0)
			     cb2.move();
		  if (strcmp(chb,"nb1")==0)
			     nb1.move();
		  if (strcmp(chb,"nb2")==0)
			     nb2.move();
		  if (strcmp(chb,"bb1")==0)
			     bb1.move();
		  if (strcmp(chb,"bb2")==0)
			     bb2.move();
		  if (strcmp(chb,"qb")==0)
			     qb.move();
		  if (strcmp(chb,"kb")==0)
			     kb.move();

		  bord.printbord();
		  bord.printch();

  }






t++;

}


getch();
closegraph();

}