#include<stdio.h>
#include<graphics.h>
int main()
{
int gd,gm=DETECT,point[]={157,90,95,168,225,168,157,90};
initgraph(&gd,&gm,NULL);
floodfill(115,100,WHITE);
rectangle(110,90,135,150);

drawpoly(4,point);

fillpoly(4,point);
rectangle(107,165,215,230);

//floodfill(108,231,WHITE);


rectangle(121,190,140,200);//win

rectangle(190,185,200,228);//door


getch();
closegraph();
return 0;
}
