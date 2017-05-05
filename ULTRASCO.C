#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct queue
{
 int w;
 struct queue *n;
}node1;
struct queuemeta
{
 node1 *f,*r;
}*q;

typedef struct stack
{
int top,aa[1000];
}stack1;

typedef struct node
{
 int i,j,x; //i-row no., j-col. no., x= house no. as from the txt file
 int rw,dw,lw,uw; // weights of the path
 int f,f1; // flag for letter has to be delivered or not
 int xc,yc; // x and y coordinates of the house
 int rc,dc,lc,uc,rc1,dc1,lc1,uc1; // 0 if construction not there 1 if construction there
 struct node *r,*d,*l,*u,*n;  // links of the house
 int rcc,dcc;// for cursor reached 1st time or not
}house;
struct meta
{
 house *h,*e;
}*m;


void start()
{
int gd=DETECT,gm,xx=502,yy=22,zz=598,cc=38;
initgraph(&gd,&gm,"..//BGI");
//display();
setcolor(YELLOW);
settextstyle(4,HORIZ_DIR,7);
outtextxy(20,100," POST ");
outtextxy(70,150," THE ");
outtextxy(100,200," LETTERS ");
delay(1000);
cleardevice();
setcolor(RED);
bar3d(100,300,250,310,(250-100)/4,1);
delay(200);
bar3d(100,290,250,300,(250-100)/4,1);
delay(200);
bar3d(100,280,250,290,(250-100)/4,1);
delay(200);
bar3d(100,270,250,280,(250-100)/4,1);
delay(200);
bar3d(100,260,250,270,(250-100)/4,1);
delay(200);
bar3d(100,250,250,260,(250-100)/4,1);
delay(200);
bar3d(100,240,250,250,(250-100)/4,1);
delay(200);
bar3d(100,230,250,240,(250-100)/4,1);
delay(200);
bar3d(100,220,250,230,(250-100)/4,1);
delay(200);
bar3d(100,210,250,220,(250-100)/4,1);
delay(200);
bar3d(100,200,250,210,(250-100)/4,1);
delay(200);
bar3d(100,190,250,200,(250-100)/4,1);
delay(200);
bar3d(100,180,250,190,(250-100)/4,1);
delay(200);
bar3d(100,170,250,180,(250-100)/4,1);
delay(200);
bar3d(100,160,250,170,(250-100)/4,1);
delay(200);
bar3d(100,150,250,160,(250-100)/4,1);
delay(200);
bar3d(100,140,250,150,(250-100)/4,1);
delay(200);
bar3d(60,130,210,140,(210-60)/4,1);
delay(200);
setcolor(RED);
bar3d(440,300,590,310,(590-440)/4,1);
delay(200);
bar3d(400,290,550,300,(550-400)/4,1);
delay(200);
bar3d(400,280,550,290,(550-400)/4,1);
delay(200);
bar3d(400,270,550,280,(550-400)/4,1);
delay(200);
bar3d(400,260,550,270,(550-400)/4,1);
delay(200);
bar3d(400,250,550,260,(550-400)/4,1);
delay(200);
bar3d(400,240,550,250,(550-400)/4,1);
delay(200);
bar3d(400,230,550,240,(550-400)/4,1);
delay(200);
bar3d(400,220,550,230,(550-400)/4,1);
delay(200);
bar3d(400,210,550,220,(550-400)/4,1);
delay(200);
bar3d(400,200,550,210,(550-400)/4,1);
delay(200);
bar3d(400,190,550,200,(550-400)/4,1);
delay(200);
bar3d(400,180,550,190,(550-400)/4,1);
delay(200);
bar3d(400,170,550,180,(550-400)/4,1);
delay(200);
bar3d(400,160,550,170,(550-400)/4,1);
delay(200);
bar3d(400,150,550,160,(550-400)/4,1);
delay(200);
bar3d(400,140,550,150,(550-400)/4,1);
delay(200);
bar3d(400,130,550,140,(550-400)/4,1);
delay(200);
cleardevice();
setcolor(YELLOW);
settextstyle(4,HORIZ_DIR,250);
outtextxy(220,100," S ");
delay(1000);
cleardevice();
setcolor(YELLOW);
settextstyle(4,HORIZ_DIR,250);
outtextxy(220,100," C ");
delay(1000);
cleardevice();
setcolor(YELLOW);
settextstyle(4,HORIZ_DIR,250);
outtextxy(220,100," O ");
delay(1000);
cleardevice();
setcolor(YELLOW);
settextstyle(4,HORIZ_DIR,250);
outtextxy(220,100," U ");
delay(1000);
cleardevice();
setcolor(YELLOW);
settextstyle(4,HORIZ_DIR,250);
outtextxy(220,100," T ");
delay(1000);
cleardevice();
setcolor(YELLOW);
settextstyle(4,HORIZ_DIR,250);
outtextxy(220,100," I ");
delay(1000);
cleardevice();
setcolor(YELLOW);
settextstyle(4,HORIZ_DIR,250);
outtextxy(220,100," T ");
delay(1000);
cleardevice();
setcolor(YELLOW);
settextstyle(4,HORIZ_DIR,250);
outtextxy(220,100," ! ");
delay(1000);
cleardevice();
//display();
//getch();
}

