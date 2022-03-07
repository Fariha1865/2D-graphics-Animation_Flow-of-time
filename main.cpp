#include<windows.h>
#include <mmsystem.h>
#include <GL/glut.h>
#include <math.h>
#define PI 3.1416



float evr=176;
float evg=224;
float evb=230;
GLfloat xx=0.0f;
GLfloat yy=0.0f;
GLfloat zz=0.0f;
//shadow_change
float shr=0.0f;
float shg=0.0f;
//building 2 window light
float br2 =240;
float bg2 =248;
float bb2 =255;
//building 3 window light

float br3=240;
float bg3=248;
float bb3=255;

float br=240;
float bg=248;
float bb=255;

//tubelight on_off
float tur=1.0;
float tug =1.0;
float tub=1.0;

float _angle1 = 0.0f;
float _angle2 = 0.0f;
float _angle3 = -15.0f;
float gol=0.0;
//rotate_door
float t=0.0;
//flag_for_door
int f=0;

//flag_for_TV
int f2=0;


//TV_SkyBox

float s1=0.0;
float s2=0.0;
float s3 =0.0;

//TV_FiledBox
float a=0.0;
float b=0.0;
float c=0.0;

//TV_32
float a1=0.0;
float b1=0.0;
float c1=0.0;

//door_knob
float pr=218;
float pg=165;
float py=32;

//door_side_knob
float sr=0.1;
float sg=0.0;
float sy=0.0;
//sky
/*float r=135;
float g= 206;
float y=250;*/
float r=176;
float g= 224;
float y=230;
//moon_colour
float mr1=176;
float mr2=176;
float mg1=224;
float mg2=224;
float mb1=230;
float mb2=230;

//star colour
float str=176;
float stg=224;
float stb=230;
//window_1_3_light
float rw=0.788824;
float gw=0.78824;
float yw=0.78824;
//window_2_light
float rw2=0.788824;
float gw2=0.78824;
float yw2=0.78824;
//building_color
float nr=0.96;
float ng=0.96;
float ny=0.96;
//bedroom_floor_color
float fr=0.95;
float fg=0.95;
float fy=0.95;

//bedroom_Wall_color
float wr=1.0;
float wg=1.0;
float wy=1.0;

float thr=1.0;
float thg=1.0;
float thb=1.0;
float rr=0.08;

float ar=240;
float ag=248;
float ab=255;

