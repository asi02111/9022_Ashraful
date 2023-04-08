//#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<graphics.h>

int main()

{

	int gd=DETECT,gm;

	initgraph(&gd,&gm," ");
    initwindow(1440,1080,"Ashraful");

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

    //..........lower portion of the house..........//

    //..........road.........//


	line(0,750,1440,750);// house ground line
	line(0,755,1440,755);// house ground line
	setfillstyle(SOLID_FILL,15);
	floodfill(1,751,15);

//..........house door..........//
	rectangle(500,610,850,750);
	setfillstyle(SOLID_FILL,3);
	floodfill(501,611,15);

	line(590,750,590,675);
	line(735,750,735,675);
	ellipse(663,679,7,175,73,40);
	setfillstyle(SOLID_FILL,0);
	floodfill(732,679,15);

	line(595,750,595,675);
	line(730,750,730,677);
	ellipse(663,679,3,175,68,35);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(663,679,15);

	rectangle(595,675,730,750);
	setfillstyle(SOLID_FILL,4);
	floodfill(596,676,15);

	line(660,677,660,750);
	ellipse(652,710,0,360,2,4);
	ellipse(668,710,0,360,2,4);

    //...........Right Down Window...........//

	line(950,750,950,613);//right side line

	line(1025,680,1025,750);//board
	line(1030,680,1030,750);

	rectangle(980,620,1080,680);
	setfillstyle(SOLID_FILL,11);
	floodfill(981,621,15);
	outtextxy(985,635,"Ashraful Islam");
	outtextxy(1015,655,"9022");

	line(850,610,900,586);//window upper line
	line(959,612,900,586);

	line(850,616,900,592);//window lower line
	line(959,618,900,592);

	line(959,612,959,618);

	rectangle(875,625,930,735);//window mid ractangle

	line(902,625,902,735);//window mid line
	line(875,655,930,655);



	//...........left Down Window...........//



	line(400,750,400,613);//left side line

	line(390,612,450,586);//window upper line
	line(500,610,450,586);



	line(390,618,450,592);//window lower line
	line(500,616,450,592);

	line(390,612,390,618);

	rectangle(420,625,480,735);//window mid ractangle

	line(450,625,450,735);
	line(420,655,480,655);



	//...........upper porton of the house..........//



	rectangle(500,497,850,597);//2nd
    setfillstyle(SOLID_FILL,3);
	floodfill(550,500,WHITE);

	line(500,597,500,609);
	line(850,597,850,609);

	//.......baranda...........//
	rectangle(610,584,750,597);
    setfillstyle(SOLID_FILL,14);
	floodfill(611,585,WHITE);

	line(615,584,615,554);
	line(619,584,619,554);

	line(639,584,639,554);
	line(643,584,643,554);

	line(663,584,663,554);
	line(667,584,667,554);

	line(687,584,687,554);
	line(691,584,691,554);

	line(711,584,711,554);
	line(715,584,715,554);

	line(740,584,740,554);
	line(744,584,744,554);

	rectangle(612,550,748,554);
	rectangle(635,520,725,550);
	rectangle(630,515,730,550);
	setfillstyle(SOLID_FILL,0);
	floodfill(635,520,WHITE);



    //.......rooftop..........//

	line(675,420,480,497);
	line(675,432,480,504);//left
	line(480,497,480,504);



	line(675,420,870,497);
	line(675,432,870,504);//right
	line(870,497,870,504);



    //......left upper window........//

	line(480,497,390,497);//rooftop
	line(410,497,410,604);//side

	rectangle(430,526,475,575);//outer line
	rectangle(434,530,471,571);//inner line

    //......right upper window.......//

	line(870,497,963,497);//rooftop
	line(943,497,943,604);//side

	rectangle(875,526,919,575);//outer line
	rectangle(879,530,915,571);//inner line

    //setcolor(WHITE);
	line(647,432,410,432);//left r
	line(705,432,943,432);//right r

	line(943,432,963,497);//riht down line
	setfillstyle(SOLID_FILL,11);
	floodfill(900,440,WHITE);

	line(410,432,390,496);//left down line
	setfillstyle(SOLID_FILL,11);
	floodfill(500,440,WHITE);

	rectangle(865,400,900,432);
	rectangle(860,395,905,400);

	 //........car..........//
    int cr[]={295,877,295,855,320,855,335,835,385,835,405,855,430,855,430,877,410,877};
    drawpoly(9,cr);
    line(320,855,405,855);

    circle(395,877,10);
    circle(395,877,5);
    line(380,877,345,877);
    arc(395,877,0,180,15);
    arc(330,877,0,180,15);
    line(295,877,315,877);
    circle(330,877,10);
    circle(330,877,5);

	rectangle(0,815,60,830);
	setfillstyle(SOLID_FILL,15);
	floodfill(1,816,15);

	rectangle(120,815,180,830);
	setfillstyle(SOLID_FILL,15);
	floodfill(121,816,15);

	rectangle(240,815,300,830);
	setfillstyle(SOLID_FILL,15);
	floodfill(241,816,15);

	rectangle(360,815,420,830);
	setfillstyle(SOLID_FILL,15);
	floodfill(361,816,15);

	rectangle(480,815,540,830);
	setfillstyle(SOLID_FILL,15);
	floodfill(481,816,15);

	//.......zebra cross......//
	rectangle(600,815,720,825);
	setfillstyle(SOLID_FILL,15);
	floodfill(621,816,15);

	rectangle(600,840,720,850);
	setfillstyle(SOLID_FILL,15);
	floodfill(621,841,15);

	rectangle(600,860,720,870);
	setfillstyle(SOLID_FILL,15);
	floodfill(621,861,15);

	rectangle(600,880,720,890);
	setfillstyle(SOLID_FILL,15);
	floodfill(621,881,15);

	rectangle(600,790,720,800);
	setfillstyle(SOLID_FILL,15);
	floodfill(621,791,15);

	rectangle(600,770,720,780);
	setfillstyle(SOLID_FILL,15);
	floodfill(621,771,15);

	rectangle(750,815,800,830);
	setfillstyle(SOLID_FILL,15);
	floodfill(751,816,15);

	rectangle(860,815,920,830);
	setfillstyle(SOLID_FILL,15);
	floodfill(861,816,15);

	 //........Cycle........//
     line(1055,815,1080,770);
     line(1080,770,1090,770);
     line(1070,790,1110,790);
     line(1070,790,1080,815);
     line(1080,815,1120,815);
     line(1120,815,1110,790);
     line(1110,790,1110,785);
     line(1105,785,1115,785);
     circle(1120,815,10);
     circle(1120,815,5);
	 circle(1055,815,10);
	 circle(1055,815,5);

	rectangle(980,815,1040,830);
	setfillstyle(SOLID_FILL,15);
	floodfill(981,816,15);

	rectangle(1130,815,1180,830);
	setfillstyle(SOLID_FILL,15);
	floodfill(1131,816,15);

	rectangle(1240,815,1300,830);
	setfillstyle(SOLID_FILL,15);
	floodfill(1241,816,15);

	rectangle(1360,815,1420,830);
	setfillstyle(SOLID_FILL,15);
	floodfill(1361,816,15);

	line(0,900,1440,900);
	line(0,895,1440,895);
	setfillstyle(SOLID_FILL,15);
	floodfill(1,896,15);
    //..........sky.............//
    //..........moon...........//
	setfillstyle(SOLID_FILL,15);
	setcolor(WHITE);
	circle(1300,70,37);
	floodfill(1301,47,15);

	setfillstyle(SOLID_FILL,0);
	setcolor(BLACK);
	circle(1263,55,50);
	floodfill(1280,60,0);


    setcolor(WHITE);
    outtextxy(1280,60,"*");
	outtextxy(20,30,".");
	outtextxy(60,90,".");
	outtextxy(170,30,".");
	outtextxy(280,50,".");
	outtextxy(440,80,".");
	outtextxy(530,40,".");
	outtextxy(330,70,".");
	outtextxy(240,78,".");
	outtextxy(10,130,".");
	outtextxy(140,100,".");
	outtextxy(340,110,".");
	outtextxy(380,17,".");
	outtextxy(500,17,".");
	outtextxy(450,110,".");
	outtextxy(390,40,".");
	outtextxy(480,17,".");
	outtextxy(410,110,".");
	outtextxy(410,50,".");
	outtextxy(550,17,".");
	outtextxy(550,90,".");
	outtextxy(650,60,".");
	outtextxy(650,90,".");
	outtextxy(775,20,".");
	outtextxy(750,50,".");
	outtextxy(650,90,".");
	outtextxy(800,110,".");
	outtextxy(810,70,".");
	outtextxy(900,50,".");
	outtextxy(950,100,".");
	outtextxy(875,50,".");
	outtextxy(850,70,".");
	outtextxy(1000,17,".");
	outtextxy(1000,60,".");
	outtextxy(1050,70,".");
	outtextxy(1090,40,".");
	outtextxy(1300,70,".");
	outtextxy(1250,17,".");
	outtextxy(1110,40,".");
	outtextxy(1150,60,".");
	outtextxy(1400,40,".");
	outtextxy(1120,30,".");
	outtextxy(1100,110,".");

	getch();

	closegraph();

}