char display1()
{
char v;

int x=10,y=10,a=10,b=10,z;

setbkcolor(0);
 setcolor(CYAN);
  settextstyle(0,0,1);
  for(x=750;x>=260;x--)
    {

      rectangle(x,100,x+100,130);
      outtextxy(x+30,115,"START");
      rectangle(x,180,x+100,210);
      outtextxy(x+30,195,"HELP");
      rectangle(x,260,x+100,290);
      outtextxy(x+30,270,"EXIT");
      //rectangle(x,340,x+100,370);
      //outtextxy(x+30,355,"EXIT");
      delay(10);
      if(x>260)
      cleardevice();
    }
  for(y=10;y<=480;y=y+10)
   {
     setcolor(4);
       for(z=10;z<=260;z=z+10)
	 {
	    line(z,y,a,b);
	 }
    }
  for(y=470;y>=0;y=y-10)
     {
       setcolor(4);
	 for(z=630;z>=360;z=z-10)
	   {
	      line(z,y,630,470);
	   }
     }
 fflush(stdin);
 fflush(stdin);
 scanf("%c",&v);
 sound(400);
 delay(120);
 nosound();
 return v;
}




void help()
{
int gd=DETECT,gm,xx=502,yy=22,zz=598,cc=38,i,x=5,y=5;
//initgraph(&gd,&gm,"..//BGI ");
cleardevice();
setcolor(YELLOW);
//void help1()
 //{
 for(i=10;i<640;i=i+5)
 {
 delay(5);
 setcolor(3);
 bar(x,y,i,y+3);
 x=i;
 }
 x=635;y=5;
 for(i=10;i<480;i=i+5)
 {
 delay(5);
 setcolor(3);
 bar(x,y,x+3,i);
 y=i;
 }
 x=635;y=475;
 for(i=630;i>0;i=i-5)
 {
 delay(5);
 setcolor(3);
 bar(x,y,i,y+3);
 x=i;
 }
 x=5;y=475;
 for(i=470;i>0;i=i-5)
 {
 delay(5);
 setcolor(3);
 bar(x,y,x+3,i);
 y=i;
 }
 delay(10);
 settextstyle(3,HORIZ_DIR,1);
 setcolor(6);
 outtextxy(30,10,"A:-TO MOVE LEFT");
 outtextxy(30,40,"S:-TO MOVE DOWN");
 outtextxy(30,70,"W:-TO MOVE UP");
 outtextxy(30,100,"D:-TO MOVE RIGHT");
 outtextxy(30,130,"M:-FOR MAIN SCREEN");
 outtextxy(30,160,"QQ:-TO QUIT FOR I PLAYER");
 outtextxy(30,190,"ZZ:-TO QUIT FOR II PLAYER");
 outtextxy(30,220,"L:-TO GO TO LEADERBOARD");
 outtextxy(30,250,"HACKOS GIVEN=100");
 outtextxy(30,280,"REJUVINISING POINTS 6--22--35--49--66--72");
 outtextxy(30,310,"REJUVINISING CHARGE 5 HACKOS");
// outtextxy(30,340,"BONUS OF 5 HACKOS FOR COMPLETING THE TASK");
// outtextxy(30,370,"DEDUCTION OF 5 HACKO FOR INCOMPLETION");
 outtextxy(30,340,"E:-TO EXIT");
 outtextxy(30,370,"H:-FOR HELP FILE");
outtextxy(30,400,"Y:-TO BY PASS THE CONSTRUCTION WORK");
outtextxy(30,430,"Y:-TO REJUVINISE");



// outtextxy(30,400,"s:-TO START THE GAME");

 delay(10);
 getch();

}

//**********************//
//function for trace starts
//*************************//