void Initialize( )
{
glClearColor(1.0, 1.0, 1.0,1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glEnable(GL_BLEND);
glBlendFunc(GL_SRC_ALPHA,GL_ONE_MINUS_SRC_ALPHA);
glOrtho(0, 1.0, 0, 1.0, 1.0, -1.0);


}

void skybox()
{
 glColor3ub(r,g,y);

 glBegin(GL_POLYGON);

 glVertex2f(0.29, 1.0);
 glVertex2f(0.29, 0.6);
 glVertex2f(0.15, 0.32);

 glEnd;

 glColor3ub(evr,evg,evb);

 glBegin(GL_POLYGON);

 glVertex2f(0.15, 1.0);


glEnd();
 glBegin(GL_POLYGON);
 glVertex2f(0.0, 0.02);
 glVertex2f(0.0, 1.0);
 glVertex2f(0.13, 1.0);
 glVertex2f(0.13, 0.28);


glEnd();


glColor3f(.4,0.4,0.4);
//thy_door_handle

glBegin(GL_POLYGON);


 glVertex2f(0.28, 0.74);
 glVertex2f(0.28, 0.79);
   glVertex2f(0.286, 0.79);
 glVertex2f(0.286, 0.74);
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);


 glVertex2f(0.283, 0.75);
 glVertex2f(0.283, 0.78);
   glVertex2f(0.285, 0.78);
 glVertex2f(0.285, 0.75);



glEnd();



   //glColor3ub(255,255,153);
   glColor3ub(230,190,138);
    //building3
    glBegin(GL_POLYGON);
    glVertex2f(0.0,0.67);
    glVertex2f(0.0,0.94);
    glVertex2f(0.11,0.94);
    glVertex2f(0.11,0.74);
    glEnd();


    glColor3ub(br3,bg3,bb3);
    glBegin(GL_POLYGON);
    glVertex2f(0.01,0.84);
    glVertex2f(0.01,0.9);
    glVertex2f(0.04,0.9);
    glVertex2f(0.04,0.84);
    glEnd();
    glColor3ub(br,bg,bb);
    glBegin(GL_POLYGON);
    glVertex2f(0.06,0.84);
    glVertex2f(0.06,0.9);
    glVertex2f(0.09,0.9);
    glVertex2f(0.09,0.84);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(0.01,0.73);
    glVertex2f(0.01,0.79);
    glVertex2f(0.04,0.79);
    glVertex2f(0.04,0.73);
    glEnd();
    glColor3ub(br3,bg3,bb3);
    glBegin(GL_POLYGON);
    glVertex2f(0.06,0.73);
    glVertex2f(0.06,0.79);
    glVertex2f(0.09,0.79);
    glVertex2f(0.09,0.73);
    glEnd();

glColor3f(nr,ng,ny);


//neighbor_house
glBegin(GL_POLYGON);


 glVertex2f(0.0, 0.02);
 glVertex2f(0.0, 0.37);
   glVertex2f(0.2, 0.7);
 glVertex2f(0.2, 0.42);

glEnd();
//neighbor_roof_top
glBegin(GL_POLYGON);

 glVertex2f(0.0, 0.37);
 glVertex2f(0.0, 0.67);
 glVertex2f(0.07, 0.77);
 glVertex2f(0.2, 0.7);
glEnd();
//neighbor_house_roof_side_border
glColor3f(0.8,0.498039,0.196078);
glBegin(GL_POLYGON);

 glVertex2f(0.0, 0.34);
 glVertex2f(0.0, 0.37);
 glVertex2f(0.2, 0.7);
 glVertex2f(0.2, 0.67);
glEnd();
glBegin(GL_POLYGON);

 glVertex2f(0.2, 0.69);
 glVertex2f(0.07, 0.76);
 glVertex2f(0.07, 0.77);
 glVertex2f(0.2, 0.7);
glEnd();
glBegin(GL_POLYGON);

 glVertex2f(0.0, 0.66);
 glVertex2f(0.0, 0.67);
 glVertex2f(0.07, 0.77);
 glVertex2f(0.07, 0.76);
glEnd();
glColor3f(0.0,0.0,0.0);

//roof_black_outlines

glBegin(GL_LINES);
glVertex2f(0.0, 0.63);
glVertex2f(0.07, 0.73);
glEnd();
glBegin(GL_LINES);
glVertex2f(0.07, 0.73);
glVertex2f(0.18, 0.67);
glEnd();
glBegin(GL_LINES);
glVertex2f(0.07, 0.73);
glVertex2f(0.07, 0.77);
glEnd();

//window_1

glColor3f(rw,gw,yw);
glBegin(GL_POLYGON);

  glVertex2f(0.16, 0.42);
  glVertex2f(0.16, 0.52);
 glVertex2f(0.19, 0.575);
 glVertex2f(0.19, 0.475);


glEnd();
glColor3f(0.8,0.498039,0.196078);

glBegin(GL_POLYGON);

  glVertex2f(0.16, 0.42);
  glVertex2f(0.16, 0.43);
 glVertex2f(0.19, 0.485);
 glVertex2f(0.19, 0.475);


glEnd();
glBegin(GL_POLYGON);

  glVertex2f(0.185, 0.47);
  glVertex2f(0.185, 0.565);
glVertex2f(0.19, 0.575);
 glVertex2f(0.19, 0.475);


glEnd();
//Window_2
glColor3f(rw2,gw2,yw2);
glBegin(GL_POLYGON);

  glVertex2f(0.1, 0.33);
  glVertex2f(0.1, 0.43);
 glVertex2f(0.13, 0.485);
 glVertex2f(0.13, 0.385);


glEnd();
glColor3f(0.8,0.498039,0.196078);
glBegin(GL_POLYGON);

  glVertex2f(0.1, 0.33);
  glVertex2f(0.1, 0.34);
 glVertex2f(0.13, 0.395);
 glVertex2f(0.13, 0.385);


glEnd();

//Window_3
glColor3f(rw,gw,yw);
glBegin(GL_POLYGON);

   glVertex2f(0.04, 0.23);
  glVertex2f(0.04, 0.33);
 glVertex2f(0.08, 0.4);
 glVertex2f(0.08, 0.3);


glEnd();
glColor3f(0.8,0.498039,0.196078);
glBegin(GL_POLYGON);

  glVertex2f(0.04, 0.23);
  glVertex2f(0.04, 0.24);
 glVertex2f(0.08, 0.31);
 glVertex2f(0.08, 0.3);


glEnd();
glBegin(GL_POLYGON);

  glVertex2f(0.075, 0.30);
  glVertex2f(0.075, 0.39);
  glVertex2f(0.08, 0.4);

 glVertex2f(0.08, 0.31);


glEnd();
//winow_4
glColor3f(rw,gw,yw);
glBegin(GL_POLYGON);

   glVertex2f(0.0, 0.17);
  glVertex2f(0.0, 0.275);
 glVertex2f(0.02, 0.31);
 glVertex2f(0.02, 0.21);


glEnd();
glColor3f(0.8,0.498039,0.196078);
glBegin(GL_POLYGON);

   glVertex2f(0.0, 0.17);
  glVertex2f(0.0, 0.18);
 glVertex2f(0.02, 0.22);
 glVertex2f(0.02, 0.21);


glEnd();

glBegin(GL_POLYGON);

  glVertex2f(0.017, 0.20);
  glVertex2f(0.017, 0.305);
 glVertex2f(0.02, 0.31);
 glVertex2f(0.02, 0.22);


glEnd();

//building2

    glColor3ub(189,183,107);
    glBegin(GL_POLYGON);
    glVertex2f(0.24,0.50);
    glVertex2f(0.24,0.89);
    glVertex2f(0.29,0.89);
    glVertex2f(0.29,0.6);
    glEnd();
 //roof
    glBegin(GL_TRIANGLES);
    glVertex2f(0.24,0.89);
    glVertex2f(0.29,0.98);
    glVertex2f(0.29,0.89);
    glEnd();

    //roof_borders
    glColor3ub(169,163,87);
    glBegin(GL_LINES);
    glVertex2f(0.24,0.89);
    glVertex2f(0.29,0.89);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.247,0.895);
    glVertex2f(0.29,0.975);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.258,0.895);
    glVertex2f(0.29,0.955);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.247,0.895);
    glVertex2f(0.29,0.895);
    glEnd();

    //windows

    glColor3ub(br2,bg2,bb2);

    glBegin(GL_POLYGON);
    glVertex2f(0.27,0.8);
    glVertex2f(0.27,0.86);
    glVertex2f(0.29,0.86);
    glVertex2f(0.29,0.8);
    glEnd();

    glColor3ub(ar,ag,ab);
    glBegin(GL_POLYGON);
    glVertex2f(0.27,0.67);
    glVertex2f(0.27,0.74);
    glVertex2f(0.29,0.74);
    glVertex2f(0.29,0.67);
    glEnd();

    glColor3ub(br2,bg2,bb2);
    glBegin(GL_POLYGON);
    glVertex2f(0.27,0.55);
    glVertex2f(0.27,0.615);
    glVertex2f(0.29,0.615);
    glVertex2f(0.291,0.6);
    glEnd();



