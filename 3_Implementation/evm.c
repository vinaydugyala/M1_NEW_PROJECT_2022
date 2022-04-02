void boundry()
{
   setcolor(1+random(14));
   rectangle(0,0,635,475);
   setcolor(1+random(14));
   rectangle(3,3,632,472);
}
void welcome()
{ randomize();
  settextstyle(8,0,4);
  setcolor(1+random(14));
  outtextxy(200,100,"WELCOME");
  delay(800);
  setcolor(1+random(14));
  outtextxy(250,160,"TO");
  delay(800);
  setcolor(1+random(14));
  outtextxy(50,220,"ELECTRONIC VOTING SYSTEM");
  delay(800);
  while(!kbhit())
  {  setcolor(1+random(14));
     outtextxy(50,400,"Press any key to continue.....");
     delay(500);
     setcolor(BLACK);
     outtextxy(50,400,"Press any key to continue.....");
     delay(500);
  }
 
 
}
 
void format()
{   setcolor(6);
    rectangle( 90,30,400,380);
    rectangle( 87,27,403,383);
    settextstyle(0,0,5);
    outtextxy(140,40,"E V M");
    line(90,80,400,80);
    settextstyle(8,0,2);
    outtextxy(100,100,"Krishna");
    rectangle(95,100,250,130);
    arc(290,115,90,270,10);
    arc(370,115,270,90,10);
    line(290,105,370,105);
    line(290,125,370,125);
 
    outtextxy(100,150,"Shekhar");
    rectangle(95,150,250,180);
    arc(290,165,90,270,10);
    arc(370,165,270,90,10);
    line(290,155,370,155);
    line(290,175,370,175);
 
    outtextxy(100,200,"Parmila");
    rectangle(95,200,250,230);
    arc(290,215,90,270,10);
    arc(370,215,270,90,10);
    line(290,205,370,205);
    line(290,225,370,225);
    outtextxy(100,250,"Hackentio");
    rectangle(95,250,250,280);
    arc(290,265,90,270,10);
    arc(370,265,270,90,10);
    line(290,255,370,255);
    line(290,275,370,275);
 
    outtextxy(100,300,"Subash");
    rectangle(95,300,250,330);
    arc(290,315,90,270,10);
    arc(370,315,270,90,10);
    line(290,305,370,305);
    line(290,325,370,325);
 
    rectangle(475,250,580,280);
    outtextxy(480,250,"RESULTS");
 
    outtextxy(50,400,"Vinay");
}