void trace(stack1 *tt,int ss,int aa,int ww,int qq)
{//int gd=DETECT,gm;

int e,jj,kk,yy,uu;
//initgraph(&gd,&gm," ");
//stack1 *tt;
tt->top++;
tt->aa[tt->top]=ss;
tt->top++;
tt->aa[tt->top]=aa;
tt->top++;
tt->aa[tt->top]=ww;
tt->top++;
tt->aa[tt->top]=qq;
e=tt->top;
while(e>=0)
{
//setcolor(RED);
jj=e;
e--;
kk=e;
e--;
yy=e;
e--;
uu=e;
e--;
setfillstyle(SOLID_FILL,BLUE);
bar(tt->aa[uu],tt->aa[yy],tt->aa[kk],tt->aa[jj]);
}
}

void score(int gg,int kk)
{
  char cx[20],ct[20];
  settextstyle(3,HORIZ_DIR,1);
  setcolor(6);
  outtextxy(500,70,"SCORE");
  outtextxy(500,170,"HACKOS");
  setfillstyle(SOLID_FILL,WHITE);
  bar(500,97,610,100);
  bar(610,97,613,153);
  bar(610,150,500,153);
  bar(500,150,503,100);
  setfillstyle(SOLID_FILL,GREEN);
  bar(550,99,640,151);
     setfillstyle(SOLID_FILL,WHITE);
  bar(500,197,610,200);
  bar(610,197,613,253);
  bar(610,250,500,253);
  bar(500,250,503,197);
  setfillstyle(SOLID_FILL,GREEN);
  bar(550,199,640,251);
  settextstyle(3,HORIZ_DIR,1);
  setcolor(6);
 itoa(gg,cx,10);
  outtextxy(520,110,cx);
itoa(kk,ct,10);
  outtextxy(510,210,ct);
}




 //****************//
 // function of path lenghts starts
 //*******************//


 void enqueue(struct queuemeta *q,int w)
 {
  node1 *t;
  t=(node1 *)malloc(sizeof(node1));
  t->n=NULL;
  t->w=w;
  if(q->r==NULL)
   q->r=q->f=t;
  else
  {
   q->r->n=t;
   q->r=t;
  }
 }
 int queuesum(struct queuemeta *q)
 { node1 *a;
   int s=0;
  while(q->f!=NULL)
  {
   //printf("%d\n",q->f->w);
   s=s+q->f->w;
   a=q->f;
   q->f=q->f->n;
   free(a);
  }
 return s;
 }



//function for creating the map starts

void create(struct meta *m,FILE* p)
{
 house *t,*a;
 int i,j,x[11];
 char s[50],c[50]; // s is for reading the first 11 lines of the file,c is for next 75 lines.
 for(i=0;i<11;i++) //loop for 11 lines
 {
   fgets(s,50,p);
   sscanf(s,"%d%d%d%d%d%d%d%d%d%d%d",&x[0],&x[1],&x[2],&x[3],&x[4],&x[5],&x[6],&x[7],&x[8],&x[9],&x[10]);
   for(j=0;j<11;j++) //for creating 10 or less nodes per line.
   {
   if(x[j]!=0)
   {
    t=(house*)malloc(sizeof(house));
    t->n=t->r=t->l=t->d=t->u=NULL;
    t->x=x[j];
    t->i=i; // storing the row no. of the house.
    t->j=j; // storing the col. no. of the house.
    t->rw=t->lw=t->uw=t->dw=t->f=t->rc=t->dc=t->uc=t->lc=t->rcc=t->dcc=t->f1=t->rc1=t->lc1=t->uc1=t->dc1=0;
    if(m->h==NULL) // creation of single link list.
    {
     m->h=t;
     m->e=t;
    }
    else
    {
     m->e->n=t;
     m->e=t;
    }
   }
  }
 }

 //***********//
  // creation of right, left, up and down links starts from here
 //*************//


  a=m->h;
  i=0;
 while(a->n!=NULL)
 {t=a;
  fgets(c,50,p); // reads the adacency matrix for the first node.
  x[0]=0;
  x[1]=0;
  x[2]=0;
  sscanf(c,"%d%d%d",&x[0],&x[1],&x[2]);

  i=0;
  while(x[i]!=0)
  {
   while(t->x!=x[i] && t!=NULL) // reaching the house whose links are to be made with house at 'a'.
   t=t->n;
   if(t->i==a->i) /*if rows of both the houses 'a' and 't' are same then connect them with right and left                       left links*/
   {
    a->r=t;
    t->l=a;
    a->rw=t->lw=t->j-a->j;
   }
   else  // else create the down and up links.
   {
    a->d=t;
    t->u=a;
     a->dw=t->uw=t->i-a->i;
   }
  i++;
  }
 a=a->n;
 }
}
  //************************************//
  // function for generating the delivery addresses
  //*************************************//