glColor3f(0.618824,0.618824,0.618824);

//thigh glass height-long-middle border(1)
glBegin(GL_POLYGON);

  glVertex2f(0.13, 0.284);
  glVertex2f(0.13, 1.0);
 glVertex2f(0.14, 1.0);
 glVertex2f(0.14, 0.28);


glEnd();
//thigh glass height-long-middle border(2)
glBegin(GL_POLYGON);
 glVertex2f(0.14, 0.28);
 glVertex2f(0.14, 1.0);
 glVertex2f(0.15, 1.0);
 glVertex2f(0.15, 0.3);
glEnd();

//thy right-floor

glColor3f(0.752941,0.752941,0.752941);
glBegin(GL_POLYGON);

  glVertex2f(0.15, 0.32);
  glVertex2f(0.29, 0.6);
   glVertex2f(0.3, 0.6);
 glVertex2f(0.15, 0.3);


glEnd();
//borders of thy-glass
glColor3f(0.0,0.0,0.0);

glBegin(GL_LINES);
glVertex2f(0.50, 0.6);
  glVertex2f(0.885, 0.6);
  glEnd();
glBegin(GL_LINES);
glVertex2f(0.299, 0.6);
  glVertex2f(0.315, 0.6);
  glEnd();
glBegin(GL_LINES);
   glVertex2f(0.299, 0.575);
 glVertex2f(0.019, 0.0);
glEnd();
glBegin(GL_LINES);
  glVertex2f(0.3, 0.6);
 glVertex2f(0.29, 0.6);
glEnd();
glBegin(GL_LINES);

 glVertex2f(0.3, 0.6);
 glVertex2f(0.3, 1.0);
glEnd();
glBegin(GL_LINES);
 glVertex2f(0.14, 0.28);
 glVertex2f(0.14, 1.0);

glEnd();
glBegin(GL_LINES);

 glVertex2f(0.299, 0.575);
 glVertex2f(0.885, 0.575);

glEnd();
glBegin(GL_LINES);
glVertex2f(0.3, 0.6);
 glVertex2f(0.299, 0.575);
 glEnd();
glBegin(GL_LINES);

glVertex2f(0.0, 0.0);
 glVertex2f(0.3, 0.6);
 glEnd();
 glBegin(GL_LINES);

glVertex2f(0.0, 0.02);
 glVertex2f(0.13, 0.284);
 glEnd();

glBegin(GL_LINES);
 glVertex2f(0.15, 0.3);
 glVertex2f(0.15, 1.0);

glEnd();
glBegin(GL_LINES);
 glVertex2f(0.15, 0.32);
 glVertex2f(0.29, 0.6);

glEnd();

glBegin(GL_LINES);

 glVertex2f(0.29, 0.6);
 glVertex2f(0.29, 1.0);

glEnd();

glBegin(GL_LINES);


 glVertex2f(0.13, 0.284);
 glVertex2f(0.13, 1.0);


glEnd();
glBegin(GL_LINES);


 glVertex2f(0.13, 0.284);
 glVertex2f(0.14, 0.28);


glEnd();




}

void thy_floor()
{

    glClear(GL_COLOR_BUFFER_BIT);



//thigh glass left-floor border
glColor3f(0.752941,0.752941,0.752941);

glBegin(GL_POLYGON);

 glVertex2f(0.0, 0.02);
 glVertex2f(0.13, 0.284);
 glVertex2f(0.14, 0.28);
 glVertex2f(0.0, 0.0);


glEnd();



//thy right-long-height

glColor3f(0.658824,0.658824,0.658824);

glBegin(GL_POLYGON);

  glVertex2f(0.29, 0.6);
  glVertex2f(0.29, 1.0);
   glVertex2f(0.3, 1.0);
 glVertex2f(0.3, 0.6);


glEnd();




}

void cactus()
{
     	float angle = 0.0;
     	glColor3ub(50,205,50);                                                                                                                                                                                                                  ;
    	glBegin(GL_POLYGON);

		for(int i = 0; i < 100; i++)
		{
			angle = 2 * PI * i / 100;
			glVertex2f (cos(angle) * 0.013, sin(angle) * 0.028);

		}
		glEnd();
}
void floor_bed_carpet()

