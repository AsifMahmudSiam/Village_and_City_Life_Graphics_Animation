#include <windows.h>
#include <GL/glut.h>
#include<math.h>>
#include<cstdio>
# define PI           3.14159265358979323846
//Late night display(124-2524)
//Night display(2531-4936)
//Late evening display(4942-7348)
//Evening display(7355-8897)
//Afternoon display(8904-10444)
//Day Display(10451-11781)
//Mimi(day)= mountain(10483-10565), Dark Cloud(10567-10882), White clouds(10885-11259), House(11308-11449), Bird(11711-11779)
//Mazher(day)= sun(10466-10482), plane(11261-11298), windmill(11451-11700), landscape
//Siam(Late evening)= stars(4956-5167),Building & bridge(5499-6218),
//Ayon(late evening)= Plane(5185-5223), Plane Shadow(5461-5497,6257-7173), Boat(6220-6255)
//Hasin(late evening)= moon(5169-5182), moon 2(5446-5458), Lamppost(7175-7344)
GLfloat         i = 0.0f;
GLfloat         j = 0.0f;
GLfloat position1 = 0.0f;
GLfloat position2 = 0.0f;
GLfloat position3 = 0.0f;
GLfloat position4 = 0.0f;
GLfloat position5 = 0.0f;
GLfloat position6 = 0.0f;
GLfloat position7 = 0.0f;
GLfloat position8 = 0.0f;
GLfloat position9 = 0.0f;
GLfloat    speed1 = 5.0f;
GLfloat    speed2 = 3.0f;
GLfloat    speed3 = 1.0f;
GLfloat    speed4 = 1.0f;
GLfloat    speed5 = 5.0f;
GLfloat    speed6 = 0.3f;
GLfloat    speed7 = 0.3f;
GLfloat    speed8 = 0.5f;
GLfloat    speed9 = 0.5f;

void update(int value)//1st scenario plane
{
    if(position1 >1500.0)
        position1 =-1500.0f;
    position1 += speed1;
    glutPostRedisplay();
    glutTimerFunc(60, update, 0);
}

void update2(int value)//1st scenario sun
{
    if(position2 <-1000.0)
        position2 =1000.0f;
    position2 -= speed2;
	glutPostRedisplay();
	glutTimerFunc(60, update2, 0);
}

void update3(int value)//1st scenario dark clouds
{
    if(position3 <-1000.0)
        position3 =1000.0f;
    position3 -= speed3;
	glutPostRedisplay();
	glutTimerFunc(200, update3, 0);
}

void update4(int value)//1st scenario white clouds
{
    if(position4 <-1500.0)
        position4 =1500.0f;
    position4 -= speed4;
	glutPostRedisplay();
	glutTimerFunc(120, update4, 0);
}

void update5(int value)//1st scenario bird
{
    if(position5 <-1500.0)
        position5 =1500.0f;
    position5 -= speed5;
	glutPostRedisplay();
	glutTimerFunc(100, update5, 0);
}

void update6(int value)//2nd scenario moon 1
{
    if(position6 >1500.0)
        position6 =-1500.0f;
    position6 += speed6;
	glutPostRedisplay();
	glutTimerFunc(60, update6, 0);
}

void update7(int value)//2nd scenario moon 2
{
    if(position7 <-1000.0)
        position7 =1000.0f;
    position7 -= speed7;
	glutPostRedisplay();
	glutTimerFunc(60, update7, 0);
}

void update8(int value)//2nd scenario boat
{
    if(position8 <-1500.0)
        position8 =1500.0f;
    position8 -= speed8;
	glutPostRedisplay();
	glutTimerFunc(40, update8, 0);
}

void update9(int value)//2nd Scenario plane
{
    if(position9 >1500.0)
        position9 =-1500.0f;
    position9 += speed9;
	glutPostRedisplay();
	glutTimerFunc(60, update9, 0);
}

void Idle()
{
    glutPostRedisplay();
}

void latenight()
{
    glClearColor(0.0f,0.0f,0.0f,0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    //sky
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 102);
    glVertex2f(-750.0,-155.0);
    glVertex2f( 750.0,-155.0);
    glVertex2f( 750.0, 500.0);
    glVertex2f(-750.0, 500.0);
    glEnd();

    //stars
    GLfloat x = -740; GLfloat y= 450; GLfloat radius = 3;
    int triangleAmount = 300;
    GLfloat twicePi    = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(255, 255, 255);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
            glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = -700; y = 350; radius = 3;
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(242, 242, 242);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -500; y = 250; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -600; y = 400; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -400; y = 400; radius = 3;
     glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
        }
	 glEnd();

     x = -300; y = 200; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -250; y=300; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -100; y = 350; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -0; y = 150; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 100; y = 350; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 250; y = 250; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 400; y = 400; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 500; y = 375; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
            glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 600; y = 275; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 700; y = 380; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -600; y=180; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
     glEnd();

     x = -500; y=480; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -450; y = 380; radius = 3;
     glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 580; y = 480; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 0; y = 480; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -300; y = 450; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     //MOON one
	 glPushMatrix();
	 glTranslatef(0.0f, position6, 0.0f);
     x = 475; y = 50; radius = 150;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();
	 glLoadIdentity();
	 glPopMatrix();

	 //plane
	 glPushMatrix();
	 glTranslatef(position9,0.0f, 0.0f);
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-650.0f, 370.0f);
     glVertex2f(-375.0f, 370.0f);//body
     glVertex2f(-375.0f, 410.0f);
     glVertex2f(-650.0f, 410.0f);
     glEnd();

     //wing
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-550.0f, 300.0f);
     glVertex2f(-525.0f, 300.0f);
     glVertex2f(-430.0f, 370.0f);
     glVertex2f(-510.0f, 370.0f);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-650.0f, 370.0f);//tail
     glVertex2f(-575.0f, 370.0f);
     glVertex2f(-650.0f, 450.0f);
     glVertex2f(-675.0f, 450.0f);
     glEnd();

     x = -371.0f; y = 390.0f; radius = 20.0f;
     twicePi = 2.0f * PI;
	 glBegin(GL_TRIANGLE_FAN);
     glColor3ub(0, 0, 0);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();
	 glLoadIdentity();
	 glPopMatrix();

	 // water
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 153);
     glVertex2f(-750.0f,-155.0f);
     glVertex2f(-750.0f,-450.0f);
     glVertex2f( 750.0f,-450.0f);
     glVertex2f( 750.0f,-155.0f);
     glEnd();

     //stars
     x=-740;  y=-450;  radius =3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(255, 255, 255);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -700; y = -350; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -500; y=-250; radius =3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -600; y = -400; radius = 3;
     glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -400; y = -400; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -300; y = -200; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -250; y = -300; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -100; y = -350; radius = 3;
     glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -0; y = -150; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 100; y = -350; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 250; y = -250; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
     glEnd();

     x = 400; y = -400; radius = 3;
     glBegin(GL_TRIANGLE_FAN);
     glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 500; y = -375; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 600; y = -275; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 700; y = -380; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++)
            {
                glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	 glEnd();

     x = -600; y = -180; radius =3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -500; y=-480; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -450; y = -380; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 580; y = -480; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 0; y = -480; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -300; y = -450; radius =3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     //MOON two
	 glPushMatrix();
	 glTranslatef(0.0f, position7, 0.0f);
     x = 475; y = -315; radius = 150;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(255, 255, 255);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();
	 glLoadIdentity();
	 glPopMatrix();

     //plane2
     glPushMatrix();
	 glTranslatef(position9, 0.0f, 0.0f);
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-650.0f, -370.0f);
     glVertex2f(-375.0f, -370.0f); //body
     glVertex2f(-375.0f, -410.0f);
     glVertex2f(-650.0f, -410.0f);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-510.0f, -375.0f);
     glVertex2f(-430.0f, -375.0f);
     glVertex2f(-525.0f, -305.0f);
     glVertex2f(-550.0f, -305.0f);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-650.0f, -370.0f);//tail
     glVertex2f(-575.0f, -370.0f);
     glVertex2f(-650.0f, -450.0f);
     glVertex2f(-675.0f, -450.0f);
     glEnd();

	 x = -380.0f; y = -390.0f; radius = 20.0f;
	 glBegin(GL_TRIANGLE_FAN);
     glColor3ub(41, 41, 61);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y+ (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();
	 glLoadIdentity();
	 glPopMatrix();

     //building shadow 1
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-750.0f,-230.0f);
     glVertex2f(-720.0f,-230.0f);
     glVertex2f(-720.0f,-155.0f);
     glVertex2f(-750.0f,-155.0f);
     glEnd();

     //building shadow 2
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-715.0f,-200.0f);
     glVertex2f(-660.0f,-200.0f);
     glVertex2f(-660.0f,-155.0f);
     glVertex2f(-715.0f,-155.0f);
     glEnd();

     //building 2 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-705.0f,-190.0f);
     glVertex2f(-695.0f,-190.0f);
     glVertex2f(-695.0f,-180.0f);
     glVertex2f(-705.0f,-180.0f);
     glEnd();

     //building 2 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-680.0f,-190.0f);
     glVertex2f(-670.0f,-190.0f);
     glVertex2f(-670.0f,-180.0f);
     glVertex2f(-680.0f,-180.0f);
     glEnd();

     //building 2 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-705.0f,-175.0f);
     glVertex2f(-695.0f,-175.0f);
     glVertex2f(-695.0f,-165.0f);
     glVertex2f(-705.0f,-165.0f);
     glEnd();

     //building 2 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-680.0f,-175.0f);
     glVertex2f(-670.0f,-175.0f);
     glVertex2f(-670.0f,-165.0f);
     glVertex2f(-680.0f,-165.0f);
     glEnd();

     //building shadow 1&2 gap
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-720.0f,-180.0f);
     glVertex2f(-715.0f,-180.0f);
     glVertex2f(-715.0f,-155.0f);
     glVertex2f(-720.0f,-155.0f);
     glEnd();

     // building shadow 3
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-640.0f,-215.0f);
     glVertex2f(-590.0f,-215.0f);
     glVertex2f(-590.0f,-155.0f);
     glVertex2f(-640.0f,-155.0f);
     glEnd();

     // building 3 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-630.0f,-205.0f);
     glVertex2f(-620.0f,-205.0f);
     glVertex2f(-620.0f,-195.0f);
     glVertex2f(-630.0f,-195.0f);
     glEnd();

     // building 3 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-610.0f,-205.0f);
     glVertex2f(-600.0f,-205.0f);
     glVertex2f(-600.0f,-195.0f);
     glVertex2f(-610.0f,-195.0f);
     glEnd();

     // building 3 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-630.0f,-185.0f);
     glVertex2f(-620.0f,-185.0f);
     glVertex2f(-620.0f,-175.0f);
     glVertex2f(-630.0f,-175.0f);
     glEnd();

     // building 3 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-610.0f,-185.0f);
     glVertex2f(-600.0f,-185.0f);
     glVertex2f(-600.0f,-175.0f);
     glVertex2f(-610.0f,-175.0f);
     glEnd();

     //building shadow 2&3 gap
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-660.0f,-180.0f);
     glVertex2f(-640.0f,-180.0f);
     glVertex2f(-640.0f,-155.0f);
     glVertex2f(-660.0f,-155.0f);
     glEnd();

     // building 4
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-580.0f,-250.0f);
     glVertex2f(-535.0f,-250.0f);
     glVertex2f(-535.0f,-155.0f);
     glVertex2f(-580.0f,-155.0f);
     glEnd();

     // building 4 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-570.0f,-240.0f);
     glVertex2f(-560.0f,-240.0f);
     glVertex2f(-560.0f,-230.0f);
     glVertex2f(-570.0f,-230.0f);
     glEnd();

     // building 4 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-555.0f,-240.0f);
     glVertex2f(-545.0f,-240.0f);
     glVertex2f(-545.0f,-230.0f);
     glVertex2f(-555.0f,-230.0f);
     glEnd();

     // building 4 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-570.0f,-220.0f);
     glVertex2f(-560.0f,-220.0f);
     glVertex2f(-560.0f,-210.0f);
     glVertex2f(-570.0f,-210.0f);
     glEnd();

     // building 4 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-555.0f,-220.0f);
     glVertex2f(-545.0f,-220.0f);
     glVertex2f(-545.0f,-210.0f);
     glVertex2f(-555.0f,-210.0f);
     glEnd();

     // building 4 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-570.0f,-200.0f);
     glVertex2f(-560.0f,-200.0f);
     glVertex2f(-560.0f,-190.0f);
     glVertex2f(-570.0f,-190.0f);
     glEnd();

     // building 4 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-555.0f,-200.0f);
     glVertex2f(-545.0f,-200.0f);
     glVertex2f(-545.0f,-190.0f);
     glVertex2f(-555.0f,-190.0f);
     glEnd();

     // building shadow 3 &4 gap
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-590.0f,-175.0f);
     glVertex2f(-580.0f,-175.0f);
     glVertex2f(-580.0f,-155.0f);
     glVertex2f(-590.0f,-155.0f);
     glEnd();

     // building shadow 5
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-525.0f,-250.0f);
     glVertex2f(-460.0f,-250.0f);
     glVertex2f(-460.0f,-155.0f);
     glVertex2f(-525.0f,-155.0f);
     glEnd();

     // building 5 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255 );
     glVertex2f(-515.0f,-240.0f);
     glVertex2f(-500.0f,-240.0f);
     glVertex2f(-500.0f,-225.0f);
     glVertex2f(-515.0f,-225.0f);
     glEnd();

     // building 5 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255 );
     glVertex2f(-485.0f,-240.0f);
     glVertex2f(-470.0f,-240.0f);
     glVertex2f(-470.0f,-225.0f);
     glVertex2f(-485.0f,-225.0f);
     glEnd();

     // building 5 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255 );
     glVertex2f(-515.0f,-215.0f);
     glVertex2f(-500.0f,-215.0f);
     glVertex2f(-500.0f,-200.0f);
     glVertex2f(-515.0f,-200.0f);
     glEnd();

     // building 5 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255 );
     glVertex2f(-485.0f,-215.0f);
     glVertex2f(-470.0f,-215.0f);
     glVertex2f(-470.0f,-200.0f);
     glVertex2f(-485.0f,-200.0f);
     glEnd();

     // building shadow 4 &5 gap
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-535.0f,-185.0f);
     glVertex2f(-525.0f,-185.0f);
     glVertex2f(-525.0f,-155.0f);
     glVertex2f(-535.0f,-155.0f);
     glEnd();

     //building shadow 6
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-450.0f,-235.0f);
     glVertex2f(-395.0f,-235.0f);
     glVertex2f(-395.0f,-155.0f);
     glVertex2f(-450.0f,-155.0f);
     glEnd();

     //building 6 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-440.0f,-225.0f);
     glVertex2f(-430.0f,-225.0f);
     glVertex2f(-430.0f,-215.0f);
     glVertex2f(-440.0f,-215.0f);
     glEnd();

     //building 6 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-415.0f,-225.0f);
     glVertex2f(-405.0f,-225.0f);
     glVertex2f(-405.0f,-215.0f);
     glVertex2f(-415.0f,-215.0f);
     glEnd();

     //building 6 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-440.0f,-205.0f);
     glVertex2f(-430.0f,-205.0f);
     glVertex2f(-430.0f,-195.0f);
     glVertex2f(-440.0f,-195.0f);
     glEnd();

     //building 6 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-415.0f,-205.0f);
     glVertex2f(-405.0f,-205.0f);
     glVertex2f(-405.0f,-195.0f);
     glVertex2f(-415.0f,-195.0f);
     glEnd();

     //building shadow 5&6 gap
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-460.0f,-170.0f);
     glVertex2f(-450.0f,-170.0f);
     glVertex2f(-450.0f,-155.0f);
     glVertex2f(-460.0f,-155.0f);
     glEnd();

     // building shadow 7
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-385.0f,-235.0f);
     glVertex2f(-345.0f,-235.0f);
     glVertex2f(-345.0f,-155.0f);
     glVertex2f(-385.0f,-155.0f);
     glEnd();

     //building shadow 6&7 gap
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-395.0f,-175.0f);
     glVertex2f(-385.0f,-175.0f);
     glVertex2f(-385.0f,-155.0f);
     glVertex2f(-395.0f,-155.0f);
     glEnd();

     //building shadow 8
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-320.0f,-250.0f);
     glVertex2f(-250.0f,-250.0f);
     glVertex2f(-250.0f,-155.0f);
     glVertex2f(-320.0f,-155.0f);
     glEnd();

     //building 8 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-310.0f,-240.0f);
     glVertex2f(-295.0f,-240.0f);
     glVertex2f(-295.0f,-225.0f);
     glVertex2f(-310.0f,-225.0f);
     glEnd();

     //building 8 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-275.0f,-240.0f);
     glVertex2f(-260.0f,-240.0f);
     glVertex2f(-260.0f,-225.0f);
     glVertex2f(-275.0f,-225.0f);
     glEnd();

     //building 8 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-310.0f,-215.0f);
     glVertex2f(-295.0f,-215.0f);
     glVertex2f(-295.0f,-200.0f);
     glVertex2f(-310.0f,-200.0f);
     glEnd();

     //building 8 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-275.0,-215.0);
     glVertex2f(-260.0,-215.0);
     glVertex2f(-260.0,-200.0);
     glVertex2f(-275.0,-200.0);
     glEnd();

     //building 8 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-310.0,-190.0);
     glVertex2f(-295.0,-190.0);
     glVertex2f(-295.0,-175.0);
     glVertex2f(-310.0,-175.0);
     glEnd();

     //building 8 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-275.0,-190.0);
     glVertex2f(-260.0,-190.0);
     glVertex2f(-260.0,-175.0);
     glVertex2f(-275.0,-175.0);
     glEnd();

     //building shadow 7 & 8 gap
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-385.0f,-180.0f);
     glVertex2f(-320.0f,-180.0f);
     glVertex2f(-320.0f,-155.0f);
     glVertex2f(-385.0f,-155.0f);
     glEnd();

     //building shadow 9
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-240.0f,-240.0f);
     glVertex2f(-180.0f,-240.0f);
     glVertex2f(-180.0f,-155.0f);
     glVertex2f(-240.0f,-155.0f);
     glEnd();

     //building 9 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-230.0f,-230.0f);
     glVertex2f(-220.0f,-230.0f);
     glVertex2f(-220.0f,-220.0f);
     glVertex2f(-230.0f,-220.0f);
     glEnd();

     //building 9 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-190.0f,-230.0f);
     glVertex2f(-200.0f,-230.0f);
     glVertex2f(-200.0f,-220.0f);
     glVertex2f(-190.0f,-220.0f);
     glEnd();

     //building 9 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-230.0f,-210.0f);
     glVertex2f(-220.0f,-210.0f);
     glVertex2f(-220.0f,-200.0f);
     glVertex2f(-230.0f,-200.0f);
     glEnd();

     //building 9 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-190.0f,-210.0f);
     glVertex2f(-200.0f,-210.0f);
     glVertex2f(-200.0f,-200.0f);
     glVertex2f(-190.0f,-200.0f);
     glEnd();

     //building 9 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-230.0f,-190.0f);
     glVertex2f(-220.0f,-190.0f);
     glVertex2f(-220.0f,-180.0f);
     glVertex2f(-230.0f,-180.0f);
     glEnd();

     //building 9 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-190.0f,-190.0f);
     glVertex2f(-200.0f,-190.0f);
     glVertex2f(-200.0f,-180.0f);
     glVertex2f(-190.0f,-180.0f);
     glEnd();

     //building  shadow 8 &  9 GAP
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-250.0f,-170.0f);
     glVertex2f(-240.0f,-170.0f);
     glVertex2f(-240.0f,-155.0f);
     glVertex2f(-250.0f,-155.0f);
     glEnd();

     // building shadow 10
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-170.0f,-220.0f);
     glVertex2f(-135.0f,-220.0f);
     glVertex2f(-135.0f,-155.0f);
     glVertex2f(-170.0f,-155.0f);
     glEnd();

     // building shadow 9 & 10 gap
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-180.0f,-165.0f);
     glVertex2f(-170.0f,-165.0f);
     glVertex2f(-170.0f,-155.0f);
     glVertex2f(-180.0f,-155.0f);
     glEnd();

     // building shadow 11
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-125.0f,-220.0f);
     glVertex2f(- 75.0f,-220.0f);
     glVertex2f(- 75.0f,-155.0f);
     glVertex2f(-125.0f,-155.0f);
     glEnd();

     //building shadow 10 & 11 gap
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-135.0f,-170.0f);
     glVertex2f(-125.0f,-170.0f);
     glVertex2f(-125.0f,-155.0f);
     glVertex2f(-135.0f,-155.0f);
     glEnd();

     // building shadow 12
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-65.0f,-235.0f);
     glVertex2f(  0.0f,-235.0f);
     glVertex2f(  0.0f,-155.0f);
     glVertex2f(-65.0f,-155.0f);
     glEnd();

     // building 12 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-55.0f,-225.0f);
     glVertex2f(-40.0f,-225.0f);
     glVertex2f(-40.0f,-210.0f);
     glVertex2f(-55.0f,-210.0f);
     glEnd();

     // building 12 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255,255);
     glVertex2f(-25.0f,-225.0f);
     glVertex2f(-10.0f,-225.0f);
     glVertex2f(-10.0f,-210.0f);
     glVertex2f(-25.0f,-210.0f);
     glEnd();

     // building 12 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-55.0f,-200.0f);
     glVertex2f(-40.0f,-200.0f);
     glVertex2f(-40.0f,-185.0f);
     glVertex2f(-55.0f,-185.0f);
     glEnd();

     // building 12 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255,255);
     glVertex2f(-25.0f,-200.0f);
     glVertex2f(-10.0f,-200.0f);
     glVertex2f(-10.0f,-185.0f);
     glVertex2f(-25.0f,-185.0f);
     glEnd();

     //building 11 & 12 gap
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-75.0f,-175.0f);
     glVertex2f(-65.0f,-175.0f);
     glVertex2f(-65.0f,-155.0f);
     glVertex2f(-75.0f,-155.0f);
     glEnd();

     // building shadow 13
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f( 0.0f,-225.0f);
     glVertex2f(50.0f,-225.0f);
     glVertex2f(50.0f,-155.0f);
     glVertex2f( 0.0f,-155.0f);
     glEnd();

     // building 13 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(15.0f,-215.0f);
     glVertex2f(25.0f,-215.0f);
     glVertex2f(25.0f,-205.0f);
     glVertex2f(15.0f,-205.0f);
     glEnd();

     // building 13 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(35.0f,-215.0f);
     glVertex2f(45.0f,-215.0f);
     glVertex2f(45.0f,-205.0f);
     glVertex2f(35.0f,-205.0f);
     glEnd();

     // building 13 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(15.0f,-195.0f);
     glVertex2f(25.0f,-195.0f);
     glVertex2f(25.0f,-185.0f);
     glVertex2f(15.0f,-185.0f);
     glEnd();

     // building 13 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(35.0f,-195.0f);
     glVertex2f(45.0f,-195.0f);
     glVertex2f(45.0f,-185.0f);
     glVertex2f(35.0f,-185.0f);
     glEnd();

     // building shadow 14 & 15
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f( 50.0f,-215.0f);
     glVertex2f(165.0f,-215.0f);
     glVertex2f(165.0f,-155.0f);
     glVertex2f( 50.0f,-155.0f);
     glEnd();

     // building 14 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(65.0f,-205.0f);
     glVertex2f(75.0f,-205.0f);
     glVertex2f(75.0f,-195.0f);
     glVertex2f(65.0f,-195.0f);
     glEnd();

     // building 14 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(95.0f,-205.0f);
     glVertex2f(85.0f,-205.0f);
     glVertex2f(85.0f,-195.0f);
     glVertex2f(95.0f,-195.0f);
     glEnd();

     // building 14 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(65.0f,-185.0f);
     glVertex2f(75.0f,-185.0f);
     glVertex2f(75.0f,-175.0f);
     glVertex2f(65.0f,-175.0f);
     glEnd();

     // building 14 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(95.0f,-185.0f);
     glVertex2f(85.0f,-185.0f);
     glVertex2f(85.0f,-175.0f);
     glVertex2f(95.0f,-175.0f);
     glEnd();

     // building 15 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(120.0f,-205.0f);
     glVertex2f(130.0f,-205.0f);
     glVertex2f(130.0f,-195.0f);
     glVertex2f(120.0f,-195.0f);
     glEnd();

     // building 15 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(145.0f,-205.0f);
     glVertex2f(155.0f,-205.0f);
     glVertex2f(155.0f,-195.0f);
     glVertex2f(145.0f,-195.0f);
     glEnd();

     // building 15 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(120.0f,-185.0f);
     glVertex2f(130.0f,-185.0f);
     glVertex2f(130.0f,-175.0f);
     glVertex2f(120.0f,-175.0f);
     glEnd();

     // building 15 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(145.0f,-185.0f);
     glVertex2f(155.0f,-185.0f);
     glVertex2f(155.0f,-175.0f);
     glVertex2f(145.0f,-175.0f);
     glEnd();

     // bridge shadow pole 1
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(210.0f,-200.0f);
     glVertex2f(240.0f,-200.0f);
     glVertex2f(240.0f,-155.0f);
     glVertex2f(210.0f,-155.0f);
     glEnd();

     // bridge shadow pole 2
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(250.0f,-200.0f);
     glVertex2f(280.0f,-200.0f);
     glVertex2f(280.0f,-155.0f);
     glVertex2f(250.0f,-155.0f);
     glEnd();

     // bridge shadow pole 3
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(670.0f,-200.0f);
     glVertex2f(700.0f,-200.0f);
     glVertex2f(700.0f,-155.0f);
     glVertex2f(670.0f,-155.0f);
     glEnd();

     // bridge shadow pole 4
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(710.0f,-200.0f);
     glVertex2f(740.0f,-200.0f);
     glVertex2f(740.0f,-155.0f);
     glVertex2f(710.0f,-155.0f);
     glEnd();

     //bridge shadow
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(165.0f,-170.0f);
     glVertex2f(750.0f,-170.0f);
     glVertex2f(750.0f,-175.0f);
     glVertex2f(165.0f,-175.0f);
     glEnd();

	 //boat
	 glPushMatrix();
	 glTranslatef(position8, 0.0f, 0.0f);
	 glBegin(GL_POLYGON);
     glColor3ub(0, 0, 0);
     glVertex2f(375.0f,-200.0f);
     glVertex2f(450.0f,-250.0f);
     glVertex2f(650.0f,-250.0f);
     glVertex2f(650.0f,-225.0f);
     glVertex2f(625.0f,-200.0f);
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(0, 0, 0);
     glVertex2f(475.0f,-200.0f);
     glVertex2f(550.0f,-200.0f);
     glVertex2f(500.0f,-160.0f);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3ub(41, 41, 61);
     glVertex2f(375.0f,-300.0f);
     glVertex2f(625.0f,-300.0f);
     glVertex2f(650.0f,-275.0f);
     glVertex2f(650.0f,-250.0f);
     glVertex2f(450.0f,-250.0f);
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(41, 41, 61);
     glVertex2f(525.0f,-350.0f);
     glVertex2f(550.0f,-300.0f);
     glVertex2f(475.0f,-300.0f);
     glEnd();
     glLoadIdentity();
	 glPopMatrix();

     //Building 1
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-750.0f,-155.0f);
     glVertex2f(-720.0f,-155.0f);
     glVertex2f(-720.0f,- 15.0f);
     glVertex2f(-750.0f,- 15.0f);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-715.0f,-155.0f);
     glVertex2f(-660.0f,-155.0f);
     glVertex2f(-660.0f,- 60.0f);
     glVertex2f(-715.0f,- 60.0f);
     glEnd();

     //building 2 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-705.0f,-70.0f);
     glVertex2f(-695.0f,-70.0f);
     glVertex2f(-695.0f,-80.0f);
     glVertex2f(-705.0f,-80.0f);
     glEnd();

     //building 2 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-680.0f,-70.0f);
     glVertex2f(-670.0f,-70.0f);
     glVertex2f(-670.0f,-80.0f);
     glVertex2f(-680.0f,-80.0f);
     glEnd();

     //building 2 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-705.0f,- 90.0f);
     glVertex2f(-695.0f,- 90.0f);
     glVertex2f(-695.0f,-100.0f);
     glVertex2f(-705.0f,-100.0f);
     glEnd();

     //building 2 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-680.0f,- 90.0f);
     glVertex2f(-670.0f,- 90.0f);
     glVertex2f(-670.0f,-100.0f);
     glVertex2f(-680.0f,-100.0f);
     glEnd();

     //building 1&2 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-720.0f,-155.0f);
     glVertex2f(-715.0f,-155.0f);
     glVertex2f(-715.0f,-100.0f);
     glVertex2f(-720.0f,-100.0f);
     glEnd();

     // building 3
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-640.0f,-155.0f);
     glVertex2f(-590.0f,-155.0f);
     glVertex2f(-590.0f,- 45.0f);
     glVertex2f(-640.0f,- 45.0f);
     glEnd();

     // building 3 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-630.0f,-70.0f);
     glVertex2f(-620.0f,-70.0f);
     glVertex2f(-620.0f,-80.0f);
     glVertex2f(-630.0f,-80.0f);
     glEnd();

     // building 3 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-610.0f,-70.0f);
     glVertex2f(-600.0f,-70.0f);
     glVertex2f(-600.0f,-80.0f);
     glVertex2f(-610.0f,-80.0f);
     glEnd();

     // building 3 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-630.0f,- 90.0f);
     glVertex2f(-620.0f,- 90.0f);
     glVertex2f(-620.0f,-100.0f);
     glVertex2f(-630.0f,-100.0f);
     glEnd();

     // building 3 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-610.0f,-090.0f);
     glVertex2f(-600.0f,-090.0f);
     glVertex2f(-600.0f,-100.0f);
     glVertex2f(-610.0f,-100.0f);
     glEnd();

     //building 2&3 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-660.0f,-155.0f);
     glVertex2f(-640.0f,-155.0f);
     glVertex2f(-640.0f,-080.0f);
     glVertex2f(-660.0f,-080.0f);
     glEnd();

     // building 4
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-580.0f,-155.0f);
     glVertex2f(-535.0f,-155.0f);
     glVertex2f(-535.0f, 045.0f);
     glVertex2f(-580.0f, 045.0f);
     glEnd();

     // building 4 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-570.0f,25.0f);
     glVertex2f(-560.0f,25.0f);
     glVertex2f(-560.0f,35.0f);
     glVertex2f(-570.0f,35.0f);
     glEnd();

     // building 4 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-555.0f,25.0f);
     glVertex2f(-545.0f,25.0f);
     glVertex2f(-545.0f,35.0f);
     glVertex2f(-555.0f,35.0f);
     glEnd();

     // building 4 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-570.0f, 5.0f);
     glVertex2f(-560.0f, 5.0f);
     glVertex2f(-560.0f,15.0f);
     glVertex2f(-570.0f,15.0f);
     glEnd();

     // building 4 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-555.0f,05.0f);
     glVertex2f(-545.0f,05.0f);
     glVertex2f(-545.0f,15.0f);
     glVertex2f(-555.0f,15.0f);
     glEnd();

     // building 4 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-570.0f,-05.0f);
     glVertex2f(-560.0f,-05.0f);
     glVertex2f(-560.0f,-15.0f);
     glVertex2f(-570.0f,-15.0f);
     glEnd();

     // building 4 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-555.0f,-05.0f);
     glVertex2f(-545.0f,-05.0f);
     glVertex2f(-545.0f,-15.0f);
     glVertex2f(-555.0f,-15.0f);
     glEnd();

     // building 3 &4 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-590.0f,-155.0f);
     glVertex2f(-580.0f,-155.0f);
     glVertex2f(-580.0f,-090.0f);
     glVertex2f(-590.0f,-090.0f);
     glEnd();

     // building 5
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-525.0f,-155.0f);
     glVertex2f(-460.0f,-155.0f);
     glVertex2f(-460.0f, 045.0f);
     glVertex2f(-525.0f, 045.0f);
     glEnd();

     // building 5 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255 );
     glVertex2f(-515.0f,15.0f);
     glVertex2f(-500.0f,15.0f);
     glVertex2f(-500.0f,30.0f);
     glVertex2f(-515.0f,30.0f);
     glEnd();

     // building 5 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255 );
     glVertex2f(-485.0f,15.0f);
     glVertex2f(-470.0f,15.0f);
     glVertex2f(-470.0f,30.0f);
     glVertex2f(-485.0f,30.0f);
     glEnd();

     // building 5 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255 );
     glVertex2f(-515.0f,-05.0f);
     glVertex2f(-500.0f,-05.0f);
     glVertex2f(-500.0f,-20.0f);
     glVertex2f(-515.0f,-20.0f);
     glEnd();

     // building 5 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255 );
     glVertex2f(-485.0f,-05.0f);
     glVertex2f(-470.0f,-05.0f);
     glVertex2f(-470.0f,-20.0f);
     glVertex2f(-485.0f,-20.0f);
     glEnd();

     // building 5 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255 );
     glVertex2f(-515.0f,-40.0f);
     glVertex2f(-500.0f,-40.0f);
     glVertex2f(-500.0f,-55.0f);
     glVertex2f(-515.0f,-55.0f);
     glEnd();

     // building 5 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-485.0f,-40.0f);
     glVertex2f(-470.0f,-40.0f);
     glVertex2f(-470.0f,-55.0f);
     glVertex2f(-485.0f,-55.0f);
     glEnd();

     // building 4 & 5 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-535.0f,-155.0f);
     glVertex2f(-525.0f,-155.0f);
     glVertex2f(-525.0f,-100.0f);
     glVertex2f(-535.0f,-100.0f);
     glEnd();

     //buildiing 6
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-450.0f,-155.0f);
     glVertex2f(-395.0f,-155.0f);
     glVertex2f(-395.0f,- 15.0f);
     glVertex2f(-450.0f,- 15.0f);
     glEnd();

     //buildiing 6 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-440.0f,-35.0f);
     glVertex2f(-430.0f,-35.0f);
     glVertex2f(-430.0f,-25.0f);
     glVertex2f(-440.0f,-25.0f);
     glEnd();

     //buildiing 6 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-415.0f,-35.0f);
     glVertex2f(-405.0f,-35.0f);
     glVertex2f(-405.0f,-25.0f);
     glVertex2f(-415.0f,-25.0f);
     glEnd();

     //buildiing 6 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-440.0f,-45.0f);
     glVertex2f(-430.0f,-45.0f);
     glVertex2f(-430.0f,-55.0f);
     glVertex2f(-440.0f,-55.0f);
     glEnd();

     //buildiing 6 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-415.0f,-45.0f);
     glVertex2f(-405.0f,-45.0f);
     glVertex2f(-405.0f,-55.0f);
     glVertex2f(-415.0f,-55.0f);
     glEnd();

     //buildiing 6 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-440.0f,-65.0f);
     glVertex2f(-430.0f,-65.0f);
     glVertex2f(-430.0f,-75.0f);
     glVertex2f(-440.0f,-75.0f);
     glEnd();

     //buildiing 6 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-415.0f,-65.0f);
     glVertex2f(-405.0f,-65.0f);
     glVertex2f(-405.0f,-75.0f);
     glVertex2f(-415.0f,-75.0f);
     glEnd();

     //buildiing 6 window last left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-440.0f,-85.0f);
     glVertex2f(-430.0f,-85.0f);
     glVertex2f(-430.0f,-95.0f);
     glVertex2f(-440.0f,-95.0f);
     glEnd();

     //buildiing 6 window last right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-415.0f,-85.0f);
     glVertex2f(-405.0f,-85.0f);
     glVertex2f(-405.0f,-95.0f);
     glVertex2f(-415.0f,-95.0f);
     glEnd();

     //building 5&6 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-460.0f,-155.0f);
     glVertex2f(-450.0f,-155.0f);
     glVertex2f(-450.0f,-110.0f);
     glVertex2f(-460.0f,-110.0f);
     glEnd();

     // building 7
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-385.0f,-155.0f);
     glVertex2f(-345.0f,-155.0f);
     glVertex2f(-345.0f,  48.0f);
     glVertex2f(-385.0f,   0.0f);
     glEnd();

     //building 6&7 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-395.0f,-155.0f);
     glVertex2f(-385.0f,-155.0f);
     glVertex2f(-385.0f,-125.0f);
     glVertex2f(-395.0f,-125.0f);
     glEnd();

     //building 8
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-320.0f,-155.0f);
     glVertex2f(-250.0f,-155.0f);
     glVertex2f(-250.0f,  60.0f);
     glVertex2f(-320.0f,  60.0f);
     glEnd();

     //building 8 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-310.0f,40.0f);
     glVertex2f(-295.0f,40.0f);
     glVertex2f(-295.0f,25.0f);
     glVertex2f(-310.0f,25.0f);
     glEnd();

     //building 8 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-275.0f,40.0f);
     glVertex2f(-260.0f,40.0f);
     glVertex2f(-260.0f,25.0f);
     glVertex2f(-275.0f,25.0f);
     glEnd();

     //building 8 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-310.0f,15.0f);
     glVertex2f(-295.0f,15.0f);
     glVertex2f(-295.0f, 0.0f);
     glVertex2f(-310.0f, 0.0f);
     glEnd();

     //building 8 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-275.0f,15.0f);
     glVertex2f(-260.0f,15.0f);
     glVertex2f(-260.0f, 0.0f);
     glVertex2f(-275.0f, 0.0f);
     glEnd();

     //building 8 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-310.0f,-10.0f);
     glVertex2f(-295.0f,-10.0f);
     glVertex2f(-295.0f,-25.0f);
     glVertex2f(-310.0f,-25.0f);
     glEnd();

     //building 8 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-275.0,-10.0);
     glVertex2f(-260.0,-10.0);
     glVertex2f(-260.0,-25.0);
     glVertex2f(-275.0,-25.0);
     glEnd();

     //building 8 window last left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-310.0f,-35.0f);
     glVertex2f(-295.0f,-35.0f);
     glVertex2f(-295.0f,-50.0f);
     glVertex2f(-310.0f,-50.0f);
     glEnd();

     //building 8 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-275.0f,-35.0f);
     glVertex2f(-260.0f,-35.0f);
     glVertex2f(-260.0f,-50.0f);
     glVertex2f(-275.0f,-50.0f);
     glEnd();

     //building 7 & 8 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-390.0f,-155.0f);
     glVertex2f(-320.0f,-155.0f);
     glVertex2f(-320.0f,- 70.0f);
     glVertex2f(-390.0f,- 70.0f);
     glEnd();

     // building 7 & 8 pole
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-335.0f,-155.0f);
     glVertex2f(-325.0f,-155.0f);
     glVertex2f(-325.0f,- 20.0f);
     glVertex2f(-335.0f,- 20.0f);
     glEnd();

     //building 9
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-240.0f,-155.0f);
     glVertex2f(-180.0f,-155.0f);
     glVertex2f(-180.0f,  10.0f);
     glVertex2f(-240.0f,  10.0f);
     glEnd();

      //building 9 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-230.0f,  0.0f);
     glVertex2f(-220.0f,  0.0f);
     glVertex2f(-220.0f,-10.0f);
     glVertex2f(-230.0f,-10.0f);
     glEnd();

      //building 9 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-190.0f,  0.0f);
     glVertex2f(-200.0f,  0.0f);
     glVertex2f(-200.0f,-10.0f);
     glVertex2f(-190.0f,-10.0f);
     glEnd();

     //building 9 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-230.0f,-20.0f);
     glVertex2f(-220.0f,-20.0f);
     glVertex2f(-220.0f,-30.0f);
     glVertex2f(-230.0f,-30.0f);
     glEnd();

     //building 9 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-190.0f,-20.0f);
     glVertex2f(-200.0f,-20.0f);
     glVertex2f(-200.0f,-30.0f);
     glVertex2f(-190.0f,-30.0f);
     glEnd();

     //building 9 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-230.0f,-40.0f);
     glVertex2f(-220.0f,-40.0f);
     glVertex2f(-220.0f,-50.0f);
     glVertex2f(-230.0f,-50.0f);
     glEnd();

     //building 9 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-190.0f,-40.0f);
     glVertex2f(-200.0f,-40.0f);
     glVertex2f(-200.0f,-50.0f);
     glVertex2f(-190.0f,-50.0f);
     glEnd();

     //building 9 window final left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-230.0f,-60.0f);
     glVertex2f(-220.0f,-60.0f);
     glVertex2f(-220.0f,-70.0f);
     glVertex2f(-230.0f,-70.0f);
     glEnd();

     //building 9 window final right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-190.0f,-60.0f);
     glVertex2f(-200.0f,-60.0f);
     glVertex2f(-200.0f,-70.0f);
     glVertex2f(-190.0f,-70.0f);
     glEnd();

     //building 8 &  9 GAP
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-250.0f,-155.0f);
     glVertex2f(-240.0f,-155.0f);
     glVertex2f(-240.0f,-130.0f);
     glVertex2f(-250.0f,-130.0f);
     glEnd();

     // building 10
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-170.0f,-155.0f);
     glVertex2f(-135.0f,-155.0f);
     glVertex2f(-135.0f,   0.0f);
     glVertex2f(-170.0f,   0.0f);
     glEnd();

     // building 9 & 10 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-180.0f,-155.0f);
     glVertex2f(-170.0f,-155.0f);
     glVertex2f(-170.0f,-130.0f);
     glVertex2f(-180.0f,-130.0f);
     glEnd();

     // building 11
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-125.0f,-155.0f);
     glVertex2f(- 75.0f,-155.0f);
     glVertex2f(- 75.0f,  30.0f);
     glVertex2f(-125.0f,  30.0f);
     glEnd();

     // building 11 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-80.0f,10.0f);
     glVertex2f(-80.0f,10.0f);
     glVertex2f(-70.0f,20.0f);
     glVertex2f(-70.0f,20.0f);
     glEnd();

     // building 11 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-120.0f,10.0f);
     glVertex2f(-120.0f,10.0f);
     glVertex2f(-110.0f,20.0f);
     glVertex2f(-110.0f,20.0f);
     glEnd();

     //building 10 & 11 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-135.0f,-155.0f);
     glVertex2f(-125.0f,-155.0f);
     glVertex2f(-125.0f,-130.0f);
     glVertex2f(-135.0f,-130.0f);
     glEnd();

     // building 12
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-65.0f,-155.0f);
     glVertex2f(  0.0f,-155.0f);
     glVertex2f(  0.0f,- 10.0f);
     glVertex2f(-65.0f,- 10.0f);
     glEnd();

     // building 12 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-55.0f,-20.0f);
     glVertex2f(-40.0f,-20.0f);
     glVertex2f(-40.0f,-35.0f);
     glVertex2f(-55.0f,-35.0f);
     glEnd();

     // building 12 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-25.0f,-20.0f);
     glVertex2f(-10.0f,-20.0f);
     glVertex2f(-10.0f,-35.0f);
     glVertex2f(-25.0f,-35.0f);
     glEnd();

     // building 12 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-55.0f,-45.0f);
     glVertex2f(-40.0f,-45.0f);
     glVertex2f(-40.0f,-60.0f);
     glVertex2f(-55.0f,-60.0f);
     glEnd();

     // building 12 window middel right
     glBegin(GL_QUADS);
     glColor3ub(255, 255,255);
     glVertex2f(-25.0f,-45.0f);
     glVertex2f(-10.0f,-45.0f);
     glVertex2f(-10.0f,-60.0f);
     glVertex2f(-25.0f,-60.0f);
     glEnd();

     // building 12 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-55.0f,-70.0f);
     glVertex2f(-40.0f,-70.0f);
     glVertex2f(-40.0f,-85.0f);
     glVertex2f(-55.0f,-85.0f);
     glEnd();

     // building 12 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-25.0f,-70.0f);
     glVertex2f(-10.0f,-70.0f);
     glVertex2f(-10.0f,-85.0f);
     glVertex2f(-25.0f,-85.0f);
     glEnd();

     //building 11 & 12 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-75.0f,-155.0f);
     glVertex2f(-65.0f,-155.0f);
     glVertex2f(-65.0f,- 80.0f);
     glVertex2f(-75.0f,- 80.0f);
     glEnd();

     // building 13
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(10.0f,-155.0f);
     glVertex2f(50.0f,-155.0f);
     glVertex2f(50.0f,- 20.0f);
     glVertex2f(10.0f,- 20.0f);
     glEnd();

     // building 13 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(15.0f,-40.0f);
     glVertex2f(25.0f,-40.0f);
     glVertex2f(25.0f,-30.0f);
     glVertex2f(15.0f,-30.0f);
     glEnd();

     // building 13 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(35.0f,-40.0f);
     glVertex2f(45.0f,-40.0f);
     glVertex2f(45.0f,-30.0f);
     glVertex2f(35.0f,-30.0f);
     glEnd();

     // building 13 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(15.0f,-50.0f);
     glVertex2f(25.0f,-50.0f);
     glVertex2f(25.0f,-60.0f);
     glVertex2f(15.0f,-60.0f);
     glEnd();

     // building 13 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(35.0f,-50.0f);
     glVertex2f(45.0f,-50.0f);
     glVertex2f(45.0f,-60.0f);
     glVertex2f(35.0f,-60.0f);
     glEnd();

     // building 13 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(15.0f,-70.0f);
     glVertex2f(25.0f,-70.0f);
     glVertex2f(25.0f,-80.0f);
     glVertex2f(15.0f,-80.0f);
     glEnd();

     // building 13 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(35.0f,-70.0f);
     glVertex2f(45.0f,-70.0f);
     glVertex2f(45.0f,-80.0f);
     glVertex2f(35.0f,-80.0f);
     glEnd();

     // building 12 & 13 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f( 0.0f,-155.0f);
     glVertex2f(10.0f,-155.0f);
     glVertex2f(10.0f,- 75.0f);
     glVertex2f( 0.0f,- 75.0f);
     glEnd();

     // building 14
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f( 60.0f,-155.0f);
     glVertex2f(100.0f,-155.0f);
     glVertex2f(100.0f,- 40.0f);
     glVertex2f( 60.0f,- 40.0f);
     glEnd();

     // building 14 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(65.0f,-60.0f);
     glVertex2f(75.0f,-60.0f);
     glVertex2f(75.0f,-50.0f);
     glVertex2f(65.0f,-50.0f);
     glEnd();

     // building 14 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(95.0f,-60.0f);
     glVertex2f(85.0f,-60.0f);
     glVertex2f(85.0f,-50.0f);
     glVertex2f(95.0f,-50.0f);
     glEnd();

     // building 14 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(65.0f,-80.0f);
     glVertex2f(75.0f,-80.0f);
     glVertex2f(75.0f,-70.0f);
     glVertex2f(65.0f,-70.0f);
     glEnd();

     // building 14 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(95.0f,-80.0f);
     glVertex2f(85.0f,-80.0f);
     glVertex2f(85.0f,-70.0f);
     glVertex2f(95.0f,-70.0f);
     glEnd();

     // building 13 & 14 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(50.0f,-155.0f);
     glVertex2f(60.0f,-155.0f);
     glVertex2f(60.0f,- 90.0f);
     glVertex2f(50.0f,- 90.0f);
     glEnd();

     // building 15
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(110.0f,-155.0f);
     glVertex2f(165.0f,-155.0f);
     glVertex2f(165.0f,- 40.0f);
     glVertex2f(110.0f,- 40.0f);
     glEnd();

     // building 15 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(120.0f,-60.0f);
     glVertex2f(130.0f,-60.0f);
     glVertex2f(130.0f,-50.0f);
     glVertex2f(120.0f,-50.0f);
     glEnd();

     // building 15 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(145.0f,-60.0f);
     glVertex2f(155.0f,-60.0f);
     glVertex2f(155.0f,-50.0f);
     glVertex2f(145.0f,-50.0f);
     glEnd();

     // building 15 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(120.0f,-80.0f);
     glVertex2f(130.0f,-80.0f);
     glVertex2f(130.0f,-70.0f);
     glVertex2f(120.0f,-70.0f);
     glEnd();

     // building 15 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(145.0f,-80.0f);
     glVertex2f(155.0f,-80.0f);
     glVertex2f(155.0f,-70.0f);
     glVertex2f(145.0f,-70.0f);
     glEnd();

     // building 14 & 15 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(100.0f,-155.0f);
     glVertex2f(110.0f,-155.0f);
     glVertex2f(110.0f,- 90.0f);
     glVertex2f(100.0f,- 90.0f);
     glEnd();

     // bridge pole 1
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(210.0f,-155.0f);
     glVertex2f(240.0f,-155.0f);
     glVertex2f(240.0f,- 60.0f);
     glVertex2f(210.0f,- 60.0f);
     glEnd();

     // bridge pole 2
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(250.0f,-155.0f);
     glVertex2f(280.0f,-155.0f);
     glVertex2f(280.0f,- 60.0f);
     glVertex2f(250.0f,- 60.0f);
     glEnd();

     // bridge pole 3
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(670.0f,-155.0f);
     glVertex2f(700.0f,-155.0f);
     glVertex2f(700.0f,- 60.0f);
     glVertex2f(670.0f,- 60.0f);
     glEnd();

     // bridge pole 4
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(710.0f,-155.0f);
     glVertex2f(740.0f,-155.0f);
     glVertex2f(740.0f,- 60.0f);
     glVertex2f(710.0f,- 60.0f);
     glEnd();

     //bridge
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(165.0f,-130.0f);
     glVertex2f(750.0f,-130.0f);
     glVertex2f(750.0f,-120.0f);
     glVertex2f(165.0f,-120.0f);
     glEnd();

     // Road
     glBegin(GL_QUADS);
     glColor3ub(1, 1, 1);
     glVertex2f(-750.0f,-500.0f);
     glVertex2f( 750.0f,-500.0f);
     glVertex2f( 750.0f,-450.0f);
     glVertex2f(-750.0f,-450.0f);
     glEnd();

     //LAMPPOST ONE START
     glBegin(GL_POLYGON);// lamppost one base
     glColor3ub(1, 1, 1);
     glVertex2f(-650.0,-450.0);
     glVertex2f(-610.0,-450.0);
     glVertex2f(-600.0,-370.0);
     glVertex2f(-630.0,-350.0);
     glVertex2f(-660.0,-370.0);
     glEnd();

     int i;
     x = -630; y = -320; radius = 30;
     glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(1,1,1);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     glBegin(GL_QUADS);
     glColor3ub(1, 1, 1); // Lamp stick one
     glVertex2f(-635.0f,-450.0f);
     glVertex2f(-625.0f,-450.0f);
     glVertex2f(-625.0f,  25.0f);
     glVertex2f(-635.0f,  25.0f);
     glEnd();

     //lamp circle at top  centre
     x = -630;  y = 40;  radius = 20;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(1,1,1);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     glBegin(GL_QUADS);
     glColor3ub(1, 1, 1);
     glVertex2f(-710.0f, 0.0f);
     glVertex2f(-550.0f, 0.0f);
     glVertex2f(-550.0f,10.0f);
     glVertex2f(-710.0f,10.0f);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(1, 1, 1); // the actual lamp holder base left
     glVertex2f(-720.0f, 0.0f);
     glVertex2f(-710.0f, 0.0f);
     glVertex2f(-710.0f,25.0f);
     glVertex2f(-720.0f,25.0f);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(1, 1, 1); // the actual lamp holder base right
     glVertex2f(-550.0f, 0.0f);
     glVertex2f(-540.0f, 0.0f);
     glVertex2f(-540.0f,25.0f);
     glVertex2f(-550.0f,25.0f);
     glEnd();
	  //lamp circle at top  right

     x = -545; y = 50; radius = 25;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(230, 243, 255);//BULB
     glVertex2f(x,y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

	 //lamp circle at top  left
     x = -715; y = 50; radius = 25;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(230, 243, 255);//BULB
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     //LAMPPOST ONE END
     glBegin(GL_POLYGON);
     glColor3ub(1, 1, 1); // Lamp base two
     glVertex2f(580.0f,-450.0f);
     glVertex2f(620.0f,-450.0f);
     glVertex2f(630.0f,-370.0f);
     glVertex2f(600.0f,-350.0f);
     glVertex2f(570.0f,-370.0f);
     glEnd();

     //lamp circle after the base two
     x = 600; y = -320; radius = 30;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(1, 1, 1);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     glBegin(GL_QUADS);
     glColor3ub(1, 1, 1); // Lamp stick two
     glVertex2f(595.0f,-450.0f);
     glVertex2f(605.0f,-450.0f);
     glVertex2f(605.0f,  25.0f);
     glVertex2f(595.0f,  25.0f);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(1, 1, 1); // the actual lamp holder base
     glVertex2f(520.0f, 0.0f);
     glVertex2f(680.0f, 0.0f);
     glVertex2f(680.0f,10.0f);
     glVertex2f(520.0f,10.0f);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(1, 1, 1); // the actual lamp holder base left
     glVertex2f(510.0f, 0.0f);
     glVertex2f(520.0f, 0.0f);
     glVertex2f(520.0f,25.0f);
     glVertex2f(510.0f,25.0f);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(1, 1, 1); // the actual lamp holder base right
     glVertex2f(680.0f, 0.0f);
     glVertex2f(690.0f, 0.0f);
     glVertex2f(690.0f,25.0f);
     glVertex2f(680.0f,25.0f);
     glEnd();

     x = 600; y = 45; radius = 20;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(1, 1, 1);
     glVertex2f(x,y);
     for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

	 //lamp circle at top  right
     x = 515; y = 50; radius = 25;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(230, 243, 255);//BULB
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

	 //lamp circle at top  left
     x = 685; y = 50; radius = 25;
     glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(230, 243, 255);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();
     glFlush();
}

