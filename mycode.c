# OpenGL_3dMobile


#include <stdlib.h>
#include <glut.h>


	GLfloat vertices[][3] = {{-2.0,-3.95,-0.20},{2.0,-3.95,-0.20},
	{2.0,3.95,-0.20}, {-2.0,3.95,-0.20}, {-2.0,-3.95,0.20}, 
	{2.0,-3.95,0.20}, {2.0,3.95,0.20}, {-2.0,3.95,0.20}};//mobile

	GLfloat verticeslock[][3] = {{2.0,3.5,0.05},{2.0,3.50,-0.05},
	{2.0,3.0,-0.05}, {2.0,3.0,0.05}, {2.05,3.5,0.05}, 
	{2.05,3.50,-0.05}, {2.05,3.0,-0.05}, {2.05,3.0,0.05}};//lock key

	GLfloat verticesvolume[][3] = {{-2.0,3.5,0.05},{-2.0,3.50,-0.05},
	{-2.0,2.50,-0.05}, {-2.0,2.5,0.05}, {-2.05,3.5,0.05}, 
	{-2.05,3.50,-0.05}, {-2.05,2.50,-0.05}, {-2.05,2.5,0.05}};//volume keys

void polygon(int a, int b, int c , int d)
{
	//mobile
	glBegin(GL_POLYGON);
		glVertex3fv(vertices[a]);
		glVertex3fv(vertices[b]);
		glVertex3fv(vertices[c]);
		glVertex3fv(vertices[d]);
	glEnd();
	glBegin(GL_POLYGON);//screen
		glColor3f(0.12,0.12,0.12);
		glVertex3f(1.75,3.3,0.2001);
		glVertex3f(-1.75,3.3,0.2001);
		glVertex3f(-1.75,-3.3,0.2001);
		glVertex3f(1.75,-3.3,0.2001);
	glEnd();
	glBegin(GL_POLYGON);//earpiece
		glColor3f(0.12,0.12,0.12);
		glVertex3f(0.5,3.5,0.2002);
		glVertex3f(-0.5,3.5,0.2002);
		glVertex3f(-0.5,3.45,0.2002);
		glVertex3f(0.5,3.45,0.2002);
	glEnd();
	glBegin(GL_POLYGON); //front camera
		glColor3f(0.12,0.12,0.12);
		glVertex3f(-0.95,3.5,0.2002);
		glVertex3f(-1.0,3.5,0.2002);
		glVertex3f(-1.0,3.45,0.2002);
		glVertex3f(-0.95,3.45,0.2002);
	glEnd();
	glBegin(GL_POLYGON);//camera
		glColor3f(0.12,0.12,0.12);
		glVertex3f(0.50,3.5,-0.2003);
		glVertex3f(-0.50,3.5,-0.2003);
		glVertex3f(-0.50,2.75,-0.2004);
		glVertex3f(0.50,2.75,-0.2003);
	glEnd();
	glBegin(GL_POLYGON);//flash
		glColor3f(1.0,1.0,1.0);
		glVertex3f(0.15,2.5,-0.2003);
		glVertex3f(-0.150,2.5,-0.2003);
		glVertex3f(-0.150,2.150,-0.2004);
		glVertex3f(0.150,2.150,-0.2003);
	glEnd();
	glBegin(GL_POLYGON); //speaker
		glColor3f(0.12,0.12,0.12);
		glVertex3f(1.0,-3.0,-0.2005);
		glVertex3f(-1.0,-3.0,-0.2005);
		glVertex3f(-1.0,-3.1,-0.2005);
		glVertex3f(1.0,-3.1,-0.2005);
	glEnd();
}

void lock(int a, int b, int c , int d)
{
	//lock button
	glBegin(GL_POLYGON);
		
		glVertex3fv(verticeslock[a]);
		glVertex3fv(verticeslock[b]);
		glVertex3fv(verticeslock[c]);
		glVertex3fv(verticeslock[d]);
	glEnd();
}

void volume(int a, int b, int c , int d)
{
	//volume button
	glBegin(GL_POLYGON);
		
		glVertex3fv(verticesvolume[a]);
		glVertex3fv(verticesvolume[b]);
		glVertex3fv(verticesvolume[c]);
		glVertex3fv(verticesvolume[d]);
	glEnd();
}