{

    glColor3f(fr,fg,fy);
    glBegin(GL_POLYGON);

  glVertex2f(0.01, 0.0);
  glVertex2f(0.3, 0.575);
  glVertex2f(1.0, 0.575);
 glVertex2f(1.0, 0.0);


glEnd();




//FLOOR_BORDER_ROOM
glBegin(GL_POLYGON);

  glVertex2f(0.3, 0.6);
  glVertex2f(1.0, 0.6);
  glVertex2f(1.0, 0.575);
 glVertex2f(0.299, 0.575);


glEnd();

//Under Thy glass floor border
 glBegin(GL_POLYGON);
 glVertex2f(0.0, 0.0);
 glVertex2f(0.3, 0.6);
 glVertex2f(0.299, 0.575);
 glVertex2f(0.019, 0.0);

glEnd();



//room_wall
glColor3f(wr,wg,wy);
glBegin(GL_POLYGON);

  glVertex2f(0.3, 0.6);
  glVertex2f(0.3, 1.0);
  glVertex2f(1.0, 1.0);
 glVertex2f(1.0, 0.6);


glEnd();




   //sides_of_door

   //glColor3f(0.69,0.318039,0.026078);
    glColor3ub(139,69,19);
    glBegin(GL_POLYGON);
    glVertex2f(0.885,0.575);
    glVertex2f(0.885,0.97);
    glVertex2f(1.0,0.97);
    glVertex2f(1.0,0.575);
    glEnd();

    //back_of_door
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.90,0.575);
    glVertex2f(0.90,0.95);
    glVertex2f(0.99,0.95);
    glVertex2f(0.99,0.575);
    glEnd();



}

void door()
{



    glColor3f(0.7f, 0.40f, 0.1f);
    glBegin(GL_POLYGON);
    glVertex2f(0.90,0.575);
    glVertex2f(0.90,0.95);
    glVertex2f(0.99,0.95);
    glVertex2f(0.99,0.575);
    glEnd();


    //door_side_balancer
    glColor3f(sr,sg,sy);
    glBegin(GL_POLYGON);
    glVertex2f(0.895,0.74);
    glVertex2f(0.895,0.78);
    glVertex2f(0.90,0.78);
    glVertex2f(0.90,0.74);

    glEnd();





}

void doorknob()
{


     glColor3ub(pr,pg,py);
	float angle = 0.0                                                                                                                                                                                                                      ;
    	glBegin(GL_POLYGON);

		for(int i = 0; i < 100; i++)
		{
			angle = 2 * PI * i / 100;
			glVertex2f (cos(angle) * 0.007, sin(angle) * 0.015);

		}

	glEnd();
}

void drawstring(float x, float y, float z, char *string)
{
    char *ct;
    glRasterPos3f(x,y,z);

    for(ct=string; *ct!='\0'; ct++)
    {

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, *ct);
    }
}
void TV()
{
    //TV_SIDE
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.34,0.78);
    glVertex2f(0.34,0.89);
    glVertex2f(0.46,0.89);
    glVertex2f(0.46,0.78);

    glEnd();
    glColor3f(1.0,1.0,1.0);
    drawstring(0.389, 0.79, 0.0, "SONY");
    //TV_Sky
    glColor3ub(s1,s2,s3);
    glBegin(GL_POLYGON);
    glVertex2f(0.345,0.8045);
    glVertex2f(0.345,0.88);
    glVertex2f(0.455,0.88);
    glVertex2f(0.455,0.8045);

    glEnd();


    //TV_field
    glColor3ub(a,b,c);
    glBegin(GL_POLYGON);
    glVertex2f(0.345,0.8045);
    glVertex2f(0.345,0.84);
    glVertex2f(0.455,0.84);
    glVertex2f(0.455,0.8045);

    glEnd();

    //TV_Screen
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.35,0.860);
    glVertex2f(0.35,0.875);
    glVertex2f(0.36,0.875);
    glVertex2f(0.36,0.860);


    glEnd();
    glColor3f(a1,b1,c1);
    drawstring(0.352, 0.862, 0.0, "32");


    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2f(0.415,0.84);
    glVertex2f(0.415,0.87);
    glEnd();
    glBegin(GL_LINES);

    glVertex2f(0.415,0.87);
    glVertex2f(0.385,0.87);
    glEnd();
    glBegin(GL_LINES);

    glVertex2f(0.385,0.87);
    glVertex2f(0.385,0.84);
    glEnd();
    //flower-pot


    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.515,0.575);
    glVertex2f(0.51,0.62);
    glVertex2f(0.54,0.62);
    glVertex2f(0.535,0.575);
    glEnd();


}

void TV_stand()
{
    //whole_Box
    glColor3ub(103, 35, 0);
    glBegin(GL_POLYGON);
    glVertex2f(0.315,0.575);
    glVertex2f(0.315,0.7);
    glVertex2f(0.5,0.7);
    glVertex2f(0.5,0.575);

    glEnd();
 // left_shelf
    glColor3ub(48,0,0);
   glBegin(GL_LINES);
   glVertex2f(0.39, 0.575);
  glVertex2f(0.39, 0.7);
  glEnd();
   glBegin(GL_LINES);
   glVertex2f(0.355, 0.575);
  glVertex2f(0.355, 0.7);
  glEnd();
  	float angle = 0.0;
   glColor3ub(212,175,55);
	glBegin(GL_POLYGON);

		for(int i = 0; i < 100; i++)
		{
			angle = 2 * PI * i / 100;
			glVertex2f (cos(angle) * 0.002, sin(angle) * 0.01);

		}

	glEnd();
  //desks
  glColor3ub(48,0,0);
  glBegin(GL_LINES);
  glVertex2f(0.39, 0.63);
  glVertex2f(0.5, 0.63);
  glEnd();


  glColor3ub(212,175,55);
    glBegin(GL_POLYGON);
    glVertex2f(0.437,0.641);
    glVertex2f(0.437,0.65);
    glVertex2f(0.448,0.65);
    glVertex2f(0.448,0.641);

    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.437,0.585);
    glVertex2f(0.437,0.595);
    glVertex2f(0.448,0.595);
    glVertex2f(0.448,0.585);

    glEnd();

    //cactus_spikes
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2f(0.515,0.63);
    glVertex2f(0.51,0.64);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.515,0.64);
    glVertex2f(0.51,0.65);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.517,0.647);
    glVertex2f(0.515,0.658);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.521,0.649);
    glVertex2f(0.521,0.66);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.525,0.6495);
    glVertex2f(0.525,0.662);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.529,0.649);
    glVertex2f(0.5295,0.655);
    glEnd();
      glBegin(GL_LINES);
    glVertex2f(0.521,0.64);
    glVertex2f(0.525,0.63);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.525,0.63);
    glVertex2f(0.526,0.64);
    glEnd();
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2f(0.535,0.64);
    glVertex2f(0.53,0.63);
    glEnd();


}