void latenight_demo(int val)
{
     glutDisplayFunc(latenight);
}

void night()
{
     glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
     glClear(GL_COLOR_BUFFER_BIT);
     //sky
     glBegin(GL_QUADS);
     glColor3ub(71, 71, 107); // night
     glVertex2f(-750.0f,-155.0f);
     glVertex2f( 750.0f,-155.0f);
     glVertex2f( 750.0f, 500.0f);
     glVertex2f(-750.0f, 500.0f);
     glEnd();

     //stars
     GLfloat x = -740; GLfloat y = 450; GLfloat radius = 3;
     int triangleAmount = 300;
	 GLfloat twicePi = 2.0f * PI;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(255, 255, 255);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
            glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -700; y = 350; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -500; y = 250; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -600; y = 400; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -400; y = 400; radius = 3;
     glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -300; y = 200; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++)
            {
                glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		    }
	 glEnd();

     x = -250; y = 300; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -100; y=350; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -0; y = 150; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 100; y = 350; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 250; y = 250; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 400; y = 400; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 500; y = 375; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 600; y = 275; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 700; y = 380; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -600; y = 180; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
            {
                glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		    }
	 glEnd();

     x = -500; y = 480; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -450; y = 380; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
	 	}
	 glEnd();

     x = 580; y = 480; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x=0; y = 480; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -300; y=450; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     //MOON one
	 glPushMatrix();
	 glTranslatef(0.0f, position6, 0.0f);
     x = 475; y = 50; radius = 150;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();
	 glLoadIdentity();
	 glPopMatrix();

	 //plane
	 glPushMatrix();
     glTranslatef(position9, 0.0f, 0.0f );
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-650.0f,370.0f);
     glVertex2f(-375.0f,370.0f);
     glVertex2f(-375.0f,410.0f);
     glVertex2f(-650.0f,410.0f);
     glEnd();

     //wing
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-550.0f,300.0f);
     glVertex2f(-525.0f,300.0f);
     glVertex2f(-430.0f,370.0f);
     glVertex2f(-510.0f,370.0f);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-650.0f,370.0f);
     glVertex2f(-575.0f,370.0f);
     glVertex2f(-650.0f,450.0f);
     glVertex2f(-675.0f,450.0f);
     glEnd();

     x = -371.0f; y = 390.0f; radius =20.0f;
     twicePi = 2.0f * PI;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0, 0, 0);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();
	 glLoadIdentity();
	 glPopMatrix();

	 // water
     glBegin(GL_QUADS);
     glColor3ub(82, 82, 122);
     glVertex2f(-750.0f,-155.0f);
     glVertex2f(-750.0f,-450.0f);
     glVertex2f( 750.0f,-450.0f);
     glVertex2f( 750.0f,-155.0f);
     glEnd();

     //stars
     x = -740; y = -450; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(255, 255, 255);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -700;  y= -350; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -500; y = -250; radius = 3;
     glBegin(GL_TRIANGLE_FAN);
     glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -600; y = -400; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -400; y = -400; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -300; y = -200; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -250; y = -300; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -100; y = -350; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 0; y = -150; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 100; y = -350; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 250; y= -250; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 400; y = -400; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 500; y = -375; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 600; y = -275; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 700; y = -380; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -600; y = -180; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -500; y = -480; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
     glEnd();

     x = -450; y = -380; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 580; y = -480; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 0; y = -480; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -300; y = -450; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     //MOON two
	 glPushMatrix();
	 glTranslatef(0.0f, position7, 0.0f );
     x = 475; y = -315; radius = 150;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(255, 255, 255);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();
	 glLoadIdentity();
	 glPopMatrix();

    //plane2
     glPushMatrix();
	 glTranslatef(position9, 0.0f, 0.0f );
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-650.0f,-370.0f);
     glVertex2f(-375.0f,-370.0f); //body
     glVertex2f(-375.0f,-410.0f);
     glVertex2f(-650.0f,-410.0f);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-510.0f,-375.0f);
     glVertex2f(-430.0f,-375.0f);
     glVertex2f(-525.0f,-305.0f);
     glVertex2f(-550.0f,-305.0f);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-650.0f,-370.0f);//tail
     glVertex2f(-575.0f,-370.0f);
     glVertex2f(-650.0f,-450.0f);
     glVertex2f(-675.0f,-450.0f);
     glEnd();

	 x = -380.0f; y = -390.0f; radius = 20.0f;
	 glBegin(GL_TRIANGLE_FAN);
     glColor3ub(41, 41, 61);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y+ (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();
	 glLoadIdentity();
	 glPopMatrix();

     //Building Shadow
     //building shadow 1
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-750.0f,-230.0f);
     glVertex2f(-720.0f,-230.0f);
     glVertex2f(-720.0f,-155.0f);
     glVertex2f(-750.0f,-155.0f);
     glEnd();

     //building shadow 2
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-715.0f,-200.0f);
     glVertex2f(-660.0f,-200.0f);
     glVertex2f(-660.0f,-155.0f);
     glVertex2f(-715.0f,-155.0f);
     glEnd();

     //building 2 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-705.0f,-190.0f);
     glVertex2f(-695.0f,-190.0f);
     glVertex2f(-695.0f,-180.0f);
     glVertex2f(-705.0f,-180.0f);
     glEnd();

     //building 2 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-680.0f,-190.0f);
     glVertex2f(-670.0f,-190.0f);
     glVertex2f(-670.0f,-180.0f);
     glVertex2f(-680.0f,-180.0f);
     glEnd();

     //building 2 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-705.0f,-175.0f);
     glVertex2f(-695.0f,-175.0f);
     glVertex2f(-695.0f,-165.0f);
     glVertex2f(-705.0f,-165.0f);
     glEnd();

     //building 2 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-680.0f,-175.0f);
     glVertex2f(-670.0f,-175.0f);
     glVertex2f(-670.0f,-165.0f);
     glVertex2f(-680.0f,-165.0f);
     glEnd();

     //building shadow 1&2 gap
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-720.0f,-180.0f);
     glVertex2f(-715.0f,-180.0f);
     glVertex2f(-715.0f,-155.0f);
     glVertex2f(-720.0f,-155.0f);
     glEnd();

     // building shadow 3
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-640.0f,-215.0f);
     glVertex2f(-590.0f,-215.0f);
     glVertex2f(-590.0f,-155.0f);
     glVertex2f(-640.0f,-155.0f);
     glEnd();

     // building 3 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-630.0f,-205.0f);
     glVertex2f(-620.0f,-205.0f);
     glVertex2f(-620.0f,-195.0f);
     glVertex2f(-630.0f,-195.0f);
     glEnd();

     // building 3 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-610.0f,-205.0f);
     glVertex2f(-600.0f,-205.0f);
     glVertex2f(-600.0f,-195.0f);
     glVertex2f(-610.0f,-195.0f);
     glEnd();

     // building 3 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-630.0f,-185.0f);
     glVertex2f(-620.0f,-185.0f);
     glVertex2f(-620.0f,-175.0f);
     glVertex2f(-630.0f,-175.0f);
     glEnd();

     // building 3 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-610.0f,-185.0f);
     glVertex2f(-600.0f,-185.0f);
     glVertex2f(-600.0f,-175.0f);
     glVertex2f(-610.0f,-175.0f);
     glEnd();

     //building shadow 2&3 gap
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-660.0f,-180.0f);
     glVertex2f(-640.0f,-180.0f);
     glVertex2f(-640.0f,-155.0f);
     glVertex2f(-660.0f,-155.0f);
     glEnd();

     // building 4
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-580.0f,-250.0f);
     glVertex2f(-535.0f,-250.0f);
     glVertex2f(-535.0f,-155.0f);
     glVertex2f(-580.0f,-155.0f);
     glEnd();

     // building 4 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-570.0f,-240.0f);
     glVertex2f(-560.0f,-240.0f);
     glVertex2f(-560.0f,-230.0f);
     glVertex2f(-570.0f,-230.0f);
     glEnd();

     // building 4 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-555.0f,-240.0f);
     glVertex2f(-545.0f,-240.0f);
     glVertex2f(-545.0f,-230.0f);
     glVertex2f(-555.0f,-230.0f);
     glEnd();

     // building 4 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-570.0f,-220.0f);
     glVertex2f(-560.0f,-220.0f);
     glVertex2f(-560.0f,-210.0f);
     glVertex2f(-570.0f,-210.0f);
     glEnd();

     // building 4 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-555.0f,-220.0f);
     glVertex2f(-545.0f,-220.0f);
     glVertex2f(-545.0f,-210.0f);
     glVertex2f(-555.0f,-210.0f);
     glEnd();

     // building 4 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-570.0f,-200.0f);
     glVertex2f(-560.0f,-200.0f);
     glVertex2f(-560.0f,-190.0f);
     glVertex2f(-570.0f,-190.0f);
     glEnd();

     // building 4 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-555.0f,-200.0f);
     glVertex2f(-545.0f,-200.0f);
     glVertex2f(-545.0f,-190.0f);
     glVertex2f(-555.0f,-190.0f);
     glEnd();

     // building shadow 3 &4 gap
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-590.0f,-175.0f);
     glVertex2f(-580.0f,-175.0f);
     glVertex2f(-580.0f,-155.0f);
     glVertex2f(-590.0f,-155.0f);
     glEnd();

     // building shadow 5
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-525.0f,-250.0f);
     glVertex2f(-460.0f,-250.0f);
     glVertex2f(-460.0f,-155.0f);
     glVertex2f(-525.0f,-155.0f);
     glEnd();

     // building 5 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-515.0f,-240.0f);
     glVertex2f(-500.0f,-240.0f);
     glVertex2f(-500.0f,-225.0f);
     glVertex2f(-515.0f,-225.0f);
     glEnd();

     // building 5 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-485.0f,-240.0f);
     glVertex2f(-470.0f,-240.0f);
     glVertex2f(-470.0f,-225.0f);
     glVertex2f(-485.0f,-225.0f);
     glEnd();

     // building 5 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-515.0f,-215.0f);
     glVertex2f(-500.0f,-215.0f);
     glVertex2f(-500.0f,-200.0f);
     glVertex2f(-515.0f,-200.0f);
     glEnd();

     // building 5 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-485.0f,-215.0f);
     glVertex2f(-470.0f,-215.0f);
     glVertex2f(-470.0f,-200.0f);
     glVertex2f(-485.0f,-200.0f);
     glEnd();

     // building shadow 4 &5 gap
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-535.0f,-185.0f);
     glVertex2f(-525.0f,-185.0f);
     glVertex2f(-525.0f,-155.0f);
     glVertex2f(-535.0f,-155.0f);
     glEnd();

     //buildiing shadow 6
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-450.0f,-235.0f);
     glVertex2f(-395.0f,-235.0f);
     glVertex2f(-395.0f,-155.0f);
     glVertex2f(-450.0f,-155.0f);
     glEnd();

     //buildiing 6 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-440.0f,-225.0f);
     glVertex2f(-430.0f,-225.0f);
     glVertex2f(-430.0f,-215.0f);
     glVertex2f(-440.0f,-215.0f);
     glEnd();

     //buildiing 6 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-415.0f,-225.0f);
     glVertex2f(-405.0f,-225.0f);
     glVertex2f(-405.0f,-215.0f);
     glVertex2f(-415.0f,-215.0f);
     glEnd();

     //buildiing 6 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-440.0f,-205.0f);
     glVertex2f(-430.0f,-205.0f);
     glVertex2f(-430.0f,-195.0f);
     glVertex2f(-440.0f,-195.0f);
     glEnd();

     //buildiing 6 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-415.0f,-205.0f);
     glVertex2f(-405.0f,-205.0f);
     glVertex2f(-405.0f,-195.0f);
     glVertex2f(-415.0f,-195.0f);
     glEnd();

     //building shadow 5&6 gap
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-460.0f,-170.0f);
     glVertex2f(-450.0f,-170.0f);
     glVertex2f(-450.0f,-155.0f);
     glVertex2f(-460.0f,-155.0f);
     glEnd();

     // building shadow 7
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-385.0f,-235.0f);
     glVertex2f(-345.0f,-235.0f);
     glVertex2f(-345.0f,-155.0f);
     glVertex2f(-385.0f,-155.0f);
     glEnd();

     //building shadow 6&7 gap
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-395.0f,-175.0f);
     glVertex2f(-385.0f,-175.0f);
     glVertex2f(-385.0f,-155.0f);
     glVertex2f(-395.0f,-155.0f);
     glEnd();

     //building shadow 8
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-320.0f,-250.0f);
     glVertex2f(-250.0f,-250.0f);
     glVertex2f(-250.0f,-155.0f);
     glVertex2f(-320.0f,-155.0f);
     glEnd();

     //building 8 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-310.0f,-240.0f);
     glVertex2f(-295.0f,-240.0f);
     glVertex2f(-295.0f,-225.0f);
     glVertex2f(-310.0f,-225.0f);
     glEnd();

     //building 8 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-275.0f,-240.0f);
     glVertex2f(-260.0f,-240.0f);
     glVertex2f(-260.0f,-225.0f);
     glVertex2f(-275.0f,-225.0f);
     glEnd();

     //building 8 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-310.0f,-215.0f);
     glVertex2f(-295.0f,-215.0f);
     glVertex2f(-295.0f,-200.0f);
     glVertex2f(-310.0f,-200.0f);
     glEnd();

     //building 8 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-275.0f,-215.0f);
     glVertex2f(-260.0f,-215.0f);
     glVertex2f(-260.0f,-200.0f);
     glVertex2f(-275.0f,-200.0f);
     glEnd();

     //building 8 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-310.0f,-190.0f);
     glVertex2f(-295.0f,-190.0f);
     glVertex2f(-295.0f,-175.0f);
     glVertex2f(-310.0f,-175.0f);
     glEnd();

     //building 8 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-275.0f,-190.0f);
     glVertex2f(-260.0f,-190.0f);
     glVertex2f(-260.0f,-175.0f);
     glVertex2f(-275.0f,-175.0f);
     glEnd();

     //building shadow 7 & 8 gap
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-385.0f,-180.0f);
     glVertex2f(-320.0f,-180.0f);
     glVertex2f(-320.0f,-155.0f);
     glVertex2f(-385.0f,-155.0f);
     glEnd();

     //building shadow 9
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-240.0f,-240.0f);
     glVertex2f(-180.0f,-240.0f);
     glVertex2f(-180.0f,-155.0f);
     glVertex2f(-240.0f,-155.0f);
     glEnd();

     //building 9 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-230.0f,-230.0f);
     glVertex2f(-220.0f,-230.0f);
     glVertex2f(-220.0f,-220.0f);
     glVertex2f(-230.0f,-220.0f);
     glEnd();

      //building 9 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-190.0f,-230.0f);
     glVertex2f(-200.0f,-230.0f);
     glVertex2f(-200.0f,-220.0f);
     glVertex2f(-190.0f,-220.0f);
     glEnd();

     //building 9 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-230.0f,-210.0f);
     glVertex2f(-220.0f,-210.0f);
     glVertex2f(-220.0f,-200.0f);
     glVertex2f(-230.0f,-200.0f);
     glEnd();

     //building 9 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-190.0f,-210.0f);
     glVertex2f(-200.0f,-210.0f);
     glVertex2f(-200.0f,-200.0f);
     glVertex2f(-190.0f,-200.0f);
     glEnd();

     //building 9 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-230.0f,-190.0f);
     glVertex2f(-220.0f,-190.0f);
     glVertex2f(-220.0f,-180.0f);
     glVertex2f(-230.0f,-180.0f);
     glEnd();

      //building 9 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-190.0f,-190.0f);
     glVertex2f(-200.0f,-190.0f);
     glVertex2f(-200.0f,-180.0f);
     glVertex2f(-190.0f,-180.0f);
     glEnd();

     //building  shadow 8 &  9 GAP
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-250.0f,-170.0f);
     glVertex2f(-240.0f,-170.0f);
     glVertex2f(-240.0f,-155.0f);
     glVertex2f(-250.0f,-155.0f);
     glEnd();

     // building shadow 10
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-170.0f,-220.0f);
     glVertex2f(-135.0f,-220.0f);
     glVertex2f(-135.0f,-155.0f);
     glVertex2f(-170.0f,-155.0f);
     glEnd();

     // building shadow 9 & 10 gap
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-180.0f,-165.0f);
     glVertex2f(-170.0f,-165.0f);
     glVertex2f(-170.0f,-155.0f);
     glVertex2f(-180.0f,-155.0f);
     glEnd();

     // building shadow 11
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-125.0f,-220.0f);
     glVertex2f(- 75.0f,-220.0f);
     glVertex2f(- 75.0f,-155.0f);
     glVertex2f(-125.0f,-155.0f);
     glEnd();

     //building shadow 10 & 11 gap
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-135.0f,-170.0f);
     glVertex2f(-125.0f,-170.0f);
     glVertex2f(-125.0f,-155.0f);
     glVertex2f(-135.0f,-155.0f);
     glEnd();

     // building shadow 12
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-65.0f,-235.0f);
     glVertex2f(  0.0f,-235.0f);
     glVertex2f(  0.0f,-155.0f);
     glVertex2f(-65.0f,-155.0f);
     glEnd();

     // building 12 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-55.0f,-225.0f);
     glVertex2f(-40.0f,-225.0f);
     glVertex2f(-40.0f,-210.0f);
     glVertex2f(-55.0f,-210.0f);
     glEnd();

     // building 12 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255,255);
     glVertex2f(-25.0f,-225.0f);
     glVertex2f(-10.0f,-225.0f);
     glVertex2f(-10.0f,-210.0f);
     glVertex2f(-25.0f,-210.0f);
     glEnd();

     // building 12 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-55.0f,-200.0f);
     glVertex2f(-40.0f,-200.0f);
     glVertex2f(-40.0f,-185.0f);
     glVertex2f(-55.0f,-185.0f);
     glEnd();

     // building 12 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255,255);
     glVertex2f(-25.0f,-200.0f);
     glVertex2f(-10.0f,-200.0f);
     glVertex2f(-10.0f,-185.0f);
     glVertex2f(-25.0f,-185.0f);
     glEnd();

     //building 11 & 12 gap
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(-75.0f,-175.0f);
     glVertex2f(-65.0f,-175.0f);
     glVertex2f(-65.0f,-155.0f);
     glVertex2f(-75.0f,-155.0f);
     glEnd();

     // building shadow 13
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f( 0.0f,-225.0f);
     glVertex2f(50.0f,-225.0f);
     glVertex2f(50.0f,-155.0f);
     glVertex2f( 0.0f,-155.0f);
     glEnd();

     // building 13 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(15.0f,-215.0f);
     glVertex2f(25.0f,-215.0f);
     glVertex2f(25.0f,-205.0f);
     glVertex2f(15.0f,-205.0f);
     glEnd();

     // building 13 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(35.0f,-215.0f);
     glVertex2f(45.0f,-215.0f);
     glVertex2f(45.0f,-205.0f);
     glVertex2f(35.0f,-205.0f);
     glEnd();

     // building 13 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(15.0f,-195.0f);
     glVertex2f(25.0f,-195.0f);
     glVertex2f(25.0f,-185.0f);
     glVertex2f(15.0f,-185.0f);
     glEnd();

     // building 13 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(35.0f,-195.0f);
     glVertex2f(45.0f,-195.0f);
     glVertex2f(45.0f,-185.0f);
     glVertex2f(35.0f,-185.0f);
     glEnd();

     // building sha dow 14 & 15
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f( 50.0f,-215.0f);
     glVertex2f(165.0f,-215.0f);
     glVertex2f(165.0f,-155.0f);
     glVertex2f( 50.0f,-155.0f);
     glEnd();

     // building 14 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(65.0f,-205.0f);
     glVertex2f(75.0f,-205.0f);
     glVertex2f(75.0f,-195.0f);
     glVertex2f(65.0f,-195.0f);
     glEnd();

     // building 14 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(95.0f,-205.0f);
     glVertex2f(85.0f,-205.0f);
     glVertex2f(85.0f,-195.0f);
     glVertex2f(95.0f,-195.0f);
     glEnd();

     // building 14 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(65.0f,-185.0f);
     glVertex2f(75.0f,-185.0f);
     glVertex2f(75.0f,-175.0f);
     glVertex2f(65.0f,-175.0f);
     glEnd();

     // building 14 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(95.0f,-185.0f);
     glVertex2f(85.0f,-185.0f);
     glVertex2f(85.0f,-175.0f);
     glVertex2f(95.0f,-175.0f);
     glEnd();

     // building 15 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(120.0f,-205.0f);
     glVertex2f(130.0f,-205.0f);
     glVertex2f(130.0f,-195.0f);
     glVertex2f(120.0f,-195.0f);
     glEnd();

     // building 15 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(145.0f,-205.0f);
     glVertex2f(155.0f,-205.0f);
     glVertex2f(155.0f,-195.0f);
     glVertex2f(145.0f,-195.0f);
     glEnd();

     // building 15 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(120.0f,-185.0f);
     glVertex2f(130.0f,-185.0f);
     glVertex2f(130.0f,-175.0f);
     glVertex2f(120.0f,-175.0f);
     glEnd();

     // building 15 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(145.0f,-185.0f);
     glVertex2f(155.0f,-185.0f);
     glVertex2f(155.0f,-175.0f);
     glVertex2f(145.0f,-175.0f);
     glEnd();

     // bridge shadow pole 1
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(210.0f,-200.0f);
     glVertex2f(240.0f,-200.0f);
     glVertex2f(240.0f,-155.0f);
     glVertex2f(210.0f,-155.0f);
     glEnd();

     // bridge shadow pole 2
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(250.0f,-200.0f);
     glVertex2f(280.0f,-200.0f);
     glVertex2f(280.0f,-155.0f);
     glVertex2f(250.0f,-155.0f);
     glEnd();

     // bridge shadow pole 3
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(670.0f,-200.0f);
     glVertex2f(700.0f,-200.0f);
     glVertex2f(700.0f,-155.0f);
     glVertex2f(670.0f,-155.0f);
     glEnd();

     // bridge shadow pole 4
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(710.0f,-200.0f);
     glVertex2f(740.0f,-200.0f);
     glVertex2f(740.0f,-155.0f);
     glVertex2f(710.0f,-155.0f);
     glEnd();

     //bridge shadow
     glBegin(GL_QUADS);
     glColor3ub(41, 41, 61);
     glVertex2f(165.0f,-170.0f);
     glVertex2f(750.0f,-170.0f);
     glVertex2f(750.0f,-175.0f);
     glVertex2f(165.0f,-175.0f);
     glEnd();

	 //boat
	 glPushMatrix();
	 glTranslatef(position8, 0.0f, 0.0f );
	 glBegin(GL_POLYGON);
     glColor3ub(0,0,0);
     glVertex2f(375.0f,-200.0f);
     glVertex2f(450.0f,-250.0f);
     glVertex2f(650.0f,-250.0f);
     glVertex2f(650.0f,-225.0f);
     glVertex2f(625.0f,-200.0f);
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(0,0,0);
     glVertex2f(475.0f,-200.0f);
     glVertex2f(550.0f,-200.0f);
     glVertex2f(500.0f,-160.0f);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3ub(41, 41, 61);
     glVertex2f(375.0f,-300.0f);
     glVertex2f(625.0f,-300.0f);
     glVertex2f(650.0f,-275.0f);
     glVertex2f(650.0f,-250.0f);
     glVertex2f(450.0f,-250.0f);
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(41, 41, 61);
     glVertex2f(525.0f,-350.0f);
     glVertex2f(550.0f,-300.0f);
     glVertex2f(475.0f,-300.0f);
     glEnd();
     glLoadIdentity();
	 glPopMatrix();

     //Building 1
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-750.0f,-155.0f);
     glVertex2f(-720.0f,-155.0f);
     glVertex2f(-720.0f,- 15.0f);
     glVertex2f(-750.0f,- 15.0f);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-715.0f,-155.0f);
     glVertex2f(-660.0f,-155.0f);
     glVertex2f(-660.0f,- 60.0f);
     glVertex2f(-715.0f,- 60.0f);
     glEnd();

     //building 2 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-705.0f,-70.0f);
     glVertex2f(-695.0f,-70.0f);
     glVertex2f(-695.0f,-80.0f);
     glVertex2f(-705.0f,-80.0f);
     glEnd();

     //building 2 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-680.0f,-70.0f);
     glVertex2f(-670.0f,-70.0f);
     glVertex2f(-670.0f,-80.0f);
     glVertex2f(-680.0f,-80.0f);
     glEnd();

     //building 2 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-705.0f,- 90.0f);
     glVertex2f(-695.0f,- 90.0f);
     glVertex2f(-695.0f,-100.0f);
     glVertex2f(-705.0f,-100.0f);
     glEnd();

     //building 2 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-680.0f,- 90.0f);
     glVertex2f(-670.0f,- 90.0f);
     glVertex2f(-670.0f,-100.0f);
     glVertex2f(-680.0f,-100.0f);
     glEnd();

     //building 1&2 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-720.0f,-155.0f);
     glVertex2f(-715.0f,-155.0f);
     glVertex2f(-715.0f,-100.0f);
     glVertex2f(-720.0f,-100.0f);
     glEnd();

     // building 3
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-640.0f,-155.0f);
     glVertex2f(-590.0f,-155.0f);
     glVertex2f(-590.0f,- 45.0f);
     glVertex2f(-640.0f,- 45.0f);
     glEnd();

     // building 3 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-630.0f,-70.0f);
     glVertex2f(-620.0f,-70.0f);
     glVertex2f(-620.0f,-80.0f);
     glVertex2f(-630.0f,-80.0f);
     glEnd();

     // building 3 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-610.0f,-70.0f);
     glVertex2f(-600.0f,-70.0f);
     glVertex2f(-600.0f,-80.0f);
     glVertex2f(-610.0f,-80.0f);
     glEnd();

     // building 3 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-630.0f,- 90.0f);
     glVertex2f(-620.0f,- 90.0f);
     glVertex2f(-620.0f,-100.0f);
     glVertex2f(-630.0f,-100.0f);
     glEnd();

     // building 3 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-610.0f,- 90.0f);
     glVertex2f(-600.0f,- 90.0f);
     glVertex2f(-600.0f,-100.0f);
     glVertex2f(-610.0f,-100.0f);
     glEnd();

     //building 2&3 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-660.0f,-155.0f);
     glVertex2f(-640.0f,-155.0f);
     glVertex2f(-640.0f,- 80.0f);
     glVertex2f(-660.0f,- 80.0f);
     glEnd();

     // building 4
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-580.0f,-155.0f);
     glVertex2f(-535.0f,-155.0f);
     glVertex2f(-535.0f,  45.0f);
     glVertex2f(-580.0f,  45.0f);
     glEnd();

     // building 4 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-570.0f,25.0f);
     glVertex2f(-560.0f,25.0f);
     glVertex2f(-560.0f,35.0f);
     glVertex2f(-570.0f,35.0f);
     glEnd();

     // building 4 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-555.0f,25.0f);
     glVertex2f(-545.0f,25.0f);
     glVertex2f(-545.0f,35.0f);
     glVertex2f(-555.0f,35.0f);
     glEnd();

     // building 4 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-570.0f, 5.0f);
     glVertex2f(-560.0f, 5.0f);
     glVertex2f(-560.0f,15.0f);
     glVertex2f(-570.0f,15.0f);
     glEnd();

     // building 4 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-555.0f, 5.0f);
     glVertex2f(-545.0f, 5.0f);
     glVertex2f(-545.0f,15.0f);
     glVertex2f(-555.0f,15.0f);
     glEnd();

     // building 4 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-570.0f,- 5.0f);
     glVertex2f(-560.0f,- 5.0f);
     glVertex2f(-560.0f,-15.0f);
     glVertex2f(-570.0f,-15.0f);
     glEnd();

     // building 4 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-555.0f,- 5.0f);
     glVertex2f(-545.0f,- 5.0f);
     glVertex2f(-545.0f,-15.0f);
     glVertex2f(-555.0f,-15.0f);
     glEnd();

     // building 3 &4 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-590.0f,-155.0f);
     glVertex2f(-580.0f,-155.0f);
     glVertex2f(-580.0f,- 90.0f);
     glVertex2f(-590.0f,- 90.0f);
     glEnd();

     // building 5
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-525.0f,-155.0f);
     glVertex2f(-460.0f,-155.0f);
     glVertex2f(-460.0f,  45.0f);
     glVertex2f(-525.0f,  45.0f);
     glEnd();

     // building 5 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-515.0f,15.0f);
     glVertex2f(-500.0f,15.0f);
     glVertex2f(-500.0f,30.0f);
     glVertex2f(-515.0f,30.0f);
     glEnd();

     // building 5 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-485.0f,15.0f);
     glVertex2f(-470.0f,15.0f);
     glVertex2f(-470.0f,30.0f);
     glVertex2f(-485.0f,30.0f);
     glEnd();

     // building 5 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-515.0f,-05.0f);
     glVertex2f(-500.0f,-05.0f);
     glVertex2f(-500.0f,-20.0f);
     glVertex2f(-515.0f,-20.0f);
     glEnd();

     // building 5 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-485.0f,-05.0f);
     glVertex2f(-470.0f,-05.0f);
     glVertex2f(-470.0f,-20.0f);
     glVertex2f(-485.0f,-20.0f);
     glEnd();

     // building 5 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-515.0f,-40.0f);
     glVertex2f(-500.0f,-40.0f);
     glVertex2f(-500.0f,-55.0f);
     glVertex2f(-515.0f,-55.0f);
     glEnd();

     // building 5 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255 );
     glVertex2f(-485.0f,-40.0f);
     glVertex2f(-470.0f,-40.0f);
     glVertex2f(-470.0f,-55.0f);
     glVertex2f(-485.0f,-55.0f);
     glEnd();

     // building 4 & 5 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-535.0f,-155.0f);
     glVertex2f(-525.0f,-155.0f);
     glVertex2f(-525.0f,-100.0f);
     glVertex2f(-535.0f,-100.0f);
     glEnd();

     //buildiing 6
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-450.0f,-155.0f);
     glVertex2f(-395.0f,-155.0f);
     glVertex2f(-395.0f,- 15.0f);
     glVertex2f(-450.0f,- 15.0f);
     glEnd();

     //buildiing 6 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-440.0f,-35.0f);
     glVertex2f(-430.0f,-35.0f);
     glVertex2f(-430.0f,-25.0f);
     glVertex2f(-440.0f,-25.0f);
     glEnd();

     //buildiing 6 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-415.0f,-35.0f);
     glVertex2f(-405.0f,-35.0f);
     glVertex2f(-405.0f,-25.0f);
     glVertex2f(-415.0f,-25.0f);
     glEnd();

     //buildiing 6 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-440.0f,-45.0f);
     glVertex2f(-430.0f,-45.0f);
     glVertex2f(-430.0f,-55.0f);
     glVertex2f(-440.0f,-55.0f);
     glEnd();

     //buildiing 6 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-415.0f,-45.0f);
     glVertex2f(-405.0f,-45.0f);
     glVertex2f(-405.0f,-55.0f);
     glVertex2f(-415.0f,-55.0f);
     glEnd();

     //buildiing 6 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-440.0f,-65.0f);
     glVertex2f(-430.0f,-65.0f);
     glVertex2f(-430.0f,-75.0f);
     glVertex2f(-440.0f,-75.0f);
     glEnd();

     //building 6 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-415.0f,-65.0f);
     glVertex2f(-405.0f,-65.0f);
     glVertex2f(-405.0f,-75.0f);
     glVertex2f(-415.0f,-75.0f);
     glEnd();

     //building 6 window last left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-440.0f,-85.0f);
     glVertex2f(-430.0f,-85.0f);
     glVertex2f(-430.0f,-95.0f);
     glVertex2f(-440.0f,-95.0f);
     glEnd();

     //buildiing 6 window last right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-415.0f,-85.0f);
     glVertex2f(-405.0f,-85.0f);
     glVertex2f(-405.0f,-95.0f);
     glVertex2f(-415.0f,-95.0f);
     glEnd();

     //building 5&6 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-460.0f,-155.0f);
     glVertex2f(-450.0f,-155.0f);
     glVertex2f(-450.0f,-110.0f);
     glVertex2f(-460.0f,-110.0f);
     glEnd();

     // building 7
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-385.0f,-155.0f);
     glVertex2f(-345.0f,-155.0f);
     glVertex2f(-345.0f,  48.0f);
     glVertex2f(-385.0f,   0.0f);
     glEnd();

     //building 6&7 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-395.0f,-155.0f);
     glVertex2f(-385.0f,-155.0f);
     glVertex2f(-385.0f,-125.0f);
     glVertex2f(-395.0f,-125.0f);
     glEnd();

     //building 8
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-320.0f,-155.0f);
     glVertex2f(-250.0f,-155.0f);
     glVertex2f(-250.0f,  60.0f);
     glVertex2f(-320.0f,  60.0f);
     glEnd();

     //building 8 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-310.0f,40.0f);
     glVertex2f(-295.0f,40.0f);
     glVertex2f(-295.0f,25.0f);
     glVertex2f(-310.0f,25.0f);
     glEnd();

     //building 8 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-275.0f,40.0f);
     glVertex2f(-260.0f,40.0f);
     glVertex2f(-260.0f,25.0f);
     glVertex2f(-275.0f,25.0f);
     glEnd();

     //building 8 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-310.0f,15.0f);
     glVertex2f(-295.0f,15.0f);
     glVertex2f(-295.0f, 0.0f);
     glVertex2f(-310.0f, 0.0f);
     glEnd();

     //building 8 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-275.0f,15.0f);
     glVertex2f(-260.0f,15.0f);
     glVertex2f(-260.0f, 0.0f);
     glVertex2f(-275.0f, 0.0f);
     glEnd();

     //building 8 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-310.0f,-10.0f);
     glVertex2f(-295.0f,-10.0f);
     glVertex2f(-295.0f,-25.0f);
     glVertex2f(-310.0f,-25.0f);
     glEnd();

     //building 8 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-275.0f,-10.0f);
     glVertex2f(-260.0f,-10.0f);
     glVertex2f(-260.0f,-25.0f);
     glVertex2f(-275.0f,-25.0f);
     glEnd();

     //building 8 window last left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-310.0f,-35.0f);
     glVertex2f(-295.0f,-35.0f);
     glVertex2f(-295.0f,-50.0f);
     glVertex2f(-310.0f,-50.0f);
     glEnd();

     //building 8 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-275.0f,-35.0f);
     glVertex2f(-260.0f,-35.0f);
     glVertex2f(-260.0f,-50.0f);
     glVertex2f(-275.0f,-50.0f);
     glEnd();

     //building 7 & 8 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-390.0f,-155.0f);
     glVertex2f(-320.0f,-155.0f);
     glVertex2f(-320.0f,- 70.0f);
     glVertex2f(-390.0f,- 70.0f);
     glEnd();

     // building 7 & 8 pole
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-335.0f,-155.0f);
     glVertex2f(-325.0f,-155.0f);
     glVertex2f(-325.0f,- 20.0f);
     glVertex2f(-335.0f,- 20.0f);
     glEnd();

     //building 9
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-240.0f,-155.0f);
     glVertex2f(-180.0f,-155.0f);
     glVertex2f(-180.0f,  10.0f);
     glVertex2f(-240.0f,  10.0f);
     glEnd();

     //building 9 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-230.0f,  0.0f);
     glVertex2f(-220.0f,  0.0f);
     glVertex2f(-220.0f,-10.0f);
     glVertex2f(-230.0f,-10.0f);
     glEnd();

     //building 9 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-190.0f,  0.0f);
     glVertex2f(-200.0f,  0.0f);
     glVertex2f(-200.0f,-10.0f);
     glVertex2f(-190.0f,-10.0f);
     glEnd();

     //building 9 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-230.0f,-20.0f);
     glVertex2f(-220.0f,-20.0f);
     glVertex2f(-220.0f,-30.0f);
     glVertex2f(-230.0f,-30.0f);
     glEnd();

     //building 9 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-190.0f,-20.0f);
     glVertex2f(-200.0f,-20.0f);
     glVertex2f(-200.0f,-30.0f);
     glVertex2f(-190.0f,-30.0f);
     glEnd();

     //building 9 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-230.0f,-40.0f);
     glVertex2f(-220.0f,-40.0f);
     glVertex2f(-220.0f,-50.0f);
     glVertex2f(-230.0f,-50.0f);
     glEnd();

     //building 9 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-190.0f,-40.0f);
     glVertex2f(-200.0f,-40.0f);
     glVertex2f(-200.0f,-50.0f);
     glVertex2f(-190.0f,-50.0f);
     glEnd();

     //building 9 window final left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-230.0f,-60.0f);
     glVertex2f(-220.0f,-60.0f);
     glVertex2f(-220.0f,-70.0f);
     glVertex2f(-230.0f,-70.0f);
     glEnd();

     //building 9 window final right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-190.0f,-60.0f);
     glVertex2f(-200.0f,-60.0f);
     glVertex2f(-200.0f,-70.0f);
     glVertex2f(-190.0f,-70.0f);
     glEnd();

     //building 8 &  9 GAP
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-250.0f,-155.0f);
     glVertex2f(-240.0f,-155.0f);
     glVertex2f(-240.0f,-130.0f);
     glVertex2f(-250.0f,-130.0f);
     glEnd();

     // building 10
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-170.0f,-155.0f);
     glVertex2f(-135.0f,-155.0f);
     glVertex2f(-135.0f,   0.0f);
     glVertex2f(-170.0f,   0.0f);
     glEnd();

     // building 9 & 10 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-180.0f,-155.0f);
     glVertex2f(-170.0f,-155.0f);
     glVertex2f(-170.0f,-130.0f);
     glVertex2f(-180.0f,-130.0f);
     glEnd();

     // building 11
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-125.0f,-155.0f);
     glVertex2f(- 75.0f,-155.0f);
     glVertex2f(- 75.0f,  30.0f);
     glVertex2f(-125.0f,  30.0f);
     glEnd();

     // building 11 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-80.0f,10.0f);
     glVertex2f(-80.0f,10.0f);
     glVertex2f(-70.0f,20.0f);
     glVertex2f(-70.0f,20.0f);
     glEnd();

     // building 11 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-120.0f,10.0f);
     glVertex2f(-120.0f,10.0f);
     glVertex2f(-110.0f,20.0f);
     glVertex2f(-110.0f,20.0f);
     glEnd();

     //building 10 & 11 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-135.0f,-155.0f);
     glVertex2f(-125.0f,-155.0f);
     glVertex2f(-125.0f,-130.0f);
     glVertex2f(-135.0f,-130.0f);
     glEnd();

     // building 12
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-65.0f,-155.0f);
     glVertex2f(  0.0f,-155.0f);
     glVertex2f(  0.0f,- 10.0f);
     glVertex2f(-65.0f,- 10.0f);
     glEnd();

     // building 12 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-55.0f,-20.0f);
     glVertex2f(-40.0f,-20.0f);
     glVertex2f(-40.0f,-35.0f);
     glVertex2f(-55.0f,-35.0f);
     glEnd();

     // building 12 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-25.0f,-20.0f);
     glVertex2f(-10.0f,-20.0f);
     glVertex2f(-10.0f,-35.0f);
     glVertex2f(-25.0f,-35.0f);
     glEnd();

     // building 12 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-55.0f,-45.0f);
     glVertex2f(-40.0f,-45.0f);
     glVertex2f(-40.0f,-60.0f);
     glVertex2f(-55.0f,-60.0f);
     glEnd();

     // building 12 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255,255);
     glVertex2f(-25.0f,-45.0f);
     glVertex2f(-10.0f,-45.0f);
     glVertex2f(-10.0f,-60.0f);
     glVertex2f(-25.0f,-60.0f);
     glEnd();

     // building 12 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-55.0f,-70.0f);
     glVertex2f(-40.0f,-70.0f);
     glVertex2f(-40.0f,-85.0f);
     glVertex2f(-55.0f,-85.0f);
     glEnd();

     // building 12 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255,255);
     glVertex2f(-25.0f,-70.0f);
     glVertex2f(-10.0f,-70.0f);
     glVertex2f(-10.0f,-85.0f);
     glVertex2f(-25.0f,-85.0f);
     glEnd();

     //building 11 & 12 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-75.0f,-155.0f);
     glVertex2f(-65.0f,-155.0f);
     glVertex2f(-65.0f,- 80.0f);
     glVertex2f(-75.0f,- 80.0f);
     glEnd();

     // building 13
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(10.0f,-155.0f);
     glVertex2f(50.0f,-155.0f);
     glVertex2f(50.0f,- 20.0f);
     glVertex2f(10.0f,- 20.0f);
     glEnd();

     // building 13 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(15.0f,-40.0f);
     glVertex2f(25.0f,-40.0f);
     glVertex2f(25.0f,-30.0f);
     glVertex2f(15.0f,-30.0f);
     glEnd();

     // building 13 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(35.0f,-40.0f);
     glVertex2f(45.0f,-40.0f);
     glVertex2f(45.0f,-30.0f);
     glVertex2f(35.0f,-30.0f);
     glEnd();

     // building 13 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(15.0f,-50.0f);
     glVertex2f(25.0f,-50.0f);
     glVertex2f(25.0f,-60.0f);
     glVertex2f(15.0f,-60.0f);
     glEnd();

     // building 13 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(35.0f,-50.0f);
     glVertex2f(45.0f,-50.0f);
     glVertex2f(45.0f,-60.0f);
     glVertex2f(35.0f,-60.0f);
     glEnd();

     // building 13 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(15.0f,-70.0f);
     glVertex2f(25.0f,-70.0f);
     glVertex2f(25.0f,-80.0f);
     glVertex2f(15.0f,-80.0f);
     glEnd();

     // building 13 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(35.0f,-70.0f);
     glVertex2f(45.0f,-70.0f);
     glVertex2f(45.0f,-80.0f);
     glVertex2f(35.0f,-80.0f);
     glEnd();

     // building 12 & 13 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f( 0.0f,-155.0f);
     glVertex2f(10.0f,-155.0f);
     glVertex2f(10.0f,- 75.0f);
     glVertex2f( 0.0f,- 75.0f);
     glEnd();

     // building 14
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f( 60.0f,-155.0f);
     glVertex2f(100.0f,-155.0f);
     glVertex2f(100.0f,- 40.0f);
     glVertex2f( 60.0f,- 40.0f);
     glEnd();

     // building 14 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(65.0f,-60.0f);
     glVertex2f(75.0f,-60.0f);
     glVertex2f(75.0f,-50.0f);
     glVertex2f(65.0f,-50.0f);
     glEnd();

     // building 14 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(95.0f,-60.0f);
     glVertex2f(85.0f,-60.0f);
     glVertex2f(85.0f,-50.0f);
     glVertex2f(95.0f,-50.0f);
     glEnd();

     // building 14 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(65.0f,-80.0f);
     glVertex2f(75.0f,-80.0f);
     glVertex2f(75.0f,-70.0f);
     glVertex2f(65.0f,-70.0f);
     glEnd();

     // building 14 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(95.0f,-80.0f);
     glVertex2f(85.0f,-80.0f);
     glVertex2f(85.0f,-70.0f);
     glVertex2f(95.0f,-70.0f);
     glEnd();

     // building 13 & 14 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(50.0f,-155.0f);
     glVertex2f(60.0f,-155.0f);
     glVertex2f(60.0f,- 90.0f);
     glVertex2f(50.0f,- 90.0f);
     glEnd();

     // building 15
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(110.0f,-155.0f);
     glVertex2f(165.0f,-155.0f);
     glVertex2f(165.0f,- 40.0f);
     glVertex2f(110.0f,- 40.0f);
     glEnd();

     // building 15 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(120.0f,-60.0f);
     glVertex2f(130.0f,-60.0f);
     glVertex2f(130.0f,-50.0f);
     glVertex2f(120.0f,-50.0f);
     glEnd();

     // building 15 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(145.0f,-60.0f);
     glVertex2f(155.0f,-60.0f);
     glVertex2f(155.0f,-50.0f);
     glVertex2f(145.0f,-50.0f);
     glEnd();

     // building 15 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(120.0f,-80.0f);
     glVertex2f(130.0f,-80.0f);
     glVertex2f(130.0f,-70.0f);
     glVertex2f(120.0f,-70.0f);
     glEnd();

     // building 15 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(145.0f,-80.0f);
     glVertex2f(155.0f,-80.0f);
     glVertex2f(155.0f,-70.0f);
     glVertex2f(145.0f,-70.0f);
     glEnd();

     // building 14 & 15 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(100.0f,-155.0f);
     glVertex2f(110.0f,-155.0f);
     glVertex2f(110.0f,- 90.0f);
     glVertex2f(100.0f,- 90.0f);
     glEnd();

     // bridge pole 1
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(210.0f,-155.0f);
     glVertex2f(240.0f,-155.0f);
     glVertex2f(240.0f,- 60.0f);
     glVertex2f(210.0f,- 60.0f);
     glEnd();

     // bridge pole 2
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(250.0f,-155.0f);
     glVertex2f(280.0f,-155.0f);
     glVertex2f(280.0f,- 60.0f);
     glVertex2f(250.0f,- 60.0f);
     glEnd();

     // bridge pole 3
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(670.0f,-155.0f);
     glVertex2f(700.0f,-155.0f);
     glVertex2f(700.0f,- 60.0f);
     glVertex2f(670.0f,- 60.0f);
     glEnd();

     // bridge pole 4
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(710.0f,-155.0f);
     glVertex2f(740.0f,-155.0f);
     glVertex2f(740.0f,- 60.0f);
     glVertex2f(710.0f,- 60.0f);
     glEnd();

     //bridge
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(165.0f,-130.0f);
     glVertex2f(750.0f,-130.0f);
     glVertex2f(750.0f,-120.0f);
     glVertex2f(165.0f,-120.0f);
     glEnd();

     // Road
     glBegin(GL_QUADS);
     glColor3ub(1, 1, 1);
     glVertex2f(-750.0f,-500.0f);
     glVertex2f( 750.0f,-500.0f);
     glVertex2f( 750.0f,-450.0f);
     glVertex2f(-750.0f,-450.0f);
     glEnd();

     //LAMPPOST ONE START
     glBegin(GL_POLYGON);// lamppost onebase
     glColor3ub(1, 1, 1);
     glVertex2f(-650.0f,-450.0f);
     glVertex2f(-610.0f,-450.0f);
     glVertex2f(-600.0f,-370.0f);
     glVertex2f(-630.0f,-350.0f);
     glVertex2f(-660.0f,-370.0f);
     glEnd();

     int i;
     x = -630; y = -320; radius = 30;
     glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(1, 1, 1);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     glBegin(GL_QUADS);
     glColor3ub(1, 1, 1);
     glVertex2f(-635.0f,-450.0f);
     glVertex2f(-625.0f,-450.0f);
     glVertex2f(-625.0f,  25.0f);
     glVertex2f(-635.0f,  25.0f);
     glEnd();

     //lamp circle at top  centre
     x = -630; y = 40; radius = 20;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(1, 1, 1);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     glBegin(GL_QUADS);
     glColor3ub(1, 1, 1);
     glVertex2f(-710.0f, 0.0f);
     glVertex2f(-550.0f, 0.0f);
     glVertex2f(-550.0f,10.0f);
     glVertex2f(-710.0f,10.0f);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(1, 1, 1);
     glVertex2f(-720.0f, 0.0f);
     glVertex2f(-710.0f, 0.0f);
     glVertex2f(-710.0f,25.0f);
     glVertex2f(-720.0f,25.0f);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(1, 1, 1);
     glVertex2f(-550.0f, 0.0f);
     glVertex2f(-540.0f, 0.0f);
     glVertex2f(-540.0f,25.0f);
     glVertex2f(-550.0f,25.0f);
     glEnd();

     //lamp circle at top  right
     x = -545; y = 50; radius = 25;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(230, 243, 255);//BULB
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

	 //lamp circle at top  left
     x = -715; y = 50; radius = 25;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(230, 243, 255);//BULB
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     //LAMPPOST ONE END
     glBegin(GL_POLYGON);
     glColor3ub(1, 1, 1);
     glVertex2f(580.0f,-450.0f);
     glVertex2f(620.0f,-450.0f);
     glVertex2f(630.0f,-370.0f);
     glVertex2f(600.0f,-350.0f);
     glVertex2f(570.0f,-370.0f);
     glEnd();

     //lamp circle after the base two
     x = 600; y = -320; radius = 30;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(1, 1, 1);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     glBegin(GL_QUADS);
     glColor3ub(1, 1, 1);
     glVertex2f(595.0f,-450.0f);
     glVertex2f(605.0f,-450.0f);
     glVertex2f(605.0f,  25.0f);
     glVertex2f(595.0f,  25.0f);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(1, 1, 1);
     glVertex2f(520.0f, 0.0f);
     glVertex2f(680.0f, 0.0f);
     glVertex2f(680.0f,10.0f);
     glVertex2f(520.0f,10.0f);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(1, 1, 1);
     glVertex2f(510.0f, 0.0f);
     glVertex2f(520.0f, 0.0f);
     glVertex2f(520.0f,25.0f);
     glVertex2f(510.0f,25.0f);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(1, 1, 1);
     glVertex2f(680.0f, 0.0f);
     glVertex2f(690.0f, 0.0f);
     glVertex2f(690.0f,25.0f);
     glVertex2f(680.0f,25.0f);
     glEnd();

     x = 600; y = 45; radius = 20;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(1, 1, 1);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

	 //lamp circle at top  right
     x = 515; y = 50; radius = 25;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(230, 243, 255);//BULB
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

	 //lamp circle at top  left
     x = 685; y = 50; radius = 25;
     glBegin(GL_TRIANGLE_FAN);
     glColor3ub(230, 243, 255);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     glutTimerFunc(18000,latenight_demo,0);
     glFlush();
}

