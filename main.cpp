#include<windows.h>
#include<gl/glut.h>
#define GLUT_DISABLE_ATEXIT_HACK;


#include<GL\glut.h>
#include <GL/glu.h>
#include<math.h>
#include <stdlib.h>
#include<stdio.h>
#include<mmsystem.h>

#define PI 3.1416

void display1();
void display2();
void display3();
void display4();
void display5();
void display6();

void display5_1();
void display5_2();
void display5_3();
void display5_4();
void display6_1();
void display6_2();
void display6_3();
void update6(int value);


void light();
void ship();
void water4();
void water5();
void water6();
void plane();
void plane6();
void display1_sea();
void updateB1(int value);
void updateB2(int value);
void update(int value);

void keys1(unsigned char key,int x,int y);
void keys2(unsigned char key,int x,int y);
void keys3(unsigned char key,int x,int y);
void keys4(unsigned char key,int x,int y);
void keys5(unsigned char key,int x,int y);
void keys6(unsigned char key,int x,int y);

int i,j,k;
int id1,id2,id3,id4,id5,id6,id7;
float moveB1 = 0.0f;
float moveB2 = 0.0f;
float moves1 = 0.0f;
float speed = 0.02f;
GLint a=0,b=0,w=0,c=0;
GLfloat sun_spin=0, sun_x=0, sun_y=0;
GLfloat ax=0,bx=0,cx=0,dx=0,str=500.0,mn=500.0;
GLfloat sr=0.0,sg=0.749,sb=1.0;
GLfloat spin = 0.0;
GLfloat slide_cloudL, slide_cloudR, move_cloud;

GLint a5=0,b5=0,c5=0,d5=130,e5=-100,f5=-5,g5=0,h5=0,x5=100,i5=0,w5=0;
GLint a6=0,b6=0,c6=0,d6=130,e6=-100,f6=-5,g6=0,h6=0,x6=100,i6=0,w6=0;

GLfloat theta=0.0;


char *str1="UNDER THE GUIDANCE OF :";
char *str2="MR PRADEEP KANCHAN";
char *str3="ASSISTANT PROFESSOR GD-III";
char *str4="DEPT OF CSE";
char *str5="NMAM INSTITUTE OF TECHNOLOGY";
char *str6="NITTE KARKALA";
char *str7="NISHMITHA THARANATH SHETTIGAR";
char *str8="PRAHALYA MATHIAS";
char *str9="4NM19CS119";
char *str10="4NM19CS131";
char *str11="For decades, the Atlantic Ocean's fabled Bermuda Triangle has captured the  ";
char *str12="human imagination with unexplained disappearances of ships, planes, and people.";
char *str13="It has always been a mysterious place to humans, and when foul weather or ";
char *str14="poor navigation is involved, it can be a very deadly place. ";
char *str15="Some speculate that unknown and mysterious forces account for the unexplained ";
char *str16="disappearances, such as extraterrestrials capturing humans for study; the ";
char *str17="influence of the lost continent of Atlantis; and other whimsical ideas. ";


char *str21="| Click 'n' to continue |";
char *str22="| Click 'b' to go back |";


void init()
{
    glClearColor(0,0.8,0.81,1);
    glMatrixMode(GL_PROJECTION);
    glOrtho (0, 1000, 600, 0, -1.0, 1.0);
}
void myinit(void)
{
	glClearColor(0.1, 0.5, 1,0);
		glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 1000.0, 0.0, 500.0);
}
void init3()
{
	glClearColor(0.1f,0.1f,0.1f,0.1f);
	glColor3f(1.0,0.0,0.0);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,999.0,0.0,799.0);

}


void init4()
{
    glClearColor(0,1,0,0);
    glMatrixMode(GL_PROJECTION);
   gluOrtho2D(-12,38,-19,14);

}

void init5()
{
	glClearColor(1,0.9,0.6,0);
	glColor3f(1.0,0.0,0.0);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,999.0,0.0,799.0);

}




void display1()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glRasterPos2f(400.0,450.0);
    for(i=0; i<strlen(str1); i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str1[i]);
    }

    glColor3f(0.0,0,1);
    glRasterPos2f(400.0,480.0);
    for(i=0; i<strlen(str2); i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str2[i]);
    glutPostRedisplay();


    glColor3f(0.0,0,1);
    glRasterPos2f(400.0,500.0);
    for(i=0; i<strlen(str3); i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str3[i]);
    glutPostRedisplay();

    glColor3f(0.0,0,1);
    glRasterPos2f(400.0,520.0);
    for(i=0; i<strlen(str4); i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str4[i]);
    glutPostRedisplay();

    glColor3f(0.0,0,1);
    glRasterPos2f(400.0,540.0);
    for(i=0; i<strlen(str5); i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str5[i]);
    glutPostRedisplay();

    glColor3f(0.0,0,1);
    glRasterPos2f(400.0,560.0);
    for(i=0; i<strlen(str6); i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str6[i]);
    glutPostRedisplay();

    glRasterPos2f(150.0,300.0);
    for(i=0; i<strlen(str7); i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str7[i]);
    }
    glRasterPos2f(150.0,340.0);
    for(i=0; i<strlen(str8); i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str8[i]);
    }
    glRasterPos2f(630.0,300.0);
    for(i=0; i<strlen(str9); i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str9[i]);
    }
    glRasterPos2f(630.0,340.0);
    for(i=0; i<strlen(str10); i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str10[i]);
    }
    glRasterPos2f(690.0,590.0);
    for(i=0; i<strlen(str21); i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str21[i]);
    }


    glColor3f(0,0,0.239);
    glRasterPos2i(340,100);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'T');

    glRasterPos2i(360,100);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'H');

    glRasterPos2i(380,100);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'E');

    glRasterPos2i(420,100);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'B');
    glRasterPos2i(440,100);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'E');
    glRasterPos2i(460,100);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'R');
    glRasterPos2i(480,100);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'M');

    glRasterPos2i(500,100);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'U');

    glRasterPos2i(520,100);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'D');

    glRasterPos2i(540,100);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'A');

    glRasterPos2i(580,100);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'T');

    glRasterPos2i(600,100);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'R');

    glRasterPos2i(620,100);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'I');

    glRasterPos2i(635,100);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'A');

    glRasterPos2i(660,100);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'N');

    glRasterPos2i(680,100);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'G');

    glRasterPos2i(700,100);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'L');

    glRasterPos2i(720,100);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'E');
    glColor3f(1.0,0.0,0.0);
    glLineWidth(1000);

    glBegin(GL_LINES);

    glVertex2i(740,90);
    glVertex2i(760,100);
    glEnd();
    glFlush();
}