void bed()
{
    //bed side_wood
    glColor3ub(103, 35, 0);
    glBegin(GL_POLYGON);
    glVertex2f(0.6,0.1);
    glVertex2f(0.6,0.2);
    glVertex2f(1.0,0.2);
    glVertex2f(1.0,0.1);

    glEnd();
    //bed_below_stand
    glColor3ub(95, 30, 0);
    glBegin(GL_POLYGON);
    glVertex2f(0.63,0.03);
    glVertex2f(0.62,0.1);
    glVertex2f(0.66,0.1);
    glVertex2f(0.65,0.03);
    glEnd();

    //edge
    glBegin(GL_POLYGON);
    glVertex2f(0.6,0.2);
    glVertex2f(0.64,0.42);
    glVertex2f(1.0,0.42);
    glVertex2f(1.0,0.2);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(0.636,0.4);
    glVertex2f(0.64,0.425);
    glVertex2f(1.0,0.425);
    glVertex2f(1.0,0.4);
    glEnd();



    //toshok
    glColor3ub(240,210,160);
    glBegin(GL_POLYGON);
    glVertex2f(0.81,0.2);
    glVertex2f(0.81,0.42);
    glVertex2f(1.0,0.42);
    glVertex2f(1.0,0.2);
    glEnd();

    glColor3ub(32,178,170);
    glBegin(GL_POLYGON);
    glVertex2f(0.79,0.2);
    glVertex2f(0.79,0.42);
    glVertex2f(0.795,0.423);
    glVertex2f(0.797,0.426);
    glVertex2f(0.799,0.427);
    glVertex2f(0.80,0.428);
    glVertex2f(0.804,0.4285);
    glVertex2f(0.81,0.42);
    glVertex2f(0.81,0.2);
    glEnd();

    glColor3ub(64,224,208);
    glBegin(GL_POLYGON);
    glVertex2f(0.61,0.2);
    glVertex2f(0.65,0.42);
    glVertex2f(0.79,0.42);
    glVertex2f(0.79,0.2);
    glEnd();




}

void carpet()

{
glColor3ub(178,34,34);
  glBegin(GL_POLYGON);
  glVertex2f(0.9, 0.57);
  glVertex2f(0.99, 0.57);
  glVertex2f(0.98, 0.5);
 glVertex2f(0.87, 0.5);
glEnd();
glColor3ub(0,0,0);
  glBegin(GL_POLYGON);
  glVertex2f(0.9, 0.57);
  glVertex2f(0.979, 0.5);
 glVertex2f(0.871, 0.5);


glEnd();

   glDisable(GL_LIGHTING);
    //full
    glColor3ub(219,112,147);
    glBegin(GL_POLYGON);
    glVertex2f(0.11,0.15);
    glVertex2f(0.28,0.50);
    glVertex2f(0.4,0.48);
    glVertex2f(0.28,0.11);
    glEnd();
    //border
    glColor3ub(219,1,147);
    glBegin(GL_POLYGON);
    glVertex2f(0.11,0.15);
    glVertex2f(0.12,0.17);
    glVertex2f(0.286,0.13);
    glVertex2f(0.28,0.11);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(0.272,0.485);
    glVertex2f(0.28,0.50);
    glVertex2f(0.4,0.48);
    glVertex2f(0.394,0.465);
    glEnd();
    glBegin(GL_POLYGON);




}

void shadow()
{
    glColor3f(1.0,1.0,0.0);
    //glColor4f(0.95f, 0.95f, 0.0f,0.19);
    glColor4f(shr,shg, 0.0f,0.08);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.3,0.575);
    glVertex2f(0.5,0.0);
    glVertex2f(0.02,0.0);
    glEnd();
}

void clock()
{

    glColor3ub(218,165,32);
    glBegin(GL_POLYGON);
    glVertex2f(0.615,0.82);
    glVertex2f(0.615,0.74);
    glVertex2f(0.641,0.705);
    glVertex2f(0.665,0.74);
    glVertex2f(0.665,0.82);


    glEnd();

    glColor3ub(205,133,63);
    glBegin(GL_POLYGON);
    glVertex2f(0.62,0.8);
    glVertex2f(0.61,0.83);
    glVertex2f(0.61,0.855);
    glVertex2f(0.625,0.88);
    glVertex2f(0.655,0.88);
    glVertex2f(0.67,0.855);
    glVertex2f(0.67,0.83);
    glVertex2f(0.66,0.8);

    glEnd();
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.621,0.795);
    glVertex2f(0.621,0.74);
    glVertex2f(0.64,0.715);
    glVertex2f(0.66,0.74);
    glVertex2f(0.66,0.795);

    glEnd();






}