void night_demo(int val)
 {
     glutDisplayFunc(night);
 }

void lateevening()
{
     glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Background Color
     glClear(GL_COLOR_BUFFER_BIT);

     //sky
     glBegin(GL_QUADS);
     glColor3ub(233, 176, 105);
     glVertex2f(-750.0f,-155.0f);
     glVertex2f( 750.0f,-155.0f);
     glVertex2f( 750.0f, 500.0f);
     glVertex2f(-750.0f, 500.0f);
     glEnd();

     //stars
     GLfloat x = -740; GLfloat y = 450; GLfloat radius = 3;
     int triangleAmount = 300;
	 GLfloat twicePi = 2.0f * PI;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(255, 255, 255);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -700; y = 350; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -500; y = 250; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -600; y = 400; radius = 3;
     glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -400; y = 400; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -300; y = 200; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -250; y = 300; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -100; y = 350; radius = 3;
     glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -0; y = 150; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 100; y = 350; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 250; y = 250; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 400; y = 400; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 500; y = 375; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 600; y = 275; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 700; y = 380; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -600; y = 180; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -500; y = 480; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -450; y = 380; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 580; y = 480; radius = 3;
     glBegin(GL_TRIANGLE_FAN);
     glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 0; y = 480; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -300; y = 450; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     //MOON one
	 glPushMatrix();
	 glTranslatef(0.0f, position6, 0.0f);
     x = 475; y = 50; radius = 150;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();
	 glLoadIdentity();
	 glPopMatrix();

	 //plane
	 glPushMatrix();
	 glTranslatef(position9, 0.0f, 0.0f);
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-650.0f,370.0f);
     glVertex2f(-375.0f,370.0f);//body
     glVertex2f(-375.0f,410.0f);
     glVertex2f(-650.0f,410.0f);
     glEnd();

     //wing
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-550.0f,300.0f);
     glVertex2f(-525.0f,300.0f);
     glVertex2f(-430.0f,370.0f);
     glVertex2f(-510.0f,370.0f);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-650.0f,370.0f);//tail
     glVertex2f(-575.0f,370.0f);
     glVertex2f(-650.0f,450.0f);
     glVertex2f(-675.0f,450.0f);
     glEnd();

     x = -371.0f; y = 390.0f; radius = 20.0f;
     twicePi = 2.0f * PI;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0, 0, 0);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();
	 glLoadIdentity();
	 glPopMatrix();

	 // water
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 153);
     glVertex2f(-750.0f,-155.0f);
     glVertex2f(-750.0f,-450.0f);
     glVertex2f( 750.0f,-450.0f);
     glVertex2f( 750.0f,-155.0f);
     glEnd();

     //stars
     x = -740; y = -450; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(255, 255, 255);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -700; y = -350; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -500; y = -250; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -600; y = -400; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -400; y = -400; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -300; y = -200; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -250; y = -300; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -100; y = -350; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 0; y = -150; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 100; y = -350; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 250; y = -250; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 400; y = -400; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 500; y = -375; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 600; y = -275; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 700; y = -380; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -600; y = -180; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -500; y = -480; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -450; y = -380; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 580; y = -480; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = 0; y = -480; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     x = -300; y = -450; radius = 3;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(242, 242, 242);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     //MOON two
	 glPushMatrix();
	 glTranslatef(0.0f, position7, 0.0f);
     x = 475; y = -315; radius = 150;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(255,255,255);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();
	 glLoadIdentity();
	 glPopMatrix();

     //plane2
     glPushMatrix();
	 glTranslatef(position9, 0.0f, 0.0f);
     glBegin(GL_QUADS);
     glColor3ub(128, 128, 128);
     glVertex2f(-650.0f,-370.0f);
     glVertex2f(-375.0f,-370.0f);//body
     glVertex2f(-375.0f,-410.0f);
     glVertex2f(-650.0f,-410.0f);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(128, 128, 128);
     glVertex2f(-510.0f,-375.0f);
     glVertex2f(-430.0f,-375.0f);
     glVertex2f(-525.0f,-305.0f);
     glVertex2f(-550.0f,-305.0f);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(128, 128, 128);
     glVertex2f(-650.0f,-370.0f);//tail
     glVertex2f(-575.0f,-370.0f);
     glVertex2f(-650.0f,-450.0f);
     glVertex2f(-675.0f,-450.0f);
     glEnd();

     x = -380.0f; y = -390.0f; radius = 20.0f;
     glBegin(GL_TRIANGLE_FAN);
     glColor3ub(128,128,128);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y+ (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();
	 glLoadIdentity();
	 glPopMatrix();

     //Building Shadow
     //building shadow 1
     glBegin(GL_QUADS);
     glColor3ub(94, 101, 104);
     glVertex2f(-750.0f,-230.0f);
     glVertex2f(-720.0f,-230.0f);
     glVertex2f(-720.0f,-155.0f);
     glVertex2f(-750.0f,-155.0f);
     glEnd();

     //building shadow 2
     glBegin(GL_QUADS);
     glColor3ub(94, 101, 104);
     glVertex2f(-715.0f,-200.0f);
     glVertex2f(-660.0f,-200.0f);
     glVertex2f(-660.0f,-155.0f);
     glVertex2f(-715.0f,-155.0f);
     glEnd();

     //building 2 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-705.0f,-190.0f);
     glVertex2f(-695.0f,-190.0f);
     glVertex2f(-695.0f,-180.0f);
     glVertex2f(-705.0f,-180.0f);
     glEnd();

     //building 2 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-680.0f,-190.0f);
     glVertex2f(-670.0f,-190.0f);
     glVertex2f(-670.0f,-180.0f);
     glVertex2f(-680.0f,-180.0f);
     glEnd();

     //building 2 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-705.0f,-175.0f);
     glVertex2f(-695.0f,-175.0f);
     glVertex2f(-695.0f,-165.0f);
     glVertex2f(-705.0f,-165.0f);
     glEnd();

     //building 2 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-680.0f,-175.0f);
     glVertex2f(-670.0f,-175.0f);
     glVertex2f(-670.0f,-165.0f);
     glVertex2f(-680.0f,-165.0f);
     glEnd();

     //building shadow 1&2 gap
     glBegin(GL_QUADS);
     glColor3ub(94, 101, 104);
     glVertex2f(-720.0f,-180.0f);
     glVertex2f(-715.0f,-180.0f);
     glVertex2f(-715.0f,-155.0f);
     glVertex2f(-720.0f,-155.0f);
     glEnd();

     // building shadow 3
     glBegin(GL_QUADS);
     glColor3ub(94, 101, 104);
     glVertex2f(-640.0f,-215.0f);
     glVertex2f(-590.0f,-215.0f);
     glVertex2f(-590.0f,-155.0f);
     glVertex2f(-640.0f,-155.0f);
     glEnd();

     // building 3 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-630.0f,-205.0f);
     glVertex2f(-620.0f,-205.0f);
     glVertex2f(-620.0f,-195.0f);
     glVertex2f(-630.0f,-195.0f);
     glEnd();

     // building 3 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-610.0f,-205.0f);
     glVertex2f(-600.0f,-205.0f);
     glVertex2f(-600.0f,-195.0f);
     glVertex2f(-610.0f,-195.0f);
     glEnd();

     // building 3 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-630.0f,-185.0f);
     glVertex2f(-620.0f,-185.0f);
     glVertex2f(-620.0f,-175.0f);
     glVertex2f(-630.0f,-175.0f);
     glEnd();

     // building 3 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-610.0f,-185.0f);
     glVertex2f(-600.0f,-185.0f);
     glVertex2f(-600.0f,-175.0f);
     glVertex2f(-610.0f,-175.0f);
     glEnd();

     //building shadow 2&3 gap
     glBegin(GL_QUADS);
     glColor3ub(94, 101, 104);
     glVertex2f(-660.0f,-180.0f);
     glVertex2f(-640.0f,-180.0f);
     glVertex2f(-640.0f,-155.0f);
     glVertex2f(-660.0f,-155.0f);
     glEnd();

     // building 4
     glBegin(GL_QUADS);
     glColor3ub(94, 101, 104);
     glVertex2f(-580.0f,-250.0f);
     glVertex2f(-535.0f,-250.0f);
     glVertex2f(-535.0f,-155.0f);
     glVertex2f(-580.0f,-155.0f);
     glEnd();

     // building 4 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-570.0f,-240.0f);
     glVertex2f(-560.0f,-240.0f);
     glVertex2f(-560.0f,-230.0f);
     glVertex2f(-570.0f,-230.0f);
     glEnd();

     // building 4 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-555.0f,-240.0f);
     glVertex2f(-545.0f,-240.0f);
     glVertex2f(-545.0f,-230.0f);
     glVertex2f(-555.0f,-230.0f);
     glEnd();

     // building 4 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-570.0f,-220.0f);
     glVertex2f(-560.0f,-220.0f);
     glVertex2f(-560.0f,-210.0f);
     glVertex2f(-570.0f,-210.0f);
     glEnd();

     // building 4 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-555.0f,-220.0f);
     glVertex2f(-545.0f,-220.0f);
     glVertex2f(-545.0f,-210.0f);
     glVertex2f(-555.0f,-210.0f);
     glEnd();

     // building 4 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-570.0f,-200.0f);
     glVertex2f(-560.0f,-200.0f);
     glVertex2f(-560.0f,-190.0f);
     glVertex2f(-570.0f,-190.0f);
     glEnd();

     // building 4 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-555.0f,-200.0f);
     glVertex2f(-545.0f,-200.0f);
     glVertex2f(-545.0f,-190.0f);
     glVertex2f(-555.0f,-190.0f);
     glEnd();

     // building shadow 3 &4 gap
     glBegin(GL_QUADS);
     glColor3ub(94, 101, 104);
     glVertex2f(-590.0f,-175.0f);
     glVertex2f(-580.0f,-175.0f);
     glVertex2f(-580.0f,-155.0f);
     glVertex2f(-590.0f,-155.0f);
     glEnd();

     // building shadow 5
     glBegin(GL_QUADS);
     glColor3ub(94, 101, 104);
     glVertex2f(-525.0f,-250.0f);
     glVertex2f(-460.0f,-250.0f);
     glVertex2f(-460.0f,-155.0f);
     glVertex2f(-525.0f,-155.0f);
     glEnd();

     // building 5 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-515.0f,-240.0f);
     glVertex2f(-500.0f,-240.0f);
     glVertex2f(-500.0f,-225.0f);
     glVertex2f(-515.0f,-225.0f);
     glEnd();

     // building 5 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-485.0f,-240.0f);
     glVertex2f(-470.0f,-240.0f);
     glVertex2f(-470.0f,-225.0f);
     glVertex2f(-485.0f,-225.0f);
     glEnd();

     // building 5 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-515.0f,-215.0f);
     glVertex2f(-500.0f,-215.0f);
     glVertex2f(-500.0f,-200.0f);
     glVertex2f(-515.0f,-200.0f);
     glEnd();

     // building 5 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-485.0f,-215.0f);
     glVertex2f(-470.0f,-215.0f);
     glVertex2f(-470.0f,-200.0f);
     glVertex2f(-485.0f,-200.0f);
     glEnd();

     // building shadow 4 &5 gap
     glBegin(GL_QUADS);
     glColor3ub(94, 101, 104);
     glVertex2f(-535.0f,-185.0f);
     glVertex2f(-525.0f,-185.0f);
     glVertex2f(-525.0f,-155.0f);
     glVertex2f(-535.0f,-155.0f);
     glEnd();

     //buildiing shadow 6
     glBegin(GL_QUADS);
     glColor3ub(94, 101, 104);
     glVertex2f(-450.0f,-235.0f);
     glVertex2f(-395.0f,-235.0f);
     glVertex2f(-395.0f,-155.0f);
     glVertex2f(-450.0f,-155.0f);
     glEnd();

     //buildiing 6 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-440.0,-225.0);
     glVertex2f(-430.0,-225.0);
     glVertex2f(-430.0,-215.0);
     glVertex2f(-440.0,-215.0);
     glEnd();

     //buildiing 6 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-415.0,-225.0);
     glVertex2f(-405.0,-225.0);
     glVertex2f(-405.0,-215.0);
     glVertex2f(-415.0,-215.0);
     glEnd();

     //buildiing 6 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-440.0f,-205.0f);
     glVertex2f(-430.0f,-205.0f);
     glVertex2f(-430.0f,-195.0f);
     glVertex2f(-440.0f,-195.0f);
     glEnd();

     //buildiing 6 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-415.0f,-205.0f);
     glVertex2f(-405.0f,-205.0f);
     glVertex2f(-405.0f,-195.0f);
     glVertex2f(-415.0f,-195.0f);
     glEnd();

     //building shadow 5&6 gap
     glBegin(GL_QUADS);
     glColor3ub(94, 101, 104);
     glVertex2f(-460.0f,-170.0f);
     glVertex2f(-450.0f,-170.0f);
     glVertex2f(-450.0f,-155.0f);
     glVertex2f(-460.0f,-155.0f);
     glEnd();

     // building shadow 7
     glBegin(GL_QUADS);
     glColor3ub(94, 101, 104);
     glVertex2f(-385.0f,-235.0f);
     glVertex2f(-345.0f,-235.0f);
     glVertex2f(-345.0f,-155.0f);
     glVertex2f(-385.0f,-155.0f);
     glEnd();

     //building shadow 6&7 gap
     glBegin(GL_QUADS);
     glColor3ub(94, 101, 104);
     glVertex2f(-395.0f,-175.0f);
     glVertex2f(-385.0f,-175.0f);
     glVertex2f(-385.0f,-155.0f);
     glVertex2f(-395.0f,-155.0f);
     glEnd();

     //building shadow 8
     glBegin(GL_QUADS);
     glColor3ub(94, 101, 104);
     glVertex2f(-320.0f,-250.0f);
     glVertex2f(-250.0f,-250.0f);
     glVertex2f(-250.0f,-155.0f);
     glVertex2f(-320.0f,-155.0f);
     glEnd();

     //building 8 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-310.0f,-240.0f);
     glVertex2f(-295.0f,-240.0f);
     glVertex2f(-295.0f,-225.0f);
     glVertex2f(-310.0f,-225.0f);
     glEnd();

     //building 8 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-275.0f,-240.0f);
     glVertex2f(-260.0f,-240.0f);
     glVertex2f(-260.0f,-225.0f);
     glVertex2f(-275.0f,-225.0f);
     glEnd();

     //building 8 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-310.0f,-215.0f);
     glVertex2f(-295.0f,-215.0f);
     glVertex2f(-295.0f,-200.0f);
     glVertex2f(-310.0f,-200.0f);
     glEnd();

     //building 8 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-275.0f,-215.0f);
     glVertex2f(-260.0f,-215.0f);
     glVertex2f(-260.0f,-200.0f);
     glVertex2f(-275.0f,-200.0f);
     glEnd();

     //building 8 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-310.0f,-190.0f);
     glVertex2f(-295.0f,-190.0f);
     glVertex2f(-295.0f,-175.0f);
     glVertex2f(-310.0f,-175.0f);
     glEnd();

     //building 8 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-275.0f,-190.0f);
     glVertex2f(-260.0f,-190.0f);
     glVertex2f(-260.0f,-175.0f);
     glVertex2f(-275.0f,-175.0f);
     glEnd();

     //building shadow 7 & 8 gap
     glBegin(GL_QUADS);
     glColor3ub(94, 101, 104);
     glVertex2f(-385.0f,-180.0f);
     glVertex2f(-320.0f,-180.0f);
     glVertex2f(-320.0f,-155.0f);
     glVertex2f(-385.0f,-155.0f);
     glEnd();

     //building shadow 9
     glBegin(GL_QUADS);
     glColor3ub(94, 101, 104);
     glVertex2f(-240.0f,-240.0f);
     glVertex2f(-180.0f,-240.0f);
     glVertex2f(-180.0f,-155.0f);
     glVertex2f(-240.0f,-155.0f);
     glEnd();

     //building 9 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-230.0f,-230.0f);
     glVertex2f(-220.0f,-230.0f);
     glVertex2f(-220.0f,-220.0f);
     glVertex2f(-230.0f,-220.0f);
     glEnd();

     //building 9 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-190.0f,-230.0f);
     glVertex2f(-200.0f,-230.0f);
     glVertex2f(-200.0f,-220.0f);
     glVertex2f(-190.0f,-220.0f);
     glEnd();

     //building 9 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-230.0f,-210.0f);
     glVertex2f(-220.0f,-210.0f);
     glVertex2f(-220.0f,-200.0f);
     glVertex2f(-230.0f,-200.0f);
     glEnd();

     //building 9 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-190.0f,-210.0f);
     glVertex2f(-200.0f,-210.0f);
     glVertex2f(-200.0f,-200.0f);
     glVertex2f(-190.0f,-200.0f);
     glEnd();

     //building 9 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-230.0f,-190.0f);
     glVertex2f(-220.0f,-190.0f);
     glVertex2f(-220.0f,-180.0f);
     glVertex2f(-230.0f,-180.0f);
     glEnd();

     //building 9 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-190.0f,-190.0f);
     glVertex2f(-200.0f,-190.0f);
     glVertex2f(-200.0f,-180.0f);
     glVertex2f(-190.0f,-180.0f);
     glEnd();

     //building  shadow 8 &  9 GAP
     glBegin(GL_QUADS);
     glColor3ub(94, 101, 104);
     glVertex2f(-250.0f,-170.0f);
     glVertex2f(-240.0f,-170.0f);
     glVertex2f(-240.0f,-155.0f);
     glVertex2f(-250.0f,-155.0f);
     glEnd();

     // building shadow 10
     glBegin(GL_QUADS);
     glColor3ub(94, 101, 104);
     glVertex2f(-170.0f,-220.0f);
     glVertex2f(-135.0f,-220.0f);
     glVertex2f(-135.0f,-155.0f);
     glVertex2f(-170.0f,-155.0f);
     glEnd();

     // building shadow 9 & 10 gap
     glBegin(GL_QUADS);
     glColor3ub(94, 101, 104);
     glVertex2f(-180.0f,-165.0f);
     glVertex2f(-170.0f,-165.0f);
     glVertex2f(-170.0f,-155.0f);
     glVertex2f(-180.0f,-155.0f);
     glEnd();

     // building shadow 11
     glBegin(GL_QUADS);
     glColor3ub(94, 101, 104);
     glVertex2f(-125.0f,-220.0f);
     glVertex2f(- 75.0f,-220.0f);
     glVertex2f(- 75.0f,-155.0f);
     glVertex2f(-125.0f,-155.0f);
     glEnd();

     //building shadow 10 & 11 gap
     glBegin(GL_QUADS);
     glColor3ub(94, 101, 104);
     glVertex2f(-135.0f,-170.0f);
     glVertex2f(-125.0f,-170.0f);
     glVertex2f(-125.0f,-155.0f);
     glVertex2f(-135.0f,-155.0f);
     glEnd();

     // building shadow 12
     glBegin(GL_QUADS);
     glColor3ub(94, 101, 104);
     glVertex2f(-65.0f,-235.0f);
     glVertex2f(  0.0f,-235.0f);
     glVertex2f(  0.0f,-155.0f);
     glVertex2f(-65.0f,-155.0f);
     glEnd();

     // building 12 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-55.0f,-225.0f);
     glVertex2f(-40.0f,-225.0f);
     glVertex2f(-40.0f,-210.0f);
     glVertex2f(-55.0f,-210.0f);
     glEnd();

     // building 12 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-25.0f,-225.0f);
     glVertex2f(-10.0f,-225.0f);
     glVertex2f(-10.0f,-210.0f);
     glVertex2f(-25.0f,-210.0f);
     glEnd();

     // building 12 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-55.0f,-200.0f);
     glVertex2f(-40.0f,-200.0f);
     glVertex2f(-40.0f,-185.0f);
     glVertex2f(-55.0f,-185.0f);
     glEnd();

     // building 12 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-25.0f,-200.0f);
     glVertex2f(-10.0f,-200.0f);
     glVertex2f(-10.0f,-185.0f);
     glVertex2f(-25.0f,-185.0f);
     glEnd();

     //building 11 & 12 gap
     glBegin(GL_QUADS);
     glColor3ub(94, 101, 104);
     glVertex2f(-75.0f,-175.0f);
     glVertex2f(-65.0f,-175.0f);
     glVertex2f(-65.0f,-155.0f);
     glVertex2f(-75.0f,-155.0f);
     glEnd();

     // building shadow 13
     glBegin(GL_QUADS);
     glColor3ub(94, 101, 104);
     glVertex2f( 0.0f,-225.0f);
     glVertex2f(50.0f,-225.0f);
     glVertex2f(50.0f,-155.0f);
     glVertex2f( 0.0f,-155.0f);
     glEnd();

     // building 13 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(15.0f,-215.0f);
     glVertex2f(25.0f,-215.0f);
     glVertex2f(25.0f,-205.0f);
     glVertex2f(15.0f,-205.0f);
     glEnd();

     // building 13 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(35.0f,-215.0f);
     glVertex2f(45.0f,-215.0f);
     glVertex2f(45.0f,-205.0f);
     glVertex2f(35.0f,-205.0f);
     glEnd();

     // building 13 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(15.0f,-195.0f);
     glVertex2f(25.0f,-195.0f);
     glVertex2f(25.0f,-185.0f);
     glVertex2f(15.0f,-185.0f);
     glEnd();

     // building 13 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(35.0f,-195.0f);
     glVertex2f(45.0f,-195.0f);
     glVertex2f(45.0f,-185.0f);
     glVertex2f(35.0f,-185.0f);
     glEnd();

     // building shadow 14 & 15
     glBegin(GL_QUADS);
     glColor3ub(94, 101, 104);
     glVertex2f( 50.0f,-215.0f);
     glVertex2f(165.0f,-215.0f);
     glVertex2f(165.0f,-155.0f);
     glVertex2f( 50.0f,-155.0f);
     glEnd();

     // building 14 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(65.0f,-205.0f);
     glVertex2f(75.0f,-205.0f);
     glVertex2f(75.0f,-195.0f);
     glVertex2f(65.0f,-195.0f);
     glEnd();

     // building 14 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(95.0f,-205.0f);
     glVertex2f(85.0f,-205.0f);
     glVertex2f(85.0f,-195.0f);
     glVertex2f(95.0f,-195.0f);
     glEnd();

     // building 14 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(65.0f,-185.0f);
     glVertex2f(75.0f,-185.0f);
     glVertex2f(75.0f,-175.0f);
     glVertex2f(65.0f,-175.0f);
     glEnd();

     // building 14 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(95.0f,-185.0f);
     glVertex2f(85.0f,-185.0f);
     glVertex2f(85.0f,-175.0f);
     glVertex2f(95.0f,-175.0f);
     glEnd();

     // building 15 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(120.0f,-205.0f);
     glVertex2f(130.0f,-205.0f);
     glVertex2f(130.0f,-195.0f);
     glVertex2f(120.0f,-195.0f);
     glEnd();

     // building 15 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(145.0f,-205.0f);
     glVertex2f(155.0f,-205.0f);
     glVertex2f(155.0f,-195.0f);
     glVertex2f(145.0f,-195.0f);
     glEnd();

     // building 15 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(120.0f,-185.0f);
     glVertex2f(130.0f,-185.0f);
     glVertex2f(130.0f,-175.0f);
     glVertex2f(120.0f,-175.0f);
     glEnd();

     // building 15 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(145.0f,-185.0f);
     glVertex2f(155.0f,-185.0f);
     glVertex2f(155.0f,-175.0f);
     glVertex2f(145.0f,-175.0f);
     glEnd();

     // bridge shadow pole 1
     glBegin(GL_QUADS);
     glColor3ub(94, 101, 104);
     glVertex2f(210.0f,-200.0f);
     glVertex2f(240.0f,-200.0f);
     glVertex2f(240.0f,-155.0f);
     glVertex2f(210.0f,-155.0f);
     glEnd();

     // bridge shadow pole 2
     glBegin(GL_QUADS);
     glColor3ub(94, 101, 104);
     glVertex2f(250.0f,-200.0f);
     glVertex2f(280.0f,-200.0f);
     glVertex2f(280.0f,-155.0f);
     glVertex2f(250.0f,-155.0f);
     glEnd();

     // bridge shadow pole 3
     glBegin(GL_QUADS);
     glColor3ub(94, 101, 104);
     glVertex2f(670.0f,-200.0f);
     glVertex2f(700.0f,-200.0f);
     glVertex2f(700.0f,-155.0f);
     glVertex2f(670.0f,-155.0f);
     glEnd();

     // bridge shadow pole 4
     glBegin(GL_QUADS);
     glColor3ub(94, 101, 104);
     glVertex2f(710.0f,-200.0f);
     glVertex2f(740.0f,-200.0f);
     glVertex2f(740.0f,-155.0f);
     glVertex2f(710.0f,-155.0f);
     glEnd();

     //bridge shadow
     glBegin(GL_QUADS);
     glColor3ub(94, 101, 104);
     glVertex2f(165.0f,-170.0f);
     glVertex2f(750.0f,-170.0f);
     glVertex2f(750.0f,-175.0f);
     glVertex2f(165.0f,-175.0f);
     glEnd();

	 //boat
	 glPushMatrix();
	 glTranslatef(position8, 0.0f, 0.0f );
	 glBegin(GL_POLYGON);
     glColor3ub(0, 0, 0);
     glVertex2f(375.0f,-200.0f);
     glVertex2f(450.0f,-250.0f);
     glVertex2f(650.0f,-250.0f);
     glVertex2f(650.0f,-225.0f);
     glVertex2f(625.0f,-200.0f);
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(0, 0, 0);
     glVertex2f(475.0f,-200.0f);
     glVertex2f(550.0f,-200.0f);
     glVertex2f(500.0f,-160.0f);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3ub(128, 128, 128);
     glVertex2f(375.0f,-300.0f);
     glVertex2f(625.0f,-300.0f);
     glVertex2f(650.0f,-275.0f);
     glVertex2f(650.0f,-250.0f);
     glVertex2f(450.0f,-250.0f);
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(128, 128, 128);
     glVertex2f(525.0f,-350.0f);
     glVertex2f(550.0f,-300.0f);
     glVertex2f(475.0f,-300.0f);
     glEnd();
     glLoadIdentity();
	 glPopMatrix();

     //Building 1
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-750.0f,-155.0f);
     glVertex2f(-720.0f,-155.0f);
     glVertex2f(-720.0f,- 15.0f);
     glVertex2f(-750.0f,- 15.0f);
     glEnd();

     //building 2
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-715.0f,-155.0f);
     glVertex2f(-660.0f,-155.0f);
     glVertex2f(-660.0f,- 60.0f);
     glVertex2f(-715.0f,- 60.0f);
     glEnd();

     //building 2 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-705.0f,-70.0f);
     glVertex2f(-695.0f,-70.0f);
     glVertex2f(-695.0f,-80.0f);
     glVertex2f(-705.0f,-80.0f);
     glEnd();

     //building 2 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-680.0f,-70.0f);
     glVertex2f(-670.0f,-70.0f);
     glVertex2f(-670.0f,-80.0f);
     glVertex2f(-680.0f,-80.0f);
     glEnd();

     //building 2 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-705.0f,-90.0f);
     glVertex2f(-695.0f,-90.0f);
     glVertex2f(-695.0f,-100.0f);
     glVertex2f(-705.0f,-100.0f);
     glEnd();

     //building 2 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-680.0f,- 90.0f);
     glVertex2f(-670.0f,- 90.0f);
     glVertex2f(-670.0f,-100.0f);
     glVertex2f(-680.0f,-100.0f);
     glEnd();

     //building 1&2 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-720.0f,-155.0f);
     glVertex2f(-715.0f,-155.0f);
     glVertex2f(-715.0f,-100.0f);
     glVertex2f(-720.0f,-100.0f);
     glEnd();

     // building 3
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-640.0f,-155.0f);
     glVertex2f(-590.0f,-155.0f);
     glVertex2f(-590.0f,- 45.0f);
     glVertex2f(-640.0f,- 45.0f);
     glEnd();

     // building 3 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-630.0f,-70.0f);
     glVertex2f(-620.0f,-70.0f);
     glVertex2f(-620.0f,-80.0f);
     glVertex2f(-630.0f,-80.0f);
     glEnd();

     // building 3 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-610.0f,-70.0f);
     glVertex2f(-600.0f,-70.0f);
     glVertex2f(-600.0f,-80.0f);
     glVertex2f(-610.0f,-80.0f);
     glEnd();

     // building 3 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-630.0f,- 90.0f);
     glVertex2f(-620.0f,- 90.0f);
     glVertex2f(-620.0f,-100.0f);
     glVertex2f(-630.0f,-100.0f);
     glEnd();

     // building 3 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-610.0f,- 90.0f);
     glVertex2f(-600.0f,- 90.0f);
     glVertex2f(-600.0f,-100.0f);
     glVertex2f(-610.0f,-100.0f);
     glEnd();

     //building 2&3 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-660.0f,-155.0f);
     glVertex2f(-640.0f,-155.0f);
     glVertex2f(-640.0f,- 80.0f);
     glVertex2f(-660.0f,- 80.0f);
     glEnd();

     // building 4
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-580.0f,-155.0f);
     glVertex2f(-535.0f,-155.0f);
     glVertex2f(-535.0f,  45.0f);
     glVertex2f(-580.0f,  45.0f);
     glEnd();

     // building 4 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-570.0f,25.0f);
     glVertex2f(-560.0f,25.0f);
     glVertex2f(-560.0f,35.0f);
     glVertex2f(-570.0f,35.0f);
     glEnd();

     // building 4 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-555.0f,25.0f);
     glVertex2f(-545.0f,25.0f);
     glVertex2f(-545.0f,35.0f);
     glVertex2f(-555.0f,35.0f);
     glEnd();

     // building 4 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-570.0f, 5.0f);
     glVertex2f(-560.0f, 5.0f);
     glVertex2f(-560.0f,15.0f);
     glVertex2f(-570.0f,15.0f);
     glEnd();

     // building 4 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-555.0f, 5.0f);
     glVertex2f(-545.0f, 5.0f);
     glVertex2f(-545.0f,15.0f);
     glVertex2f(-555.0f,15.0f);
     glEnd();

     // building 4 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-570.0f,- 5.0f);
     glVertex2f(-560.0f,- 5.0f);
     glVertex2f(-560.0f,-15.0f);
     glVertex2f(-570.0f,-15.0f);
     glEnd();

     // building 4 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-555.0f,- 5.0f);
     glVertex2f(-545.0f,- 5.0f);
     glVertex2f(-545.0f,-15.0f);
     glVertex2f(-555.0f,-15.0f);
     glEnd();

     // building 3 &4 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-590.0f,-155.0f);
     glVertex2f(-580.0f,-155.0f);
     glVertex2f(-580.0f,- 90.0f);
     glVertex2f(-590.0f,- 90.0f);
     glEnd();

     // building 5
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-525.0f,-155.0f);
     glVertex2f(-460.0f,-155.0f);
     glVertex2f(-460.0f,  45.0f);
     glVertex2f(-525.0f,  45.0f);
     glEnd();

     // building 5 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-515.0f,15.0f);
     glVertex2f(-500.0f,15.0f);
     glVertex2f(-500.0f,30.0f);
     glVertex2f(-515.0f,30.0f);
     glEnd();

     // building 5 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-485.0f,15.0f);
     glVertex2f(-470.0f,15.0f);
     glVertex2f(-470.0f,30.0f);
     glVertex2f(-485.0f,30.0f);
     glEnd();

     // building 5 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-515.0f,-05.0f);
     glVertex2f(-500.0f,-05.0f);
     glVertex2f(-500.0f,-20.0f);
     glVertex2f(-515.0f,-20.0f);
     glEnd();

     // building 5 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-485.0f,-05.0f);
     glVertex2f(-470.0f,-05.0f);
     glVertex2f(-470.0f,-20.0f);
     glVertex2f(-485.0f,-20.0f);
     glEnd();

     // building 5 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-515.0f,-40.0f);
     glVertex2f(-500.0f,-40.0f);
     glVertex2f(-500.0f,-55.0f);
     glVertex2f(-515.0f,-55.0f);
     glEnd();

     // building 5 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-485.0f,-40.0f);
     glVertex2f(-470.0f,-40.0f);
     glVertex2f(-470.0f,-55.0f);
     glVertex2f(-485.0f,-55.0f);
     glEnd();

     // building 4 & 5 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-535.0f,-155.0f);
     glVertex2f(-525.0f,-155.0f);
     glVertex2f(-525.0f,-100.0f);
     glVertex2f(-535.0f,-100.0f);
     glEnd();

     //buildiing 6
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-450.0f,-155.0f);
     glVertex2f(-395.0f,-155.0f);
     glVertex2f(-395.0f,- 15.0f);
     glVertex2f(-450.0f,- 15.0f);
     glEnd();

     //buildiing 6 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-440.0f,-35.0f);
     glVertex2f(-430.0f,-35.0f);
     glVertex2f(-430.0f,-25.0f);
     glVertex2f(-440.0f,-25.0f);
     glEnd();

     //buildiing 6 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-415.0f,-35.0f);
     glVertex2f(-405.0f,-35.0f);
     glVertex2f(-405.0f,-25.0f);
     glVertex2f(-415.0f,-25.0f);
     glEnd();

     //buildiing 6 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-440.0f,-45.0f);
     glVertex2f(-430.0f,-45.0f);
     glVertex2f(-430.0f,-55.0f);
     glVertex2f(-440.0f,-55.0f);
     glEnd();

     //buildiing 6 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-415.0f,-45.0f);
     glVertex2f(-405.0f,-45.0f);
     glVertex2f(-405.0f,-55.0f);
     glVertex2f(-415.0f,-55.0f);
     glEnd();

     //buildiing 6 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-440.0f,-65.0f);
     glVertex2f(-430.0f,-65.0f);
     glVertex2f(-430.0f,-75.0f);
     glVertex2f(-440.0f,-75.0f);
     glEnd();

     //buildiing 6 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-415.0f,-65.0f);
     glVertex2f(-405.0f,-65.0f);
     glVertex2f(-405.0f,-75.0f);
     glVertex2f(-415.0f,-75.0f);
     glEnd();

     //buildiing 6 window last left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-440.0f,-85.0f);
     glVertex2f(-430.0f,-85.0f);
     glVertex2f(-430.0f,-95.0f);
     glVertex2f(-440.0f,-95.0f);
     glEnd();

     //buildiing 6 window last right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-415.0f,-85.0f);
     glVertex2f(-405.0f,-85.0f);
     glVertex2f(-405.0f,-95.0f);
     glVertex2f(-415.0f,-95.0f);
     glEnd();

     //building 5&6 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-460.0f,-155.0f);
     glVertex2f(-450.0f,-155.0f);
     glVertex2f(-450.0f,-110.0f);
     glVertex2f(-460.0f,-110.0f);
     glEnd();

     // building 7
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-385.0f,-155.0f);
     glVertex2f(-345.0f,-155.0f);
     glVertex2f(-345.0f,  48.0f);
     glVertex2f(-385.0f,   0.0f);
     glEnd();

     //building 6&7 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0); // set the drawing color to red
     glVertex2f(-395.0,-155.0);
     glVertex2f(-385.0,-155.0);
     glVertex2f(-385.0,-125.0);
     glVertex2f(-395.0,-125.0);
     glEnd();

     //building 8
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-320.0f,-155.0f);
     glVertex2f(-250.0f,-155.0f);
     glVertex2f(-250.0f,  60.0f);
     glVertex2f(-320.0f,  60.0f);
     glEnd();

     //building 8 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-310.0f,40.0f);
     glVertex2f(-295.0f,40.0f);
     glVertex2f(-295.0f,25.0f);
     glVertex2f(-310.0f,25.0f);
     glEnd();

     //building 8 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-275.0f,40.0f);
     glVertex2f(-260.0f,40.0f);
     glVertex2f(-260.0f,25.0f);
     glVertex2f(-275.0f,25.0f);
     glEnd();

     //building 8 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-310.0f,15.0f);
     glVertex2f(-295.0f,15.0f);
     glVertex2f(-295.0f, 0.0f);
     glVertex2f(-310.0f, 0.0f);
     glEnd();

     //building 8 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-275.0f,15.0f);
     glVertex2f(-260.0f,15.0f);
     glVertex2f(-260.0f, 0.0f);
     glVertex2f(-275.0f, 0.0f);
     glEnd();

     //building 8 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-310.0f,-10.0f);
     glVertex2f(-295.0f,-10.0f);
     glVertex2f(-295.0f,-25.0f);
     glVertex2f(-310.0f,-25.0f);
     glEnd();

     //building 8 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-275.0f,-10.0f);
     glVertex2f(-260.0f,-10.0f);
     glVertex2f(-260.0f,-25.0f);
     glVertex2f(-275.0f,-25.0f);
     glEnd();

     //building 8 window last left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-310.0f,-35.0f);
     glVertex2f(-295.0f,-35.0f);
     glVertex2f(-295.0f,-50.0f);
     glVertex2f(-310.0f,-50.0f);
     glEnd();

     //building 8 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-275.0f,-35.0f);
     glVertex2f(-260.0f,-35.0f);
     glVertex2f(-260.0f,-50.0f);
     glVertex2f(-275.0f,-50.0f);
     glEnd();

     //building 7 & 8 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-390.0f,-155.0f);
     glVertex2f(-320.0f,-155.0f);
     glVertex2f(-320.0f,- 70.0f);
     glVertex2f(-390.0f,- 70.0f);
     glEnd();

     // building 7 & 8 pole
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-335.0f,-155.0);
     glVertex2f(-325.0f,-155.0);
     glVertex2f(-325.0f,- 20.0);
     glVertex2f(-335.0f,- 20.0);
     glEnd();

     //building 9
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-240.0f,-155.0f);
     glVertex2f(-180.0f,-155.0f);
     glVertex2f(-180.0f,  10.0f);
     glVertex2f(-240.0f,  10.0f);
     glEnd();

     //building 9 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-230.0f,  0.0f);
     glVertex2f(-220.0f,  0.0f);
     glVertex2f(-220.0f,-10.0f);
     glVertex2f(-230.0f,-10.0f);
     glEnd();

     //building 9 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-190.0f,  0.0f);
     glVertex2f(-200.0f,  0.0f);
     glVertex2f(-200.0f,-10.0f);
     glVertex2f(-190.0f,-10.0f);
     glEnd();

     //building 9 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-230.0f,-20.0f);
     glVertex2f(-220.0f,-20.0f);
     glVertex2f(-220.0f,-30.0f);
     glVertex2f(-230.0f,-30.0f);
     glEnd();

     //building 9 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-190.0f,-20.0f);
     glVertex2f(-200.0f,-20.0f);
     glVertex2f(-200.0f,-30.0f);
     glVertex2f(-190.0f,-30.0f);
     glEnd();

     //building 9 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-230.0f,-40.0f);
     glVertex2f(-220.0f,-40.0f);
     glVertex2f(-220.0f,-50.0f);
     glVertex2f(-230.0f,-50.0f);
     glEnd();

     //building 9 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-190.0f,-40.0f);
     glVertex2f(-200.0f,-40.0f);
     glVertex2f(-200.0f,-50.0f);
     glVertex2f(-190.0f,-50.0f);
     glEnd();

     //building 9 window final left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-230.0f,-60.0f);
     glVertex2f(-220.0f,-60.0f);
     glVertex2f(-220.0f,-70.0f);
     glVertex2f(-230.0f,-70.0f);
     glEnd();

     //building 9 window final right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-190.0f,-60.0f);
     glVertex2f(-200.0f,-60.0f);
     glVertex2f(-200.0f,-70.0f);
     glVertex2f(-190.0f,-70.0f);
     glEnd();

     //building 8 &  9 GAP
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-250.0f,-155.0f);
     glVertex2f(-240.0f,-155.0f);
     glVertex2f(-240.0f,-130.0f);
     glVertex2f(-250.0f,-130.0f);
     glEnd();

     // building 10
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-170.0f,-155.0f);
     glVertex2f(-135.0f,-155.0f);
     glVertex2f(-135.0f,   0.0f);
     glVertex2f(-170.0f,   0.0f);
     glEnd();

     // building 9 & 10 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-180.0f,-155.0f);
     glVertex2f(-170.0f,-155.0f);
     glVertex2f(-170.0f,-130.0f);
     glVertex2f(-180.0f,-130.0f);
     glEnd();

      // building 11
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-125.0f,-155.0f);
     glVertex2f(- 75.0f,-155.0f);
     glVertex2f(- 75.0f,  30.0f);
     glVertex2f(-125.0f,  30.0f);
     glEnd();

     // building 11 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-80.0f,10.0f);
     glVertex2f(-80.0f,10.0f);
     glVertex2f(-70.0f,20.0f);
     glVertex2f(-70.0f,20.0f);
     glEnd();

     // building 11 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-120.0f,10.0f);
     glVertex2f(-120.0f,10.0f);
     glVertex2f(-110.0f,20.0f);
     glVertex2f(-110.0f,20.0f);
     glEnd();

     //building 10 & 11 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-135.0f,-155.0f);
     glVertex2f(-125.0f,-155.0f);
     glVertex2f(-125.0f,-130.0f);
     glVertex2f(-135.0f,-130.0f);
     glEnd();

     // building 12
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-65.0f,-155.0f);
     glVertex2f(  0.0f,-155.0f);
     glVertex2f(  0.0f,- 10.0f);
     glVertex2f(-65.0f,- 10.0f);
     glEnd();

     // building 12 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-55.0f,-20.0f);
     glVertex2f(-40.0f,-20.0f);
     glVertex2f(-40.0f,-35.0f);
     glVertex2f(-55.0f,-35.0f);
     glEnd();

     // building 12 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-25.0f,-20.0f);
     glVertex2f(-10.0f,-20.0f);
     glVertex2f(-10.0f,-35.0f);
     glVertex2f(-25.0f,-35.0f);
     glEnd();

     // building 12 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-55.0f,-45.0f);
     glVertex2f(-40.0f,-45.0f);
     glVertex2f(-40.0f,-60.0f);
     glVertex2f(-55.0f,-60.0f);
     glEnd();

     // building 12 window middel right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-25.0f,-45.0f);
     glVertex2f(-10.0f,-45.0f);
     glVertex2f(-10.0f,-60.0f);
     glVertex2f(-25.0f,-60.0f);
     glEnd();

     // building 12 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(-55.0f,-70.0f);
     glVertex2f(-40.0f,-70.0f);
     glVertex2f(-40.0f,-85.0f);
     glVertex2f(-55.0f,-85.0f);
     glEnd();

     // building 12 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255,255);
     glVertex2f(-25.0f,-70.0f);
     glVertex2f(-10.0f,-70.0f);
     glVertex2f(-10.0f,-85.0f);
     glVertex2f(-25.0f,-85.0f);
     glEnd();

     //building 11 & 12 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-75.0f,-155.0f);
     glVertex2f(-65.0f,-155.0f);
     glVertex2f(-65.0f,- 80.0f);
     glVertex2f(-75.0f,- 80.0f);
     glEnd();

     // building 13
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(10.0f,-155.0f);
     glVertex2f(50.0f,-155.0f);
     glVertex2f(50.0f,- 20.0f);
     glVertex2f(10.0f,- 20.0f);
     glEnd();

     // building 13 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(15.0f,-40.0f);
     glVertex2f(25.0f,-40.0f);
     glVertex2f(25.0f,-30.0f);
     glVertex2f(15.0f,-30.0f);
     glEnd();

     // building 13 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(35.0f,-40.0f);
     glVertex2f(45.0f,-40.0f);
     glVertex2f(45.0f,-30.0f);
     glVertex2f(35.0f,-30.0f);
     glEnd();

     // building 13 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(15.0f,-50.0f);
     glVertex2f(25.0f,-50.0f);
     glVertex2f(25.0f,-60.0f);
     glVertex2f(15.0f,-60.0f);
     glEnd();

     // building 13 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(35.0f,-50.0f);
     glVertex2f(45.0f,-50.0f);
     glVertex2f(45.0f,-60.0f);
     glVertex2f(35.0f,-60.0f);
     glEnd();

     // building 13 window bottom left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(15.0f,-70.0f);
     glVertex2f(25.0f,-70.0f);
     glVertex2f(25.0f,-80.0f);
     glVertex2f(15.0f,-80.0f);
     glEnd();

     // building 13 window bottom right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(35.0f,-70.0f);
     glVertex2f(45.0f,-70.0f);
     glVertex2f(45.0f,-80.0f);
     glVertex2f(35.0f,-80.0f);
     glEnd();

     // building 12 & 13 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f( 0.0f,-155.0f);
     glVertex2f(10.0f,-155.0f);
     glVertex2f(10.0f,- 75.0f);
     glVertex2f( 0.0f,- 75.0f);
     glEnd();

     // building 14
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f( 60.0f,-155.0f);
     glVertex2f(100.0f,-155.0f);
     glVertex2f(100.0f,- 40.0f);
     glVertex2f( 60.0f,- 40.0f);
     glEnd();

     // building 14 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(65.0f,-60.0f);
     glVertex2f(75.0f,-60.0f);
     glVertex2f(75.0f,-50.0f);
     glVertex2f(65.0f,-50.0f);
     glEnd();

     // building 14 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(95.0f,-60.0f);
     glVertex2f(85.0f,-60.0f);
     glVertex2f(85.0f,-50.0f);
     glVertex2f(95.0f,-50.0f);
     glEnd();

     // building 14 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(65.0f,-80.0f);
     glVertex2f(75.0f,-80.0f);
     glVertex2f(75.0f,-70.0f);
     glVertex2f(65.0f,-70.0f);
     glEnd();

     // building 14 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(95.0f,-80.0f);
     glVertex2f(85.0f,-80.0f);
     glVertex2f(85.0f,-70.0f);
     glVertex2f(95.0f,-70.0f);
     glEnd();

     // building 13 & 14 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(50.0f,-155.0f);
     glVertex2f(60.0f,-155.0f);
     glVertex2f(60.0f,- 90.0f);
     glVertex2f(50.0f,- 90.0f);
     glEnd();

     // building 15
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(110.0f,-155.0f);
     glVertex2f(165.0f,-155.0f);
     glVertex2f(165.0f,- 40.0f);
     glVertex2f(110.0f,- 40.0f);
     glEnd();

     // building 15 window top left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(120.0f,-60.0f);
     glVertex2f(130.0f,-60.0f);
     glVertex2f(130.0f,-50.0f);
     glVertex2f(120.0f,-50.0f);
     glEnd();

     // building 15 window top right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(145.0f,-60.0f);
     glVertex2f(155.0f,-60.0f);
     glVertex2f(155.0f,-50.0f);
     glVertex2f(145.0f,-50.0f);
     glEnd();

     // building 15 window middle left
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(120.0f,-80.0f);
     glVertex2f(130.0f,-80.0f);
     glVertex2f(130.0f,-70.0f);
     glVertex2f(120.0f,-70.0f);
     glEnd();

     // building 15 window middle right
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(145.0f,-80.0f);
     glVertex2f(155.0f,-80.0f);
     glVertex2f(155.0f,-70.0f);
     glVertex2f(145.0f,-70.0f);
     glEnd();

     // building 14 & 15 gap
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(100.0f,-155.0f);
     glVertex2f(110.0f,-155.0f);
     glVertex2f(110.0f,- 90.0f);
     glVertex2f(100.0f,- 90.0f);
     glEnd();

     // bridge pole 1
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(210.0f,-155.0f);
     glVertex2f(240.0f,-155.0f);
     glVertex2f(240.0f,- 60.0f);
     glVertex2f(210.0f,- 60.0f);
     glEnd();

     // bridge pole 2
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(250.0f,-155.0f);
     glVertex2f(280.0f,-155.0f);
     glVertex2f(280.0f,- 60.0f);
     glVertex2f(250.0f,- 60.0f);
     glEnd();

     // bridge pole 3
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(670.0f,-155.0f);
     glVertex2f(700.0f,-155.0f);
     glVertex2f(700.0f,- 60.0f);
     glVertex2f(670.0f,- 60.0f);
     glEnd();

     // bridge pole 4
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(710.0f,-155.0f);
     glVertex2f(740.0f,-155.0f);
     glVertex2f(740.0f,- 60.0f);
     glVertex2f(710.0f,- 60.0f);
     glEnd();

     //bridge
     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(165.0f,-130.0f);
     glVertex2f(750.0f,-130.0f);
     glVertex2f(750.0f,-120.0f);
     glVertex2f(165.0f,-120.0f);
     glEnd();

     // Road
     glBegin(GL_QUADS);
     glColor3ub(1, 1, 1);
     glVertex2f(-750.0f,-500.0f);
     glVertex2f( 750.0f,-500.0f);
     glVertex2f( 750.0f,-450.0f);
     glVertex2f(-750.0f,-450.0f);
     glEnd();

     //LAMPPOST ONE START
     glBegin(GL_POLYGON);// lamppost onebase
     glColor3ub(1, 1, 1);
     glVertex2f(-650.0f,-450.0f);
     glVertex2f(-610.0f,-450.0f);
     glVertex2f(-600.0f,-370.0f);
     glVertex2f(-630.0f,-350.0f);
     glVertex2f(-660.0f,-370.0f);
     glEnd();

     int i;//lamp circle after the base
     x = -630; y = -320; radius = 30;
     glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(1, 1, 1);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     glBegin(GL_QUADS);
     glColor3ub(1, 1, 1); // Lampstick one
     glVertex2f(-635.0f,-450.0f);
     glVertex2f(-625.0f,-450.0f);
     glVertex2f(-625.0f,  25.0f);
     glVertex2f(-635.0f,  25.0f);
     glEnd();

     //lamp circle at top  center
     x = -630; y = 40; radius = 20;
	 glBegin(GL_TRIANGLE_FAN);
     glColor3ub(1, 1, 1);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     glBegin(GL_QUADS);
     glColor3ub(1, 1, 1); // the actual lampholder base
     glVertex2f(-710.0f, 0.0f);
     glVertex2f(-550.0f, 0.0f);
     glVertex2f(-550.0f,10.0f);
     glVertex2f(-710.0f,10.0f);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(1, 1, 1); // the actual lampholder base left
     glVertex2f(-720.0f, 0.0f);
     glVertex2f(-710.0f, 0.0f);
     glVertex2f(-710.0f,25.0f);
     glVertex2f(-720.0f,25.0f);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(1, 1, 1); // the actual lampholder base right
     glVertex2f(-550.0f, 0.0f);
     glVertex2f(-540.0f, 0.0f);
     glVertex2f(-540.0f,25.0f);
     glVertex2f(-550.0f,25.0f);
     glEnd();
	  //lamp circle at top  right

     x = -545; y = 50; radius = 25;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(230, 243, 255);//BULB
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

	 //lamp circle at top  left
     x = -715; y = 50; radius = 25;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(230, 243, 255);//BULB
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     //LAMPPOST ONE END
     glBegin(GL_POLYGON);
     glColor3ub(1, 1, 1); // Lampbase two
     glVertex2f(580.0f,-450.0f);
     glVertex2f(620.0f,-450.0f);
     glVertex2f(630.0f,-370.0f);
     glVertex2f(600.0f,-350.0f);
     glVertex2f(570.0f,-370.0f);
     glEnd();

     //lamp circle after the base two
     x = 600; y = -320; radius = 30;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(1, 1, 1);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     glBegin(GL_QUADS);
     glColor3ub(1, 1, 1); // Lampstick two
     glVertex2f(595.0f,-450.0f);
     glVertex2f(605.0f,-450.0f);
     glVertex2f(605.0f,  25.0f);
     glVertex2f(595.0f,  25.0f);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(1, 1, 1); // the actual lampholder base
     glVertex2f(520.0f, 0.0f);
     glVertex2f(680.0f, 0.0f);
     glVertex2f(680.0f,10.0f);
     glVertex2f(520.0f,10.0f);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(1, 1, 1); // the actual lampholder base left
     glVertex2f(510.0f, 0.0f);
     glVertex2f(520.0f, 0.0f);
     glVertex2f(520.0f,25.0f);
     glVertex2f(510.0f,25.0f);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(1, 1, 1); // the actual lampholder base right
     glVertex2f(680.0f, 0.0f);
     glVertex2f(690.0f, 0.0f);
     glVertex2f(690.0f,25.0f);
     glVertex2f(680.0f,25.0f);
     glEnd();

     x = 600; y = 45; radius = 20;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(1, 1, 1);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

	 //lamp circle at top  right
     x = 515; y = 50; radius = 25;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(230, 243, 255);//BULB
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

	 //lamp circle at top  left
     x = 685; y = 50; radius = 25;
     glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(230, 243, 255);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     glutTimerFunc(10000, night_demo, 0);
     glFlush();
}

