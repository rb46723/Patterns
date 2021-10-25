#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()

{ int gd=DETECT,gmode,i,pts[]={5,400,50,300,90,340,5,400};
  initgraph(&gd,&gmode,"C:\\TURBOC3\\BGI");
  outtext("Dimensions of display : ");
  gotoxy(25,1);
  printf("%d x %d",getmaxx(),getmaxy());
  outtextxy(1,35,"Designs made by setfillstyle(), setcolor(), floodfill() and ...");
  outtextxy(1,70,"i) circle() :-");
  for(i=0;i<13;i++)
  { setfillstyle(13-i,i);
    setcolor(i);
    circle(i*50,120,30);
    floodfill(i*50,120,i);
    delay(250);
  }
  setcolor(15);
  outtextxy(1,180,"ii) fillellipse() :-");
  for(i=0;i<13;i++)
  { setfillstyle(i,15-i);
    setcolor(i);
    fillellipse(i*50,230,35,25+i*2);
    delay(200);
  }
  setcolor(15);
  outtextxy(1,280,"iii) fillpoly :-");
  for(i=0;i<12;i++)
  { setfillstyle(15-i,i+1);
    setcolor(13-i);
    fillpoly(4,pts);
    pts[6]=pts[0]=pts[0]+50;
    pts[2]=pts[2]+50;
    pts[4]=pts[4]+50;
    delay(150);
  }
  setcolor(15);
  outtextxy(1,420,"Press any key to goto next slide...");
  getch();
  cleardevice();
  settextstyle(1,0,1);
  for(i=0;i<10;i++)
  { setbkcolor(i);
    outtextxy(100,175,"Changing backgroud color using setbkcolor()");
    delay(700);
  }
  setbkcolor(4);
  gotoxy(48,15);
  outtextxy(190,217,"Color code of text : ");
  printf("%d",getcolor());
  outtextxy(20,400,"Press any key to goto next slide...");
  getch();
  cleardevice();
  setbkcolor(0);
  setcolor(1);
  setlinestyle(0,0,3);
  line(1,10,getmaxx(),10);
  settextstyle(0,0,2);
  outtextxy(20,20,"Font Styles :-");
  settextstyle(0,0,2);
  outtextxy(360,20,"Line Styles :-");
  settextstyle(0,1,2);
  outtextxy(370,58,"5 Line Styles");
  setlinestyle(0,0,3);
  line(1,45,getmaxx(),45);
  setlinestyle(0,0,1);
  line(340,10,340,275);
  line(380,45,380,275);
  line(500,275,500,420);
  line(340,275,getmaxx(),275);
  line(1,420,getmaxx(),420);
  for(i=0;i<11;i++)
  { setcolor(i+1);
    settextstyle(i,0,1);
    outtextxy(20,65+30*i,"Font styled using settextstyle()");
    delay(250);
  }
  for(i=0;i<5;i++)
  { setcolor(4);
    if(i<4)
    { setlinestyle(i,0,3);
      line(420+i*40,70,420+i*40,260);
    }
    else
    { setlinestyle(i,1,3);
      line(420+i*40,70,420+i*40,260);
    }
    delay(250);
  }
  settextstyle(0,0,1);
  outtextxy(520,310,"Press any");
  outtextxy(520,340,"key to");
  outtextxy(520,370,"Exit...");
  getch();
  closegraph();

{ int pts[]={320,150,400,250,250,350,320,150}; //Points for drawpoly
  int gd=DETECT,gmode,color,maxx,maxy; //Variable declaration
  initgraph(&gd,&gmode,"C:\\TURBOC3\\BGI"); //Initializing graphics
  maxx=getmaxx(); //Getting length of the screen
  maxy=getmaxy(); //Getting breadth of the screen
  printf("\nDimensions of the canvas is %d X %d .",maxx,maxy);
  printf("\n\nDrawing a circle :-");
  circle(100,130,50); //Drawing the circle at (100,100) of radius 50 pixels
  putpixel(100,130,GREEN); //Marking centre of circle white
  color=getpixel(100,130); //Getting the color of the pixel at (100,100)
  printf("\n\n\n\n\n\n\n\n\ngetpixel(100,130) = %d",color);
  line(0,220,maxx,220); //Horizontal line
  line(320,45,320,maxy-80); //Verticle line
  printf("\n\n\nDrawing a line :-");
  line(30,280,220,380); //Drawing a line
  gotoxy(42,4); //Placing cursor
  printf("Drawing a line usng 'lineto' :-");
  moveto(540,85); //Moving to the location
  lineto(350,180); //Drawing a line fron cursor location to (350,180)
  gotoxy(42,16); //Putting cursor on the location
  printf("Drawing a Arc :-");
  arc(400,400,15,120,100); //Drawing a arc
  gotoxy(1,25); //Putting cursor on the location
  printf("\n\nPress any key to goto next screen...");
  getch(); //Pause to get user input
  cleardevice(); //Clearing screen
  line(0,220,maxx,220); //Horizontal line
  line(320,30,320,maxy-80); //Vertical line
  gotoxy(1,3); //Placing cursor on new location
  printf("Drawing a Pieslice :-");
  pieslice(100,200,20,120,120); //Drawing a Pieslice
  gotoxy(42,3); //Placing cursor on new location
  printf("Drawing a Ellipse :-");
  ellipse(450,130,0,300,100,50); //Drawing a Ellipse
  gotoxy(1,16); //Placing cursor on new location
  printf("Drawing a Sector :-");
  sector(75,375,15,60,200,100); //Drawing a Sector
  gotoxy(42,16); //Placing cursor on new location
  printf("Drawing a Rectangle :-");
  rectangle(360,280,540,380); //Drawing a rectangle
  gotoxy(1,25); //Placing cursor on new location
  printf("\n\nPress any key to goto next screen...");
  getch(); //Pause to get user input
  cleardevice(); //Clearing screen
  gotoxy(1,6); //Placing cursor on a new location
  printf("Drawing a Polygon :-");
  drawpoly(4,pts); //Draw a polygon
  gotoxy(1,25); //Placing cursor on a new location
  printf("\n\nPress any key to End Program ...");
  getch(); //Pause to get the user input
  closegraph(); //Closing graphics mode

}