void clock2()
{

    glColor3f(1.0,1.0,1.0);
	float angle = 0.0;                                                                                                                                                                                                                      ;
    	glBegin(GL_POLYGON);

		for(int i = 0; i < 100; i++)
		{
			angle = 2 * PI * i / 100;
			glVertex2f (cos(angle) * 0.020, sin(angle) * 0.028);

		}

	glEnd();



}
void clock3()
{

    glColor3f(0.0,0.0,0.0);
	float angle = 0.0;                                                                                                                                                                                                                      ;
    	glBegin(GL_POLYGON);

		for(int i = 0; i < 100; i++)
		{
			angle = 2 * PI * i / 100;
			glVertex2f (cos(angle) * 0.002, sin(angle) * 0.004);

		}

	glEnd();


}


void clock4()
{
        glPushMatrix();
    glColor3ub(0,0,0);
    glTranslatef(0.637f,0.795f,0.0f);
    //glutSolidSphere(3,1500,1500);

    glRotatef(_angle3, 0.0f, 0.0f,1.0f);
    glTranslatef(-0.637f,-0.795f,0.0f);
    glColor3ub(205,133,63);
    glBegin(GL_POLYGON);
    glVertex2f(0.637,0.795);
    glVertex2f(0.637,0.75);
    glVertex2f(0.643,0.75);
    glVertex2f(0.643,0.795);


    glEnd();

        glColor3ub(218,165,32);
	float angle = 0.0;


	    glTranslatef(0.64f,0.75f,0.0f);                                                                                                                                                                                                                 ;
    	glBegin(GL_POLYGON);

		for(int i = 0; i < 100; i++)
		{
			angle = 2 * PI * i / 100;
			glVertex2f (cos(angle) * 0.005, sin(angle) * 0.010);

		}

	glEnd();
}


void tubelight()
{
    glColor3ub(128,128,128);
    glBegin(GL_POLYGON);
    glVertex2f(0.57,0.94);
    glVertex2f(0.57,0.98);
    glVertex2f(0.72,0.98);
    glVertex2f(0.72,0.94);
    glEnd();

    glColor3f(tur,tug,tub);
    glBegin(GL_POLYGON);
    glVertex2f(0.57,0.955);
    glVertex2f(0.57,0.965);
    glVertex2f(0.72,0.965);
    glVertex2f(0.72,0.955);
    glEnd();


    glColor3ub(99,99,99);
    glBegin(GL_POLYGON);
    glVertex2f(0.57,0.94);
    glVertex2f(0.57,0.98);
    glVertex2f(0.58,0.98);
    glVertex2f(0.58,0.94);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(0.71,0.94);
    glVertex2f(0.71,0.98);
    glVertex2f(0.72,0.98);
    glVertex2f(0.72,0.94);
    glEnd();


    glColor4f(thr,thg,thb,rr);
    glBegin(GL_POLYGON);
    glVertex2f(0.57,0.955);
    glVertex2f(0.55,0.915);
    glVertex2f(0.72,0.955);
    glVertex2f(0.74,0.915);
    glEnd();
}

void clock_hands()
{
    glLineWidth(3.0f);
    glPushMatrix();
    glColor3ub(0,0,0);
    glTranslatef(0.64f,0.84f,0.0f);
    //glutSolidSphere(3,1500,1500);

    glRotatef(_angle2, 0.0f, 0.0f,1.0f);
    glTranslatef(-0.64f,-0.84f,0.0f);
    glBegin(GL_LINES);
	glVertex2f(0.64,0.84);
	glVertex2f(0.64,0.855);
	glEnd();
	glPopMatrix();


    glPushMatrix();
    glColor3ub(0,0,0);
    glTranslatef(0.64f,0.84f,0.0f);
    //glutSolidSphere(3,1500,1500);

    glRotatef(_angle1, 0.0f, 0.0f,1.0f);
    glTranslatef(-0.64f,-0.84f,0.0f);
    glBegin(GL_LINES);
    glVertex2f(0.64f,0.84f);
    glVertex2f(0.64f,0.858f);

    glEnd();




    glPopMatrix();
    glLineWidth(1.0f);
}

