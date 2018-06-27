//
//  main.cpp
//  first1
//
//  Created by csea46 on 27/06/18.
//  Copyright © 2018 csea46. All rights reserved.
//

//using namespace std;

#include <iostream>
#include<GLUT/glut.h>

void myInit()
{
    glClearColor(1.0,1.0,1.0,0.0);
    glColor3f(0.0f,0.0f,0.0f);
    glPointSize(40);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,640.0,0.0,480.0);
    
}

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POINTS);
    

    int j, i;
    int tmp1=100, tmp2=100;
    
    for(j=0;j<4;j++)
    {
        for(i=0;i<4;i++)
        {
            glVertex2d(tmp1,tmp2);
            tmp1+=80;
        }
        tmp2+=80;
        tmp1=100;
    }
    tmp1=140;
    tmp2=140;
    //glVertex2d(tmp1,tmp2);
    //tmp1=+210;
    //glVertex2d(tmp1,tmp2);
    
    for(j=0;j<4;j++)
    {
        for(i=0;i<4;i++)
        {
            glVertex2d(tmp1,tmp2);
            tmp1+=80;
        }
        tmp2+=80;
        tmp1=140;
    }
    glEnd();
    
    glBegin(GL_LINE_STRIP);
    glVertex2d(80,80);
    glVertex2d(80,400);
    glEnd();
    
    glBegin(GL_LINE_STRIP);
    glVertex2d(80,400);
    glVertex2d(400,400);
    glEnd();
    
    glBegin(GL_LINE_STRIP);
    glVertex2d(400,80);
    glVertex2d(400,400);
    glEnd();
    
    glBegin(GL_LINE_STRIP);
    glVertex2d(80,80);
    glVertex2d(400,80);
    glEnd();
    
    //glVertex2d(150,100);
    //glVertex2d(100,100);
    //glVertex2d(150,50);
    //glVertex2d(100,50);

    //glVertex2d(300,350);
    
    
    glEnd();
    glFlush();
}



int main(int argc,char* argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(640,480);
    glutCreateWindow("First Exercise");
    glutDisplayFunc(myDisplay);
    myInit();
    glutMainLoop();
    return 1;
}
