void graph()
{   outtextxy(200,100,"RESULTS(in % votes)");
    int candidate1=((vote1*100)/(vote1+vote2+vote3+vote4+vote5));
    int candidate2=((vote2*100)/(vote1+vote2+vote3+vote4+vote5));
    int candidate3=((vote3*100)/(vote1+vote2+vote3+vote4+vote5));
    int candidate4=((vote4*100)/(vote1+vote2+vote3+vote4+vote5));
    int candidate5=((vote5*100)/(vote1+vote2+vote3+vote4+vote5));
    setcolor(2);
    rectangle(100,300,130,300-candidate1);outtextxy(100,300,"Krish");
    rectangle(200,300,230,300-candidate2);outtextxy(200,300,"Shekh");
    rectangle(300,300,330,300-candidate3);outtextxy(300,300,"Prami");
    rectangle(400,300,430,300-candidate4);outtextxy(400,300,"Hacke");
    rectangle(500,300,530,300-candidate5);outtextxy(500,300,"Subas");
 
    setcolor(1+random(14));
    rectangle(545,400,600,430);
    outtextxy(550,400,"EXIT");
 
    do
{
getmousepos(&button,&x,&y);
 if((button&1)==1&&x>545&&x<600&&y>400&&y<430)
{   break;}
}               // END OF DO
while(1);
 
 
}
initmouse()
{
i.x.ax=0;
int86(0x33,&i,&o);
return(o.x.ax);
}