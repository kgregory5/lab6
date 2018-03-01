// Author: Kyle Gregory
// Date: 3/1/18

#include "fonts.h"
#include "GL/glx.h"

void showName() {
	Rect r;
    	r.bot = 100;
    	r.left = 100;
    	r.center = 0;
    	ggprint8b(&r, 16, 0x00ffff00, "kyle");
}

void drawBox(int x, int y) {
    	static float angle = 0.0; //static to keep value
	glColor3ub(255,0,0);
	//matrix will read bottom top when multiple translate/rotates together
	glPushMatrix();
	glTranslatef(x, y, 0.0);
	glRotatef(angle, 0.0f, 0.0f, 1.0f);
	glTranslatef(-50.0, -50.0, 0.0); 
	angle = angle + 2.5; //rotation speed
	glBegin(GL_QUADS);
		glVertex2i(0, 0); 	//bottom left
		glVertex2i(0, 100); 	//top left 
		glVertex2i(100, 100); 	//top right
		glVertex2i(100, 0); 	//bottom right
	glEnd();
	
	Rect r;
    	r.bot = 50;
    	r.left = 50;
    	r.center = 1;
    	ggprint8b(&r, 16, 0x00ffffff, "kyle");
	
	glPopMatrix();
}