int gen_adr(struct meta *m)
{
 house *t;

 int x=1,i,n1=0;

 t=m->h;
 randomize();
 while(n1<=10)
 n1=random(31);
 for(i=1;i<=n1;)
 {
  x=random(76);
  if(x!=0)
  {t=m->h;
   while(t->x!=x)
    t=t->n;
  if(t->f==0 && (t->l->f==0 || t->u->f==0))
  {
   t->f=1;
   t->f1=1;
   i++;
  }
 }
 }
 return n1;
}
//function for display starts

void display(struct meta *m,int g,int h)
{
 int i,j,x=10,y=10,tx,ty;

 house *t;

  t=m->h;

 i=0;
 while(t!=NULL)
 {
  while(t->i==i) // printing per line
  {
   if(t->f==0)
   {if(t->x==6||t->x==22||t->x==35 ||t->x==49 || t->x==66 || t->x==72)
     setfillstyle(SOLID_FILL,BROWN);
   else
     setfillstyle(SOLID_FILL,WHITE);
   }
   else
   {if(t->x==6||t->x==22||t->x==35 ||t->x==49 || t->x==66 || t->x==72)
    setfillstyle(SLASH_FILL,BROWN);
   else
   setfillstyle(SLASH_FILL,WHITE);
    }

   bar(x,y,x+20,y+20); // printing the house as a box
   t->xc=x;
   t->yc=y;
   tx=x+20;


   //*************//
    // printing the vertical roads

   if(t->dc==1 && g>=t->xc && g<=t->xc+20 && h>=t->yc && h<=t->yc+20)
   {setfillstyle(SLASH_FILL,WHITE);
    t->dcc=1;
   }
   else
   {if(t->dcc==1)
    setfillstyle(SLASH_FILL,WHITE);
    else
    setfillstyle(SOLID_FILL,8);
   }

    if(t->d!=NULL)
   {ty=y+20;
    for(j=t->i;j<t->d->i;j++)
    ty=ty+40;

    bar(x+5,y+20,x+14,ty);
   }


  //*****************//
  //printing of vertical roads ends and horizonatal roads starts//


   if(t->rc==1 && g>=t->xc && g<=t->xc+20 && h>=t->yc && h<=t->yc+20)
   {
    setfillstyle(SLASH_FILL,WHITE);
    t->rcc=1;
   }
   else
   {
   if(t->rcc==1)
    setfillstyle(SLASH_FILL,WHITE);
    else
    setfillstyle(SOLID_FILL,8);
   }


for(j=t->j;j<t->n->j && t->i==t->n->i;j++)
   x=x+40;

   if(t->r!=NULL)

   bar(tx,y+5,x,y+14);

   t=t->n;

  }

  // moving to next line thats why now 'y' will be updated

  y=y+40;
  x=10;

  for(j=0;j<t->j;j++)
  x=x+40;
  i++;
 }
}
//*****************//
//function for random construction works starts
//******************//

void construction(struct meta *m)
{
 int x,f=0;
 house *t;
 t=m->h;
 randomize();
 while(f==0)
 {
  x=random(76);
  t=m->h;
  if(x!=0)
  {
   while(t!=NULL && t->x!=x)
   t=t->n;

   if((t->rw==1 || t->rw==2) && (t->lw==1  || t->lw==2))
   { t->rc=t->r->lc=1;
    t->rc1=t->r->lc1=1;
    f=1;
    break;
   }
   if((t->rw==1 || t->rw==2) && (t->dw==1 || t->dw==2))
   {t->dc=t->d->uc=1;
    t->dc1=t->d->uc1=1;
    f=1;
    break;
   }
   if((t->rw==1 || t->rw==2) && (t->uw==1 || t->uw==2))
   {t->rc=t->r->lc=1;
    t->rc1=t->r->lc1=1;
    f=1;
    break;
   }
   if((t->lw==1 || t->lw==2) && (t->dw==1 || t->dw==2))
   {t->dc=t->d->uc=1;
    t->dc1=t->d->uc1=1;
    f=1;
    break;
   }
   if((t->lw==1 || t->lw==2) && (t->uw==1 || t->uw==2))
   {t->u->dc=t->uc=1;
    t->uc1=t->u->dc1=1;
    f=1;
    break;
   }
   if((t->dw==1 || t->dw==2) && (t->uw==1 || t->uw==2))
   {t->dc=t->d->uc=1;
    t->dc1=t->d->uc1=1;
    f=1;
    break;
   }
  }
 }
 printf("%d",x);
}