void moon1()
{
    glColor3ub(mr1,mg1,mb1);
	float angle = 0.0                                                                                                                                                                                                                      ;
    	glBegin(GL_POLYGON);

		for(int i = 0; i < 100; i++)
		{
			angle = 2 * PI * i / 100;
			glVertex2f (cos(angle) * 0.015, sin(angle) * 0.027);

		}

	glEnd();

}
void moon2()
{
    glColor3ub(mr2,mg2,mb2);
	float angle = 0.0                                                                                                                                                                                                                      ;
    	glBegin(GL_POLYGON);

		for(int i = 0; i < 100; i++)
		{
			angle = 2 * PI * i / 100;
			glVertex2f (cos(angle) * 0.015, sin(angle) * 0.027);

		}

	glEnd();

}
void star()
{
    glColor3ub(str,stg,stb);
	float angle = 0.0                                                                                                                                                                                                                      ;
    	glBegin(GL_POLYGON);

		for(int i = 0; i < 100; i++)
		{
			angle = 2 * PI * i / 100;
			glVertex2f (cos(angle) * 0.001, sin(angle) * 0.002);

		}

	glEnd();

}
void update2(int value) {


    if(_angle3 == -15.0)
    {
        _angle3 = +15.0;


    }
    else if(_angle3 == +15.0)
    {
        _angle3 = -15.0;
    }

	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(1050, update2, 0); //Notify GLUT to call update again in 25 milliseconds
}
void update3() {
 //Notify GLUT that the display has changed

        r=0;
        g=0;
        y=0;
        rw=1.0;
        gw=1.0;
        yw=0.0;
        rw2=0.688824;
        gw2=0.68824;
        yw2=0.68824;
        nr=0.90;
        ng=0.90;
        ny=0.90;
        fr=0.74;
        fg=0.74;
        fy=0.74;
        wr=0.85;
        wg=0.85;
        wy=0.85;
        xx -= 0.0075f;
        br2=255;
        bg2=255;
        bb2=0;
        br3=255;
        bg3=255;
        bb3=0;
        shr=1.1f;
        shg=1.1f;
        mr1=0;
        mg1=0;
        mb1=0;
        mr2=255;
        mg2=255;
        mb2=255;
        str=255;
        stg=255;
        stb=255;
        ar=169;
        ag=163;
        ab=87;
        br=238;
        bg=232;
        bb=170;
        thr=0.85;
        thg=0.85;
        thb=0.85;
        evr=0;
        evg=0;
        evb=0;

        glutPostRedisplay();


    }
void update5()
    {

        r=176;
        g=224;
        y=230;
        rw=0.788824;
        gw=0.78824;
        yw=0.78824;
        rw2=0.788824;
        gw2=0.78824;
        yw2=0.78824;
        nr=0.90;
        ng=0.90;
        ny=0.90;
        nr=0.96;
        ng=0.96;
        ny=0.96;
        fr=0.95;
        fg=0.95;
        fy=0.95;
        wr=1.0;
        wg=1.0;
        wy=1.0;
        br2 =240;
        bg2 =248;
        bb2 =255;
        br3=240;
        bg3=248;
        bb3=255;
        shr=0.0;
        shg=0.0;
        mr1=176;
        mg1=224;
        mb1=230;
        mr2=176;
        mg2=224;
        mb2=230;
        str=176;
        stg=224;
        stb=230;
         ar=240;
          ag=248;
          ab=255;
            br=240;
           bg=248;
          bb=255;
          thr=1.0;
          thg=1.0;
          thb=1.0;
                  evr=176;
        evg=224;
        evb=230;


        glutPostRedisplay();

    }


	//glutTimerFunc(3000, update3, 0); //Notify GLUT to call update again in 25 milliseconds


void update4(int value) {

    _angle1-=2.0f;
    if(_angle1 > 360.0)
    {
        _angle1-=360;
    }

	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(40, update4, 0); //Notify GLUT to call update again in 25 milliseconds
}

void update6(int value) {

    _angle2-=2.0f;
    if(_angle2 > 360.0)
    {
        _angle2-=360;
    }

    if(_angle2==-100)
    {
        evr=255;
        evg=255;
        evb=102;
        r=75;
        g=0;
        b=130;

        nr=0.90;
        ng=0.90;
        ny=0.90;
        fr=0.74;
        fg=0.74;
        fy=0.74;
        wr=1.0;
        wg=1.0;
        wy=1.0;
        xx -= 0.0075f;
        shr=1.1f;
        shg=1.1f;
        mr1=105;
        mg1=105;
        mb1=105;
        mr2=105;
        mg2=105;
        mb2=105;
        str=105;
        stg=105;
        stb=105;
        ar=169;
        ag=163;
        ab=87;
        br=238;
        bg=232;
        bb=170;
        thr=0.85;
        thg=0.85;
        thb=0.85;
        a=0;
        b=0;
        c=0;


    }
       if(_angle2 == -200)
    {

        update3();
        //PlaySound(TEXT("dong"), NULL, SND_ALIAS | SND_APPLICATION);
        //PlaySound(TEXT("dong.wav"),NULL,SND_SYNC);


    }
    if(_angle2 == -360)
    {

        update5();
        _angle2=0.0;
    }
	//glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(150, update6, 0); //Notify GLUT to call update again in 25 milliseconds
}
void display(void)
{



    thy_floor();

    floor_bed_carpet();
    glPushMatrix();
    glTranslatef(0.525,0.63,0);
    cactus();
    glPopMatrix();
    TV();
    TV_stand();
    bed();
    shadow();
    carpet();
    clock();

    tubelight();


    clock4();


    glPopMatrix();
    glPushMatrix();
    skybox();

    glTranslatef(0.22,0.95,0);
    moon2();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.21,0.95,0);
    moon1();
    glPopMatrix();
    glPushMatrix();

    //Stars
    glPushMatrix();
    glTranslatef(0.21,0.90,0);
    star();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.17,0.89,0);
    star();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.18,0.95,0);
    star();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.09,0.98,0);
    star();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.05,0.96,0);
    star();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.27,0.98,0);
    star();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.12,0.90,0);
    star();
    glPopMatrix();
    //starts end

    //door
    glPushMatrix();
    glTranslatef(t,0.0,0.0);
    door();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.98,0.75,0);
    doorknob();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.358,0.636,0);
    TV_stand();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.64,0.84,0);
    clock2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.64,0.84,0);
    clock3();
    glPopMatrix();


    /*glPushMatrix();
    clock5();
    glPopMatrix();*/


    clock_hands();






	 glFlush();


     //Sleep(2000);

	 //glutPostRedisplay();
	 //glutTimerFunc(3000, update3, 0);


}