void circle(float radius_x, float radius_y)
{
    int i = 0;
    float angle1 = 0.0;

    glBegin(GL_POLYGON);

    for(i = 0; i < 100; i++)
    {
        angle1 = 2 * PI * i / 100;
        glVertex3f (cos(angle1) * radius_x, sin(angle1) * radius_y, 0);
    }

    glEnd();
}
void circle(GLdouble rad)
{
    GLint points = 50;
    GLdouble delTheta = (2.0 * PI) / (GLdouble)points;
    GLdouble theta = 0.0;

    glBegin(GL_POLYGON);
    {
        for( i = 0; i <=50; i++, theta += delTheta )
        {
            glVertex2f(rad * cos(theta),rad * sin(theta));
        }
    }
    glEnd();
}
/// * Sun_Model **///
void Sun_Model(){
    glPushMatrix();
    glTranslatef(500,0,0);
    circle(30);
    glPopMatrix();

}
void Moving_Sun_Model(){
    glPushMatrix();
    glRotatef(-sun_spin, 0,0,-.009);
    Sun_Model();
    glPopMatrix();

}
///* Cloud_Model***///
void cloud_model_one(){

    glColor3f(1.25, 0.924, 0.930);

    ///Top_Left

    glPushMatrix();
    glTranslatef(320,210,0);
    circle(15);
    glPopMatrix();

    ///Top

    glPushMatrix();
    glTranslatef(340, 225, 0);
    circle(16);
    glPopMatrix();

    ///Right

    glPushMatrix();
    glTranslatef(360,210,0);
    circle(16);
    glPopMatrix();


    ///middle_Fill
    glPushMatrix();
    glTranslatef(355,210,0);
    circle(16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(350,210,0);
    circle(16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(345,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(340,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(335,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(330,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(325,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(320,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(315,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(310,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(305,204,0);
    circle(10);
    glPopMatrix();

    ///Fill End

}

void cloud_model_Two(){
    glColor3f(1.25, 0.924, 0.930);

    ///Left_Part
    glPushMatrix();
    glTranslatef(305,205,0);
    circle(10);
    glPopMatrix();

    ///Top

    glPushMatrix();
    glTranslatef(320,210,0);
    circle(15);
    glPopMatrix();

    ///Right_Part
    glPushMatrix();
    glTranslatef(334,207,0);
    circle(10);
    glPopMatrix();

    ///Bottom_Part
    glPushMatrix();
    glTranslatef(320,207,0);
    circle(10);
    glPopMatrix();



}

void cloud_model_Three(){
    glColor3f(1.25, 0.924, 0.930);

    ///Left_Part
    glPushMatrix();
    glTranslatef(300,200,0);
    circle(15);
    glPopMatrix();

    ///Top_Left

    glPushMatrix();
    glTranslatef(320,210,0);
    circle(15);
    glPopMatrix();

    ///Top
    glPushMatrix();
    glTranslatef(340,220,0);
    circle(16);
    glPopMatrix();

    ///Top_Right
    glPushMatrix();
    glTranslatef(360,210,0);
    circle(15);
    glPopMatrix();

    ///Right_Part
    glPushMatrix();
    glTranslatef(380,200,0);
    circle(15);
    glPopMatrix();

    ///Bottom_Right
    glPushMatrix();
    glTranslatef(360,190,0);
    circle(20);
    glPopMatrix();

    ///Bottom_Left
    glPushMatrix();
    glTranslatef(320,190,0);
    circle(20);
    glPopMatrix();

    ///Bottom
    glPushMatrix();
    glTranslatef(340,190,0);
    circle(20);
    glPopMatrix();




    ///Fill End

}
///* Hill_Model***///
void hill_big(){

    ///Hill
	glBegin(GL_POLYGON);
    glColor3f(0.38, 0.41, 0.36);
	glVertex2i(70, 70);
	glVertex2i(200, 225);
	glVertex2i(330, 70);

	glEnd();

	///Hill_Snow
    glBegin(GL_POLYGON);
    glColor3f(1.25, 0.924, 0.930);

	glVertex2i(200, 225);
	glVertex2i(230, 190);
	glVertex2i(220, 180);
	glVertex2i(200, 190);
	glVertex2i(190, 180);
	glVertex2i(170, 190);

	glEnd();

}
void hill_small(){
    ///Hill_Small
	glBegin(GL_POLYGON);
    glColor3f(0.11, 0.23, 0.36);
	glVertex2i(250, 100);
	glVertex2i(310, 175);
	glVertex2i(370, 100);

	glEnd();

    ///Hill_Small_Snow
	glBegin(GL_POLYGON);
    glColor3f(1.25, 0.924, 0.930);
    glVertex2i(290, 150);
	glVertex2i(310, 175);
	glVertex2i(330, 150);
	glVertex2i(325, 140);
	glVertex2i(310, 150);
	glVertex2i(300, 140);


	glEnd();
}
///* Tilla_Model *///
void Tilla_One_Model(){
    ///Tilla
	glBegin(GL_POLYGON);
	glColor3f(0.1, 1.293, 0.0);
	glVertex2i(125, 70);
	glVertex2i(150, 80);
	glVertex2i(160, 90);
	glVertex2i(170, 90);
	glVertex2i(180, 100);
	glVertex2i(190, 105);
	glVertex2i(200, 108);
	glVertex2i(300, 110);
	glVertex2i(300, 70);

	glEnd();

}



void Tilla_Two_Model(){

	glColor3f(0.1, 1.293, 0.0);
    /// Left_Part
    glPushMatrix();
    glTranslatef(430,90,0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(420,87,0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(410,80,0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(400,80,0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(390,70,0);
    circle(30);
    glPopMatrix();

    ///Right_Part
    glPushMatrix();
    glTranslatef(445,80,0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(455,75,0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(465,70,0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(470,65,0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(480,60,0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(485,55,0);
    circle(20);
    glPopMatrix();
}
void house(){
    ///House_Roof
	glBegin(GL_POLYGON);
    glColor3f(.990, 0.0, 0.0);
	glVertex2i(285, 105);
	glVertex2i(285, 130);
	glVertex2i(380, 115);
	glVertex2i(380, 105);

	glEnd();

    ///House_Roof_Shadow
	glBegin(GL_POLYGON);
    glColor3f(.890, 0.0, 0.0);
	glVertex2i(285, 105);
	glVertex2i(285, 120);
	glVertex2i(380, 105);
	glVertex2i(380, 105);

	glEnd();

    ///House_Fence
	glBegin(GL_POLYGON);
    glColor3f(.555, 1.0, 1.0);
	glVertex2i(290, 70);
	glVertex2i(290, 104);
	glVertex2i(375, 104);
	glVertex2i(375, 70);

	glEnd();

    ///House_Fence_Shadow
	glBegin(GL_POLYGON);
    glColor3f(.555, 0.924, 0.930);
	glVertex2i(310, 70);
	glVertex2i(350, 104);
	glVertex2i(375, 104);
	glVertex2i(375, 70);

	glEnd();

    ///House_Door
	glBegin(GL_POLYGON);
    glColor3f(0.38, 0.41, 0.36);
	glVertex2i(330, 70);
	glVertex2i(330, 100);
	glVertex2i(350, 100);
	glVertex2i(350, 70);

	glEnd();

    ///House_Window1
	glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
	glVertex2i(295, 75);
	glVertex2i(295, 90);
	glVertex2i(310, 90);
	glVertex2i(310, 75);

	glEnd();

    ///House_Window2
	glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
	glVertex2i(312, 75);
	glVertex2i(312, 90);
	glVertex2i(327, 90);
	glVertex2i(327, 75);

	glEnd();

    ///House_Window3
	glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
	glVertex2i(355, 75);
	glVertex2i(355, 90);
	glVertex2i(370, 90);
	glVertex2i(370, 75);

	glEnd();

    ///House_Small_Roof
	glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
	glVertex2i(250, 90);
	glVertex2i(257, 104);
	glVertex2i(290, 104);
	glVertex2i(290, 90);

	glEnd();

    ///House_Small_Fence
	glBegin(GL_POLYGON);
    glColor3f(.555, .724, .930);
	glVertex2i(255, 70);
	glVertex2i(255, 90);
	glVertex2i(290, 90);
	glVertex2i(290, 70);

	glEnd();

    ///House_Small_Door
	glBegin(GL_POLYGON);
    glColor3f(0.11, 0.23, 0.36);
	glVertex2i(260, 70);
	glVertex2i(260, 80);
	glVertex2i(285, 80);
	glVertex2i(285, 70);

	glEnd();


}
///* Field_Model *///
void field(){
    ///Field
	glBegin(GL_POLYGON);
    glColor3f(0.1, 0.5, 0.5);
	glVertex2i(0, 50);
	glVertex2i(0, 70);
	glVertex2i(1000, 70);
	glVertex2i(1000, 50);

	glEnd();


    ///Field_Shadow
	glBegin(GL_POLYGON);
	glColor3f(0.0, .110, 0.5);
	glVertex2i(0, 0);
	glVertex2i(0, 50);
	glVertex2i(1000, 50);
	glVertex2i(1000, 0);

	glEnd();
    glColor3b(0,0,0);
    glRasterPos2f(800.0,30.0);
    for(i=0; i<strlen(str21); i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str21[i]);
    }
     glRasterPos2f(800.0,20.0);
    for(i=0; i<strlen(str22); i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str22[i]);
    }
    glFlush();
}
///* Tree_Model *///
void Tree_Model_One(){


    glPushMatrix();
    glTranslatef(110,110,0);
    circle(15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(110,100,0);
    circle(15);
    glPopMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
	glVertex2f(109, 70);
	glVertex2f(109, 90);
	glVertex2f(111, 90);
	glVertex2f(111, 70);

    glEnd();

}
void Tree_Model_Two(){

    glPushMatrix();
    glTranslatef(130,130,0);
    circle(5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(125,126,0);
    circle(5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(135,126,0);
    circle(5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(130,125,0);
    circle(5);
    glPopMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
	glVertex2f(129, 110);
	glVertex2f(129, 124);
	glVertex2f(131, 124);
	glVertex2f(131, 110);

    glEnd();
}

void Tree_Model_Three(){


    glBegin(GL_POLYGON);

	glVertex2f(125, 123);
	glVertex2f(133, 145);
	glVertex2f(141, 123);

	glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
	glVertex2f(132, 110);
	glVertex2f(132, 124);
	glVertex2f(134, 124);
	glVertex2f(134, 110);

    glEnd();
}

void Sun(){
    glColor3f(1, 1, 0);
    glPushMatrix();
    Moving_Sun_Model();
    glPopMatrix();
}
///* Cloud_One_Model_One *///
void cloud_one(){
    glPushMatrix();
    glTranslatef(cx,-40,0);
    cloud_model_one();
    glPopMatrix();

}

///* Cloud_Two_Model_one *///

void cloud_two(){
    glPushMatrix();
    glTranslatef(bx+100,150,0);
    cloud_model_one();
    glPopMatrix();

}

///* Cloud_Three_Model_Two *///

void cloud_three(){
    glPushMatrix();
    glTranslatef(ax-80,80,0);
    cloud_model_Two();
    glPopMatrix();

}
///* Cloud_Four_Model_Two *///

void cloud_four(){
    glPushMatrix();
    glTranslatef(dx+300,125,0);
    cloud_model_Two();
    glPopMatrix();

}
///* Cloud_Five_Model_Three *///
void cloud_five(){

    glPushMatrix();
    glTranslatef(ax+-300,170,0);
    cloud_model_Three();
    glPopMatrix();
}
///* Cloud_Six_Model_Three *///
void cloud_six(){

    glPushMatrix();
    glTranslatef(cx+-500,20,0);
    cloud_model_Three();
    glPopMatrix();
}

///* House_One *///
void house_one(){
    glPushMatrix();
    glTranslatef(0,0,0);
    house();
    glPopMatrix();
}
///* House_Two *///
void house_two(){
    glPushMatrix();
    glTranslatef(450,0,0);
    house();
    glPopMatrix();
}



void Tilla(){

    glPushMatrix();
    glTranslatef(0,0,0);
    Tilla_One_Model();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0,0,0);
    Tilla_Two_Model();
    glPopMatrix();


    glColor3f(0.833, 1., 0.0);
    glPushMatrix();
    glTranslatef(380,0,0);
    Tilla_Two_Model();
    glPopMatrix();


}

void Tree(){
    glColor3f(0.533, 1.293, 0.0);
    glPushMatrix();
    glTranslatef(0,0,0);
    Tree_Model_One();
    glPopMatrix();

    glColor3f(0.533, 1.293, 0.0);
    glPushMatrix();
    glTranslatef(540,0,0);
    Tree_Model_One();
    glPopMatrix();

    glColor3f(0.533, 1.293, 0.0);
    glPushMatrix();
    glTranslatef(750,0,0);
    Tree_Model_One();
    glPopMatrix();

    glColor3f(0.533, 1.293, 0.0);
    glPushMatrix();
    glTranslatef(292,40,0);
    Tree_Model_One();
    glPopMatrix();

    glColor3f(0.533, 1.293, 0.0);
    glPushMatrix();
    glTranslatef(30,-20,0);
    Tree_Model_Two();
    glPopMatrix();

    glColor3f(0.533, 1.293, 0.0);
    glPushMatrix();
    glTranslatef(50,-10,0);
    Tree_Model_Two();
    glPopMatrix();

    glColor3f(0.533, 1.293, 0.0);
    glPushMatrix();
    glTranslatef(322,0,0);
    Tree_Model_Two();
    glPopMatrix();

    glColor3f(0.533, 1.293, 0.0);
    glPushMatrix();
    glTranslatef(350,-15,0);
    Tree_Model_Two();
    glPopMatrix();


    glColor3f(0.533, 1.293, 0.0);
    glPushMatrix();
    glTranslatef(90,-2,0);
    Tree_Model_Three();
    glPopMatrix();

    glColor3f(0.533, 1.293, 0.0);
    glPushMatrix();
    glTranslatef(125,0,0);
    Tree_Model_Three();
    glPopMatrix();
}


///* Sun_Move *///
void sun_move(){

        sun_spin = sun_spin + 0.02;

}
void move_right(){

    sun_move();


    ax = ax + .05;
    bx = bx + .08;
    cx = cx + .10;
    dx = dx + .15;

    glutPostRedisplay();
}



void mouse(int key, int state, int x, int y){
    switch (key)
    {
    case GLUT_LEFT_BUTTON:
        if (state == GLUT_DOWN)
        {
            glutIdleFunc(move_right);
        }
        break;
    case GLUT_MIDDLE_BUTTON:
    case GLUT_RIGHT_BUTTON:
        if (state == GLUT_DOWN)
        {
            glutIdleFunc(NULL);
        }
        break;
    default:
        break;
    }
}





void keys1(unsigned char key,int x,int y)
{

    if(key=='n')
    {
        glutDestroyWindow(id1);
        glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
        glutInitWindowSize(1360,700);
        glutInitWindowPosition(10,10);
        id2=glutCreateWindow("bermuda triangle-2");
        init();
        glutDisplayFunc(display2);
        glutKeyboardFunc(keys2);
        glutFullScreen();
    }

    else
    {
        glutDisplayFunc(display1);

    }
}

void display2()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(1000);
    glBegin(GL_LINES);
    glColor3f(0,0,1);
    glVertex2i(0,1000);
    glVertex2i(1000,0);
    glEnd();

    glColor3f(1.0,0,0);
    glRasterPos2f(200.0,210.0);
    for(i=0; i<strlen(str11); i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str11[i]);
    }
    glRasterPos2f(200.0,230.0);
    for(i=0; i<strlen(str12); i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str12[i]);
    }
    glRasterPos2f(200.0,250.0);
    for(i=0; i<strlen(str13); i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str13[i]);
    }
    glRasterPos2f(200.0,270.0);
    for(i=0; i<strlen(str14); i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str14[i]);
    }
    glRasterPos2f(200.0,300.0);
    for(i=0; i<strlen(str15); i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str15[i]);
    }
    glRasterPos2f(200.0,320.0);
    for(i=0; i<strlen(str16); i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str16[i]);
    }
    glRasterPos2f(200.0,340.0);
    for(i=0; i<strlen(str17); i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str17[i]);
    }


    glColor3b(0,0,0);
    glRasterPos2f(700.0,570.0);
    for(i=0; i<strlen(str21); i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str21[i]);
    }
     glRasterPos2f(700.0,590.0);
    for(i=0; i<strlen(str22); i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str22[i]);
    }
    glFlush();
}


void keys2(unsigned char key,int x,int y)

{

    if(key=='n')
    {


        glutDestroyWindow(id2);
        glutInitWindowSize(1360,700);
        glutInitWindowPosition(10,10);
        id3=glutCreateWindow("bermuda-3");

        myinit();
        glutDisplayFunc(display3);
        glutMouseFunc(mouse);
        glutKeyboardFunc(keys3);
        glutFullScreen();
        PlaySound(TEXT("C:\\Users\\user\\Desktop\\Projects\\6th Sem\\CG\\nibbi_pallu\\morning.wav"), NULL, SND_ASYNC);


    }
    else if(key=='b')
    {
         glutDestroyWindow(id2);
        glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
        glutInitWindowSize(1360,700);
        glutInitWindowPosition(10,10);
        id1=glutCreateWindow("bermuda triangle-1");
        init();
        glutDisplayFunc(display1);
        glutKeyboardFunc(keys1);
        glutFullScreen();

    }
    else
    {
        glutDisplayFunc(display2);

    }
}



void display3(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 1.0);

    Sun();
    Tilla();
    cloud_three();
    cloud_four();

    house_one();
    cloud_one();
    house_two();
    Tree();
    cloud_two();
    cloud_five();
    cloud_six();
    field();
    glRasterPos2f(700.0,570.0);
    for(i=0; i<strlen(str21); i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str21[i]);
    }
     glRasterPos2f(700.0,590.0);
    for(i=0; i<strlen(str22); i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str22[i]);
    }
	glFlush();
}

void keys3(unsigned char key,int x,int y)

{

    if(key=='n')
    {
        PlaySound(NULL,0,0);
         glutDestroyWindow(id3);
        glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
        glutInitWindowSize(1360,700);
        glutInitWindowPosition(10,10);
        id4=glutCreateWindow("bermuda-4");
     init4();
    //glutTimerFunc(20, updateB1, 0); //Boat 1
    glutTimerFunc(20, updateB2, 0);
    //glutTimerFunc(20, update, 0); //boat 2
        glutFullScreen();
        glutDisplayFunc(display4);
        glutMouseFunc(mouse);
        glutKeyboardFunc(keys4);
         PlaySound(TEXT("C:\\Users\\user\\Desktop\\Projects\\6th Sem\\CG\\nibbi_pallu\\ship_horn.wav"),  NULL, SND_ASYNC);

    }
    else if(key=='b')
    {
        PlaySound(NULL,0,0);
        glutDestroyWindow(id3);
        glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
        glutInitWindowSize(1360,700);
        glutInitWindowPosition(10,10);
        id2=glutCreateWindow("bermuda-2");
        init();
        glutDisplayFunc(display2);
        glutKeyboardFunc(keys2);
        glutFullScreen();

    }
    else
    {
        glutDisplayFunc(display3);

    }
}
void display4()
{
   glClear(GL_COLOR_BUFFER_BIT);
	//glColor3f(0,0,1.0);
	glClearColor(0,1,0,1);
//sea
     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(65,105,225);

    glVertex2f(38.0f,-19.0f);  /// right-down
    glVertex2f(38.0f,10.0f); /// right-top
    glVertex2f(-12.0f,-7.0f); /// left-top
    glVertex2f(-12.0f,-19.0f);  /// left-down
    glEnd();

  /*  //island
       glBegin(GL_POLYGON);
    glColor3ub(25,128,0);

    glVertex2f(1.0f, 0.0f); /// angle
    glVertex2f(-12.0f,0.0f); /// left-top
    glVertex2f(-12.0f,-5.0f);  /// left-down
    glEnd();
*/

     //ship



    glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
		glVertex2f(3.5,5.5);
		glVertex2f(3.5,8.5);
		glVertex2f(19.5,8.5);
		glVertex2f(19.5,5.5);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(1,5.5);
		glVertex2f(4,1);
		glVertex2f(19,1);
		glVertex2f(21.5,5.5);
	glEnd();
	glColor3f(0.7,0.4,0.2);
	glBegin(GL_POLYGON);
		glVertex2f(4,5.5);
		glVertex2f(4,8);
		glVertex2f(5,8);
		glVertex2f(5,5.5);
	glEnd();
	glColor3f(0.9,0.9,0.9);
	glBegin(GL_POLYGON);
		glVertex2f(7,7.5);
		glVertex2f(7,8);
		glVertex2f(10,8);
		glVertex2f(10,7.5);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(11.5,7.5);
		glVertex2f(11.5,8);
		glVertex2f(15,8);
		glVertex2f(15,7.5);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(16,7.5);
		glVertex2f(16,8);
		glVertex2f(19,8);
		glVertex2f(19,7.5);
	glEnd();
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
		glVertex2f(4.5,8.5);
		glVertex2f(4.5,10);
		glVertex2f(18.5,10);
		glVertex2f(18.5,8.5);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(5.5,10);
		glVertex2f(5.5,12.9);
		glVertex2f(7,12.9);
		glVertex2f(7,10);
	glEnd();
	glColor3f(0.9,0.5,0.2);
	glBegin(GL_POLYGON);
		glVertex2f(5.5,12.9);
		glVertex2f(5.5,13.5);
		glVertex2f(7,13.5);
		glVertex2f(7,12.9);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(8.5,10);
		glVertex2f(8.5,12.9);
		glVertex2f(10,12.9);
		glVertex2f(10,10);
	glEnd();
	glColor3f(0.9,0.5,0.2);
	glBegin(GL_POLYGON);
		glVertex2f(8.5,12.9);
		glVertex2f(8.5,13.5);
		glVertex2f(10,13.5);
		glVertex2f(10,12.9);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(11.5,10);
		glVertex2f(11.5,12.9);
		glVertex2f(13,12.9);
		glVertex2f(13,10);
	glEnd();
	glColor3f(0.9,0.5,0.2);
	glBegin(GL_POLYGON);
		glVertex2f(11.5,12.9);
		glVertex2f(11.5,13.5);
		glVertex2f(13,13.5);
		glVertex2f(13,12.9);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(14.5,10);
		glVertex2f(14.5,12.9);
		glVertex2f(16,12.9);
		glVertex2f(16,10);
	glEnd();
	glColor3f(0.9,0.5,0.2);
	glBegin(GL_POLYGON);
		glVertex2f(14.5,12.9);
		glVertex2f(14.5,13.5);
		glVertex2f(16,13.5);
		glVertex2f(16,12.9);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
		glVertex2f(1.5,5.5);
		glVertex2f(1.5,6.5);
		glVertex2f(2,6.2);
		glVertex2f(3,6.2);
		glVertex2f(3.5,6.5);
		glVertex2f(3.5,5.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(3.5,5.5);
		glVertex2f(3.5,6.5);
		glVertex2f(4,6.2);
		glVertex2f(5,6.2);
		glVertex2f(5.5,6.5);
		glVertex2f(5.5,5.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(5.5,5.5);
		glVertex2f(5.5,6.5);
		glVertex2f(6,6.2);
		glVertex2f(7,6.2);
		glVertex2f(7.5,6.5);
		glVertex2f(7.5,5.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(7.5,5.5);
		glVertex2f(7.5,6.5);
		glVertex2f(8,6.2);
		glVertex2f(9,6.2);
		glVertex2f(9.5,6.5);
		glVertex2f(9.5,5.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(9.5,5.5);
		glVertex2f(9.5,6.5);
		glVertex2f(10,6.2);
		glVertex2f(11,6.2);
		glVertex2f(11.5,6.5);
		glVertex2f(11.5,5.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(11.5,5.5);
		glVertex2f(11.5,6.5);
		glVertex2f(12,6.2);
		glVertex2f(13,6.2);
		glVertex2f(13.5,6.5);
		glVertex2f(13.5,5.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(13.5,5.5);
		glVertex2f(13.5,6.5);
		glVertex2f(14,6.2);
		glVertex2f(15,6.2);
		glVertex2f(15.5,6.5);
		glVertex2f(15.5,5.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(15.5,5.5);
		glVertex2f(15.5,6.5);
		glVertex2f(16,6.2);
		glVertex2f(17,6.2);
		glVertex2f(17.5,6.5);
		glVertex2f(17.5,5.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(17.5,5.5);
		glVertex2f(17.5,6.5);
		glVertex2f(18,6.2);
		glVertex2f(19,6.2);
		glVertex2f(19.5,6.5);
		glVertex2f(19.5,5.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(19.5,5.5);
		glVertex2f(19.5,6.5);
		glVertex2f(20,6.2);
		glVertex2f(20.5,6.2);
		glVertex2f(21,6.5);
		glVertex2f(21,5.5);
	glEnd();
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINE_LOOP);
		glVertex2f(4.5,3.5);
		glVertex2f(4.5,4.5);
		glVertex2f(5.5,4.5);
		glVertex2f(5.5,3.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(7,3.5);
		glVertex2f(7,4.5);
		glVertex2f(8,4.5);
		glVertex2f(8,3.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(9.5,3.5);
		glVertex2f(9.5,4.5);
		glVertex2f(10.5,4.5);
		glVertex2f(10.5,3.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(12,3.5);
		glVertex2f(12,4.5);
		glVertex2f(13,4.5);
		glVertex2f(13,3.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(14.5,3.5);
		glVertex2f(14.5,4.5);
		glVertex2f(15.5,4.5);
		glVertex2f(15.5,3.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(17,3.5);
		glVertex2f(17,4.5);
		glVertex2f(18,4.5);
		glVertex2f(18,3.5);
	glEnd();


	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
		glVertex2f(5,10);
		glVertex2f(5,11);
		glVertex2f(5.5,10.8);
		glVertex2f(6.5,10.8);
		glVertex2f(7,11);
		glVertex2f(7,10);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(7,10);
		glVertex2f(7,11);
		glVertex2f(7.5,10.8);
		glVertex2f(8.5,10.8);
		glVertex2f(9,11);
		glVertex2f(9,10);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(9,10);
		glVertex2f(9,11);
		glVertex2f(9.5,10.8);
		glVertex2f(10.5,10.8);
		glVertex2f(11,11);
		glVertex2f(11,10);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(11,10);
		glVertex2f(11,11);
		glVertex2f(11.5,10.8);
		glVertex2f(12.5,10.8);
		glVertex2f(13,11);
		glVertex2f(13,10);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(13,10);
		glVertex2f(13,11);
		glVertex2f(13.5,10.8);
		glVertex2f(14.5,10.8);
		glVertex2f(15,11);
		glVertex2f(15,10);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(15,10);
		glVertex2f(15,11);
		glVertex2f(15.5,10.8);
		glVertex2f(16.5,10.8);
		glVertex2f(17,11);
		glVertex2f(17,10);
	glEnd();





//To draw plane/

//void plane()
	glPushMatrix();
	glColor3f(1.3,1.0,1.0);
	glTranslated(0,550,0);
	glScaled(7,5,0);
	glBegin(GL_POLYGON);
		glVertex2d(20,10);
		glVertex2d(17,14);
		glVertex2d(7,14);
		glVertex2d(5.5,20);
		glVertex2d(4.5,20);
		glVertex2d(4.5,14);
		glVertex2d(1.5,14);
		glVertex2d(3,10);
		glVertex2d(1.5,7);
		glVertex2d(17,7);
		glVertex2d(20,10);
	glEnd();
	glColor3f(0.0,0.0,0.5);
	glBegin(GL_POLYGON);
		glVertex2d(5.3,12);
		glVertex2d(6.8,12);
		glVertex2d(6.8,9.5);
		glVertex2d(5.3,9.5);
		glVertex2d(5.3,12);
	glEnd();
	glColor3f(0.0,0.0,0.5);
	glBegin(GL_POLYGON);
		glVertex2d(8,12);
		glVertex2d(9.5,12);
		glVertex2d(9.5,9.5);
		glVertex2d(8,9.5);
		glVertex2d(8,12);
	glEnd();
	glColor3f(0.0,0.0,0.5);
	glBegin(GL_POLYGON);
		glVertex2d(10.5,12);
		glVertex2d(12.5,12);
		glVertex2d(12.5,9.5);
		glVertex2d(10.5,9.5);
		glVertex2d(10.5,12);
	glEnd();
	glPopMatrix();

    ///boat-2 motion right to left
    glPushMatrix();
    glTranslatef(moveB2, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(22.0f, -17.5f);
    glVertex2f(21.0f, -16.5f);
    glVertex2f(17.50f, -16.5f);
    glVertex2f(18.0f, -17.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(22.0f, -18.0f);
    glVertex2f(22.0f, -17.5f);
    glVertex2f(17.0f, -17.5f);
    glVertex2f(17.0f, -18.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,99,71);
    glVertex2f(20.5f, -16.5f);
    glVertex2f(21.0f, -14.5f);
    glVertex2f(18.5f, -14.5f);
    glVertex2f(18.0f, -16.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(19.8f, -14.5f);
    glVertex2f(19.8f, -14.0f);
    glVertex2f(19.7f, -14.0f);
    glVertex2f(19.7f, -14.5f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(17.0f, -18.0f);
    glVertex2f(17.0f, -17.5f);
    glVertex2f(15.5f, -17.2f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(22.0f, -17.5f);
    glVertex2f(22.0f, -18.0f);
    glVertex2f(23.5f, -17.2f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(17.0f, -17.5f);
    glVertex2f(18.0f, -17.5f);
    glVertex2f(17.5f, -16.5f);
    glEnd();

    glPopMatrix();

    glFlush();
}


/*void updateB1(int value)
{

    moveB1 += speed;
    if(moveB1 > 38)
    {
        moveB1 = -38;
    }

//   moveB1 += 0.17;

    glutTimerFunc(20, updateB1, 0); //Notify GLUT to call update again in 25 milliseconds
    glutPostRedisplay();
}*/




void updateB2(int value)
{


    if(moveB2 < -36)
    {
        moveB2 = +38;
    }

    //Notify GLUT that the display has changed

    moveB2 -= 0.03;

    glutTimerFunc(20, updateB2, 0); //Notify GLUT to call update again in 25 milliseconds
    glutPostRedisplay();
}
void keys4(unsigned char key,int x,int y)

{

    if(key=='n')
    {
        PlaySound(NULL, 0, 0);
        glutDestroyWindow(id4);
        glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
        glutInitWindowSize(1360,700);
        glutInitWindowPosition(10,10);
        id5=glutCreateWindow("bermuda-5");
        init5();

        glutDisplayFunc(display5);
        glutTimerFunc(100,update,0);
        glutMouseFunc(mouse);
         glutKeyboardFunc(keys5);
         glutFullScreen();
         PlaySound(TEXT("C:\\Users\\user\\Desktop\\Projects\\6th Sem\\CG\\nibbi_pallu\\sea_waves_aeroplane.wav"),  NULL, SND_ASYNC);

    }
    else if(key=='b')
    {
         glutDestroyWindow(id4);
        glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
        glutInitWindowSize(1360,700);
        glutInitWindowPosition(10,10);
        id3=glutCreateWindow("bermuda-3");

        myinit();
        glutDisplayFunc(display3);
            glutMouseFunc(mouse);
        glutKeyboardFunc(keys3);
        glutFullScreen();

    }
    else
    {
        glutDisplayFunc(display4);

    }

}
void keys5(unsigned char key,int x,int y)

{
    if(key=='n')
    {
        PlaySound(NULL, 0, 0);
        glutDestroyWindow(id5);
        glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
        glutInitWindowSize(1360,700);
        glutInitWindowPosition(10,10);
        id6=glutCreateWindow("bermuda-6");
        init5();

        glutDisplayFunc(display6);
        glutTimerFunc(200,update6,0);
        glutMouseFunc(mouse);
        glutKeyboardFunc(keys6);
        glutFullScreen();
        PlaySound(TEXT("C:\\Users\\user\\Desktop\\Projects\\6th Sem\\CG\\nibbi_pallu\\sea_waves_thunder.wav"),  NULL, SND_ASYNC);

    }
    else if(key=='b')
    {
        glutDestroyWindow(id5);
        glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
        glutInitWindowSize(1360,700);
        glutInitWindowPosition(10,10);
        id4=glutCreateWindow("bermuda-4");
        init4();

        glutDisplayFunc(display4);

        glutMouseFunc(mouse);
        glutFullScreen();
        glutKeyboardFunc(keys4);

    }

    else
    {
        glutDisplayFunc(display5);

    }

}
void update(int value)
{

	a5+=10.0;
	w5-=20;
	if(w5<=-80)
		w5=0;

		if(a5==100||a5==120||a5==250||a5==500||b5==100||b5==150||b5==600||b5==620||c5==120||c5==150||c5==170)
		{
		    glFlush();
		}
		glutPostRedisplay();

		glutTimerFunc(100,update,0);
}

void water5()
{
		glPushMatrix();
		//glPushMatrix();
		glTranslated(w5,0,0.0);
		glColor3f(0.1,0.5,1.0);
		glBegin(GL_POLYGON);
		glVertex2f(0,0);
		glVertex2f(0,100);
		glVertex2f(10,96);
		glVertex2f(25,98);
		glVertex2f(39,94);
		glVertex2f(50,92);
		glVertex2f(70,98);
		glVertex2f(85,95);
		glVertex2f(95,96);
		glVertex2f(110,99);
		glVertex2f(128,97);
		glVertex2f(139,95);
		glVertex2f(145,97);
		glVertex2f(155,99);
		glVertex2f(172,95);
		glVertex2f(195,96);
		glVertex2f(212,95);
		glVertex2f(254,92);
		glVertex2f(284,96);
		glVertex2f(344,98);
		glVertex2f(360,93);
		glVertex2f(390,94);
		glVertex2f(410,99);
		glVertex2f(450,94);
		glVertex2f(485,100);
		glVertex2f(502,92);
		glVertex2f(552,92);
		glVertex2f(592,96);
		glVertex2f(630,105);
		glVertex2f(680,93);
		glVertex2f(720,97);
		glVertex2f(750,93);
		glVertex2f(800,95);
		glVertex2f(850,97);
		glVertex2f(880,108);
		glVertex2f(900,96);
		glVertex2f(920,93);
		glVertex2f(950,99);
		glVertex2f(980,92);
		glVertex2f(1000,99);
		glVertex2f(1000,0);
		glVertex2f(1600,10);
		glVertex2f(3000,280);
		glEnd();
		glPopMatrix();
}


void ship()

{

     glScaled(20,20,0);
    glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
		glVertex2f(3.5,5.5);
		glVertex2f(3.5,8.5);
		glVertex2f(19.5,8.5);
		glVertex2f(19.5,5.5);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(1,5.5);
		glVertex2f(4,1);
		glVertex2f(19,1);
		glVertex2f(21.5,5.5);
	glEnd();
	glColor3f(0.7,0.4,0.2);
	glBegin(GL_POLYGON);
		glVertex2f(4,5.5);
		glVertex2f(4,8);
		glVertex2f(5,8);
		glVertex2f(5,5.5);
	glEnd();
	glColor3f(0.9,0.9,0.9);
	glBegin(GL_POLYGON);
		glVertex2f(7,7.5);
		glVertex2f(7,8);
		glVertex2f(10,8);
		glVertex2f(10,7.5);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(11.5,7.5);
		glVertex2f(11.5,8);
		glVertex2f(15,8);
		glVertex2f(15,7.5);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(16,7.5);
		glVertex2f(16,8);
		glVertex2f(19,8);
		glVertex2f(19,7.5);
	glEnd();
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
		glVertex2f(4.5,8.5);
		glVertex2f(4.5,10);
		glVertex2f(18.5,10);
		glVertex2f(18.5,8.5);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(5.5,10);
		glVertex2f(5.5,12.9);
		glVertex2f(7,12.9);
		glVertex2f(7,10);
	glEnd();
	glColor3f(0.9,0.5,0.2);
	glBegin(GL_POLYGON);
		glVertex2f(5.5,12.9);
		glVertex2f(5.5,13.5);
		glVertex2f(7,13.5);
		glVertex2f(7,12.9);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(8.5,10);
		glVertex2f(8.5,12.9);
		glVertex2f(10,12.9);
		glVertex2f(10,10);
	glEnd();
	glColor3f(0.9,0.5,0.2);
	glBegin(GL_POLYGON);
		glVertex2f(8.5,12.9);
		glVertex2f(8.5,13.5);
		glVertex2f(10,13.5);
		glVertex2f(10,12.9);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(11.5,10);
		glVertex2f(11.5,12.9);
		glVertex2f(13,12.9);
		glVertex2f(13,10);
	glEnd();
	glColor3f(0.9,0.5,0.2);
	glBegin(GL_POLYGON);
		glVertex2f(11.5,12.9);
		glVertex2f(11.5,13.5);
		glVertex2f(13,13.5);
		glVertex2f(13,12.9);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(14.5,10);
		glVertex2f(14.5,12.9);
		glVertex2f(16,12.9);
		glVertex2f(16,10);
	glEnd();
	glColor3f(0.9,0.5,0.2);
	glBegin(GL_POLYGON);
		glVertex2f(14.5,12.9);
		glVertex2f(14.5,13.5);
		glVertex2f(16,13.5);
		glVertex2f(16,12.9);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
		glVertex2f(1.5,5.5);
		glVertex2f(1.5,6.5);
		glVertex2f(2,6.2);
		glVertex2f(3,6.2);
		glVertex2f(3.5,6.5);
		glVertex2f(3.5,5.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(3.5,5.5);
		glVertex2f(3.5,6.5);
		glVertex2f(4,6.2);
		glVertex2f(5,6.2);
		glVertex2f(5.5,6.5);
		glVertex2f(5.5,5.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(5.5,5.5);
		glVertex2f(5.5,6.5);
		glVertex2f(6,6.2);
		glVertex2f(7,6.2);
		glVertex2f(7.5,6.5);
		glVertex2f(7.5,5.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(7.5,5.5);
		glVertex2f(7.5,6.5);
		glVertex2f(8,6.2);
		glVertex2f(9,6.2);
		glVertex2f(9.5,6.5);
		glVertex2f(9.5,5.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(9.5,5.5);
		glVertex2f(9.5,6.5);
		glVertex2f(10,6.2);
		glVertex2f(11,6.2);
		glVertex2f(11.5,6.5);
		glVertex2f(11.5,5.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(11.5,5.5);
		glVertex2f(11.5,6.5);
		glVertex2f(12,6.2);
		glVertex2f(13,6.2);
		glVertex2f(13.5,6.5);
		glVertex2f(13.5,5.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(13.5,5.5);
		glVertex2f(13.5,6.5);
		glVertex2f(14,6.2);
		glVertex2f(15,6.2);
		glVertex2f(15.5,6.5);
		glVertex2f(15.5,5.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(15.5,5.5);
		glVertex2f(15.5,6.5);
		glVertex2f(16,6.2);
		glVertex2f(17,6.2);
		glVertex2f(17.5,6.5);
		glVertex2f(17.5,5.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(17.5,5.5);
		glVertex2f(17.5,6.5);
		glVertex2f(18,6.2);
		glVertex2f(19,6.2);
		glVertex2f(19.5,6.5);
		glVertex2f(19.5,5.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(19.5,5.5);
		glVertex2f(19.5,6.5);
		glVertex2f(20,6.2);
		glVertex2f(20.5,6.2);
		glVertex2f(21,6.5);
		glVertex2f(21,5.5);
	glEnd();
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINE_LOOP);
		glVertex2f(4.5,3.5);
		glVertex2f(4.5,4.5);
		glVertex2f(5.5,4.5);
		glVertex2f(5.5,3.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(7,3.5);
		glVertex2f(7,4.5);
		glVertex2f(8,4.5);
		glVertex2f(8,3.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(9.5,3.5);
		glVertex2f(9.5,4.5);
		glVertex2f(10.5,4.5);
		glVertex2f(10.5,3.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(12,3.5);
		glVertex2f(12,4.5);
		glVertex2f(13,4.5);
		glVertex2f(13,3.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(14.5,3.5);
		glVertex2f(14.5,4.5);
		glVertex2f(15.5,4.5);
		glVertex2f(15.5,3.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(17,3.5);
		glVertex2f(17,4.5);
		glVertex2f(18,4.5);
		glVertex2f(18,3.5);
	glEnd();


	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
		glVertex2f(5,10);
		glVertex2f(5,11);
		glVertex2f(5.5,10.8);
		glVertex2f(6.5,10.8);
		glVertex2f(7,11);
		glVertex2f(7,10);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(7,10);
		glVertex2f(7,11);
		glVertex2f(7.5,10.8);
		glVertex2f(8.5,10.8);
		glVertex2f(9,11);
		glVertex2f(9,10);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(9,10);
		glVertex2f(9,11);
		glVertex2f(9.5,10.8);
		glVertex2f(10.5,10.8);
		glVertex2f(11,11);
		glVertex2f(11,10);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(11,10);
		glVertex2f(11,11);
		glVertex2f(11.5,10.8);
		glVertex2f(12.5,10.8);
		glVertex2f(13,11);
		glVertex2f(13,10);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(13,10);
		glVertex2f(13,11);
		glVertex2f(13.5,10.8);
		glVertex2f(14.5,10.8);
		glVertex2f(15,11);
		glVertex2f(15,10);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(15,10);
		glVertex2f(15,11);
		glVertex2f(15.5,10.8);
		glVertex2f(16.5,10.8);
		glVertex2f(17,11);
		glVertex2f(17,10);
	glEnd();
}



void display5()
{

    init5();
	glClear(GL_COLOR_BUFFER_BIT);
    display5_1();
	if(a5>950)
	{

		b5+=3;
		display5_2();

	}
	if(b5>40 )
	{
		d5-=5;
		//display4();

	}

	if(d5<20)
    {

		c5+=8;
		h5+=3;

		display5_3();
		//display5_2();
	}

	glFlush();

}


void display5_1()
{
	glPushMatrix();
	glTranslated(a5,70,0.0);
	ship();
	glPopMatrix();
	water5();

}

void display5_2()
{

	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
	glTranslated(b5,70,0.0);
	ship();
	glPopMatrix();
	water5();
}

void display5_3()
{
	glClear(GL_COLOR_BUFFER_BIT);
	x5-=1;
	glPushMatrix();
	glTranslated(b5,70,0.0);
	//glRotated(-15,0,0,1);
	ship();
	glPopMatrix();
	water5();
	plane();

}

void plane()
{
	glPushMatrix();
	glColor3f(1.3,1.0,1.0);
	glTranslated(h5,550,0);
	glScaled(7,5,0);
	glBegin(GL_POLYGON);
		glVertex2d(20,10);
		glVertex2d(17,14);
		glVertex2d(7,14);
		glVertex2d(5.5,20);
		glVertex2d(4.5,20);
		glVertex2d(4.5,14);
		glVertex2d(1.5,14);
		glVertex2d(3,10);
		glVertex2d(1.5,7);
		glVertex2d(17,7);
		glVertex2d(20,10);
	glEnd();
	glColor3f(0.0,0.0,0.5);
	glBegin(GL_POLYGON);
		glVertex2d(5.3,12);
		glVertex2d(6.8,12);
		glVertex2d(6.8,9.5);
		glVertex2d(5.3,9.5);
		glVertex2d(5.3,12);
	glEnd();
	glColor3f(0.0,0.0,0.5);
	glBegin(GL_POLYGON);
		glVertex2d(8,12);
		glVertex2d(9.5,12);
		glVertex2d(9.5,9.5);
		glVertex2d(8,9.5);
		glVertex2d(8,12);
	glEnd();
	glColor3f(0.0,0.0,0.5);
	glBegin(GL_POLYGON);
		glVertex2d(10.5,12);
		glVertex2d(12.5,12);
		glVertex2d(12.5,9.5);
		glVertex2d(10.5,9.5);
		glVertex2d(10.5,12);
	glEnd();
	glPopMatrix();
}



void light()
{

	GLfloat mat_ambient[]={1.0f,1.0f,1.0f,1.0f};
	GLfloat mat_diffuse[]={1.0f,1.0f,1.0f,1.0f};
	GLfloat mat_specular[]={1.0f,1.0f,1.0f,1.0f};
	GLfloat mat_shininess[]={50.0f};
	glMaterialfv(GL_FRONT,GL_AMBIENT,mat_ambient);
	glMaterialfv(GL_FRONT,GL_DIFFUSE,mat_ambient);
	glMaterialfv(GL_FRONT,GL_SPECULAR,mat_ambient);
	glMaterialfv(GL_FRONT,GL_SHININESS,mat_ambient);

}

void update6(int value)
{
	glDisable(GL_LIGHTING);
	glDisable(GL_LIGHT0);
	a6+=20.0;
	w6-=50;
	if(w6<=-80)
		w6=0;

		if(a6==100||a6==120||a6==250||a6==500||b6==100||b6==150||b6==600||b6==620||c6==120||c6==150||c6==170)
		{

			glEnable(GL_LIGHTING);
			glEnable(GL_LIGHT0);
			light();
			glColor3f(1.0,1.0,1.0);

			glBegin(GL_POLYGON);
				glVertex2f(200.0,700.0);
				glVertex2f(220.0,700.0);
				glVertex2f(420.0,550.0);
				glVertex2f(600.0,450.0);
	        glEnd();
	        glBegin(GL_POLYGON);
				glVertex2f(210.0,710.0);
				glVertex2f(220.0,720.0);
				glVertex2f(410.0,540.0);
				glVertex2f(590.0,440.0);
	        glEnd();

			glFlush();
		}
		glutPostRedisplay();

		glutTimerFunc(200,update6,0);
}

void drawCircle(int r, int  xc, int yc) {
	int x = 0, y = r;
	int d;
	d = 1 - r;

	while (x < y)
	{
		glBegin(GL_POLYGON);
		glVertex2i(y + xc, x + yc);
		glVertex2i(x + xc, y + yc);
		glVertex2i(x + xc, -y + yc);
		glVertex2i(y + xc, -x + yc);
		glVertex2i(-y + xc, -x + yc);
		glVertex2i(-x + xc, -y + yc);
		glVertex2i(-x + xc, y + yc);
		glVertex2i(-y + xc, x + yc);
		glEnd();

		if (d < 0)
		{
			x = x + 1;
			d = d + 2 * x + 1;
		}
		else
		{
			x = x + 1;
			y = y - 1;
			d = d + ((2 * x) + 1) - (2 * y);
		}
	}//end while
}//end drawCircle


void cloudRight() {
	//cloud right
	glColor3f(1.000, 1.000, 1.000);
	drawCircle(30, 800, 600);
	drawCircle(30, 830, 630);
	drawCircle(30, 860, 630);
	drawCircle(30, 890, 600);
	drawCircle(30, 850, 600);
}

void scene1_cloudR_idle() {
	if (slide_cloudR > 0) { move_cloud = 0; }
	if (move_cloud == 0) { slide_cloudR -= 0.05; }
	glutPostRedisplay();
}

void scene1_cloudR_animation() {
	glPushMatrix();

	glTranslatef(slide_cloudR, 0, 0);
	cloudRight();

	glPopMatrix();

}

void display6()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0,0,0.5,0);
	glColor3f(0.0,1.0,0.0);
    slide_cloudL = 0.0;
    slide_cloudR = 0.0;
    cloudRight();
	display6_1();

	if(a6>950)
	{

		b6+=10;
//		display6_2();

	}
	if(b6>600 )
	{
		d6-=5;
		//display6_4();

	}
	if(d6<20)
    {
		c6+=1;
		if(h6>780)
            h6+=1000;
		h6+=2;
		display6_3();
	}
	glFlush();
}

void display6_1()
{
	glPushMatrix();
	glTranslated(a6,70,0.0);
	ship();
	glPopMatrix();
	water6();

}
void display6_2()
{

	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
	glTranslated(b6,70,0.0);
	ship();
	glPopMatrix();
	water6();
}

void display6_3()
{
    glClearColor(0.1,0.1,0.1,0);
	glColor3f(0.0,1.0,0.0);

	glClear(GL_COLOR_BUFFER_BIT);
	x6-=1;
	glPushMatrix();

	glTranslated(c6,x6,0.0);
	glRotated(50,0,0,1);
	ship();
	glPopMatrix();
	water6();
	plane6();
	scene1_cloudR_animation();

}
void water6()
{
		glPushMatrix();
		//glPushMatrix();
		glTranslated(w6,0,0.0);
		glColor3f(0.1,0.5,1.0);
		glBegin(GL_POLYGON);
		glVertex2f(0,0);
		glVertex2f(0,100);
		glVertex2f(10,96);
		glVertex2f(25,98);
		glVertex2f(39,94);
		glVertex2f(50,92);
		glVertex2f(70,98);
		glVertex2f(85,95);
		glVertex2f(95,96);
		glVertex2f(110,99);
		glVertex2f(128,97);
		glVertex2f(139,95);
		glVertex2f(145,97);
		glVertex2f(155,99);
		glVertex2f(172,95);
		glVertex2f(195,96);
		glVertex2f(212,95);
		glVertex2f(254,92);
		glVertex2f(284,96);
		glVertex2f(344,98);
		glVertex2f(360,93);
		glVertex2f(390,94);
		glVertex2f(410,99);
		glVertex2f(450,94);
		glVertex2f(485,100);
		glVertex2f(502,92);
		glVertex2f(552,92);
		glVertex2f(592,96);
		glVertex2f(630,105);
		glVertex2f(680,93);
		glVertex2f(720,97);
		glVertex2f(750,93);
		glVertex2f(800,95);
		glVertex2f(850,97);
		glVertex2f(880,108);
		glVertex2f(900,96);
		glVertex2f(920,93);
		glVertex2f(950,99);
		glVertex2f(980,92);
		glVertex2f(1000,99);
		glVertex2f(1000,0);
		glVertex2f(1600,10);
		glVertex2f(3000,280);
		glEnd();
		glPopMatrix();
}

void plane6()
{
	glPushMatrix();
	glColor3f(1.3,1.0,1.0);
	glTranslated(h6,550,0);
	glScaled(7,5,0);
	glBegin(GL_POLYGON);
		glVertex2d(20,10);
		glVertex2d(17,14);
		glVertex2d(7,14);
		glVertex2d(5.5,20);
		glVertex2d(4.5,20);
		glVertex2d(4.5,14);
		glVertex2d(1.5,14);
		glVertex2d(3,10);
		glVertex2d(1.5,7);
		glVertex2d(17,7);
		glVertex2d(20,10);
	glEnd();
	glColor3f(0.0,0.0,0.5);
	glBegin(GL_POLYGON);
		glVertex2d(5.3,12);
		glVertex2d(6.8,12);
		glVertex2d(6.8,9.5);
		glVertex2d(5.3,9.5);
		glVertex2d(5.3,12);
	glEnd();
	glColor3f(0.0,0.0,0.5);
	glBegin(GL_POLYGON);
		glVertex2d(8,12);
		glVertex2d(9.5,12);
		glVertex2d(9.5,9.5);
		glVertex2d(8,9.5);
		glVertex2d(8,12);
	glEnd();
	glColor3f(0.0,0.0,0.5);
	glBegin(GL_POLYGON);
		glVertex2d(10.5,12);
		glVertex2d(12.5,12);
		glVertex2d(12.5,9.5);
		glVertex2d(10.5,9.5);
		glVertex2d(10.5,12);
	glEnd();
	glPopMatrix();
}




void keys6(unsigned char key,int x,int y)
{
    if(key=='b')
    {
        glutDestroyWindow(id6);
        glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
        glutInitWindowSize(1360,700);
        glutInitWindowPosition(10,10);
        id5=glutCreateWindow("bermuda-5");
        init5();

        glutDisplayFunc(display5);
     glutTimerFunc(100,update,0);
        glutMouseFunc(mouse);
        glutKeyboardFunc(keys5);
        glutFullScreen();

    }
    if(key == 'x')
        exit(0);

    else
    {
        glutDisplayFunc(display6);

    }
}


int main(int argc,char **argv)
{
    glutInit(&argc,argv);

    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(1360,700);
    glutInitWindowPosition(10,10);
    id1=glutCreateWindow("bermuda triangle-1");
    init();
    glutDisplayFunc(display1);

    glutKeyboardFunc(keys1);
    glutFullScreen();
    glutMainLoop();
}