void main()
{

 house *t,*a;
 FILE *p;
stack1 *tt;
int gd=DETECT,gm,i,j,w=0,h=1,v=1,s,xx=520,yy=20,zz=600,cc=40,pp=0,l,n1=0,n2=0,min=1000,hh=20,b,ttt=0;
 char ff,cx[100],z;
  initgraph(&gd, &gm," ");
  start();
  cleardevice();
ab:z=display1();
if(z=='s')
{
 m=(struct meta*)malloc(sizeof(struct meta));

 m->h=m->e=NULL;

 p=fopen("mapnew.txt","r");
 create(m,p);
 fclose(p);
 n1=gen_adr(m);
 n2=n1;
 //printf("%d %d\n",n1,n2);
 construction(m);
 tt->top=-1;
 delay(1000);
 initgraph(&gd, &gm," ");
 for(l=1;l<=2;l++)
 {
 tt->top=-1;
 zz=600;
 pp=0;
 hh=100;
  while(t!=NULL)
{t->rc=t->rc1;
 t->lc=t->lc1;
 t->dc=t->dc1;
 t->uc=t->uc1;
 t->f=t->f1;
 t->dcc=t->rcc=0;
 t=t->n;
 }




  cleardevice();
  q=(struct queuemeta*)malloc(sizeof(struct queuemeta));
 q->f=q->r=NULL;
  itoa(l,cx,10);
  //setcolor(CYAN);
  //settextstyle(0,0,1);
  outtextxy(320,240,"Player ");
  outtextxy(320,250,cx);
  outtextxy(320,260," play");
  delay(1000);
  cleardevice();
  display(m,0,0);
 bar(518,18,602,18);
 bar(602,18,602,42);
 bar(602,42,518,42);
 bar(518,42,518,18);
 setfillstyle(SOLID_FILL,RED);
 bar(xx,yy,zz,cc);
score(pp,hh);
 //***//
//cursor starts
//*******//

a=NULL;
t=m->h;
i=t->xc+6;
j=t->yc+6;
h=v=1;
 ttt=0;
  while(1)
 {
  if(getch()=='d' &&(t->r!=NULL ||t->l->r!=NULL) && (h==1 || i>=t->xc && i<=t->xc+20 && j>=t->yc && j<=t->yc+20) && t->rc!=1)
  {
  do
  {
   trace(tt,i,j,i+7,j+7);
   if((t->x==6||t->x==22||t->x==35 ||t->x==49 || t->x==66 || t->x==72)&&ttt==0)
   {           ttt++;
   settextstyle(3,HORIZ_DIR,1);
   outtextxy(400,400,"WANT TO REJUVINISE");
   fflush(stdin);
   flushall();
   scanf("%c",&ff);
   if(ff=='y')
   {
   cleardevice();
   display(m,i,j);
   trace(tt,i,j,i+7,j+7);
   hh=hh-5;
   bar(518,18,602,18);
   bar(602,18,602,42);
   bar(602,42,518,42);
   bar(518,42,518,18);
   setfillstyle(SOLID_FILL,RED);
   zz=600;
   bar(xx,yy,zz,cc);
   score(pp,hh);
   }
   else
   hh=hh;
   }
      h=1;
   v=0;
   cleardevice();
   display(m,i,j);
trace(tt,i,j,i+7,j+7);
bar(518,18,602,18);
bar(602,18,602,42);
bar(602,42,518,42);
bar(518,42,518,18);
setfillstyle(SOLID_FILL,RED);
bar(xx,yy,zz,cc);
setfillstyle(SOLID_FILL,RED);
   bar(i,j,i+7,j+7);
score(pp,hh);
//pp=pp+t->rw;
     if(pp%10==0&&zz>=535)
  {
  cleardevice();
  display(m,i,j);
  trace(tt,i,j,i+7,j+7);
  score(pp,hh);
  zz=zz-5;
bar(518,18,602,18);
bar(602,18,602,42);
bar(602,42,518,42);
bar(518,42,518,18);
setfillstyle(SOLID_FILL,RED);
bar(xx,yy,zz,cc);
  }

if(zz==535) //new
   {w=1;
     break;

    }

if(i>=t->r->xc && i<=t->r->xc+20 && j>=t->r->yc && j<=t->r->yc+20 &&a!=t)
   {
    pp=pp+t->rw;

    enqueue(q,t->rw);
    h=v=1;
    if(l==1)
    {
    if(t->f==1)
    {
     t->f=0;
     n1--;
    }
    if(n1==0)
    break;
    }
    else
    {
    if(t->f==1)
    {
     t->f=0;
     n2--;
    }
    if(n2==0)
  break;
    }
    //itoa(n1,cx,10);
    //outtextxy(600,100,cx);
    //itoa(n2,cx,10);
    //outtextxy(600,200,cx);
    t=t->r;
    a=t;
    //i=t->xc+6;
    //j=t->yc+6;
    //itoa(t->x,cx,10);
    //itoa(t->xc,cy,10);
    //outtextxy(400,400,cx);
    //outtextxy(400,450,cy);



   }
   else
   a=NULL;
   i=i+7;
  }while(getch()=='d' && t->r!=NULL  && t->rc!=1);
  }
  else
  i=i+7;
  if(t->rc==1)
  {t->rc=0;
   settextstyle(3,HORIZ_DIR,1);
   outtextxy(450,400,"WANT TO BYPASS");
   fflush(stdin);
   flushall();
   scanf("%c",&ff);
   if(ff=='y')
   {
   cleardevice();
   display(m,i,j);
   trace(tt,i,j,i-7,j+7);
   hh=hh-5;
   bar(518,18,602,18);
   bar(602,18,602,42);
   bar(602,42,518,42);
   bar(518,42,518,18);
   setfillstyle(SOLID_FILL,RED);
   //zz=600;
   bar(xx,yy,zz,cc);
   score(pp,hh);
   }
   else
   hh=hh;
   }



  ttt=0;
  if(l==1)
  {
   if(getch()=='q' ||n1==0 ||w==1)
  break;
  }
  else
  {if(getch()=='z' ||n2==0 ||w==1)
   break;
  }

  if(getch()=='a' &&(t->l!=NULL || t->r->l!=NULL) && (h==1 || i>=t->xc && i<=t->xc+20 && j>=t->yc && j<=t->yc+20) && t->lc!=1)
  {
  do
  {
    trace(tt,i,j,i-7,j+7);
  if((t->x==6||t->x==22||t->x==35  ||t->x==49 || t->x==66 || t->x==72)&&ttt==0)
   {   ttt++;
   settextstyle(3,HORIZ_DIR,1);
   outtextxy(400,400,"WANT TO REJUVINISE");
   fflush(stdin);
   flushall();
   scanf("%c",&ff);
   if(ff=='y')
   {
   cleardevice();
   display(m,i,j);
   trace(tt,i,j,i-7,j+7);
   hh=hh-5;
   bar(518,18,602,18);
   bar(602,18,602,42);
   bar(602,42,518,42);
   bar(518,42,518,18);
   setfillstyle(SOLID_FILL,RED);
   zz=600;
   bar(xx,yy,zz,cc);
   score(pp,hh);
   }
   else
   hh=hh;
   }



h=1;
   v=0;
    cleardevice();
    display(m,i,j);

trace(tt,i,j,i-7,j+7);

bar(518,18,602,18);
bar(602,18,602,42);
bar(602,42,518,42);
bar(518,42,518,18);
setfillstyle(SOLID_FILL,RED);
bar(xx,yy,zz,cc);



setfillstyle(SOLID_FILL,RED);
   bar(i,j,i-7,j+7);

score(pp,hh);
//pp=pp+t->lw;
     if(pp%10==0&&zz>=535)
  {
  cleardevice();
  display(m,i,j);
trace(tt,i,j,i-7,j+7);
   score(pp,hh);
zz=zz-10;
bar(518,18,602,18);
bar(602,18,602,42);
bar(602,42,518,42);
bar(518,42,518,18);
setfillstyle(SOLID_FILL,RED);
bar(xx,yy,zz,cc);
  }


if(zz==535) //new
   {w=1;
     break;

    }




if(i>=t->l->xc && i<=t->l->xc+20 && j>=t->l->yc && j<=t->l->yc+20 &&a!=t)
   {pp=pp+t->lw;
    enqueue(q,t->lw);
    h=v=1;

   if(l==1)
    {
    if(t->f==1)
    {
     t->f=0;
     n1--;
    }
    if(n1==0)
    break;
    }
    else
    {
    if(t->f==1)
    {
     t->f=0;
     n2--;
    }
    if(n2==0)
  break;
    }


   //itoa(n2,cx,10);
    //outtextxy(600,200,cx);
    t=t->l;
    a=t;
    //i=t->xc+6;
    //j=t->yc+6;
    //itoa(t->x,cx,10);
    //itoa(t->xc,cy,10);
    //outtextxy(400,400,cx);
    //outtextxy(400,450,cy);
   }
   else
   a=NULL;
   i=i-7;
  }while(getch()=='a' && t->l!=NULL  && t->lc!=1);
  }
  else
  i=i-7;
      ttt=0;
  if(t->lc==1)
  {t->lc=0;
   settextstyle(3,HORIZ_DIR,1);
   outtextxy(450,400,"WANT TO BYPASS");
   fflush(stdin);
   flushall();
   scanf("%c",&ff);
   if(ff=='y')
   {
   cleardevice();
   display(m,i,j);
   trace(tt,i,j,i-7,j+7);
   hh=hh-5;
   bar(518,18,602,18);
   bar(602,18,602,42);
   bar(602,42,518,42);
   bar(518,42,518,18);
   setfillstyle(SOLID_FILL,RED);
   //zz=600;
   bar(xx,yy,zz,cc);
   score(pp,hh);
   }
   else
   hh=hh;
   }








  if(l==1)
  {
   if(getch()=='q'|| n1==0 || w==1)
  break;
  }
  else
  {if(getch()=='z' || n2==0 || w==1)
   break;
  }


if(getch()=='s' && (t->d!=NULL || t->u->d!=NULL)  && (v==1 || i>=t->xc && i<=t->xc+20 && j>=t->yc && j<=t->yc+20) && t->dc!=1)
  {
   do
  {
   trace(tt,i,j,i+7,j+7);
  if((t->x==6||t->x==22||t->x==35 ||t->x==49 || t->x==66 || t->x==72)&&ttt==0)
   {       ttt++;
   settextstyle(3,HORIZ_DIR,1);
   outtextxy(400,400,"WANT TO REJUVINISE");
   fflush(stdin);
   flushall();
   scanf("%c",&ff);
   if(ff=='y')
   {
   cleardevice();
   display(m,i,j);
   trace(tt,i,j,i+7,j+7);
   hh=hh-5;
   bar(518,18,602,18);
   bar(602,18,602,42);
   bar(602,42,518,42);
   bar(518,42,518,18);
   setfillstyle(SOLID_FILL,RED);
   zz=600;
   bar(xx,yy,zz,cc);
   score(pp,hh);
   }else
   hh=hh;
   }



  v=1;
   h=0;
   cleardevice();
    display(m,i,j);
trace(tt,i,j,i+7,j+7);
bar(518,18,602,18);
bar(602,18,602,42);
bar(602,42,518,42);
bar(518,42,518,18);
setfillstyle(SOLID_FILL,RED);
bar(xx,yy,zz,cc);


setfillstyle(SOLID_FILL,RED);
   bar(i,j,i+7,j+7);
score(pp,hh);

//pp=pp+t->dw;
     if(pp%10==0&&zz>=535)
  {
  cleardevice();

trace(tt,i,j,i+7,j+7);

 display(m,i,j);
score(pp,hh);
zz=zz-10;
bar(518,18,602,18);
bar(602,18,602,42);
bar(602,42,518,42);
bar(518,42,518,18);
setfillstyle(SOLID_FILL,RED);
bar(xx,yy,zz,cc);
  }



if(zz==535) //new
   {w=1;
     break;

    }




if(j>=t->d->yc && j<=t->d->yc+20 && i>=t->d->xc && i<=t->d->xc+20 && a!=t)
   {enqueue(q,t->dw);
    h=v=1;
pp=pp+t->dw;
    if(l==1)
    {
    if(t->f==1)
    {
     t->f=0;
     n1--;
    }
    if(n1==0)
    break;
    }
    else
    {
    if(t->f==1)
    {
     t->f=0;
     n2--;
    }
    if(n2==0)
  break;
    }



    //itoa(n1,cx,10);
    //outtextxy(600,100,cx);
    //itoa(n2,cx,10);
    //outtextxy(600,200,cx);

    t=t->d;
    a=t;
    //i=t->xc+6;
    //j=t->yc+6;
    //itoa(t->x,cx,10);
    //itoa(t->xc,cy,10);
    //outtextxy(400,400,cx);
    //outtextxy(400,450,cy);
   }
   else
   a=NULL;
   j=j+7;
  }while(getch()=='s' && t->d!=NULL && t->dc!=1);
  }
  else
  j=j+7;
  ttt=0;
    if(t->dc==1)
  {t->dc=0;
   settextstyle(3,HORIZ_DIR,1);
   outtextxy(450,400,"WANT TO BYPASS");
   fflush(stdin);
   flushall();
   scanf("%c",&ff);
   if(ff=='y')
   {
   cleardevice();
   display(m,i,j);
   trace(tt,i,j,i-7,j+7);
   hh=hh-5;
   bar(518,18,602,18);
   bar(602,18,602,42);
   bar(602,42,518,42);
   bar(518,42,518,18);
   setfillstyle(SOLID_FILL,RED);
   //zz=600;
   bar(xx,yy,zz,cc);
   score(pp,hh);
   }
   else
   hh=hh;
   }


    if(l==1)
  {
   if(getch()=='q'|| n1==0 ||w==1)
  break;
  }
  else
  {if(getch()=='z' || n2==0 ||w==1)
   break;
  }



if(getch()=='w' && (t->u!=NULL|| t->d->u!=NULL) && (v==1 || i>=t->xc && i<=t->xc+20 && j>=t->yc && j<=t->yc+20) && t->uc!=1)
  {
  do
  {
     trace(tt,i,j,i+7,j+7);
    if((t->x==6||t->x==22||t->x==35  ||t->x==49 || t->x==66 || t->x==72)&&ttt==0)
   {   ttt++;
   settextstyle(3,HORIZ_DIR,1);
   outtextxy(400,400,"WANT TO REJUVINISE");
   fflush(stdin);
   flushall();
   scanf("%c",&ff);
   if(ff=='y')
   {
   cleardevice();
   display(m,i,j);
       trace(tt,i,j,i+7,j+7);

   hh=hh-5;
   bar(518,18,602,18);
 bar(602,18,602,42);
 bar(602,42,518,42);
 bar(518,42,518,18);
 setfillstyle(SOLID_FILL,RED);
 zz=600;
 bar(xx,yy,zz,cc);
   trace(tt,i,j,i+7,j+7);

  score(pp,hh);
   }
   else
   hh=hh;
      }



h=0;v=1;
   cleardevice();
    display(m,i,j);
trace(tt,i,j,i+7,j+7);
bar(518,18,602,18);
bar(602,18,602,42);
bar(602,42,518,42);
bar(518,42,518,18);
setfillstyle(SOLID_FILL,RED);
bar(xx,yy,zz,cc);

setfillstyle(SOLID_FILL,RED);
   bar(i,j,i+7,j-7);
score(pp,hh);

//pp=pp+t->uw;
     if(pp%10==0&&zz>=535)
  {
  cleardevice();
  display(m,i,j);

trace(tt,i,j,i+7,j+7);

 score(pp,hh);

  zz=zz-10;
bar(518,18,602,18);
bar(602,18,602,42);
bar(602,42,518,42);
bar(518,42,518,18);
setfillstyle(SOLID_FILL,RED);
bar(xx,yy,zz,cc);
  }


if(zz==535) //new
   {w=1;
     break;

    }


if(j>=t->u->yc && j<=t->u->yc+20 && i>=t->u->xc && i<=t->u->xc+20 && a!=t)
   {pp=pp+t->uw;

    enqueue(q,t->uw);
    h=v=1;

    if(l==1)
    {
    if(t->f==1)
    {
     t->f=0;
     n1--;
    }
    if(n1==0)
    break;
    }
    else
    {
    if(t->f==1)
    {
     t->f=0;
     n2--;
    }
    if(n2==0)
  break;
    }
    t=t->u;
    a=t;
   }
   else
   a=NULL;
   j=j-7;
  }while(getch()=='w' &&t->u!=NULL  && t->uc!=1);
  }
  else
  j=j-7;
  if(t->uc==1)
  {t->uc=0;
   settextstyle(3,HORIZ_DIR,1);
   outtextxy(450,400,"WANT TO BYPASS");
   fflush(stdin);
   flushall();
   scanf("%c",&ff);
   if(ff=='y')
   {
   cleardevice();
   display(m,i,j);
   trace(tt,i,j,i-7,j+7);
   hh=hh-5;
   bar(518,18,602,18);
   bar(602,18,602,42);
   bar(602,42,518,42);
   bar(518,42,518,18);
   setfillstyle(SOLID_FILL,RED);
   //zz=600;
   bar(xx,yy,zz,cc);
   score(pp,hh);
   }
   else
   hh=hh;
   }

  if(l==1)
  {
   if(getch()=='q' || n1==0 ||w==1)
  break;
  }
  else
  {if(getch()=='z' || n2==0 ||w==1)
   break;
  }

 }

 delay(1000);
 cleardevice();
 s=queuesum(q);
 itoa(s,cx,10);
 outtextxy(320,240,cx);
 if(s<=min)
 {
   min=s;
   b=l;
 }
 s=0;
 delay(2000);
 free(q);
w=0;
}
 cleardevice();
 itoa(b,cx,10);
 //setcolor(CYAN);
  //settextstyle(0,0,1);
 outtextxy(320,240,"The winner is player");
 outtextxy(320,260,cx);
 if(getch()=='m')
 goto ab;
 else
 exit(0);
}
if(z=='h')
{
help();
goto ab;
}
if(z=='e')
exit(0);
 getch();

}