void lateevening_demo(int val)
{
     glutDisplayFunc(lateevening);
}

void evening()
{
     glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Background Colour
     glClear(GL_COLOR_BUFFER_BIT);

     //This is the background
     glBegin(GL_QUADS);
     glColor3ub(233, 176, 105); //Background evening
     glVertex2f(-750.0f,-500.0f);
     glVertex2f( 750.0f,-500.0f);
     glVertex2f( 750.0f, 500.0f);
     glVertex2f(-750.0f, 500.0f);
     glEnd();
     //The Background ends here

     //stars
     GLfloat x = -740; GLfloat y = 450; GLfloat radius = 3;
     int triangleAmount = 300;
     GLfloat twicePi = 2.0f * PI;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3f(255, 255, 255);
     glVertex2f(x, y);
     for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -700; y = 350; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -500; y = 250; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -600; y = 400; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -400; y = 400; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -300; y = 200; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
    glColor3f(242, 242, 242);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -250; y = 300; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -100; y = 350; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = 0; y =150; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 100; y = 350; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 250; y = 250; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 400; y = 400; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 500; y = 375; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 600; y = 275; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 700; y = 380; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -600; y = 180; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -500; y = 480; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -450; y = 380; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 580; y = 480; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 0; y = 480; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -300; y = 450; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    //Sun
    glPushMatrix();
    glTranslatef(0.0f, position2, 0.0f);
	x = 350.0f; y = 500.0f; radius = 150.0f;
	glBegin(GL_TRIANGLE_FAN);//Sun
	glColor3ub(255, 143, 99);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();
	glLoadIdentity();
	glPopMatrix();
    //Sun End

    //Mountain Start
    glBegin(GL_QUADS);//back pahar 1
    glColor3ub(20, 39, 0);
    glVertex2f(-750.0f,-240.0f);
    glVertex2f(-520.0f,-160.0f);
    glVertex2f(- 75.0f,-295.0f);
    glVertex2f(-750.0f,-295.0f);
    glEnd();

    glBegin(GL_TRIANGLES);//back pahar 2
    glColor3ub(20, 39, 0);
    glVertex2f(-500.0f,-280.0f);
    glVertex2f(-180.0f,-125.0f);
    glVertex2f( 150.0f,-280.0f);
    glEnd();

    glBegin(GL_QUADS);//back pahar 3
    glColor3ub(20, 39, 0);
    glVertex2f( 40.0f,-315.0f);
    glVertex2f( 70.0f,-270.0f);
    glVertex2f(750.0f,-210.0f);
    glVertex2f(750.0f,-315.0f);
    glEnd();

    glBegin(GL_QUADS);//front pahar 1
    glColor3ub(48, 64, 0);
    glVertex2f(-750.0f,-245.0f);
    glVertex2f(-540.0f,-245.0f);
    glVertex2f(-570.0f,-305.0f);
    glVertex2f(-750.0f,-305.0f);
    glEnd();

    glBegin(GL_TRIANGLES);//front pahar 2
    glColor3ub(48, 64, 0);
    glVertex2f(-630.0f,-305.0f);
    glVertex2f(-500.0f,-220.0f);
    glVertex2f(-350.0f,-305.0f);
    glEnd();

    glBegin(GL_QUADS);//front pahar 3
    glColor3ub(48, 64, 0);
    glVertex2f(-450.0f,-305.0f);
    glVertex2f(-400.0f,-235.0f);
    glVertex2f(-240.0f,-225.0f);
    glVertex2f(-200.0f,-307.0f);
    glEnd();

    glBegin(GL_QUADS);//front pahar 4
    glColor3ub(48, 64, 0);//evening
    glVertex2f(-230.0f,-307.0f);
    glVertex2f(-180.0f,-200.0f);
    glVertex2f( 290.0f,-280.0f);
    glVertex2f( 300.0f,-310.0f);
    glEnd();

    glBegin(GL_TRIANGLES);//front pahar 5
    glColor3ub(48, 64, 0);
    glVertex2f(235.0f,-310.0f);
    glVertex2f(350.0f,-275.0f);
    glVertex2f(440.0f,-310.0f);
    glEnd();

    glBegin(GL_TRIANGLES);//front 6
    glColor3ub(48, 64, 0);
    glVertex2f(375.0f,-310.0f);
    glVertex2f(440.0f,-250.0f);
    glVertex2f(550.0f,-310.0f);
    glEnd();

    glBegin(GL_TRIANGLES);//front 7
    glColor3ub(48, 64, 0);
    glVertex2f(510.0f,-310.0f);
    glVertex2f(630.0f,-260.0f);
    glVertex2f(700.0f,-310.0f);
    glEnd();


    glBegin(GL_TRIANGLES);//front 8
    glColor3ub(48, 64, 0);
    glVertex2f(685.0f,-310.0f);
    glVertex2f(750.0f,-240.0f);
    glVertex2f(750.0f,-310.0f);
    glEnd();
    //Mountain end

    //Dark Cloud
    glPushMatrix();
    glTranslatef(position3, 0.0f, 0.0f);
    int i;
	x = -540.0f; y = 250.0f; radius = 25.0f;//left 1
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(87, 87, 67);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -510.0f; y = 280.0f; radius = 30.0f;//left 2
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(87, 87, 67);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = -480.0f; y = 240.0f; radius = 25.0f;//left 3
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(87, 87, 67);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = -470.0f; y = 280.0f; radius = 25.0f;//left 4
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(87, 87, 67);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = -440.0f; y = 250.0f; radius = 30.0f;//left 5
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(87, 87, 67);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = -410.0f; y = 270.0f; radius = 25.0f;//left 6
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(87, 87, 67);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = -400.0f; y = 240.0f; radius = 18.0f;//left 7
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(87, 87, 67);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = -300.0f; y = 245.0f; radius = 25.0f;//middle 1
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(87, 87, 67);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = -320.0f; y = 260.0f; radius = 25.0f;//middle 2
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(87, 87, 67);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = -290.0f; y = 280.0f; radius = 25.0f;//middle 3
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(87, 87, 67);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = -265.0f; y = 240.0f; radius = 25.0f;//middle 4
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(87, 87, 67);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = -250.0f; y = 280.0f; radius = 25.0f;//middle 5
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(87, 87, 67);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = -222.0f; y = 270.0f; radius = 28.0f;//middle 6
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(87, 87, 67);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = -220.0f; y = 240.0f; radius = 25.0f;//middle 7
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(87, 87, 67);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = -185.0f; y = 240.0f; radius = 25.0f;//middle 8
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(87, 87, 67);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = -175.0f; y = 280.0f; radius = 25.0f;//middle 9
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(87, 87, 67);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = -160.0f; y = 250.0f; radius = 25.0f;//middle 10
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(87, 87, 67);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = -150.0f; y = 245.0f; radius = 25.0f;//middle 11
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(87, 87, 67);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = -140.0f; y = 275.0f; radius = 25.0f;//middle 12
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(87, 87, 67);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = -120.0f; y = 240.0f; radius = 25.0f;//middle 13
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(87, 87, 67);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = -95.0f; y = 260.0f; radius = 29.0f;//middle 14
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(87, 87, 67);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = -75.0f; y = 240.0f; radius = 22.0f;//middle 15
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(87, 87, 67);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = 175.0f; y = 250.0f; radius = 20.0f;//right cloud 1
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(87, 87, 67);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = 200.0f; y = 245.0f; radius = 25.0f;//right cloud 2
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(87, 87, 67);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = 225.0f; y = 240.0f; radius = 23.0f;//right cloud 3
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(87, 87, 67);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = 215.0f; y = 270.0f; radius = 23.0f;//right cloud 4
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(87, 87, 67);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = 255.0f; y = 230.0f; radius = 20.0f;//right cloud 5
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(87, 87, 67);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = 255.0f; y = 270.0f; radius = 23.0f;//right cloud 5
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(87, 87, 67);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = 280.0f; y = 235.0f; radius = 23.0f;//right cloud 6
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(87, 87, 67);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = 295.0f; y = 270.0f; radius = 23.0f;//right cloud 7
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(87, 87, 67);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = 320.0f; y = 245.0f; radius = 25.0f;//right cloud 8
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(87, 87, 67);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();
	//dark clouds end
    glLoadIdentity();
	glPopMatrix();
    //Dark cloud end

    // white clouds start
	glPushMatrix();
	glTranslatef(position4, 0.0f, 0.0f);
	x = -395.0f; y = 290.0f; radius = 15.0f;//left  white 1
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121, 121, 121);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = -380.0f; y = 310.0f; radius = 18.0f;//left white 2
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121, 121, 121);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = -370.0f; y = 280.0f; radius = 18.0f;//left white 3
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121, 121, 121);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = -355.0f; y = 310.0f; radius = 22.0f;//left white 4
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121, 121, 121);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

	x = -340.0f; y = 280.0f; radius = 25.0f;//left white 5
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121, 121, 121);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

	x = -310.0f; y = 305.0f; radius = 27.0f;//left white 6
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121, 121, 121);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

	x = -290.0f; y = 330.0f; radius = 23.0f;//left white 7
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121, 121, 121);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

	x=-280.0f;y=300.0f;radius =23.0f;//left white 8
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121, 121, 121);//evening
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

	x = -260.0f; y = 330.0f; radius = 15.0f;//left white 9
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121, 121, 121);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

	x = -240.0f; y = 322.0f; radius = 15.0f;//left white 10
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121, 121, 121);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

	x = -242.0f; y = 292.0f; radius = 30.0f;//left white 11
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121, 121, 121);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

	x = -210.0f ;y = 320.0f; radius = 15.0f;//left white 12
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121, 121, 121);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

	x = -210.0f; y = 280.0f; radius = 18.0f;//left white 13
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121, 121, 121);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

	x = -200.0f; y = 290.0f; radius = 30.0f;//left white 14
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121, 121, 121);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

	x = -180.0f; y = 310.0f; radius = 23.0f;//left white 15
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121, 121, 121);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

	x = -165.0f; y = 285.0f; radius = 17.0f;//left white 16
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121, 121, 121);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

	x=50.0f;y=275.0f;radius =25.0f;//middle white 1
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121, 121, 121);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

	x = 70.0f; y = 300.0f; radius = 14.0f;//middle white 2
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121, 121, 121);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 90.0f; y = 275.0f; radius = 27.0f;//middle white 3
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121, 121, 121);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

	x = 110.0f; y = 300.0f; radius = 25.0f;//middle white 4
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121,121, 121);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
    glEnd();

	x = 120.0f; y = 265.0f; radius = 20.0f;//middle white 5
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121, 121, 121);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

	x = 140.0f; y = 290.0f; radius = 19.0f;//middle white 6
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121, 121, 121);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
	 	}
    glEnd();

	x = 150.0f; y = 260.0f; radius = 23.0f;//middle white 7
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121, 121, 121);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

	x = 165.0f; y = 280.0f; radius = 15.0f;//middle white 8
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121, 121, 121);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

	x = 250.0f; y = 300.0f; radius = 30.0f;//right white 1
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121,121, 121);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

	x = 280.0f; y = 320.0f; radius = 30.0f;//right white 2
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121,121, 121);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

	x = 300.0f; y = 290.0f; radius = 25.0f;//right white 3
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121,121, 121);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

	x = 320.0f; y = 310.0f; radius = 20.0f;//right white 4
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121,121, 121);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

	x = 350.0f; y = 305.0f; radius = 20.0f;//right white 5
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121, 121, 121);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

	x = 330.0f; y = 280.0f; radius = 20.0f;//right white 6
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121, 121, 121);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = 360.0f; y = 280.0f; radius = 20.0f;//right white 7
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121, 121, 121);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 380.0f; y = 290.0f; radius = 20.0f;//right white 8
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121, 121, 121);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

	x = 390.0f; y = 270.0f; radius = 20.0f;//right white 9
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121, 121, 121);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

	x = 410.0f; y = 300.0f; radius = 20.0f;//right white 10
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121, 121, 121);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

	x = 415.0f; y = 275.0f; radius = 15.0f;//right white 11
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121, 121, 121);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

	x = 435.0f; y = 290.0f; radius = 15.0f;//right white 12
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121, 121, 121);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

	x = 440.0f; y = 270.0f; radius = 15.0f;//right white 13
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(121, 121, 121);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();
	//white cloud end
	glLoadIdentity();
	glPopMatrix();

    glPushMatrix();
    glTranslatef(position1, 0.0f, 0.0f);
    glBegin(GL_QUADS);//Plane Body
    glColor3ub(76, 76, 95);
    glVertex2f(-600.0f,400.0f);
    glVertex2f(-375.0f,400.0f);
    glVertex2f(-375.0f,440.0f);
    glVertex2f(-600.0f,440.0f);
    glEnd();

    glBegin(GL_QUADS);//Plane Wing
    glColor3ub(76, 76, 95);//evening
    glVertex2f(-550.0f,350.0f);
    glVertex2f(-525.0f,350.0f);
    glVertex2f(-420.0f,400.0f);
    glVertex2f(-500.0f,400.0f);
    glEnd();

    glBegin(GL_QUADS);//Plane tail
    glColor3ub(76,76,95);
    glVertex2f(-600.0f,400.0f);
    glVertex2f(-550.0f,400.0f);
    glVertex2f(-615.0f,460.0f);
    glVertex2f(-650.0f,460.0f);
    glEnd();

    x = -375.0f; y = 420.0f; radius = 20.0f;
	glBegin(GL_TRIANGLE_FAN);//Plane head
	glColor3ub(76,76,95);
	glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();
    glLoadIdentity();
	glPopMatrix();

    glBegin(GL_QUADS);//landscape far
    glColor3ub(39, 39, 0);//evening
    glVertex2f(-750.0f,-500.0f);
    glVertex2f( 750.0f,-500.0f);
    glVertex2f( 750.0f,-310.0f);
    glVertex2f(-750.0f,-280.0f);
    glEnd();

    //House
    glBegin(GL_POLYGON);//house upper
    glColor3ub(51, 0, 0);
    glVertex2f(-160.0,-310.0);
    glVertex2f(-140.0,-240.0);
    glVertex2f(- 73.0,-180.0);
    glVertex2f(  20.0,-240.0);
    glVertex2f(  45.0,-310.0);
    glEnd();

    glBegin(GL_QUADS);//house front
    glColor3ub(51, 0, 0);
    glVertex2f(-160.0f,-410.0f);
    glVertex2f(  45.0f,-410.0f);
    glVertex2f(  45.0f,-310.0f);
    glVertex2f(-160.0f,-310.0f);
    glEnd();

     glBegin(GL_QUADS);//house side
     glColor3ub(51, 0, 0);
     glVertex2f( 45.0f,-310.0f);
     glVertex2f(225.0f,-310.0f);
     glVertex2f(225.0f,-410.0f);
     glVertex2f( 45.0f,-410.0f);
     glEnd();

     glLineWidth(6.5f);//wood frame
     glBegin(GL_LINES);
     glColor3ub(128, 111, 77);
     glVertex2d(45.0f,-310.0f);
     glVertex2d(45.0f,-410.0f);
     glEnd();

     glBegin(GL_QUADS);//side roof top
     glColor3ub(58, 39, 19);
     glVertex2f( 45.0f,-320.0f);
     glVertex2f(228.0f,-320.0f);
     glVertex2f(195.0f,-240.0f);
     glVertex2f( 20.0f,-240.0f);
     glEnd();

     glBegin(GL_QUADS);//roof top
     glColor3ub(58, 39, 19);
     glVertex2f( 20.0f,-240.0f);
     glVertex2f(195.0f,-240.0f);
     glVertex2f(135.0f,-198.0f);
     glVertex2f(-80.0f,-180.0f);
     glEnd();

     glLineWidth(4.5f);//roof top
     glBegin(GL_LINES);
     glColor3ub(58, 39, 19);
     glVertex2d(- 77.0f,-182.0f);
     glVertex2d(-140.0f,-240.0f);
     glEnd();

     glLineWidth(4.5f);//roof top
     glBegin(GL_LINES);
     glColor3ub(58, 39, 19);
     glVertex2d(-140.0f,-240.0f);
     glVertex2d(-160.0f,-310.0f);
     glEnd();

     glLineWidth(6.5f);//wood frame
     glBegin(GL_LINES);
     glColor3ub(128, 111, 77);
     glVertex2d(-130.0f,-310.0f);
     glVertex2d(   0.0f,-310.0f);
     glEnd();

     glBegin(GL_QUADS);//wood frame
     glColor3ub(128, 111, 77);
     glVertex2f(-110.0f,-315.0f);
     glVertex2f(- 20.0f,-315.0f);
     glVertex2f(- 20.0f,-410.0f);
     glVertex2f(-110.0f,-410.0f);
     glEnd();

     glBegin(GL_QUADS);//wood frame
     glColor3ub(128, 111, 77);
     glVertex2f(-90.0f,-315.0f);
     glVertex2f(-40.0f,-315.0f);
     glVertex2f(-40.0f,-215.0f);
     glVertex2f(-90.0f,-215.0f);
     glEnd();

     glBegin(GL_QUADS);//upper window
     glColor3ub(255, 250, 209);
     glVertex2f(-85.0f,-305.0f);
     glVertex2f(-45.0f,-305.0f);
     glVertex2f(-45.0f,-220.0f);
     glVertex2f(-85.0f,-220.0f);
     glEnd();

     glBegin(GL_QUADS);//door
     glColor3ub(255, 250, 209);
     glVertex2f(-105.0f,-315.0f);
     glVertex2f(- 65.0f,-315.0f);
     glVertex2f(- 65.0f,-405.0f);
     glVertex2f(-105.0f,-405.0f);
     glEnd();

     glBegin(GL_QUADS);//door
     glColor3ub(255, 250, 209);
     glVertex2f(-60.0f,-315.0f);
     glVertex2f(-25.0f,-315.0f);
     glVertex2f(-25.0f,-405.0f);
     glVertex2f(-60.0f,-405.0f);
     glEnd();

     glBegin(GL_QUADS);//window 1
     glColor3ub(255, 250, 209);
     glVertex2f(65.0f,-350.0f);
     glVertex2f(85.0f,-350.0f);
     glVertex2f(85.0f,-380.0f);
     glVertex2f(65.0f,-380.0f);
     glEnd();

     glBegin(GL_QUADS);//window 2
     glColor3ub(255, 250, 209);
     glVertex2f(105.0f,-350.0f);
     glVertex2f(125.0f,-350.0f);
     glVertex2f(125.0f,-380.0f);
     glVertex2f(105.0f,-380.0f);
     glEnd();

     glBegin(GL_QUADS);//window 3
     glColor3ub(255, 250, 209);
     glVertex2f(145.0f,-350.0f);
     glVertex2f(165.0f,-350.0f);
     glVertex2f(165.0f,-380.0f);
     glVertex2f(145.0f,-380.0f);
     glEnd();

     glBegin(GL_QUADS);//window 4
     glColor3ub(255,250,209);
     glVertex2f(185.0f,-350.0f);
     glVertex2f(205.0f,-350.0f);
     glVertex2f(205.0f,-380.0f);
     glVertex2f(185.0f,-380.0f);
     glEnd();
     //House end

     //The windmill starts here
     glBegin(GL_TRIANGLES);//Windmill base
     glColor3ub(48, 32, 16);
     glVertex2f(-380.0f,150.0f);
     glVertex2f(-410.0f,  0.0f);
     glVertex2f(-360.0f,  0.0f);
     glEnd();

     glLineWidth(7.0f);
     glBegin(GL_LINES);
     glVertex2d(-380, 150);
     glVertex2d(-465,-400);
     glEnd();

     glBegin(GL_LINES);
     glVertex2d(-380, 150);
     glVertex2d(-315,-400);
     glEnd();

     glLineWidth(10.0f);
     glBegin(GL_LINES);
     glVertex2d(-420,-110);
     glVertex2d(-345,-110);
     glEnd();

     glBegin(GL_LINES);
     glVertex2d(-435,-200);
     glVertex2d(-340,-200);
     glEnd();

     glBegin(GL_LINES);
     glVertex2d(-450,-300);
     glVertex2d(-330,-300);
     glEnd();

     glLineWidth(3.0f);
     glBegin(GL_LINES);
     glVertex2d(-380, 150);
     glVertex2d(-380,-400);
     glEnd();

	 x = -380.0f; y = 150.0f; radius = 95.0f;
	 glBegin(GL_TRIANGLE_FAN);//Windmill holder
	 glColor3ub(48, 32, 16);
	 glVertex2f(x, y);
	 for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

	 x = -380.0f; y = 150.0f; radius = 90.0f;
	 glBegin(GL_TRIANGLE_FAN);//Windmill holder 2
	 glColor3ub(233, 176, 105);
	 glVertex2f(x, y);
	 for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     glPushMatrix();
     glTranslatef(-380.0, 150.0, 0);
     glRotatef(j,0,0.0,0.1);
     glBegin(GL_TRIANGLES);//Lower blade part starts here
     glColor3ub(128, 111, 77);
     glVertex2f(  0.0f,  0.0f);
     glVertex2f(140.0f,  5.0f);
     glVertex2f(135.0f,-40.0f);
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(128, 111, 77);
     glVertex2f(  0.0f,  0.0f);
     glVertex2f(130.0f,-48.0f);
     glVertex2f(110.0f,-90.0f);
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(128, 111, 77);
     glVertex2f(  0.0f,   0.0f);
     glVertex2f(105.0f,- 98.0f);
     glVertex2f( 78.0f,-125.0f);
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(128, 111, 77);
     glVertex2f( 0.0f,   0.0f);
     glVertex2f(70.0f,-125.0f);
     glVertex2f(30.0f,-140.0f);
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(128, 111, 77);
     glVertex2f(  0.0f,   0.0f);
     glVertex2f(-20.0f,-140.0f);
     glVertex2f( 20.0f,-140.0f);
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(128, 111, 77);
     glVertex2f(   0.0f,  0.0f);
     glVertex2f(-140.0f,  5.0f);
     glVertex2f(-135.0f,-40.0f);
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(128, 111, 77);
     glVertex2f(   0.0f,  0.0f);
     glVertex2f(-130.0f,-48.0f);
     glVertex2f(-110.0f,-90.0f);
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(128, 111, 77);
     glVertex2f(   0.0f,   0.0f);
     glVertex2f(-105.0f,- 98.0f);
     glVertex2f(- 78.0f,-125.0f);
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(128, 111, 77);
     glVertex2f(  0.0f,   0.0f);
     glVertex2f(-70.0f,-125.0f);
     glVertex2f(-30.0f,-140.0f);
     glEnd();//Lower blade part Ends here

     glBegin(GL_TRIANGLES);//Upper blade part starts here
     glColor3ub(128, 111, 77);
     glVertex2f( 0.0f,  0.0f);
     glVertex2f( 5.0f,140.0f);
     glVertex2f(50.0f,135.0f);
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(128, 111, 77);
     glVertex2f( 0.0f,  0.0f);
     glVertex2f(60.0f,130.0f);
     glVertex2f(90.0f,110.0f);
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(128, 111, 77);
     glVertex2f(  0.0f,  0.0f);
     glVertex2f( 95.0f,105.0f);
     glVertex2f(120.0f, 70.0f);

     glBegin(GL_TRIANGLES);
     glColor3ub(128, 111, 77);
     glVertex2f(  0.0f, 0.0f);
     glVertex2f(125.0f,60.0f);
     glVertex2f(135.0f,15.0f);
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(128, 111, 77);
     glVertex2f(  0.0f,  0.0f);
     glVertex2f(- 5.0f,140.0f);
     glVertex2f(-50.0f,135.0f);
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(128, 111, 77);
     glVertex2f(  0.0f,  0.0f);
     glVertex2f(-60.0f,130.0f);
     glVertex2f(-90.0f,110.0f);
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(128, 111, 77);
     glVertex2f(   0.0f,  0.0f);
     glVertex2f(- 95.0f,105.0f);
     glVertex2f(-120.0f, 70.0f);

     glBegin(GL_TRIANGLES);
     glColor3ub(128, 111, 77);
     glVertex2f(   0.0f, 0.0f);
     glVertex2f(-125.0f,60.0f);
     glVertex2f(-135.0f,15.0f);
     glEnd();//Upper blade part ends here
     glLoadIdentity();
     glPopMatrix();
     j-=0.8f;

     x = -380.0f; y = 150.0f; radius = 50.0f;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(233, 176, 105);
	 glVertex2f(x, y);
	 for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

	 x = -380.0f; y = 150.0f; radius = 20.0f;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(48,32,16);
	 glVertex2f(x, y);
	 for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     glLineWidth(5.0f);
     glBegin(GL_LINES);
     glVertex2d(-380,150);
     glVertex2d(-475,170);
     glEnd();

     glBegin(GL_LINES);
     glVertex2d(-380,150);
     glVertex2d(-285,170);
     glEnd();

     glBegin(GL_LINES);
     glVertex2d(-380,150);
     glVertex2d(-380,240);
     glEnd();

     glBegin(GL_LINES);
     glVertex2d(-380,150);
     glVertex2d(-445, 85);
     glEnd();

     glBegin(GL_LINES);
     glVertex2d(-380,150);
     glVertex2d(-340, 70);
     glEnd();
     glLineWidth(2.0f);
     glBegin(GL_LINES);
     glVertex2d(-545,170);
     glVertex2d(-473,155);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3ub(48, 32, 16);
     glVertex2f(-680.0f,100.0f);
     glVertex2f(-540.0f,125.0f);
     glVertex2f(-530.0f,150.0f);
     glVertex2f(-540.0f,175.0f);
     glVertex2f(-680.0f,200.0f);
     glEnd();

     glLineWidth(2.0f);
     glBegin(GL_LINES);
     glVertex2d(-545,130);
     glVertex2d(-473,135);
     glEnd();//Windmill ends here

     glBegin(GL_QUADS);//Front landscape
     glColor3ub(39, 51, 0);
     glVertex2f(-750.0f,-500.0f);
     glVertex2f( 750.0f,-500.0f);
     glVertex2f( 750.0f,-450.0f);
     glVertex2f(-750.0f,-375.0f);
     glEnd();

     //bird
     glPushMatrix();
     glTranslatef(position5, 0.0f, 0.0f);
     glBegin(GL_POLYGON);
     glColor3ub(97, 97, 107);
     glVertex2f(600.0f, 50.0f);
     glVertex2f(640.0f, 55.0f);
     glVertex2f(620.0f, 80.0f);
     glVertex2f(595.0f,140.0f);
     glVertex2f(590.0f, 75.0f);
     glEnd();//wing

     glBegin(GL_QUADS);
     glColor3ub(97, 97, 107);
     glVertex2f(640.0f,30.0f);
     glVertex2f(680.0f,50.0f);
     glVertex2f(660.0f,60.0f);
     glVertex2f(640.0f,55.0f);
     glEnd();//2nd wing

     glBegin(GL_TRIANGLES);
     glColor3ub(97, 97, 107);
     glVertex2f(680.0f,50.0f);
     glVertex2f(735.0f,65.0f);
     glVertex2f(660.0f,60.0f);
     glEnd();//2nd wing

     glBegin(GL_QUADS);
     glColor3ub(97, 97, 107);
     glVertex2f(670.0f,25.0f);
     glVertex2f(690.0f,30.0f);
     glVertex2f(660.0f,50.0f);
     glVertex2f(640.0f,35.0f);
     glEnd();//tail

     glBegin(GL_POLYGON);
     glColor3ub(97, 97, 107);
     glVertex2f(600.0f,20.0f);
     glVertex2f(625.0f,22.0f);
     glVertex2f(660.0f,50.0f);
     glVertex2f(640.0f,60.0f);
     glVertex2f(600.0f,50.0f);
     glEnd();//body

     glBegin(GL_TRIANGLES);
     glColor3ub(97, 97, 107);
     glVertex2f(570.0f,30.0f);
     glVertex2f(600.0f,50.0f);
     glVertex2f(625.0f,20.0f);
     glEnd();//neck

     glBegin(GL_TRIANGLES);
     glColor3ub(128, 0, 0);
     glVertex2f(540.0f,20.0f);
     glVertex2f(570.0f,35.0f);
     glVertex2f(570.0f,25.0f);
     glEnd();//mouth

     x = 570.0f; y = 30.0f; radius = 10.0f;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(97,97,107);
	 glVertex2f(x, y);//head
	 for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();
     glLoadIdentity();
     glPopMatrix();
     glutTimerFunc(8000, lateevening_demo, 0);
     glFlush();
}

