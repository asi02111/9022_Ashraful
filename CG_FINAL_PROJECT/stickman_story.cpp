#include<graphics.h>

// stickman open legs with rose

void stickman_open(int speed,int color)
{
	int s=speed;

	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	line(50+i+s,350,50+i+s,400);
	//legs
	line(50+i+s,400,30+i+s,450);
	line(50+i+s,400,70+i+s,450);
	//left hand
		line(50+s+i,360,20+s+i,400);
	//right hand
		line(50+s,360+i,80+s,400+i);


	}

}

// stickman close legs with rose

void stickman_close(int speed,int color)
{	int s=speed;

	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	line(50+i+s,350,50+i+s,400);
	//legs
	line(50-i+s,400,50-i+s,450);
	line(50+i+s,400,50+i+s,450);
	//left hand
		line(50+s+i,360,20+s+i,400);
;
	//right hand
		line(50+s,360+i,80+s,400+i);


	}


}

// stickwomen open legs

void stickwomen_open(int speed,int color)
{
	int s=speed;

	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	//dress
	line(50+i+s,350,40+i+s,400);
	line(50+i+s,350,60+i+s,400);
	line(40+s,400-i,60+s,400-i);
	//legs
	line(50+i+s,400,30+i+s,450);
	line(50+i+s,400,70+i+s,450);
	//left hand
		line(50+s+i,350,20+s+i,400);
	//right hand
		line(50+s+i,350,80+s+i,400);


	}

}


// stickwomen close legs

void stickwomen_close(int speed,int color)
{
	int s=speed;

	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	//dress
	line(50+i+s,350,40+i+s,400);
	line(50+i+s,350,60+i+s,400);
	line(40+s,400-i,60+s,400-i);
	//legs
	line(50-i+s,400,50-i+s,450);
	line(50+i+s,400,50+i+s,450);
	//left hand
		line(50+s+i,350,20+s+i,400);
	//right hand
		line(50+s+i,350,80+s+i,400);


	}

}

// stickman chat
void stickman_chat(int speed,int box_color,int text_color)
{
	int s=speed;
	setcolor(box_color);

	int points[16]={50+s,280,40+s,270,-40+s,270,-40+s,200,70+s,200,70+s,270,60+s,270,50+s,280};
	drawpoly(8,points);

    setcolor(text_color);

	outtextxy(-20+s,210,"Let's go to");
	outtextxy(-5+s,240,"Versity");

}

void stickwomen_chat(int speed,int box_color,int text_color)
{
	int s=speed;
	setcolor(box_color);

	int points[16]={50+s,280,40+s,270,30+s,270,30+s,200,140+s+50,200,140+s+50,270,60+s,270,50+s,280};
	drawpoly(8,points);
   setcolor(text_color);
   settextstyle(EUROPEAN_FONT,HORIZ_DIR,1);
	outtextxy(45+s,210,"OK let's ");
	outtextxy(100+s,240,"go");

}
// road

void road(int color)
{
	setcolor(color);
	for(int i=0;i<3;i++)
	{
		line(0,450+i,700,450+i);
	}
	setcolor(WHITE);
}



void university()
{
	setcolor(LIGHTGREEN);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(70,300,"Sonargoan University");

}
// driver program
int main()
{


	initwindow(700,550,"Stickman",150,50);
	int page=0;
	int sm=4;
	int sw=4;
	int n=0;


	while(n<=200)
	{
	     //ASHRAFUL ISLAM
    //A
    line(87,25,77,50);
    line(87,25,97,50);
    line(82,38,92,38);
    //S
    arc(110,32,20,270,7);
    arc(110,45,180,90,7);
    //H
    line(123,25,123,50);
    line(138,25,138,50);
    line(123,37,138,37);
    //R
    line(145,25,145,50);
    ellipse(147,33,270,90,11,8);
    line(145,38,157,50);
    //A
    line(172,25,162,50);
    line(172,25,182,50);
    line(168,38,178,38);
    //F
    line(188,25,188,50);
    line(188,25,202,25);
    line(188,38,200,38);
    //U
    arc(218,39,180,360,10);
    line(208,25,208,38);
    line(227,25,227,38);
    //L
    line(233,25,233,50);
    line(233,50,248,50);

    //ISLAM
    //I
    line(275,25,295,25);
    line(275,50,295,50);
    line(285,25,285,50);
    //S
    arc(307,32,20,270,7);
    arc(307,45,180,90,7);
    //L
    line(320,25,320,50);
    line(320,50,335,50);
    //A
    line(350,25,340,50);
    line(350,25,360,50);
    line(345,38,355,38);
    //M
    line(365,25,365,50);
    line(385,25,385,50);
    line(365,25,375,38);
    line(375,38,385,25);

    //CSE2001019022
    //C
    arc(90,90,65,300,13);
    //S
    arc(110,84,20,270,7);
    arc(110,97,180,90,7);
    //E
    line(123,78,123,103);
    line(123,78,140,78);
    line(123,90,135,90);
    line(123,103,140,103);
    //2
    arc(160,85,330,175,8);
    line(152,103,170,103);
    line(165,90,152,103);
    //0
    ellipse(183,90,0,360,10,14);
    //0
    ellipse(208,90,0,360,10,14);
    //1
    line(223,103,243,103);
    line(233,78,233,103);
    line(223,88,233,78);
    //0
    ellipse(253,90,0,360,10,14);
    //1
    line(268,103,288,103);
    line(278,78,278,103);
    line(268,88,278,78);
    //9
    arc(303,85,0,360,8);
    line(308,90,295,103);
    //0
    ellipse(325,90,0,360,10,14);
    //2
    arc(350,85,330,175,8);
    line(342,103,360,103);
    line(355,90,342,103);
    //2
    arc(373,85,330,175,8);
    line(365,103,383,103);
    line(378,90,365,103);
		setactivepage(page);
		setvisualpage(1-page);
		cleardevice();
	// rest position

	    if(n<20)
	    {  	road(13);
	  		stickman_open(sm,14);
	    	stickwomen_open(280,15);
		}

	// stick_man walk 40
		if(n>=20&&n<=60)
		{
		road(13);
		if(n%2==0)
		stickman_open(sm,14);
		else
		stickman_close(sm,14);
		stickwomen_open(280,15);
		sm+=4;

		}

	//stick man asking

	    if(n>60&&n<=70)
	    {
	    	if(n==61)
	    	delay(300);
		    road(13);
			stickman_open(sm,14);
			if(n==61)
			stickman_chat(sm,14,14);
			if(n==62)
			delay(2000);
	    	stickwomen_open(280,15);
	    	if(n==63)
	    	stickwomen_chat(280,15,15);
	    	if(n==64)
	    	delay(2000);
		}

	//stick women walk 70

		if(n>70&&n<=170)
		{
		    road(13);
			//stickman_open(sm,14);
			if(n%2==0)
			{
            stickman_open(230+sw,14);
			stickwomen_open(280+sw,15);
			}

			else
			stickwomen_close(280+sw,15);
			sw+=4;
		}


		page=1-page;
		delay(100);

		n++;

	}


			setactivepage(1);
			university();

	getch();
	closegraph();

}