void mymobile()
{
	glColor3f(0.5,0.5,0.5);
	polygon(0,3,2,1);//back
	glColor3f(0.876,0.876,0.876);
	polygon(2,3,7,6);//top
	glColor3f(0.876,0.876,0.876);
	polygon(0,4,7,3);//left
	glColor3f(0.876,0.876,0.876);
	polygon(1,2,6,5);//right
	glColor3f(0.76,0.76,0.76);
	polygon(4,5,6,7);//front
	glColor3f(0.876,0.876,0.876);
	polygon(0,1,5,4);//bottom
}

void colorlock()
{
	glColor3f(0.375,0.375,0.375);
	lock(0,1,2,3);//inner
	glColor3f(0.375,0.375,0.375);
	lock(4,5,6,7);//outer
	glColor3f(0.375,0.375,0.375);
	lock(0,4,7,3);//left
	glColor3f(0.375,0.375,0.375);
	lock(1,5,6,2);//right
	glColor3f(0.375,0.375,0.375);
	lock(0,1,5,4);//top
	glColor3f(0.375,0.375,0.375);
	lock(3,2,6,7);//bottom
}

void colorvolume()
{
	glColor3f(0.375,0.375,0.375);
	volume(0,1,2,3);//back
	glColor3f(0.375,0.375,0.375);
	volume(4,5,6,7);//top
	glColor3f(0.375,0.375,0.375);
	volume(0,4,7,3);//left
	glColor3f(0.375,0.375,0.375);
	volume(1,5,6,2);//right
	glColor3f(0.375,0.375,0.375);
	volume(0,1,5,4);//front
	glColor3f(0.375,0.375,0.375);
	volume(3,2,6,7);//bottom
}

static GLfloat theta[] = {0.0,0.0,0.0};
static GLint axis = 1;
static GLdouble viewer[]= {0.0, 0.0, 5.0};


void display(void)
{
 	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	gluLookAt(viewer[0],viewer[1],viewer[2], 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	glRotatef(theta[0], 1.0, 0.0, 0.0);
	glRotatef(theta[1], 0.0, 1.0, 0.0);
	glRotatef(theta[2], 0.0, 0.0, 1.0);
	glColor3d(1.0, 0.0, 0.0);
    
 	mymobile();
	colorlock();
	colorvolume();
	glutSwapBuffers();
 	glFlush();

}

void mouse(int btn, int state, int x, int y)
{
	if(btn==GLUT_LEFT_BUTTON && state == GLUT_DOWN) axis = 0;
	if(btn==GLUT_MIDDLE_BUTTON && state == GLUT_DOWN) axis = 1;
	if(btn==GLUT_RIGHT_BUTTON && state == GLUT_DOWN) axis = 2;
	theta[axis] += 0.02;
	if( theta[axis] > 360.0 ) theta[axis] -= 360.0;
	glutPostRedisplay();
}

void keys(unsigned char key, int x, int y)
{


   if(key == 'x') viewer[0]-= 1.0;
   if(key == 'X') viewer[0]+= 1.0;
   if(key == 'y') viewer[1]-= 1.0;
   if(key == 'Y') viewer[1]+= 1.0;
   if(key == 'z') viewer[2]-= 1.0;
   if(key == 'Z') viewer[2]+= 1.0;
   display();
}

void myReshape(int w, int h)
{
 	glViewport(0, 0, w, h);
 	glMatrixMode(GL_PROJECTION); 
 	glLoadIdentity();
	if(w<=h) glFrustum(-2.0, 2.0, -2.0 * (GLfloat) h/ (GLfloat) w, 
       2.0* (GLfloat) h / (GLfloat) w, 2.0, 20.0);
 	glMatrixMode(GL_MODELVIEW);
}
void spinCube()
{
/* Idle callback, spin cube 2 degrees about selected axis */
	theta[axis] += 0.02;
	if( theta[axis] > 360.0 ) theta[axis] -= 360.0;
	glutPostRedisplay();
}
void myinit()
{
	glClearColor(0.796,0.796,0.99,1.0);
	glColor3f(1.0,0.0,0.0);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-50.0,50.0,-80.0,80.0);
}

void  main(int argc, char **argv)
{
 	glutInit(&argc, argv);
 	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
 	glutInitWindowSize(683, 768);
	glutCreateWindow("3D Mobile View");
 	glutReshapeFunc(myReshape);
 	glutDisplayFunc(display);
	glutIdleFunc(spinCube);
	glutMouseFunc(mouse);
	glutKeyboardFunc(keys);
	glEnable(GL_DEPTH_TEST);
	myinit();
 	glutMainLoop();
}