void evening_demo(int val)
{
    glutDisplayFunc(evening);
}

void afternoon()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    //This is the background
    glBegin(GL_QUADS);
    glColor3ub(242, 208, 165);
    glVertex2f(-750.0f,-500.0f);
    glVertex2f( 750.0f,-500.0f);
    glVertex2f( 750.0f, 500.0f);
    glVertex2f(-750.0f, 500.0f);
    glEnd();
    //The Background ends here

    //stars
    GLfloat x = -740; GLfloat y = 450; GLfloat radius = 3;
    int triangleAmount = 300;
    GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(255, 255, 255);
	glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -700; y = 350; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
	glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

    x = -500; y = 250; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
	glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -600; y = 400; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
	glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -400; y = 400; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
	glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -300; y = 200; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
	glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -250; y = 300; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
	glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -100; y = 350; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
	glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = 0; y = 150; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
	glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 100; y = 350; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
	glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 250; y = 250; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
	glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 400; y = 400; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
	glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 500; y = 375; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
	glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 600; y = 275; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
	glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 700; y = 380; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
	glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -600; y = 180; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
	glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -500; y = 480; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
	glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -450; y = 380; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
	glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 580; y = 480; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
	glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 0; y = 480; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
	glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -300; y = 450; radius = 3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(242, 242, 242);
	glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    //Sun
    glPushMatrix();
    glTranslatef(0.0f, position2, 0.0f);
	x = 350.0f; y = 500.0f; radius = 150.0f;
	glBegin(GL_TRIANGLE_FAN);//Sun
	glColor3ub(255, 188, 161);
	glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();
	glLoadIdentity();
	glPopMatrix();
    //Sun End

    //Mountain Start
    glBegin(GL_QUADS);//back pahar 1
    glColor3ub(30, 58, 0);
    glVertex2f(-750.0f,-240.0f);
    glVertex2f(-520.0f,-160.0f);
    glVertex2f(- 75.0f,-295.0f);
    glVertex2f(-750.0f,-295.0f);
    glEnd();

    glBegin(GL_TRIANGLES);//back pahar 2
    glColor3ub(30, 58, 0);
    glVertex2f(-500.0f,-280.0f);
    glVertex2f(-180.0f,-125.0f);
    glVertex2f( 150.0f,-280.0f);
    glEnd();

    glBegin(GL_QUADS);//back pahar 3
    glColor3ub(30, 58, 0);
    glVertex2f( 40.0f,-315.0f);
    glVertex2f( 70.0f,-270.0f);
    glVertex2f(750.0f,-210.0f);
    glVertex2f(750.0f,-315.0f);
    glEnd();

    glBegin(GL_QUADS);//front pahar 1
    glColor3ub(72, 96, 0);
    glVertex2f(-750.0f,-245.0f);
    glVertex2f(-540.0f,-245.0f);
    glVertex2f(-570.0f,-305.0f);
    glVertex2f(-750.0f,-305.0f);
    glEnd();

    glBegin(GL_TRIANGLES);//front pahar 2
    glColor3ub(72, 96, 0);
    glVertex2f(-630.0f,-305.0f);
    glVertex2f(-500.0f,-220.0f);
    glVertex2f(-350.0f,-305.0f);
    glEnd();

    glBegin(GL_QUADS);//front pahar 3
    glColor3ub(72, 96, 0);
    glVertex2f(-450.0f,-305.0f);
    glVertex2f(-400.0f,-235.0f);
    glVertex2f(-240.0f,-225.0f);
    glVertex2f(-200.0f,-307.0f);
    glEnd();

    glBegin(GL_QUADS);//front pahar 4
    glColor3ub(72, 96, 0);
    glVertex2f(-230.0f,-307.0f);
    glVertex2f(-180.0f,-200.0f);
    glVertex2f( 290.0f,-280.0f);
    glVertex2f( 300.0f,-310.0f);
    glEnd();

    glBegin(GL_TRIANGLES);//front pahar 5
    glColor3ub(72, 96, 0);
    glVertex2f(235.0f,-310.0f);
    glVertex2f(350.0f,-275.0f);
    glVertex2f(440.0f,-310.0f);
    glEnd();

    glBegin(GL_TRIANGLES);//front 6
    glColor3ub(72, 96, 0);
    glVertex2f(375.0f,-310.0f);
    glVertex2f(440.0f,-250.0f);
    glVertex2f(550.0f,-310.0f);
    glEnd();

    glBegin(GL_TRIANGLES);//front 7
    glColor3ub(72, 96, 0);
    glVertex2f(510.0f,-310.0f);
    glVertex2f(630.0f,-260.0f);
    glVertex2f(700.0f,-310.0f);
    glEnd();

    glBegin(GL_TRIANGLES);//front 8
    glColor3ub(72, 96, 0);
    glVertex2f(685.0f,-310.0f);
    glVertex2f(750.0f,-240.0f);
    glVertex2f(750.0f,-310.0f);
    glEnd();
    //Mountain end

    //Dark Cloud
    glPushMatrix();
    glTranslatef(position3, 0.0f, 0.0f);
    int i;
	x = -540.0f; y = 250.0f; radius = 25.0f;//left 1
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(130, 130, 100);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -510.0f; y = 280.0f; radius = 30.0f;//left 2
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(130, 130, 100);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -480.0f; y = 240.0f; radius = 25.0f;//left 3
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(130, 130, 100);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -470.0f; y = 280.0f; radius = 25.0f;//left 4
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(130, 130, 100);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -440.0f; y = 250.0f; radius = 30.0f;//left 5
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(130, 130, 100);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -410.0f; y = 270.0f; radius = 25.0f;//left 6
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(130, 130, 100);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -400.0f; y = 240.0f; radius = 18.0f;//left 7
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(130, 130, 100);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -300.0f; y = 245.0f; radius = 25.0f;//middle 1
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(130, 130, 100);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -320.0f; y = 260.0f; radius = 25.0f;//middle 2
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(130, 130, 100);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -290.0f; y = 280.0f; radius = 25.0f;//middle 3
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(130, 130, 100);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -265.0f; y = 240.0f; radius = 25.0f;//middle 4
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(130, 130, 100);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -250.0f; y = 280.0f; radius = 25.0f;//middle 5
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(130, 130, 100);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -222.0f; y = 270.0f; radius = 28.0f;//middle 6
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(130, 130, 100);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -220.0f; y = 240.0f; radius = 25.0f;//middle 7
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(130, 130, 100);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -185.0f; y = 240.0f; radius = 25.0f;//middle 8
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(130, 130, 100);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -175.0f; y = 280.0f; radius = 25.0f;//middle 9
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(130, 130, 100);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -160.0f; y = 250.0f; radius = 25.0f;//middle 10
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(130, 130, 100);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -150.0f; y = 245.0f; radius = 25.0f;//middle 11
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(130, 130, 100);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -140.0f; y = 275.0f; radius = 25.0f;//middle 12
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(130, 130, 100);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -120.0f; y = 240.0f; radius = 25.0f;//middle 13
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(130, 130, 100);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -95.0f; y = 260.0f; radius = 29.0f;//middle 14
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(130, 130, 100);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -75.0f; y = 240.0f; radius = 22.0f;//middle 15
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(130, 130, 100);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = 175.0f; y = 250.0f; radius = 20.0f;//right cloud 1
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(130, 130, 100);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = 200.0f; y = 245.0f; radius = 25.0f;//right cloud 2
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(130, 130, 100);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = 225.0f; y = 240.0f; radius = 23.0f;//right cloud 3
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(130, 130, 100);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = 215.0f; y = 270.0f; radius = 23.0f;//right cloud 4
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(130, 130, 100);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = 255.0f; y = 230.0f; radius = 20.0f;//right cloud 5
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(130, 130, 100);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = 255.0f; y = 270.0f; radius = 23.0f;//right cloud 5
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(130, 130, 100);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = 280.0f; y = 235.0f; radius = 23.0f;//right cloud 6
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(130, 130, 100);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = 295.0f; y = 270.0f; radius = 23.0f;//right cloud 7
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(130, 130, 100);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = 320.0f; y = 245.0f; radius = 25.0f;//right cloud 8
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(130, 130, 100);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();
	//dark clouds end
	glLoadIdentity();
	glPopMatrix();
    //Dark cloud end

    // white clouds start
	glPushMatrix();
	glTranslatef(position4, 0.0f, 0.0f);
	x = -395.0f; y = 290.0f; radius = 15.0f;//left  white 1
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -380.0f; y = 310.0f; radius = 18.0f;//left white 2
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -370.0f; y = 280.0f; radius = 18.0f;//left white 3
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -355.0f; y = 310.0f; radius = 22.0f;//left white 4
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -340.0f; y = 280.0f; radius = 25.0f;//left white 5
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -310.0f; y = 305.0f; radius = 27.0f;//left white 6
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -290.0f; y = 330.0f; radius = 23.0f;//left white 7
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -280.0f; y = 300.0f; radius = 23.0f;//left white 8
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -260.0f; y = 330.0f; radius = 15.0f;//left white 9
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -240.0f; y = 322.0f; radius = 15.0f;//left white 10
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -242.0f; y = 292.0f; radius = 30.0f;//left white 11
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -210.0f; y = 320.0f; radius = 15.0f;//left white 12
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -210.0f; y = 280.0f; radius = 18.0f;//left white 13
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -200.0f; y = 290.0f; radius = 30.0f;//left white 14
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);//afternoon
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -180.0f; y = 310.0f; radius = 23.0f;//left white 15
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -165.0f; y = 285.0f; radius = 17.0f;//left white 16
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 50.0f; y = 275.0f; radius = 25.0f;//middle white 1
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 70.0f; y = 300.0f; radius = 14.0f;//middle white 2
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 90.0f; y = 275.0f; radius = 27.0f;//middle white 3
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 110.0f; y = 300.0f; radius = 25.0f;//middle white 4
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 120.0f; y = 265.0f; radius = 20.0f;//middle white 5
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 140.0f; y = 290.0f; radius = 19.0f;//middle white 6
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 150.0f; y = 260.0f; radius = 23.0f;//middle white 7
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 165.0f; y = 280.0f; radius = 15.0f;//middle white 8
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 250.0f; y = 300.0f; radius = 30.0f;//right white 1
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 280.0f; y = 320.0f; radius = 30.0f;//right white 2
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 300.0f; y = 290.0f;radius = 25.0f;//right white 3
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 320.0f; y = 310.0f; radius = 20.0f;//right white 4
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 350.0f; y = 305.0f; radius = 20.0f;//right white 5
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 330.0f; y = 280.0f; radius = 20.0f;//right white 6
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = 360.0f; y = 280.0f; radius = 20.0f;//right white 7
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 380.0f; y = 290.0f; radius = 20.0f;//right white 8
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 390.0f; y = 270.0f; radius = 20.0f;//right white 9
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 410.0f; y = 300.0f; radius = 20.0f;//right white 10
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 415.0f; y = 275.0f; radius = 15.0f;//right white 11
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 435.0f; y = 290.0f; radius = 15.0f;//right white 12
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 440.0f; y = 270.0f; radius = 15.0f;//right white 13
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(181, 181, 181);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	//white cloud end
	glLoadIdentity();
	glPopMatrix();

    glPushMatrix();
    glTranslatef(position1, 0.0f, 0.0f);
    glBegin(GL_QUADS);//Plane Body
    glColor3ub(102, 101, 127);
    glVertex2f(-600.0f, 400.0f);
    glVertex2f(-375.0f, 400.0f);
    glVertex2f(-375.0f, 440.0f);
    glVertex2f(-600.0f, 440.0f);
    glEnd();

    glBegin(GL_QUADS);//Plane Wing
    glColor3ub(102, 101, 127);
    glVertex2f(-550.0f, 350.0f);
    glVertex2f(-525.0f, 350.0f);
    glVertex2f(-420.0f, 400.0f);
    glVertex2f(-500.0f, 400.0f);
    glEnd();

    glBegin(GL_QUADS);//Plane tail
    glColor3ub(102, 101, 127);
    glVertex2f(-600.0f, 400.0f);
    glVertex2f(-550.0f, 400.0f);
    glVertex2f(-615.0f, 460.0f);
    glVertex2f(-650.0f, 460.0f);
    glEnd();

    x = -375.0f; y = 420.0f; radius = 20.0f;
	glBegin(GL_TRIANGLE_FAN);//Plane head
	glColor3ub(102, 101, 127);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    glLoadIdentity();
	glPopMatrix();
    glBegin(GL_QUADS);//landscape far
    glColor3ub(58, 58, 0);
    glVertex2f(-750.0f,-500.0f);
    glVertex2f( 750.0f,-500.0f);
    glVertex2f( 750.0f,-310.0f);
    glVertex2f(-750.0f,-280.0f);
    glEnd();
    //House
    glBegin(GL_POLYGON);//house upper
    glColor3ub(77, 0, 0);
    glVertex2f(-160.0f,-310.0f);
    glVertex2f(-140.0f,-240.0f);
    glVertex2f(- 73.0f,-180.0f);
    glVertex2f(  20.0f,-240.0f);
    glVertex2f(  45.0f,-310.0f);
    glEnd();

    glBegin(GL_QUADS);//house front
    glColor3ub(77, 0, 0);
    glVertex2f(-160.0f,-410.0f);
    glVertex2f(  45.0f,-410.0f);
    glVertex2f(  45.0f,-310.0f);
    glVertex2f(-160.0f,-310.0f);
    glEnd();

    glBegin(GL_QUADS);//house side
    glColor3ub(77, 0, 0);
    glVertex2f( 45.0f,-310.0f);
    glVertex2f(225.0f,-310.0f);
    glVertex2f(225.0f,-410.0f);
    glVertex2f( 45.0f,-410.0f);
    glEnd();

    glLineWidth(6.5f);//wood frame
    glBegin(GL_LINES);
    glColor3ub(151, 166, 115);
    glVertex2d(45.0f,-310.0f);
    glVertex2d(45.0f,-410.0f);
    glEnd();

    glBegin(GL_QUADS);//side roof top
    glColor3ub(86, 58, 28);
    glVertex2f( 45.0f,-320.0f);
    glVertex2f(228.0f,-320.0f);
    glVertex2f(195.0f,-240.0f);
    glVertex2f( 20.0f,-240.0f);
    glEnd();

    glBegin(GL_QUADS);//roof top
    glColor3ub(86, 58, 28);
    glVertex2f( 20.0f,-240.0f);
    glVertex2f(195.0f,-240.0f);
    glVertex2f(135.0f,-198.0f);
    glVertex2f(-80.0f,-180.0f);
    glEnd();

    glLineWidth(4.5f);//roof top
    glBegin(GL_LINES);
    glColor3ub(86, 58, 28);
    glVertex2d(- 77.0f,-182.0f);
    glVertex2d(-140.0f,-240.0f);
    glEnd();

    glLineWidth(4.5f);//roof top
    glBegin(GL_LINES);
    glColor3ub(86, 58, 28);
    glVertex2d(-140.0f,-240.0f);
    glVertex2d(-160.0f,-310.0f);
    glEnd();

    glLineWidth(6.5f);//wood frame
    glBegin(GL_LINES);
    glColor3ub(151, 166, 115);
    glVertex2d(-130.0f,-310.0f);
    glVertex2d(   0.0f,-310.0f);
    glEnd();

    glBegin(GL_QUADS);//wood frame
    glColor3ub(151, 166, 115);
    glVertex2f(-110.0f,-315.0f);
    glVertex2f(- 20.0f,-315.0f);
    glVertex2f(- 20.0f,-410.0f);
    glVertex2f(-110.0f,-410.0f);
    glEnd();

    glBegin(GL_QUADS);//wood frame
    glColor3ub(151, 166, 115);
    glVertex2f(-90.0f,-315.0f);
    glVertex2f(-40.0f,-315.0f);
    glVertex2f(-40.0f,-215.0f);
    glVertex2f(-90.0f,-215.0f);
    glEnd();

    glBegin(GL_QUADS);//upper window
    glColor3ub(255, 250, 209);
    glVertex2f(-85.0f,-305.0f);
    glVertex2f(-45.0f,-305.0f);
    glVertex2f(-45.0f,-220.0f);
    glVertex2f(-85.0f,-220.0f);
    glEnd();

    glBegin(GL_QUADS);//door
    glColor3ub(255,250,209);
    glVertex2f(-105.0f,-315.0f);
    glVertex2f(- 65.0f,-315.0f);
    glVertex2f(- 65.0f,-405.0f);
    glVertex2f(-105.0f,-405.0f);
    glEnd();

    glBegin(GL_QUADS);//door
    glColor3ub(255, 250, 209);
    glVertex2f(-60.0f,-315.0f);
    glVertex2f(-25.0f,-315.0f);
    glVertex2f(-25.0f,-405.0f);
    glVertex2f(-60.0f,-405.0f);
    glEnd();

    glBegin(GL_QUADS);//window 1
    glColor3ub(255, 250, 209);
    glVertex2f(65.0f,-350.0f);
    glVertex2f(85.0f,-350.0f);
    glVertex2f(85.0f,-380.0f);
    glVertex2f(65.0f,-380.0f);
    glEnd();

    glBegin(GL_QUADS);//window 2
    glColor3ub(255, 250, 209);
    glVertex2f(105.0f,-350.0f);
    glVertex2f(125.0f,-350.0f);
    glVertex2f(125.0f,-380.0f);
    glVertex2f(105.0f,-380.0f);
    glEnd();

    glBegin(GL_QUADS);//window 3
    glColor3ub(255, 250, 209);
    glVertex2f(145.0f,-350.0f);
    glVertex2f(165.0f,-350.0f);
    glVertex2f(165.0f,-380.0f);
    glVertex2f(145.0f,-380.0f);
    glEnd();

    glBegin(GL_QUADS);//window 4
    glColor3ub(255, 250, 209);
    glVertex2f(185.0f,-350.0f);
    glVertex2f(205.0f,-350.0f);
    glVertex2f(205.0f,-380.0f);
    glVertex2f(185.0f,-380.0f);
    glEnd();
    //House end

    //The windmill starts here
	glBegin(GL_TRIANGLES);//Windmill base
    glColor3ub(72, 48, 23);
    glVertex2f(-380.0f,150.0f);
    glVertex2f(-410.0f,  0.0f);
    glVertex2f(-360.0f,  0.0f);
    glEnd();

    glLineWidth(7.0f);
	glBegin(GL_LINES);
    glVertex2d(-380, 150);
    glVertex2d(-465,-400);
    glEnd();

    glBegin(GL_LINES);
    glVertex2d(-380, 150);
    glVertex2d(-315,-400);
    glEnd();

    glLineWidth(10.0f);
	glBegin(GL_LINES);
    glVertex2d(-420,-110);
    glVertex2d(-345,-110);
    glEnd();

    glBegin(GL_LINES);
    glVertex2d(-435,-200);
    glVertex2d(-340,-200);
    glEnd();

    glBegin(GL_LINES);
    glVertex2d(-450,-300);
    glVertex2d(-330,-300);
    glEnd();

    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glVertex2d(-380, 150);
    glVertex2d(-380,-400);
    glEnd();

	x = -380.0f; y = 150.0f; radius = 95.0f;
	glBegin(GL_TRIANGLE_FAN);//Windmill holder
    glColor3ub(72, 48, 23);
	glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -380.0f; y = 150.0f; radius = 90.0f;
	glBegin(GL_TRIANGLE_FAN);//Windmill holder 2
    glColor3ub(242, 208, 165);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    glPushMatrix();
    glTranslatef(-380.0, 150.0, 0);
    glRotatef(j, 0, 0.0, 0.1);
    glBegin(GL_TRIANGLES);
    glColor3ub(151, 166, 115);
    glVertex2f(  0.0f,  0.0f);
    glVertex2f(140.0f,  5.0f);
    glVertex2f(135.0f,-40.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(151, 166, 115);
    glVertex2f(  0.0f,  0.0f);
    glVertex2f(130.0f,-48.0f);
    glVertex2f(110.0f,-90.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(151, 166, 115);
    glVertex2f(  0.0f,   0.0f);
    glVertex2f(105.0f,- 98.0f);
    glVertex2f( 78.0f,-125.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(151, 166, 115);
    glVertex2f( 0.0f,   0.0f);
    glVertex2f(70.0f,-125.0f);
    glVertex2f(30.0f,-140.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(151, 166, 115);
    glVertex2f( 0.0f, 0.0f);
    glVertex2f(-20.0f,-140.0f);
    glVertex2f( 20.0f,-140.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(151, 166, 115);
    glVertex2f( 0.0f, 0.0f);
    glVertex2f(-140.0f,  5.0f);
    glVertex2f(-135.0f,-40.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(151, 166, 115);
    glVertex2f(   0.0f,  0.0f);
    glVertex2f(-130.0f,-48.0f);
    glVertex2f(-110.0f,-90.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(151, 166, 115);
    glVertex2f(   0.0f,  0.0f);
    glVertex2f(-105.0f,-98.0f);
    glVertex2f(- 78.0f,-125.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(151, 166, 115);
    glVertex2f(  0.0f,   0.0f);
    glVertex2f(-70.0f,-125.0f);
    glVertex2f(-30.0f,-140.0f);
    glEnd();//Lower blade part Ends here

    glBegin(GL_TRIANGLES);//Upper blade part starts here
    glColor3ub(151, 166, 115);
    glVertex2f( 0.0f,  0.0f);
    glVertex2f( 5.0f,140.0f);
    glVertex2f(50.0f,135.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(151, 166, 115);
    glVertex2f( 0.0f,   0.0f);
    glVertex2f(60.0f, 130.0f);
    glVertex2f(90.0f, 110.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(151, 166, 115);
    glVertex2f(  0.0f,   0.0f);
    glVertex2f( 95.0f, 105.0f);
    glVertex2f(120.0f,  70.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(151, 166, 115);
    glVertex2f(  0.0f, 0.0f);
    glVertex2f(125.0f, 60.0f);
    glVertex2f(135.0f, 15.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(151, 166, 115);
    glVertex2f(  0.0f,   0.0f);
    glVertex2f(- 5.0f, 140.0f);
    glVertex2f(-50.0f, 135.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(151, 166, 115);
    glVertex2f(  0.0f,   0.0f);
    glVertex2f(-60.0f, 130.0f);
    glVertex2f(-90.0f, 110.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(151, 166, 115);
    glVertex2f(   0.0f,   0.0f);
    glVertex2f(- 95.0f, 105.0f);
    glVertex2f(-120.0f,  70.0f);

    glBegin(GL_TRIANGLES);
    glColor3ub(151, 166, 115);
    glVertex2f(   0.0f,  0.0f);
    glVertex2f(-125.0f, 60.0f);
    glVertex2f(-135.0f, 15.0f);
    glEnd();//Upper blade part ends here
    glLoadIdentity();
    glPopMatrix();
    j-=0.1f;

    x = -380.0f; y = 150.0f; radius = 50.0f;
	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 208, 165);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -380.0f; y = 150.0f; radius = 20.0f;
	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(72, 48, 23);
	glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	glLineWidth(5.0f);
	glBegin(GL_LINES);
    glVertex2d(-380,150);
    glVertex2d(-475,170);
    glEnd();

    glBegin(GL_LINES);
    glVertex2d(-380,150);
    glVertex2d(-285,170);
    glEnd();

    glBegin(GL_LINES);
    glVertex2d(-380,150);
    glVertex2d(-380,240);
    glEnd();

    glBegin(GL_LINES);
    glVertex2d(-380,150);
    glVertex2d(-445, 85);
    glEnd();

    glBegin(GL_LINES);
    glVertex2d(-380,150);
    glVertex2d(-340, 70);
    glEnd();
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glVertex2d(-545,170);
    glVertex2d(-473,155);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(72, 48, 23);
    glVertex2f(-680.0f,100.0f);
    glVertex2f(-540.0f,125.0f);
    glVertex2f(-530.0f,150.0f);
    glVertex2f(-540.0f,175.0f);
    glVertex2f(-680.0f,200.0f);
    glEnd();

    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glVertex2d(-545,130);
    glVertex2d(-473,135);
    glEnd();//Windmill ends here

    glBegin(GL_QUADS);//Front landscape
    glColor3ub(58, 77, 0);//afternoon
    glVertex2f(-750.0f,-500.0f);
    glVertex2f( 750.0f,-500.0f);
    glVertex2f( 750.0f,-450.0f);
    glVertex2f(-750.0f,-375.0f);
    glEnd();

    //bird
    glPushMatrix();
    glTranslatef(position5, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(146, 146, 161);
    glVertex2f(600.0f, 50.0f);
    glVertex2f(640.0f, 55.0f);
    glVertex2f(620.0f, 80.0f);
    glVertex2f(595.0f,140.0f);
    glVertex2f(590.0f, 75.0f);
    glEnd();//wing

    glBegin(GL_QUADS);
    glColor3ub(146, 146, 161);
    glVertex2f(640.0f,30.0f);
    glVertex2f(680.0f,50.0f);
    glVertex2f(660.0f,60.0f);
    glVertex2f(640.0f,55.0f);
    glEnd();//2nd wing

    glBegin(GL_TRIANGLES);
    glColor3ub(146, 146, 161);
    glVertex2f(680.0f,50.0f);
    glVertex2f(735.0f,65.0f);
    glVertex2f(660.0f,60.0f);
    glEnd();//2nd wing

    glBegin(GL_QUADS);
    glColor3ub(146, 146, 161);
    glVertex2f(670.0f,25.0f);
    glVertex2f(690.0f,30.0f);
    glVertex2f(660.0f,50.0f);
    glVertex2f(640.0f,35.0f);
    glEnd();//tail

    glBegin(GL_POLYGON);
    glColor3ub(146, 146, 161);
    glVertex2f(600.0f,20.0f);
    glVertex2f(625.0f,22.0f);
    glVertex2f(660.0f,50.0f);
    glVertex2f(640.0f,60.0f);
    glVertex2f(600.0f,50.0f);
    glEnd();//body

    glBegin(GL_TRIANGLES);
    glColor3ub(146, 146, 161);
    glVertex2f(570.0f,30.0f);
    glVertex2f(600.0f,50.0f);
    glVertex2f(625.0f,20.0f);
    glEnd();//neck

    glBegin(GL_TRIANGLES);
    glColor3ub(128, 0, 0);
    glVertex2f(540.0f,20.0f);
    glVertex2f(570.0f,35.0f);
    glVertex2f(570.0f,25.0f);
    glEnd();//mouth

    x = 570.0f; y = 30.0f; radius = 10.0f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(146, 146, 161);
    glVertex2f(x, y);//head
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();
    glLoadIdentity();
    glPopMatrix();
    glutTimerFunc(8000, evening_demo, 0);
    glFlush();
}

void afternoon_demo(int val)
 {
     glutDisplayFunc(afternoon);
 }

void day()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    //This is the background
    glBegin(GL_QUADS);
    glColor3ub(251, 239, 225);//Background
    glVertex2f(-750.0,-500.0);
    glVertex2f( 750.0,-500.0);
    glVertex2f( 750.0, 500.0);
    glVertex2f(-750.0, 500.0);
    glEnd();
    //The Background ends here

    //Sun
    glPushMatrix();
    glTranslatef(0.0f, position2, 0.0f);
	GLfloat x = 350.0f; GLfloat y = 500.0f; GLfloat radius = 150.0f;
    int triangleAmount = 300;
    GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);//Sun
	glColor3ub(255, 255, 255);
	glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();
	glLoadIdentity();
	glPopMatrix();
    //Sun End

    //Mountain Start
    glBegin(GL_QUADS);//back pahar 1
    glColor3ub(40, 77, 0);
    glVertex2f(-750.0f,-240.0f);
    glVertex2f(-520.0f,-160.0f);
    glVertex2f(- 75.0f,-295.0f);
    glVertex2f(-750.0f,-295.0f);
    glEnd();

    glBegin(GL_TRIANGLES);//back pahar 2
    glColor3ub(40, 77, 0);
    glVertex2f(-500.0f,-280.0f);
    glVertex2f(-180.0f,-125.0f);
    glVertex2f( 150.0f,-280.0f);
    glEnd();

    glBegin(GL_QUADS);//back pahar 3
    glColor3ub(40, 77, 0);
    glVertex2f( 40.0f,-315.0f);
    glVertex2f( 70.0f,-270.0f);
    glVertex2f(750.0f,-210.0f);
    glVertex2f(750.0f,-315.0f);
    glEnd();

    glBegin(GL_QUADS);//front pahar 1
    glColor3ub(96, 128, 0);
    glVertex2f(-750.0f,-245.0f);
    glVertex2f(-540.0f,-245.0f);
    glVertex2f(-570.0f,-305.0f);
    glVertex2f(-750.0f,-305.0f);
    glEnd();

    glBegin(GL_TRIANGLES);//front pahar 2
    glColor3ub(96, 128, 0);
    glVertex2f(-630.0f,-305.0f);
    glVertex2f(-500.0f,-220.0f);
    glVertex2f(-350.0f,-305.0f);
    glEnd();

    glBegin(GL_QUADS);//front pahar 3
    glColor3ub(96, 128, 0);
    glVertex2f(-450.0f,-305.0f);
    glVertex2f(-400.0f,-235.0f);
    glVertex2f(-240.0f,-225.0f);
    glVertex2f(-200.0f,-307.0f);
    glEnd();

    glBegin(GL_QUADS);//front pahar 4
    glColor3ub(96, 128, 0);
    glVertex2f(-230.0f,-307.0f);
    glVertex2f(-180.0f,-200.0f);
    glVertex2f( 290.0f,-280.0f);
    glVertex2f( 300.0f,-310.0f);
    glEnd();

    glBegin(GL_TRIANGLES);//front pahar 5
    glColor3ub(96, 128, 0);
    glVertex2f(235.0f,-310.0f);
    glVertex2f(350.0f,-275.0f);
    glVertex2f(440.0f,-310.0f);
    glEnd();

    glBegin(GL_TRIANGLES);//front 6
    glColor3ub(96, 128, 0);
    glVertex2f(375.0f,-310.0f);
    glVertex2f(440.0f,-250.0f);
    glVertex2f(550.0f,-310.0f);
    glEnd();

    glBegin(GL_TRIANGLES);//front 7
    glColor3ub(96, 128, 0);
    glVertex2f(510.0f,-310.0f);
    glVertex2f(630.0f,-260.0f);
    glVertex2f(700.0f,-310.0f);
    glEnd();

    glBegin(GL_TRIANGLES);//front 8
    glColor3ub(96, 128, 0);
    glVertex2f(685.0f,-310.0f);
    glVertex2f(750.0f,-240.0f);
    glVertex2f(750.0f,-310.0f);
    glEnd();
    //Mountain end

    //Dark Cloud
    glPushMatrix();
    glTranslatef(position3, 0.0f, 0.0f);
    int i;
	x = -540.0f; y = 250.0f; radius = 25.0f;//left 1
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 173, 133);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -510.0f; y = 280.0f; radius = 30.0f;//left 2
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 173, 133);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
 	glEnd();

    x = -480.0f; y = 240.0f; radius = 25.0f;//left 3
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 173, 133);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -470.0f; y = 280.0f; radius = 25.0f;//left 4
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 173, 133);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -440.0f; y = 250.0f; radius = 30.0f;//left 5
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 173, 133);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x=-410.0f;y=270.0f;radius =25.0f;//left 6
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 173, 133);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -400.0f; y = 240.0f; radius = 18.0f;//left 7
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 173, 133);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -300.0f; y = 245.0f; radius = 25.0f;//middle 1
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 173, 133);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
	    {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -320.0f; y = 260.0f; radius = 25.0f;//middle 2
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 173, 133);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -290.0f; y = 280.0f; radius = 25.0f;//middle 3
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 173, 133);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -265.0f; y = 240.0f; radius = 25.0f;//middle 4
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 173, 133);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -250.0f; y = 280.0f; radius = 25.0f;//middle 5
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 173, 133);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -222.0f; y = 270.0f; radius = 28.0f;//middle 6
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 173, 133);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = -220.0f; y = 240.0f; radius = 25.0f;//middle 7
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 173, 133);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -185.0f; y = 240.0f; radius = 25.0f;//middle 8
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 173, 133);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x=-175.0f;y=280.0f;radius =25.0f;//middle 9
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 173, 133);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = -160.0f; y = 250.0f; radius = 25.0f;//middle 10
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 173, 133);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = -150.0f; y = 245.0f; radius = 25.0f;//middle 11
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 173, 133);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = -140.0f; y = 275.0f; radius = 25.0f;//middle 12
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 173, 133);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -120.0f; y = 240.0f; radius = 25.0f;//middle 13
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 173, 133);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -95.0f; y = 260.0f; radius = 29.0f;//middle 14
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 173, 133);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = -75.0f; y = 240.0f; radius = 22.0f;//middle 15
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 173, 133);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = 175.0f; y = 250.0f; radius = 20.0f;//right cloud 1
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 173, 133);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = 200.0f; y = 245.0f; radius = 25.0f;//right cloud 2
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 173, 133);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = 225.0f; y = 240.0f; radius = 23.0f;//right cloud 3
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 173, 133);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = 215.0f; y = 270.0f; radius = 23.0f;//right cloud 4
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 173, 133);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = 255.0f; y = 230.0f; radius = 20.0f;//right cloud 5
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 173, 133);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = 255.0f; y = 270.0f; radius = 23.0f;//right cloud 5
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 173, 133);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = 280.0f; y = 235.0f; radius = 23.0f;//right cloud 6
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 173, 133);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = 295.0f; y = 270.0f; radius = 23.0f;//right cloud 7
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 173, 133);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = 320.0f; y = 245.0f; radius = 25.0f;//right cloud 8
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 173, 133);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();
	glLoadIdentity();
	glPopMatrix();
    //Dark cloud end

    //white clouds start
	glPushMatrix();
	glTranslatef(position4, 0.0f, 0.0f);
	x = -395.0f; y = 290.0f; radius = 15.0f;//left  white 1
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -380.0f; y = 310.0f; radius = 18.0f;//left white 2
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -370.0f; y = 280.0f; radius = 18.0f;//left white 3
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -355.0f; y = 310.0f; radius = 22.0f;//left white 4
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -340.0f; y = 280.0f; radius = 25.0f;//left white 5
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -310.0f; y = 305.0f; radius = 27.0f;//left white 6
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -290.0f; y = 330.0f; radius = 23.0f;//left white 7
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -280.0f; y = 300.0f; radius = 23.0f;//left white 8
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
	 	}
	glEnd();

	x = -260.0f; y = 330.0f; radius = 15.0f;//left white 9
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

	x = -240.0f; y = 322.0f; radius = 15.0f;//left white 10
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -242.0f; y = 292.0f; radius = 30.0f;//left white 11
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

    x = -210.0f; y = 320.0f; radius = 15.0f;//left white 12
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -210.0f; y = 280.0f; radius = 18.0f;//left white 13
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

	x = -200.0f; y = 290.0f; radius = 30.0f;//left white 14
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = -180.0f; y = 310.0f; radius = 23.0f;//left white 15
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

	x = -165.0f; y = 285.0f; radius = 17.0f;//left white 16
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 50.0f; y = 275.0f; radius = 25.0f;//middle white 1
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 70.0f; y = 300.0f; radius = 14.0f;//middle white 2
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 90.0f; y = 275.0f; radius = 27.0f;//middle white 3
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 110.0f; y = 300.0f; radius = 25.0f;//middle white 4
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 120.0f; y = 265.0f; radius = 20.0f;//middle white 5
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 140.0f; y = 290.0f; radius = 19.0f;//middle white 6
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
	 	}
	glEnd();

	x = 150.0f; y = 260.0f; radius = 23.0f;//middle white 7
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 165.0f; y = 280.0f; radius = 15.0f;//middle white 8
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 250.0f; y = 300.0f; radius = 30.0f;//right white 1
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 280.0f; y = 320.0f; radius = 30.0f;//right white 2
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 300.0f; y = 290.0f; radius = 25.0f;//right white 3
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

	x = 320.0f; y = 310.0f; radius = 20.0f;//right white 4
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 350.0f; y = 305.0f; radius = 20.0f;//right white 5
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();

    x = 330.0f; y = 280.0f; radius = 20.0f;//right white 6
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
	 	}
    glEnd();

    x = 360.0f; y = 280.0f;radius =20.0f;//right white 7
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x=380.0f;y= 290.0f;radius =20.0f;//right white 8
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 390.0f; y = 270.0f; radius = 20.0f;//right white 9
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 410.0f; y = 300.0f; radius = 20.0f;//right white 10
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 415.0f; y = 275.0f; radius = 15.0f;//right white 11
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 435.0f; y = 290.0f; radius = 15.0f;//right white 12
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();

	x = 440.0f; y = 270.0f; radius = 15.0f;//right white 13
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();
	//white cloud end
	glLoadIdentity();
	glPopMatrix();

	//Plane
    glPushMatrix();
    glTranslatef(position1, 0.0f, 0.0f);
    glBegin(GL_QUADS);//Plane Body
    glColor3ub(133, 132, 152);
    glVertex2f(-600.0f, 400.0f);
    glVertex2f(-375.0f, 400.0f);
    glVertex2f(-375.0f, 440.0f);
    glVertex2f(-600.0f, 440.0f);
    glEnd();

    glBegin(GL_QUADS);//Plane Wing
    glColor3ub(133, 132, 152);
    glVertex2f(-550.0f, 350.0f);
    glVertex2f(-525.0f, 350.0f);
    glVertex2f(-420.0f, 400.0f);
    glVertex2f(-500.0f, 400.0f);
    glEnd();

    glBegin(GL_QUADS);//Plane tail
    glColor3ub(133, 132, 152);
    glVertex2f(-600.0f, 400.0f);
    glVertex2f(-550.0f, 400.0f);
    glVertex2f(-615.0f, 460.0f);
    glVertex2f(-650.0f, 460.0f);
    glEnd();

    x = -375.0f; y = 420.0f; radius = 20.0f;
	glBegin(GL_TRIANGLE_FAN);//Plane head
	glColor3ub(133, 132, 152);
	glVertex2f(x, y);
	for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	glEnd();
    glLoadIdentity();
	glPopMatrix();

    glBegin(GL_QUADS);//landscape far
    glColor3ub(77, 77, 0);
    glVertex2f(-750.0f,-500.0f);
    glVertex2f( 750.0f,-500.0f);
    glVertex2f( 750.0f,-310.0f);
    glVertex2f(-750.0f,-280.0f);
    glEnd();

    //House
    glBegin(GL_POLYGON);//house upper
    glColor3ub(102, 0, 0);
    glVertex2f(-160.0f,-310.0f);
    glVertex2f(-140.0f,-240.0f);
    glVertex2f(- 73.0f,-180.0f);
    glVertex2f(  20.0f,-240.0f);
    glVertex2f(  45.0f,-310.0f);
    glEnd();

    glBegin(GL_QUADS);//house front
    glColor3ub(102, 0, 0);
    glVertex2f(-160.0f,-410.0f);
    glVertex2f(  45.0f,-410.0f);
    glVertex2f(  45.0f,-310.0f);
    glVertex2f(-160.0f,-310.0f);
    glEnd();

    glBegin(GL_QUADS);//house side
    glColor3ub(102, 0, 0);
    glVertex2f( 45.0f,-310.0f);
    glVertex2f(225.0f,-310.0f);
    glVertex2f(225.0f,-410.0f);
    glVertex2f( 45.0f,-410.0f);
    glEnd();

    glLineWidth(6.5f);//wood frame
    glBegin(GL_LINES);
    glColor3ub(255, 221, 153);
    glVertex2d(45.0,-310.0);
    glVertex2d(45.0,-410.0);
    glEnd();

    glBegin(GL_QUADS);//side roof top
    glColor3ub(115, 77, 38);
    glVertex2f( 45.0f,-320.0f);
    glVertex2f(228.0f,-320.0f);
    glVertex2f(195.0f,-240.0f);
    glVertex2f( 20.0f,-240.0f);
    glEnd();

    glBegin(GL_QUADS);//roof top
    glColor3ub(115, 77, 38);
    glVertex2f( 20.0f,-240.0f);
    glVertex2f(195.0f,-240.0f);
    glVertex2f(135.0f,-198.0f);
    glVertex2f(-80.0f,-180.0f);
    glEnd();

    glLineWidth(4.5f);//roof top
    glBegin(GL_LINES);
    glColor3ub(115, 77, 38);
    glVertex2d(- 77.0,-182.0);
    glVertex2d(-140.0,-240.0);
    glEnd();

     glLineWidth(4.5f);//roof top
     glBegin(GL_LINES);
     glColor3ub(115, 77, 38);
     glVertex2d(-140.0,-240.0);
     glVertex2d(-160.0,-310.0);
     glEnd();

     glLineWidth(6.5f);//wood frame
     glBegin(GL_LINES);
     glColor3ub(255, 221, 153);
     glVertex2d(-130.0,-310.0);
     glVertex2d(   0.0,-310.0);
     glEnd();

     glBegin(GL_QUADS);//wood frame
     glColor3ub(255, 221, 153);
     glVertex2f(-110.0f,-315.0f);
     glVertex2f(- 20.0f,-315.0f);
     glVertex2f(- 20.0f,-410.0f);
     glVertex2f(-110.0f,-410.0f);
     glEnd();

     glBegin(GL_QUADS);//wood frame
     glColor3ub(255, 221, 153);
     glVertex2f(-90,-315.0);
     glVertex2f(-40.0,-315.0);
     glVertex2f(-40.0,-215.0);
     glVertex2f(-90.0,-215.0);
     glEnd();

     glBegin(GL_QUADS);//upper window
     glColor3ub(0, 0, 0);
     glVertex2f(-85.0f,-305.0f);
     glVertex2f(-45.0f,-305.0f);
     glVertex2f(-45.0f,-220.0f);
     glVertex2f(-85.0f,-220.0f);
     glEnd();

     glBegin(GL_QUADS);//door
     glColor3ub(0, 0, 0);
     glVertex2f(-105.0f,-315.0f);
     glVertex2f(- 65.0f,-315.0f);
     glVertex2f(- 65.0f,-405.0f);
     glVertex2f(-105.0f,-405.0f);
     glEnd();

     glBegin(GL_QUADS);//door
     glColor3ub(0, 0, 0);
     glVertex2f(-60.0f,-315.0f);
     glVertex2f(-25.0f,-315.0f);
     glVertex2f(-25.0f,-405.0f);
     glVertex2f(-60.0f,-405.0f);
     glEnd();

     glBegin(GL_QUADS);//window 1
     glColor3ub(0, 0, 0);
     glVertex2f(65.0f,-350.0f);
     glVertex2f(85.0f,-350.0f);
     glVertex2f(85.0f,-380.0f);
     glVertex2f(65.0f,-380.0f);
     glEnd();

     glBegin(GL_QUADS);//window 2
     glColor3ub(0, 0, 0);
     glVertex2f(105.0,-350.0);
     glVertex2f(125.0,-350.0);
     glVertex2f(125.0,-380.0);
     glVertex2f(105.0,-380.0);
     glEnd();

     glBegin(GL_QUADS);//window 3
     glColor3ub(0, 0, 0);
     glVertex2f(145.0,-350.0);
     glVertex2f(165.0,-350.0);
     glVertex2f(165.0,-380.0);
     glVertex2f(145.0,-380.0);
     glEnd();

     glBegin(GL_QUADS);//window 4
     glColor3ub(0, 0, 0);
     glVertex2f(185.0,-350.0);
     glVertex2f(205.0,-350.0);
     glVertex2f(205.0,-380.0);
     glVertex2f(185.0,-380.0);
     glEnd();
     //House end

     //The windmill starts here
	 glBegin(GL_TRIANGLES);//Windmill base
     glColor3ub(96, 64, 31);
     glVertex2f(-380.0f,150.0f);
     glVertex2f(-410.0f,  0.0f);
     glVertex2f(-360.0f,  0.0f);
     glEnd();

     glLineWidth(7.0f);
	 glBegin(GL_LINES);
     glVertex2d(-380, 150);
     glVertex2d(-465,-400);
     glEnd();

     glBegin(GL_LINES);
     glVertex2d(-380, 150);
     glVertex2d(-315,-400);
     glEnd();

     glLineWidth(10.0f);
	 glBegin(GL_LINES);
     glVertex2d(-420,-110);
     glVertex2d(-345,-110);
     glEnd();

     glBegin(GL_LINES);
     glVertex2d(-435,-200);
     glVertex2d(-340,-200);
     glEnd();

     glBegin(GL_LINES);
     glVertex2d(-450,-300);
     glVertex2d(-330,-300);
     glEnd();

     glLineWidth(3.0f);
     glBegin(GL_LINES);
     glVertex2d(-380, 150);
     glVertex2d(-380,-400);
     glEnd();

	 x = -380.0f; y = 150.0f; radius = 95.0f;
	 glBegin(GL_TRIANGLE_FAN);//Windmill holder
	 glColor3ub(96, 64, 31);
	 glVertex2f(x, y);
	 for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

	 x = -380.0f; y = 150.0f; radius = 90.0f;
	 glBegin(GL_TRIANGLE_FAN);//Windmill holder 2
     glColor3ub(251, 239, 225); //Background
	 glVertex2f(x, y);
	 for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		}
	 glEnd();

     glPushMatrix();
     glTranslatef(-380.0, 150.0,0);
     glRotatef(j, 0, 0.0, 0.1);
     glBegin(GL_TRIANGLES);
     glColor3ub(255, 221, 153);
     glVertex2f(   0.0f,  0.0f);
     glVertex2f( 140.0f,  5.0f);
     glVertex2f( 135.0f,-40.0f);
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(255, 221, 153);
     glVertex2f(   0.0f,  0.0f);
     glVertex2f( 130.0f,-48.0f);
     glVertex2f( 110.0f,-90.0f);
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(255, 221, 153);
     glVertex2f(  0.0f,   0.0f);
     glVertex2f(105.0f,- 98.0f);
     glVertex2f( 78.0f,-125.0f);
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(255, 221, 153);
     glVertex2f( 0.0f,   0.0f);
     glVertex2f(70.0f,-125.0f);
     glVertex2f(30.0f,-140.0f);
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(255, 221, 153);
     glVertex2f(  0.0f,   0.0f);
     glVertex2f(-20.0f,-140.0f);
     glVertex2f( 20.0f,-140.0f);
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(255, 221, 153);
     glVertex2f(   0.0f,  0.0f);
     glVertex2f(-140.0f,  5.0f);
     glVertex2f(-135.0f,-40.0f);
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(255, 221, 153);
     glVertex2f(   0.0f,  0.0f);
     glVertex2f(-130.0f,-48.0f);
     glVertex2f(-110.0f,-90.0f);
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(255, 221, 153);
     glVertex2f(  0.0f,   0.0f);
     glVertex2f(-105.0f,-98.0f);
     glVertex2f(-78.0f,-125.0f);
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(255, 221, 153);
     glVertex2f(  0.0f,   0.0f);
     glVertex2f(-70.0f,-125.0f);
     glVertex2f(-30.0f,-140.0f);
     glEnd();//Lower blade part Ends here

     glBegin(GL_TRIANGLES);//Upper blade part starts here
     glColor3ub(255, 221, 153);
     glVertex2f( 0.0f,  0.0f);
     glVertex2f( 5.0f,140.0f);
     glVertex2f(50.0f,135.0f);
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(255, 221, 153);
     glVertex2f( 0.0f,  0.0f);
     glVertex2f(60.0f,130.0f);
     glVertex2f(90.0f,110.0f);
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(255, 221, 153);
     glVertex2f(  0.0f,  0.0f);
     glVertex2f( 95.0f,105.0f);
     glVertex2f(120.0f, 70.0f);

     glBegin(GL_TRIANGLES);
     glColor3ub(255, 221, 153);
     glVertex2f(  0.0f, 0.0f);
     glVertex2f(125.0f,60.0f);
     glVertex2f(135.0f,15.0f);
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(255, 221, 153);
     glVertex2f(  0.0f,  0.0f);
     glVertex2f(- 5.0f,140.0f);
     glVertex2f(-50.0f,135.0f);
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(255, 221, 153);
     glVertex2f(  0.0f,  0.0f);
     glVertex2f(-60.0f,130.0f);
     glVertex2f(-90.0f,110.0f);
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(255, 221, 153);
     glVertex2f(   0.0f,  0.0f);
     glVertex2f(- 95.0f,105.0f);
     glVertex2f(-120.0f, 70.0f);

     glBegin(GL_TRIANGLES);
     glColor3ub(255, 221, 153);
     glVertex2f(   0.0f,  0.0f);
     glVertex2f(-125.0f, 60.0f);
     glVertex2f(-135.0f, 15.0f);
     glEnd();//Upper blade part ends here
     glLoadIdentity();
     glPopMatrix();
     j-=0.8f;

     x = -380.0f; y = 150.0f; radius = 50.0f;
	 glBegin(GL_TRIANGLE_FAN);
     glColor3ub(251, 239, 225);
	 glVertex2f(x, y);
	 for(i = 0; i <= triangleAmount;i++)
         {
			 glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		 }
	 glEnd();

	 x = -380.0f; y = 150.0f; radius = 20.0f;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(96, 64, 31);
	 glVertex2f(x, y);
	 for(i = 0; i <= triangleAmount;i++)
         {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		 }
	 glEnd();

	 glLineWidth(5.0f);
	 glBegin(GL_LINES);
     glVertex2d(-380,150);
     glVertex2d(-475,170);
     glEnd();

     glBegin(GL_LINES);
     glVertex2d(-380,150);
     glVertex2d(-285,170);
     glEnd();

     glBegin(GL_LINES);
     glVertex2d(-380,150);
     glVertex2d(-380,240);
     glEnd();

     glBegin(GL_LINES);
     glVertex2d(-380,150);
     glVertex2d(-445, 85);
     glEnd();

     glBegin(GL_LINES);
     glVertex2d(-380,150);
     glVertex2d(-340, 70);
     glEnd();

     glLineWidth(2.0f);
     glBegin(GL_LINES);
     glVertex2d(-545,170);
     glVertex2d(-473,155);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3ub(96, 64, 31);
     glVertex2f(-680.0f,100.0f);
     glVertex2f(-540.0f,125.0f);
     glVertex2f(-530.0f,150.0f);
     glVertex2f(-540.0f,175.0f);
     glVertex2f(-680.0f,200.0f);
     glEnd();

     glLineWidth(2.0f);
     glBegin(GL_LINES);
     glVertex2d(-545,130);
     glVertex2d(-473,135);
     glEnd();//Windmill ends here


     glBegin(GL_QUADS);//Front landscape
     glColor3ub(77, 102, 0);
     glVertex2f(-750.0f,-500.0f);
     glVertex2f( 750.0f,-500.0f);
     glVertex2f( 750.0f,-450.0f);
     glVertex2f(-750.0f,-375.0f);
     glEnd();

     //bird
     glPushMatrix();
     glTranslatef(position5, 0.0f, 0.0f);
     glBegin(GL_POLYGON);
     glColor3ub(194, 194, 214);
     glVertex2f(600.0f, 50.0f);
     glVertex2f(640.0f, 55.0f);
     glVertex2f(620.0f, 80.0f);
     glVertex2f(595.0f,140.0f);
     glVertex2f(590.0f, 75.0f);
     glEnd();//wing

     glBegin(GL_QUADS);
     glColor3ub(194, 194, 214);
     glVertex2f(640.0f,30.0f);
     glVertex2f(680.0f,50.0f);
     glVertex2f(660.0f,60.0f);
     glVertex2f(640.0f,55.0f);
     glEnd();//2nd wing

     glBegin(GL_TRIANGLES);
     glColor3ub(194, 194, 214);
     glVertex2f(680.0f,50.0f);
     glVertex2f(735.0f,65.0f);
     glVertex2f(660.0f,60.0f);
     glEnd();//2nd wing

     glBegin(GL_QUADS);
     glColor3ub(194, 194, 214);
     glVertex2f(670.0f,25.0f);
     glVertex2f(690.0f,30.0f);
     glVertex2f(660.0f,50.0f);
     glVertex2f(640.0f,35.0f);
     glEnd();//tail

     glBegin(GL_POLYGON);
     glColor3ub(194, 194, 214);
     glVertex2f(600.0f,20.0f);
     glVertex2f(625.0f,22.0f);
     glVertex2f(660.0f,50.0f);
     glVertex2f(640.0f,60.0f);
     glVertex2f(600.0f,50.0f);
     glEnd();//body

     glBegin(GL_TRIANGLES);
     glColor3ub(194, 194, 214);
     glVertex2f(570.0f,30.0f);
     glVertex2f(600.0f,50.0f);
     glVertex2f(625.0f,20.0f);
     glEnd();//neck

     glBegin(GL_TRIANGLES);
     glColor3ub(128, 0, 0);
     glVertex2f(540.0f,20.0f);
     glVertex2f(570.0f,35.0f);
     glVertex2f(570.0f,25.0f);
     glEnd();//mouth

     x = 570.0f; y = 30.0f; radius = 10.0f;
	 glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(194, 194, 214);
	 glVertex2f(x, y);//head
	 for(i = 0; i <= triangleAmount;i++)
         {
			 glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
		 }
	 glEnd();
     glLoadIdentity();
     glPopMatrix();
     glutTimerFunc(3000, afternoon_demo, 0);
     glFlush();
}