void spe_key(int key, int x, int y)
{

	switch (key) {

	    //for_Door
		case GLUT_KEY_LEFT:
                if(f==0)
		        {
		            t-=0.09;
		            f=1;
		            if(r==176)
                    {
		            sr=1.0;
		            sg=1.0;
		            sy=1.0;
                    }
                    if(r==0)
                    {
                     sr=0.85;
                     sg=0.85;
                     sy=0.85;
                    }
		            pr=0.7;
		            pg=0.40;
		            py=0.1;

		        }
		        else
                {
                    sr=0.1;
                    sg=0.0;
                    sy=0.0;
                    pr=218;
                    pg=165;
                    py=32;
                    t+=0.09;
                    f=0;


                }
                 glutPostRedisplay();


				break;
        case GLUT_KEY_RIGHT:
             //For_TV
				if(f2==0)
                {
                    s1=135;
                    s2=206;
                    s3 =235;
                    a=124;
                    b=252;
                    c=0;
                    a1=1.0;
                    b1=1.0;
                    c1=1.0;
                    f2=1;
                }
                else
                {
                    s1=0.0;
                    s2=0.0;
                    s3=0.0;
                    a=0.0;
                    b=0.0;
                    c=0.0;
                    a1=0.0;
                    b1=0.0;
                    c1=0.0;
                    f2=0;


                }
				glutPostRedisplay();
				break;
		//for tubelight
    case GLUT_KEY_UP:
                if(tub==1.0 )
		        {
		            tur=1.0;
		            tug=1.0;
		            tub=0.0;
                    fr=0.95;
                    fg=0.95;
                    fy=0.95;
                    wr=1.0;
                    wg=1.0;
                    wy=1.0;
                    thr=1.0;
                    thg=1.0;
                    thb=0.0;
                    rr=0.3;



		        }
               else if(r==176)
               {

                  if(tub==1.0)
                  {
                    tur=1.0;
                    tug=1.0;
                    tub=1.0;
                    fr=0.95;
                    fg=0.95;
                    fy=0.95;
                    wr=1.0;
                    wg=1.0;
                    wy=1.0;
                    thr=1.0;
                    thg=1.0;
                    thb=0.0;
                    rr=0.03;
                  }
                  if(tub==0.0)
                  {


                    tur=1.0;
                    tug=1.0;
                    tub=1.0;
                    fr=0.95;
                    fg=0.95;
                    fy=0.95;
                    wr=1.0;
                    wg=1.0;
                    wy=1.0;
                    thr=1.0;
                    thg=1.0;
                    thb=1.0;
                    rr=0.09;
                  }

                }
               else if(r==75)
               {

                  if(tub==1.0)
                  {
                    tur=1.0;
                    tug=1.0;
                    tub=1.0;
                    fr=0.95;
                    fg=0.95;
                    fy=0.95;
                    wr=1.0;
                    wg=1.0;
                    wy=1.0;
                    thr=1.0;
                    thg=1.0;
                    thb=0.0;
                    rr=0.03;
                  }
                  if(tub==0.0)
                  {


                    tur=1.0;
                    tug=1.0;
                    tub=1.0;
                    fr=0.74;
                    fg=0.74;
                    fy=0.74;
                    wr=1.0;
                    wg=1.0;
                    wy=1.0;
                    thr=1.0;
                    thg=1.0;
                    thb=1.0;
                    rr=0.09;
                  }

                }
               else if(r==0)
               {
                if(tub==1.0)
                {
                    tur=1.0;
		            tug=1.0;
		            tub=0.0;
                    fr=0.95;
                    fg=0.95;
                    fy=0.95;
                    wr=1.0;
                    wg=1.0;
                    wy=1.0;
                    thr=1.0;
                    thg=1.0;
                    thb=0.0;
                    rr=0.3;
                }
                if(tub==0.0)
                {

                    tur=1.0;
                    tug=1.0;
                    tub=1.0;
                    fr=0.74;
                    fg=0.74;
                    fy=0.74;
                    wr=0.85;
                    wg=0.85;
                    wy=0.85;
                    thr=0.85;
                    thg=0.85;
                    thb=0.85;
                    rr=0.09;
                }
               }



                 glutPostRedisplay();


				break;
	  default:
			break;
	}
}

int main(int iArgc , char** cppArgv)
{
glutInit(&iArgc , cppArgv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);


glutInitWindowSize(250,250);
glutInitWindowPosition(200,200);
glutCreateWindow("Bedroom_Day-Night");


Initialize();


glutDisplayFunc(display);
glutSpecialFunc(spe_key);

glutTimerFunc(40, update4, 0);//hour
glutTimerFunc(150, update6, 0);//sec
glutTimerFunc(1050, update2, 0);//
PlaySound(TEXT("clock.wav"), NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
glutMainLoop();
return 0;
}
//shadow er jonno 4f....last ta tranparecy add kore
//drawstring user defined function
//z-axis e rotate
//clock-4 pendulam
//update-2: pendulam movement-1050 microsec por por
//update-3, night colours, update-5-day colours
//updat-4, sec er kata rotate (40 ms), update-6 hour er kata and rel with day-night