void handleMouse(int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON)//plane speed increase
        {
            speed1 += 1.0f;
        }
    if (button == GLUT_RIGHT_BUTTON)//plane speed decrease
	    {
	        speed1 -= 1.0f;
        }
        glutPostRedisplay();
}

void handleKeypress(unsigned char key, int x, int y)
{
	switch (key)
	{
	    case 'a'://Cloud speed increase
	        speed4 += 5.0f;
	        break;
        case 'd'://Cloud speed decrease
            speed4 -= 5.0f;
            break;
        case 'z'://Bird speed increase
            speed5 += 5.0f;
            break;
        case 'c'://Bird speed decrease
            speed5 -= 5.0f;
            break;
        case 'q'://Boat speed increase
            speed8 += 2.0f;
            break;
        case 'e'://Boast speed decrease
            speed8 -= 2.0f;
            break;
        case 'f'://Plane speed increase
            speed9 += 2.0f;
            break;
        case 'h'://Plane speed decrease
            speed9 -= 2.0f;
            break;
            glutPostRedisplay();
	}
}

void sound()
{
    PlaySound("music.wav", NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1500, 1000);
    glutCreateWindow("Translation Animation");
    glutDisplayFunc(day);
    gluOrtho2D(-750.0, 750.0, -500.0, 500.0);
    glutIdleFunc(Idle);
    glutTimerFunc(60 , update , 0);
    glutTimerFunc(60 , update2, 0);
    glutTimerFunc(200, update3, 0);
    glutTimerFunc(120, update4, 0);
    glutTimerFunc(100, update5, 0);
    glutTimerFunc(60 , update6, 0);
    glutTimerFunc(60 , update7, 0);
    glutTimerFunc(40 , update8, 0);
    glutTimerFunc(40 , update9, 0);
    glutMouseFunc(handleMouse);
    glutKeyboardFunc(handleKeypress);
    sound();
    glutMainLoop();
    return 0;
}
