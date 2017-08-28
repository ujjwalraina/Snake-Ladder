#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<Windows.h>
#include<synchapi.h>
#include<GL/glut.h>
int id1, id2, id3, val1, val2, flag, x2, y2;
void mykey(unsigned char k, int x, int y);
void mymouse(int btn, int st, int x, int y);
void init()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 100, 0, 100);
	glMatrixMode(GL_MODELVIEW);
}
void snakes()
{
	glPointSize(23);
	glColor3f(1, 0, 0);
	glBegin(GL_POINTS);
	glVertex2f(76.5, 22);
	glEnd();
	glPointSize(14);
	glColor3f(1, 0, 0);
	glBegin(GL_POINTS);
	glVertex2f(78, 21);
	glVertex2f(79, 20);
	glVertex2f(80, 19);
	glVertex2f(81, 18);
	glVertex2f(82, 17);
	glVertex2f(83, 16);
	glVertex2f(84, 15);
	glVertex2f(85, 14);
	glVertex2f(86, 13);
	glVertex2f(87, 12);
	glVertex2f(88, 11);
	glVertex2f(89, 10);
	glVertex2f(90, 9);
	glVertex2f(91, 8);
	glEnd();
	glPointSize(12);
	glColor3f(1, 0, 0);
	glBegin(GL_POINTS);
	glVertex2f(92, 7);
	glVertex2f(93, 7);
	glEnd();
	glPointSize(7);
	glColor3f(0, 1, 0);
	glBegin(GL_POINTS);
	glVertex2f(76.5, 22);
	glEnd();
	glPointSize(5);
	glColor3f(0, 1, 0);
	glBegin(GL_POINTS);
	glVertex2f(78, 21);
	glVertex2f(79, 20);
	glVertex2f(80, 19);
	glVertex2f(81, 18);
	glVertex2f(82, 17);
	glVertex2f(83, 16);
	glVertex2f(84, 15);
	glVertex2f(85, 14);
	glVertex2f(86, 13);
	glVertex2f(87, 12);
	glVertex2f(88, 11);
	glVertex2f(89, 10);
	glVertex2f(90, 9);
	glVertex2f(91, 8);
	glVertex2f(92, 7);
	glVertex2f(93, 7);
	glEnd();
	glPointSize(5);
	glColor3f(0, 0, 0);
	glBegin(GL_POINTS);
	glVertex2f(76.5, 22);
	glEnd();
	glPointSize(3);
	glColor3f(0, 0, 0);
	glBegin(GL_POINTS);
	glVertex2f(78, 21);
	glVertex2f(79, 20);
	glVertex2f(80, 19);
	glVertex2f(81, 18);
	glVertex2f(82, 17);
	glVertex2f(83, 16);
	glVertex2f(84, 15);
	glVertex2f(85, 14);
	glVertex2f(86, 13);
	glVertex2f(87, 12);
	glVertex2f(88, 11);
	glVertex2f(89, 10);
	glVertex2f(90, 9);
	glVertex2f(91, 8);
	glVertex2f(92, 7);
	glVertex2f(93, 7);
	glEnd();
	glLineWidth(4);
	glColor3f(1, 0, 1);
	glBegin(GL_LINES);
	glVertex2f(75.5, 22);
	glVertex2f(74, 22);
	glEnd();
	//2nd snake
	glPointSize(23);
	glColor3f(1, 0, 0);
	glBegin(GL_POINTS);
	glVertex2f(14.5, 42);
	glEnd();
	glPointSize(14);
	glColor3f(1, 0, 0);
	glBegin(GL_POINTS);
	glVertex2f(13.5, 41);
	glVertex2f(13, 40);
	glVertex2f(12.5, 39);
	glVertex2f(12, 38);
	glVertex2f(11.5, 37);
	glVertex2f(11, 36);
	glVertex2f(10.5, 35);
	glVertex2f(10, 34);
	glVertex2f(9.5, 33);
	glVertex2f(9, 32);
	glVertex2f(8.5, 31);
	glVertex2f(8, 30);
	glVertex2f(7.5, 29);
	glVertex2f(7, 28);
	glEnd();
	glPointSize(12);
	glColor3f(1, 0, 0);
	glBegin(GL_POINTS);
	glVertex2f(5, 27.5);
	glVertex2f(6, 27.5);
	glEnd();
	glPointSize(7);
	glColor3f(0, 1, 0);
	glBegin(GL_POINTS);
	glVertex2f(14.5, 42);
	glEnd();
	glPointSize(5);
	glColor3f(0, 1, 0);
	glBegin(GL_POINTS);
	glVertex2f(13.5, 41);
	glVertex2f(13, 40);
	glVertex2f(12.5, 39);
	glVertex2f(12, 38);
	glVertex2f(11.5, 37);
	glVertex2f(11, 36);
	glVertex2f(10.5, 35);
	glVertex2f(10, 34);
	glVertex2f(9.5, 33);
	glVertex2f(9, 32);
	glVertex2f(8.5, 31);
	glVertex2f(8, 30);
	glVertex2f(7.5, 29);
	glVertex2f(7, 28);
	glVertex2f(6, 27.5);
	glVertex2f(5, 27.5);
	glEnd();
	glPointSize(5);
	glColor3f(0, 0, 0);
	glBegin(GL_POINTS);
	glVertex2f(14.5, 42);
	glEnd();
	glPointSize(3);
	glColor3f(0, 0, 0);
	glBegin(GL_POINTS);
	glVertex2f(13.5, 41);
	glVertex2f(13, 40);
	glVertex2f(12.5, 39);
	glVertex2f(12, 38);
	glVertex2f(11.5, 37);
	glVertex2f(11, 36);
	glVertex2f(10.5, 35);
	glVertex2f(10, 34);
	glVertex2f(9.5, 33);
	glVertex2f(9, 32);
	glVertex2f(8.5, 31);
	glVertex2f(8, 30);
	glVertex2f(7.5, 29);
	glVertex2f(7, 28);
	glVertex2f(6, 27.5);
	glVertex2f(5, 27.5);
	glEnd();
	glLineWidth(4);
	glColor3f(1, 0, 1);
	glBegin(GL_LINES);
	glVertex2f(15.5, 42);
	glVertex2f(17, 42);
	glEnd();
	//3rd snake
	glPointSize(23);
	glColor3f(0, 0, 1);
	glBegin(GL_POINTS);
	glVertex2f(47, 52);
	glEnd();
	glPointSize(14);
	glColor3f(0, 0, 1);
	glBegin(GL_POINTS);
	glVertex2f(48, 51);
	glVertex2f(49, 50);
	glVertex2f(50, 49);
	glVertex2f(51, 48);
	glVertex2f(52, 47);
	glVertex2f(53, 46);
	glVertex2f(54, 45);
	glVertex2f(55, 44);
	glVertex2f(56, 43);
	glVertex2f(57, 42);
	glVertex2f(58, 41);
	glVertex2f(59, 40);
	glVertex2f(60, 39);
	glVertex2f(61, 38);
	glEnd();
	glPointSize(12);
	glColor3f(0, 0, 1);
	glBegin(GL_POINTS);
	glVertex2f(62, 37);
	glVertex2f(63, 37);
	glEnd();
	glPointSize(7);
	glColor3f(0, 1, 0);
	glBegin(GL_POINTS);
	glVertex2f(47, 52);
	glEnd();
	glPointSize(5);
	glColor3f(0, 1, 0);
	glBegin(GL_POINTS);
	glVertex2f(48, 51);
	glVertex2f(49, 50);
	glVertex2f(50, 49);
	glVertex2f(51, 48);
	glVertex2f(52, 47);
	glVertex2f(53, 46);
	glVertex2f(54, 45);
	glVertex2f(55, 44);
	glVertex2f(56, 43);
	glVertex2f(57, 42);
	glVertex2f(58, 41);
	glVertex2f(59, 40);
	glVertex2f(60, 39);
	glVertex2f(61, 38);
	glVertex2f(62, 37);
	glVertex2f(63, 37);
	glEnd();
	glPointSize(5);
	glColor3f(0, 0, 0);
	glBegin(GL_POINTS);
	glVertex2f(47, 52);
	glEnd();
	glPointSize(3);
	glColor3f(0, 0, 0);
	glBegin(GL_POINTS);
	glVertex2f(48, 51);
	glVertex2f(49, 50);
	glVertex2f(50, 49);
	glVertex2f(51, 48);
	glVertex2f(52, 47);
	glVertex2f(53, 46);
	glVertex2f(54, 45);
	glVertex2f(55, 44);
	glVertex2f(56, 43);
	glVertex2f(57, 42);
	glVertex2f(58, 41);
	glVertex2f(59, 40);
	glVertex2f(60, 39);
	glVertex2f(61, 38);
	glVertex2f(62, 37);
	glVertex2f(63, 37);
	glEnd();
	glLineWidth(4);
	glColor3f(1, 0, 1);
	glBegin(GL_LINES);
	glVertex2f(46, 52);
	glVertex2f(44.5, 52);
	glEnd();
	//4th snake
	glPointSize(23);
	glColor3f(1, 1, 0);
	glBegin(GL_POINTS);
	glVertex2f(57, 72);
	glEnd();
	glPointSize(14);
	glColor3f(1, 1, 0);
	glBegin(GL_POINTS);
	glVertex2f(58, 71);
	glVertex2f(59, 70);
	glVertex2f(60, 69);
	glVertex2f(61, 68);
	glVertex2f(62, 67);
	glVertex2f(63, 66);
	glVertex2f(64, 65);
	glVertex2f(65, 64);
	glVertex2f(66, 63);
	glVertex2f(67, 62);
	glVertex2f(68, 61);
	glVertex2f(69, 60);
	glVertex2f(70, 59);
	glVertex2f(71, 58);
	glEnd();
	glPointSize(12);
	glColor3f(1, 1, 0);
	glBegin(GL_POINTS);
	glVertex2f(72, 57);
	glVertex2f(73, 57);
	glEnd();
	glPointSize(7);
	glColor3f(0, 0, 1);
	glBegin(GL_POINTS);
	glVertex2f(57, 72);
	glEnd();
	glPointSize(5);
	glColor3f(0, 0, 1);
	glBegin(GL_POINTS);
	glVertex2f(58, 71);
	glVertex2f(59, 70);
	glVertex2f(60, 69);
	glVertex2f(61, 68);
	glVertex2f(62, 67);
	glVertex2f(63, 66);
	glVertex2f(64, 65);
	glVertex2f(65, 64);
	glVertex2f(66, 63);
	glVertex2f(67, 62);
	glVertex2f(68, 61);
	glVertex2f(69, 60);
	glVertex2f(70, 59);
	glVertex2f(71, 58);
	glVertex2f(72, 57);
	glVertex2f(73, 57);
	glEnd();
	glPointSize(5);
	glColor3f(0, 0, 0);
	glBegin(GL_POINTS);
	glVertex2f(57, 72);
	glEnd();
	glPointSize(3);
	glColor3f(0, 0, 0);
	glBegin(GL_POINTS);
	glVertex2f(58, 71);
	glVertex2f(59, 70);
	glVertex2f(60, 69);
	glVertex2f(61, 68);
	glVertex2f(62, 67);
	glVertex2f(63, 66);
	glVertex2f(64, 65);
	glVertex2f(65, 64);
	glVertex2f(66, 63);
	glVertex2f(67, 62);
	glVertex2f(68, 61);
	glVertex2f(69, 60);
	glVertex2f(70, 59);
	glVertex2f(71, 58);
	glVertex2f(72, 57);
	glVertex2f(73, 57);
	glEnd();
	glLineWidth(4);
	glColor3f(1, 0, 1);
	glBegin(GL_LINES);
	glVertex2f(56, 72);
	glVertex2f(54.5, 72);
	glEnd();
	//5th com
	glPointSize(23);
	glColor3f(1, 0, 0);
	glBegin(GL_POINTS);
	glVertex2f(17, 92);
	glEnd();
	glPointSize(14);
	glColor3f(1, 0, 0);
	glBegin(GL_POINTS);
	glVertex2f(18, 91);
	glVertex2f(19, 90);
	glVertex2f(20, 89);
	glVertex2f(21, 88);
	glVertex2f(22, 87);
	glVertex2f(23, 86);
	glVertex2f(24, 85);
	glVertex2f(25, 84);
	glVertex2f(26, 83);
	glVertex2f(27, 82);
	glVertex2f(28, 81);
	glVertex2f(29, 80);
	glVertex2f(30, 79);
	glVertex2f(31, 78);
	glEnd();
	glPointSize(12);
	glColor3f(1, 0, 0);
	glBegin(GL_POINTS);
	glVertex2f(32, 77);
	glVertex2f(33, 77);
	glEnd();
	glPointSize(7);
	glColor3f(0, 1, 0);
	glBegin(GL_POINTS);
	glVertex2f(17, 92);
	glEnd();
	glPointSize(5);
	glColor3f(0, 1, 0);
	glBegin(GL_POINTS);
	glVertex2f(18, 91);
	glVertex2f(19, 90);
	glVertex2f(20, 89);
	glVertex2f(21, 88);
	glVertex2f(22, 87);
	glVertex2f(23, 86);
	glVertex2f(24, 85);
	glVertex2f(25, 84);
	glVertex2f(26, 83);
	glVertex2f(27, 82);
	glVertex2f(28, 81);
	glVertex2f(29, 80);
	glVertex2f(30, 79);
	glVertex2f(31, 78);
	glVertex2f(32, 77);
	glVertex2f(33, 77);
	glEnd();
	glPointSize(5);
	glColor3f(0, 0, 0);
	glBegin(GL_POINTS);
	glVertex2f(17, 92);
	glEnd();
	glPointSize(3);
	glColor3f(0, 0, 0);
	glBegin(GL_POINTS);
	glVertex2f(18, 91);
	glVertex2f(19, 90);
	glVertex2f(20, 89);
	glVertex2f(21, 88);
	glVertex2f(22, 87);
	glVertex2f(23, 86);
	glVertex2f(24, 85);
	glVertex2f(25, 84);
	glVertex2f(26, 83);
	glVertex2f(27, 82);
	glVertex2f(28, 81);
	glVertex2f(29, 80);
	glVertex2f(30, 79);
	glVertex2f(31, 78);
	glVertex2f(32, 77);
	glVertex2f(33, 77);
	glEnd();
	glLineWidth(4);
	glColor3f(1, 0, 1);
	glBegin(GL_LINES);
	glVertex2f(16, 92);
	glVertex2f(14.5, 92);
	glEnd();
	//6th snake
	glPointSize(23);
	glColor3f(1, 1, 0);
	glBegin(GL_POINTS);
	glVertex2f(94, 92);
	glEnd();
	glPointSize(14);
	glColor3f(1, 1, 0);
	glBegin(GL_POINTS);
	glVertex2f(93.5, 91);
	glVertex2f(93, 90);
	glVertex2f(92.5, 89);
	glVertex2f(92, 88);
	glVertex2f(91.5, 87);
	glVertex2f(91, 86);
	glVertex2f(90.5, 85);
	glVertex2f(90, 84);
	glVertex2f(89.5, 83);
	glVertex2f(89, 82);
	glVertex2f(88.5, 81);
	glVertex2f(88, 80);
	glVertex2f(87.5, 79);
	glVertex2f(87, 78);
	glEnd();
	glPointSize(12);
	glColor3f(1, 1, 0);
	glBegin(GL_POINTS);
	glVertex2f(85, 77.5);
	glVertex2f(86, 77.5);
	glEnd();
	glPointSize(7);
	glColor3f(0, 0, 1);
	glBegin(GL_POINTS);
	glVertex2f(94, 92);
	glEnd();
	glPointSize(5);
	glColor3f(0, 0, 1);
	glBegin(GL_POINTS);
	glVertex2f(93.5, 91);
	glVertex2f(93, 90);
	glVertex2f(92.5, 89);
	glVertex2f(92, 88);
	glVertex2f(91.5, 87);
	glVertex2f(91, 86);
	glVertex2f(90.5, 85);
	glVertex2f(90, 84);
	glVertex2f(89.5, 83);
	glVertex2f(89, 82);
	glVertex2f(88.5, 81);
	glVertex2f(88, 80);
	glVertex2f(87.5, 79);
	glVertex2f(87, 78);
	glVertex2f(85, 77.5);
	glVertex2f(86, 77.5);
	glEnd();
	glPointSize(5);
	glColor3f(0, 0, 0);
	glBegin(GL_POINTS);
	glVertex2f(94, 92);
	glEnd();
	glPointSize(3);
	glColor3f(0, 0, 0);
	glBegin(GL_POINTS);
	glVertex2f(93.5, 91);
	glVertex2f(93, 90);
	glVertex2f(92.5, 89);
	glVertex2f(92, 88);
	glVertex2f(91.5, 87);
	glVertex2f(91, 86);
	glVertex2f(90.5, 85);
	glVertex2f(90, 84);
	glVertex2f(89.5, 83);
	glVertex2f(89, 82);
	glVertex2f(88.5, 81);
	glVertex2f(88, 80);
	glVertex2f(87.5, 79);
	glVertex2f(87, 78);
	glVertex2f(85, 77.5);
	glVertex2f(86, 77.5);
	glEnd();
	glLineWidth(4);
	glColor3f(1, 0, 1);
	glBegin(GL_LINES);
	glVertex2f(95, 92);
	glVertex2f(96.5, 92);
	glEnd();
}
void display1()
{
	char s1[] = "Start" ;
	char s2[] = "Finish" ;
	glutSetWindow(id1);
	int n = 1, x = 4, y = 4;
	char buffer[100];
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(0, 0);
	glVertex2f(10, 0);
	glVertex2f(10, 10);
	glVertex2f(0, 10);
	glEnd();
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2f(10, 0);
	glVertex2f(20, 0);
	glVertex2f(20, 10);
	glVertex2f(10, 10);
	glEnd();
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(20, 0);
	glVertex2f(30, 0);
	glVertex2f(30, 10);
	glVertex2f(20, 10);
	glEnd();
	glColor3f(0, 0, 1);
	glBegin(GL_POLYGON);
	glVertex2f(30, 0);
	glVertex2f(40, 0);
	glVertex2f(40, 10);
	glVertex2f(30, 10);
	glEnd();
	glColor3f(0, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(40, 0);
	glVertex2f(50, 0);
	glVertex2f(50, 10);
	glVertex2f(40, 10);
	glEnd();
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(50, 0);
	glVertex2f(60, 0);
	glVertex2f(60, 10);
	glVertex2f(50, 10);
	glEnd();
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2f(60, 0);
	glVertex2f(70, 0);
	glVertex2f(70, 10);
	glVertex2f(60, 10);
	glEnd();
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(70, 0);
	glVertex2f(80, 0);
	glVertex2f(80, 10);
	glVertex2f(70, 10);
	glEnd();
	glColor3f(0, 0, 1);
	glBegin(GL_POLYGON);
	glVertex2f(80, 0);
	glVertex2f(90, 0);
	glVertex2f(90, 10);
	glVertex2f(80, 10);
	glEnd();
	glColor3f(0, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(90, 0);
	glVertex2f(100, 0);
	glVertex2f(100, 10);
	glVertex2f(90, 10);
	glEnd();
	glColor3f(0, 0, 1);
	glBegin(GL_POLYGON);
	glVertex2f(0, 10);
	glVertex2f(10, 10);
	glVertex2f(10, 20);
	glVertex2f(0, 20);
	glEnd();
	glColor3f(0, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(10, 10);
	glVertex2f(20, 10);
	glVertex2f(20, 20);
	glVertex2f(10, 20);
	glEnd();
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(20, 10);
	glVertex2f(30, 10);
	glVertex2f(30, 20);
	glVertex2f(20, 20);
	glEnd();
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2f(30, 10);
	glVertex2f(40, 10);
	glVertex2f(40, 20);
	glVertex2f(30, 20);
	glEnd();
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(40, 10);
	glVertex2f(50, 10);
	glVertex2f(50, 20);
	glVertex2f(40, 20);
	glEnd();
	glColor3f(0, 0, 1);
	glBegin(GL_POLYGON);
	glVertex2f(50, 10);
	glVertex2f(60, 10);
	glVertex2f(60, 20);
	glVertex2f(50, 20);
	glEnd();
	glColor3f(0, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(60, 10);
	glVertex2f(70, 10);
	glVertex2f(70, 20);
	glVertex2f(60, 20);
	glEnd();
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(70, 10);
	glVertex2f(80, 10);
	glVertex2f(80, 20);
	glVertex2f(70, 20);
	glEnd();
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2f(80, 10);
	glVertex2f(90, 10);
	glVertex2f(90, 20);
	glVertex2f(80, 20);
	glEnd();
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(90, 10);
	glVertex2f(100, 10);
	glVertex2f(100, 20);
	glVertex2f(90, 20);
	glEnd();
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2f(0, 20);
	glVertex2f(10, 20);
	glVertex2f(10, 30);
	glVertex2f(0, 30);
	glEnd();
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(10, 20);
	glVertex2f(20, 20);
	glVertex2f(20, 30);
	glVertex2f(10, 30);
	glEnd();
	glColor3f(0, 0, 1);
	glBegin(GL_POLYGON);
	glVertex2f(20, 20);
	glVertex2f(30, 20);
	glVertex2f(30, 30);
	glVertex2f(20, 30);
	glEnd();
	glColor3f(0, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(30, 20);
	glVertex2f(40, 20);
	glVertex2f(40, 30);
	glVertex2f(30, 30);
	glEnd();
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(40, 20);
	glVertex2f(50, 20);
	glVertex2f(50, 30);
	glVertex2f(40, 30);
	glEnd();
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2f(50, 20);
	glVertex2f(60, 20);
	glVertex2f(60, 30);
	glVertex2f(50, 30);
	glEnd();
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(60, 20);
	glVertex2f(70, 20);
	glVertex2f(70, 30);
	glVertex2f(60, 30);
	glEnd();
	glColor3f(0, 0, 1);
	glBegin(GL_POLYGON);
	glVertex2f(70, 20);
	glVertex2f(80, 20);
	glVertex2f(80, 30);
	glVertex2f(70, 30);
	glEnd();
	glColor3f(0, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(80, 20);
	glVertex2f(90, 20);
	glVertex2f(90, 30);
	glVertex2f(80, 30);
	glEnd();
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(90, 20);
	glVertex2f(100, 20);
	glVertex2f(100, 30);
	glVertex2f(90, 30);
	glEnd();
	glColor3f(0, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(0, 30);
	glVertex2f(10, 30);
	glVertex2f(10, 40);
	glVertex2f(0, 40);
	glEnd();
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(10, 30);
	glVertex2f(20, 30);
	glVertex2f(20, 40);
	glVertex2f(10, 40);
	glEnd();
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2f(20, 30);
	glVertex2f(30, 30);
	glVertex2f(30, 40);
	glVertex2f(20, 40);
	glEnd();
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(30, 30);
	glVertex2f(40, 30);
	glVertex2f(40, 40);
	glVertex2f(30, 40);
	glEnd();
	glColor3f(0, 0, 1);
	glBegin(GL_POLYGON);
	glVertex2f(40, 30);
	glVertex2f(50, 30);
	glVertex2f(50, 40);
	glVertex2f(40, 40);
	glEnd();
	glColor3f(0, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(50, 30);
	glVertex2f(60, 30);
	glVertex2f(60, 40);
	glVertex2f(50, 40);
	glEnd();
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(60, 30);
	glVertex2f(70, 30);
	glVertex2f(70, 40);
	glVertex2f(60, 40);
	glEnd();
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2f(70, 30);
	glVertex2f(80, 30);
	glVertex2f(80, 40);
	glVertex2f(70, 40);
	glEnd();
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(80, 30);
	glVertex2f(90, 30);
	glVertex2f(90, 40);
	glVertex2f(80, 40);
	glEnd();
	glColor3f(0, 0, 1);
	glBegin(GL_POLYGON);
	glVertex2f(90, 30);
	glVertex2f(100, 30);
	glVertex2f(100, 40);
	glVertex2f(90, 40);
	glEnd();
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(0, 40);
	glVertex2f(10, 40);
	glVertex2f(10, 50);
	glVertex2f(0, 50);
	glEnd();
	glColor3f(0, 0, 1);
	glBegin(GL_POLYGON);
	glVertex2f(10, 40);
	glVertex2f(20, 40);
	glVertex2f(20, 50);
	glVertex2f(10, 50);
	glEnd();
	glColor3f(0, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(20, 40);
	glVertex2f(30, 40);
	glVertex2f(30, 50);
	glVertex2f(20, 50);
	glEnd();
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(30, 40);
	glVertex2f(40, 40);
	glVertex2f(40, 50);
	glVertex2f(30, 50);
	glEnd();
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2f(40, 40);
	glVertex2f(50, 40);
	glVertex2f(50, 50);
	glVertex2f(40, 50);
	glEnd();
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(50, 40);
	glVertex2f(60, 40);
	glVertex2f(60, 50);
	glVertex2f(50, 50);
	glEnd();
	glColor3f(0, 0, 1);
	glBegin(GL_POLYGON);
	glVertex2f(60, 40);
	glVertex2f(70, 40);
	glVertex2f(70, 50);
	glVertex2f(60, 50);
	glEnd();
	glColor3f(0, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(70, 40);
	glVertex2f(80, 40);
	glVertex2f(80, 50);
	glVertex2f(70, 50);
	glEnd();
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(80, 40);
	glVertex2f(90, 40);
	glVertex2f(90, 50);
	glVertex2f(80, 50);
	glEnd();
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2f(90, 40);
	glVertex2f(100, 40);
	glVertex2f(100, 50);
	glVertex2f(90, 50);
	glEnd();
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(0, 50);
	glVertex2f(10, 50);
	glVertex2f(10, 60);
	glVertex2f(0, 60);
	glEnd();
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2f(10, 50);
	glVertex2f(20, 50);
	glVertex2f(20, 60);
	glVertex2f(10, 60);
	glEnd();
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(20, 50);
	glVertex2f(30, 50);
	glVertex2f(30, 60);
	glVertex2f(20, 60);
	glEnd();
	glColor3f(0, 0, 1);
	glBegin(GL_POLYGON);
	glVertex2f(30, 50);
	glVertex2f(40, 50);
	glVertex2f(40, 60);
	glVertex2f(30, 60);
	glEnd();
	glColor3f(0, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(40, 50);
	glVertex2f(50, 50);
	glVertex2f(50, 60);
	glVertex2f(40, 60);
	glEnd();
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(50, 50);
	glVertex2f(60, 50);
	glVertex2f(60, 60);
	glVertex2f(50, 60);
	glEnd();
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2f(60, 50);
	glVertex2f(70, 50);
	glVertex2f(70, 60);
	glVertex2f(60, 60);
	glEnd();
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(70, 50);
	glVertex2f(80, 50);
	glVertex2f(80, 60);
	glVertex2f(70, 60);
	glEnd();
	glColor3f(0, 0, 1);
	glBegin(GL_POLYGON);
	glVertex2f(80, 50);
	glVertex2f(90, 50);
	glVertex2f(90, 60);
	glVertex2f(80, 60);
	glEnd();
	glColor3f(0, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(90, 50);
	glVertex2f(100, 50);
	glVertex2f(100, 60);
	glVertex2f(90, 60);
	glEnd();
	glColor3f(0, 0, 1);
	glBegin(GL_POLYGON);
	glVertex2f(0, 60);
	glVertex2f(10, 60);
	glVertex2f(10, 70);
	glVertex2f(0, 70);
	glEnd();
	glColor3f(0, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(10, 60);
	glVertex2f(20, 60);
	glVertex2f(20, 70);
	glVertex2f(10, 70);
	glEnd();
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(20, 60);
	glVertex2f(30, 60);
	glVertex2f(30, 70);
	glVertex2f(20, 70);
	glEnd();
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2f(30, 60);
	glVertex2f(40, 60);
	glVertex2f(40, 70);
	glVertex2f(30, 70);
	glEnd();
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(40, 60);
	glVertex2f(50, 60);
	glVertex2f(50, 70);
	glVertex2f(40, 70);
	glEnd();
	glColor3f(0, 0, 1);
	glBegin(GL_POLYGON);
	glVertex2f(50, 60);
	glVertex2f(60, 60);
	glVertex2f(60, 70);
	glVertex2f(50, 70);
	glEnd();
	glColor3f(0, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(60, 60);
	glVertex2f(70, 60);
	glVertex2f(70, 70);
	glVertex2f(60, 70);
	glEnd();
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(70, 60);
	glVertex2f(80, 60);
	glVertex2f(80, 70);
	glVertex2f(70, 70);
	glEnd();
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2f(80, 60);
	glVertex2f(90, 60);
	glVertex2f(90, 70);
	glVertex2f(80, 70);
	glEnd();
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(90, 60);
	glVertex2f(100, 60);
	glVertex2f(100, 70);
	glVertex2f(90, 70);
	glEnd();
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2f(0, 70);
	glVertex2f(10, 70);
	glVertex2f(10, 80);
	glVertex2f(0, 80);
	glEnd();
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(10, 70);
	glVertex2f(20, 70);
	glVertex2f(20, 80);
	glVertex2f(10, 80);
	glEnd();
	glColor3f(0, 0, 1);
	glBegin(GL_POLYGON);
	glVertex2f(20, 70);
	glVertex2f(30, 70);
	glVertex2f(30, 80);
	glVertex2f(20, 80);
	glEnd();
	glColor3f(0, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(30, 70);
	glVertex2f(40, 70);
	glVertex2f(40, 80);
	glVertex2f(30, 80);
	glEnd();
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(40, 70);
	glVertex2f(50, 70);
	glVertex2f(50, 80);
	glVertex2f(40, 80);
	glEnd();
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2f(50, 70);
	glVertex2f(60, 70);
	glVertex2f(60, 80);
	glVertex2f(50, 80);
	glEnd();
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(60, 70);
	glVertex2f(70, 70);
	glVertex2f(70, 80);
	glVertex2f(60, 80);
	glEnd();
	glColor3f(0, 0, 1);
	glBegin(GL_POLYGON);
	glVertex2f(70, 70);
	glVertex2f(80, 70);
	glVertex2f(80, 80);
	glVertex2f(70, 80);
	glEnd();
	glColor3f(0, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(80, 70);
	glVertex2f(90, 70);
	glVertex2f(90, 80);
	glVertex2f(80, 80);
	glEnd();
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(90, 70);
	glVertex2f(100, 70);
	glVertex2f(100, 80);
	glVertex2f(90, 80);
	glEnd();
	glColor3f(0, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(0, 80);
	glVertex2f(10, 80);
	glVertex2f(10, 90);
	glVertex2f(0, 90);
	glEnd();
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(10, 80);
	glVertex2f(20, 80);
	glVertex2f(20, 90);
	glVertex2f(10, 90);
	glEnd();
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2f(20, 80);
	glVertex2f(30, 80);
	glVertex2f(30, 90);
	glVertex2f(20, 90);
	glEnd();
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(30, 80);
	glVertex2f(40, 80);
	glVertex2f(40, 90);
	glVertex2f(30, 90);
	glEnd();
	glColor3f(0, 0, 1);
	glBegin(GL_POLYGON);
	glVertex2f(40, 80);
	glVertex2f(50, 80);
	glVertex2f(50, 90);
	glVertex2f(40, 90);
	glEnd();
	glColor3f(0, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(50, 80);
	glVertex2f(60, 80);
	glVertex2f(60, 90);
	glVertex2f(50, 90);
	glEnd();
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(60, 80);
	glVertex2f(70, 80);
	glVertex2f(70, 90);
	glVertex2f(60, 90);
	glEnd();
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2f(70, 80);
	glVertex2f(80, 80);
	glVertex2f(80, 90);
	glVertex2f(70, 90);
	glEnd();
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(80, 80);
	glVertex2f(90, 80);
	glVertex2f(90, 90);
	glVertex2f(80, 90);
	glEnd();
	glColor3f(0, 0, 1);
	glBegin(GL_POLYGON);
	glVertex2f(90, 80);
	glVertex2f(100, 80);
	glVertex2f(100, 90);
	glVertex2f(90, 90);
	glEnd();
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(0, 90);
	glVertex2f(10, 90);
	glVertex2f(10, 100);
	glVertex2f(0, 100);
	glEnd();
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2f(10, 90);
	glVertex2f(20, 90);
	glVertex2f(20, 100);
	glVertex2f(10, 100);
	glEnd();
	glColor3f(0, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(20, 90);
	glVertex2f(30, 90);
	glVertex2f(30, 100);
	glVertex2f(20, 100);
	glEnd();
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(30, 90);
	glVertex2f(40, 90);
	glVertex2f(40, 100);
	glVertex2f(30, 100);
	glEnd();
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2f(40, 90);
	glVertex2f(50, 90);
	glVertex2f(50, 100);
	glVertex2f(40, 100);
	glEnd();
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(50, 90);
	glVertex2f(60, 90);
	glVertex2f(60, 100);
	glVertex2f(50, 100);
	glEnd();
	glColor3f(0, 0, 1);
	glBegin(GL_POLYGON);
	glVertex2f(60, 90);
	glVertex2f(70, 90);
	glVertex2f(70, 100);
	glVertex2f(60, 100);
	glEnd();
	glColor3f(0, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(70, 90);
	glVertex2f(80, 90);
	glVertex2f(80, 100);
	glVertex2f(70, 100);
	glEnd();
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(80, 90);
	glVertex2f(90, 90);
	glVertex2f(90, 100);
	glVertex2f(80, 100);
	glEnd();
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2f(90, 90);
	glVertex2f(100, 90);
	glVertex2f(100, 100);
	glVertex2f(90, 100);
	glEnd();
	glColor3f(0.647, 0.164, 0.164);
	glLineWidth(7);
	glBegin(GL_LINES);
	glVertex2f(32, 7);
	glVertex2f(15, 34);
	glVertex2f(35, 8);
	glVertex2f(19, 35);
	glVertex2f(56, 18);
	glVertex2f(72, 43);
	glVertex2f(59, 18);
	glVertex2f(75, 43);
	glVertex2f(44, 26);
	glVertex2f(26, 44);
	glVertex2f(47, 28);
	glVertex2f(29, 47);
	glVertex2f(26, 57);
	glVertex2f(42, 82);
	glVertex2f(29, 57);
	glVertex2f(45, 83);
	glVertex2f(73, 67);
	glVertex2f(57, 93);
	glVertex2f(76, 68);
	glVertex2f(60, 94);
	glVertex2f(14, 66);
	glVertex2f(6, 84);
	glVertex2f(17, 68);
	glVertex2f(8, 87);
	glEnd();
	glRasterPos2f(0, 1.5);
	glColor3f(1, 1, 1);
	for (int i = 0; i < sizeof(s1); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s1[i]);
	glRasterPos2f(0, 91);
	glColor3f(0, 0, 1);
	for (int i = 0; i < sizeof(s2); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s2[i]);
	snakes();
	glColor3f(0, 0, 0);
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			_itoa_s(n, buffer, 10);
			glRasterPos2f(x, y);
			for (int u = 0; u <= strlen(buffer); u++)
			{
				glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, buffer[u]);
			}
			if (i % 2 == 0)
				x = x - 10;
			else
				x = x + 10;
			n++;
		}
		if (i % 2 == 1)
			x = 94;
		else
			x = 4;
		y = y + 10;
	}
	glColor3f(0.647, 0.164, 0.164);
	glLineWidth(7);
	glBegin(GL_LINES);
	glVertex2f(94, 36);
	glVertex2f(85, 54);
	glVertex2f(97, 38);
	glVertex2f(88, 57);
	glEnd();
	if (((val1 > 0) && (val1<11)) | ((val1>20) && (val1<31)) | ((val1>40) && (val1<51)) | ((val1>60) && (val1<71)) | ((val1>80) && (val1 < 91)))
	{
		x2 = (val1 - 1) * 10 + 4;
		if ((val1 > 0) && (val1 < 11))
		{
			x2 = (val1 - 1) * 10 + 4;
			y2 = 3;
		}
		else if ((val1>20) && (val1 < 31))
		{
			x2 = (val1 - 21) * 10 + 4;
			y2 = 23;
		}
		else if ((val1>40) && (val1 < 51))
		{
			x2 = (val1 - 41) * 10 + 4;
			y2 = 43;
		}
		else if ((val1>60) && (val1 < 71))
		{
			x2 = (val1 - 61) * 10 + 4;
			y2 = 63;
		}
		else if ((val1>80) && (val1 < 91))
		{
			x2 = (val1 - 81) * 10 + 4;
			y2 = 83;
		}
		glPointSize(20);
		glColor3f(0.53, 0.12, 0.47);
		glBegin(GL_POINTS);
		glVertex2f(x2, y2);
		glEnd();

		glFlush();
	}
	else if (((val1 > 10) && (val1<21)) | ((val1>30) && (val1<41)) | ((val1>50) && (val1<61)) | ((val1>70) && (val1<81)) | ((val1>90) && (val1 < 101)))
	{
		if ((val1 > 10) && (val1 < 21))
		{
			x2 = (20 - val1) * 10 + 4;
			y2 = 13;
		}
		else if ((val1>30) && (val1 < 41))
		{
			x2 = (40 - val1) * 10 + 4;
			y2 = 33;
		}
		else if ((val1>50) && (val1 < 61))
		{
			x2 = (60 - val1) * 10 + 4;
			y2 = 53;
		}
		else if ((val1>70) && (val1 < 81))
		{
			x2 = (80 - val1) * 10 + 4;
			y2 = 73;
		}
		else if ((val1>90) && (val1 < 101))
		{
			x2 = (100 - val1) * 10 + 4;
			y2 = 93;
		}
		glPointSize(20);
		glColor3f(0.53, 0.12, 0.47);
		glBegin(GL_POINTS);
		glVertex2f(x2, y2);
		glEnd();
		glFlush();
	}
	if (((val2 > 0) && (val2<11)) | ((val2>20) && (val2<31)) | ((val2>40) && (val2<51)) | ((val2>60) && (val2<71)) | ((val2>80) && (val2 < 91)))
	{
		x2 = (val2 - 1) * 10 + 4;
		if ((val2 > 0) && (val2 < 11))
		{
			x2 = (val2 - 1) * 10 + 6;
			y2 = 3;
		}
		else if ((val2>20) && (val2 < 31))
		{
			x2 = (val2 - 21) * 10 + 6;
			y2 = 23;
		}
		else if ((val2>40) && (val2 < 51))
		{
			x2 = (val2 - 41) * 10 + 6;
			y2 = 43;
		}
		else if ((val2>60) && (val2 < 71))
		{
			x2 = (val2 - 61) * 10 + 6;
			y2 = 63;
		}
		else if ((val2>80) && (val2 < 91))
		{
			x2 = (val2 - 81) * 10 + 6;
			y2 = 83;
		}
		glPointSize(20);
		glColor3f(0.5, 0.35, 0.05);
		glBegin(GL_POINTS);
		glVertex2f(x2, y2);
		glEnd();
		glFlush();
	}
	else if (((val2 > 10) && (val2<21)) | ((val2>30) && (val2<41)) | ((val2>50) && (val2<61)) | ((val2>70) && (val2<81)) | ((val2>90) && (val2 < 101)))
	{
		if ((val2 > 10) && (val2 < 21))
		{
			x2 = (20 - val2) * 10 + 6;
			y2 = 13;
		}
		else if ((val2>30) && (val2 < 41))
		{
			x2 = (40 - val2) * 10 + 6;
			y2 = 33;
		}
		else if ((val2>50) && (val2 < 61))
		{
			x2 = (60 - val2) * 10 + 6;
			y2 = 53;
		}
		else if ((val2>70) && (val2 < 81))
		{
			x2 = (80 - val2) * 10 + 6;
			y2 = 73;
		}
		else if ((val2>90) && (val2 < 101))
		{
			x2 = (100 - val2) * 10 + 6;
			y2 = 93;
		}
		glPointSize(20);
		glColor3f(0.5, 0.35, 0.05);
		glBegin(GL_POINTS);
		glVertex2f(x2, y2);
		glEnd();
		glFlush();
	}
}
void display3()
{
	char s3[] = "Player-A wins";
	char s4[] = "Player-B wins";
	char s5[] = "Press (R) to restart or (Q) to quit";
	char s6[] = "Restart (R)";
	char s7[] = "Quit (Q)";
	glutSetWindow(id3);
	glClearColor(0, 0, 0, 0);
	glClear(GL_COLOR_BUFFER_BIT);
	if (val1 >= 100)
	{
		glClearColor(0, 0, 0, 0);
		glClear(GL_COLOR_BUFFER_BIT);
		glRasterPos2f(45, 50);
		glColor3f(1, 1, 1);
		for (int i = 0; i < sizeof(s3); i++)
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s3[i]);
		glFlush();
	}
	else
	{
		glClearColor(0, 0, 0, 0);
		glClear(GL_COLOR_BUFFER_BIT);
		glRasterPos2f(45, 50);
		glColor3f(1, 1, 1);
		for (int i = 0; i < sizeof(s4); i++)
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s4[i]);
		glFlush();
	}
	glRasterPos2f(36, 15);
	glColor3f(1, 1, 1);
	for (int i = 0; i < sizeof(s5); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s5[i]);
	glFlush();
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(60, 35);
	glVertex2f(45, 35);
	glVertex2f(45, 40);
	glVertex2f(60, 40);
	glEnd();
	glColor3f(1, 0, 1);
	glRasterPos2f(48, 36);
	for (int i = 0; i < sizeof(s6); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s6[i]);
	glFlush();
	glColor3f(1, 0, 1);
	glBegin(GL_POLYGON);
	glVertex2f(60, 30);
	glVertex2f(45, 30);
	glVertex2f(45, 25);
	glVertex2f(60, 25);
	glEnd();
	glColor3f(1, 1, 0);
	glRasterPos2f(48, 26.5);
	for (int i = 0; i < sizeof(s7); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s7[i]);
	glutKeyboardFunc(mykey);
	glFlush();
}
void display2()
{
	char s8[] = "UR GAMES";
	char s9[] = "Snake & Ladder";
	char s10[] = "Click mouse to take turn";
	char s11[] = "Player A ->";
	char s12[] = "Player B ->";
	char s13[] = "DIE";
	char s14[] = "Move By";
	val1 = 0;
	val2 = 0;
	flag = 0;
	glutSetWindow(id2);
	char str[10];
	glClearColor(0, 0, 0, 0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1, 1, 0);   //change color to this
	glRasterPos2f(40, 50);
	for (int i = 0; i < sizeof(s8); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s8[i]);
	glFlush();
	Sleep(4800);
	glClearColor(0, 0, 0, 0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0, 1, 0);   //change color to this
	glRasterPos2f(30, 50);
	for (int i = 0; i < sizeof(s9); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s9[i]);
	glFlush();
	Sleep(4800);
	//	glutSetWindow(id2);
	glClearColor(0.4, 0.7, 0.9, 0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1, 1, 1);
	glRasterPos2f(16, 97);
	for (int i = 0; i < sizeof(s10); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s10[i]);
	glEnd();
	glRasterPos2f(10, 30);
	glColor3f(1, 1, 1);
	for (int i = 0; i < sizeof(s11); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s11[i]);
	glEnd();
	glPointSize(14);
	glColor3f(0.53, 0.12, 0.47);
	glBegin(GL_POINTS);
	glVertex2f(36, 30.75);
	glEnd();
	glColor3f(1, 1, 1);
	glRasterPos2f(69, 30);
	for (int i = 0; i < sizeof(s12); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s12[i]);
	glEnd();
	glPointSize(14);
	glColor3f(0.5, 0.35, 0.05);
	glBegin(GL_POINTS);
	glVertex2f(94.75, 30.75);
	glEnd();
	glColor3f(1, 1, 1);
	glRasterPos2f(43, 85);
	for (int i = 0; i < sizeof(s13); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s13[i]);
	glEnd();
	glRasterPos2f(40, 43);
	glColor3f(1, 1, 1);
	for (int i = 0; i < sizeof(s14); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s14[i]);
	glEnd();
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(40, 80);
	glVertex2f(60, 80);
	glVertex2f(60, 60);
	glVertex2f(40, 60);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(15, 10);
	glVertex2f(15, 20);
	glVertex2f(30, 20);
	glVertex2f(30, 10);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(75, 10);
	glVertex2f(75, 20);
	glVertex2f(90, 20);
	glVertex2f(90, 10);
	glEnd();
	glPointSize(14);
	glColor3f(0.53, 0.12, 0.47);
	glBegin(GL_POINTS);
	glVertex2f(20, 8);
	glEnd();
	glPointSize(14);
	glColor3f(0.4, 0.7, 0.9);
	glBegin(GL_POINTS);
	glVertex2f(80, 8);
	glEnd();
	glutMouseFunc(mymouse);
	glFlush();
}
void mymouse(int btn, int st, int x, int y)
{
	if ((btn == GLUT_LEFT_BUTTON && st == GLUT_DOWN) || (btn == GLUT_RIGHT_BUTTON && st == GLUT_DOWN))
	{
		int r;
		char str1[10], str2[10], str3[10];
		char s15[] = "Ladder 4->39";
		char s16[] = "Ladder 15->48";
		char s17[] = "Ladder 25->43";
		char s18[] = "Ladder 31->52";
		char s19[] = "Ladder 58->85";
		char s20[] = "Ladder 62->81";
		char s21[] = "Ladder 68->95";
		char s22[] = "Snake 28->10";
		char s23[] = "Snake 42->21";
		char s24[] = "Snake 56->34";
		char s25[] = "Snake 75->53";
		char s26[] = "Snake 91->72";
		char s27[] = "Snake 99->77";
		//PlaySound(TEXT("beep1.wav"), NULL, SND_ASYNC | SND_FILENAME);
	again:  srand((unsigned)time(0));
			r = rand() % 7;
		if (val1 < 100 && val2 < 100)
		{
			glColor3f(0.4, 0.7, 0.9);
			glBegin(GL_POLYGON);
			glVertex2f(75, 8);
			glVertex2f(26, 8);
			glVertex2f(75, 29);
			glVertex2f(26, 29);
			glEnd();
			glColor3f(0, 0, 0);
			glBegin(GL_POLYGON);
			glVertex2f(40, 80);
			glVertex2f(60, 80);
			glVertex2f(60, 60);
			glVertex2f(40, 60);
			glEnd();
			glColor3f(1, 1, 1);
			_itoa_s(r, str1, 10);
			glRasterPos2f(49, 70);
			switch (r)
			{
			case 0: goto again;
			case 1:{ for (int u = 0; u <= strlen(str1); u++)
			{
					   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str1[u]);

			}
				   if (flag % 2 == 0)
				   {
					   glColor3f(0, 0, 0);
					   glBegin(GL_POLYGON);
					   glVertex2f(15, 10);
					   glVertex2f(15, 20);
					   glVertex2f(30, 20);
					   glVertex2f(30, 10);
					   glEnd();
					   glPointSize(14);
					   glColor3f(0.4, 0.7, 0.9);
					   glBegin(GL_POINTS);
					   glVertex2f(20, 8);
					   glEnd();
					   glPointSize(14);
					   glColor3f(0.5, 0.35, 0.05);
					   glBegin(GL_POINTS);
					   glVertex2f(80, 8);
					   glEnd();
					   val1 += r;
					   if (val1 == 4)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s15); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s15[i]);
						   val1 = 39;
					   }
					   else if (val1 == 15)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s16); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s16[i]);
						   val2 = 48;
					   }
					   else if (val1 == 25)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(42, 10);
						   for (int i = 0; i < sizeof(s17); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s17[i]);
						   val1 = 43;
					   }
					   else if (val1 == 31)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s18); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s18[i]);
						   val1 = 52;
					   }
					   else if (val1 == 58)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s19); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s19[i]);
						   val1 = 85;
					   }
					   else if (val1 == 62)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(20); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s20[i]);
						   val1 = 81;
					   }
					   else if (val1 == 68)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s21); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s21[i]);
						   val1 = 95;
					   }
					   if (val1 == 28)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s22); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s22[i]);
					   }
					   else if (val1 == 42)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s23); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s23[i]);
						   val1 = 21;
					   }
					   else if (val1 == 56)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s24); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s24[i]);
						   val1 = 34;
					   }
					   else if (val1 == 75)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s25); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s25[i]);
						   val1 = 53;
					   }
					   else if (val1 == 91)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s26); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s20[i]);
						   val1 = 72;
					   }
					   else if (val1 == 99)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s27); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s27[i]);
						   val1 = 77;
					   }
					   glColor3f(1, 1, 1);
					   _itoa_s(val1, str2, 10);
					   glRasterPos2f(20, 15);
					   for (int u = 0; u <= strlen(str2); u++)
						   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str2[u]);
					   display1();
				   }
				   else
				   {

					   glColor3f(0, 0, 0);
					   glBegin(GL_POLYGON);
					   glVertex2f(75, 10);
					   glVertex2f(75, 20);
					   glVertex2f(90, 20);
					   glVertex2f(90, 10);
					   glEnd();
					   glPointSize(14);
					   glColor3f(0.53, 0.12, 0.47);
					   glBegin(GL_POINTS);
					   glVertex2f(20, 8);
					   glEnd();
					   glPointSize(14);
					   glColor3f(0.4, 0.7, 0.9);
					   glBegin(GL_POINTS);
					   glVertex2f(80, 8);
					   glEnd();
					   val2 += r;
					   if (val2 == 4)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s15); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s15[i]);
						   val2 = 39;
					   }
					   else if (val2 == 15)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s16); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s16[i]);
						   val2 = 48;
					   }
					   else if (val2 == 25)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s17); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s17[i]);
						   val2 = 43;
					   }
					   else if (val2 == 31)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s18); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s18[i]);
						   val2 = 52;
					   }
					   else if (val2 == 58)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s19); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s19[i]);
						   val2 = 85;
					   }
					   else if (val2 == 62)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s20); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s20[i]);
						   val2 = 81;
					   }
					   else if (val2 == 68)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s21); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s21[i]);
						   val2 = 95;
					   }
					   if (val2 == 28)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s22); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s22[i]);
						   val2 = 10;
					   }
					   else if (val2 == 42)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s23); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s23[i]);
						   val2 = 21;
					   }
					   else if (val2 == 56)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s24); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s24[i]);
						   val2 = 34;
					   }
					   else if (val2 == 75)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s25); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s25[i]);
						   val2 = 53;
					   }
					   else if (val2 == 91)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s26); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s26[i]);
						   val2 = 72;
					   }
					   else if (val2 == 99)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s27); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s27[i]);
						   val2 = 77;
					   }
					   glColor3f(1, 1, 1);
					   _itoa_s(val2, str3, 10);
					   glRasterPos2f(80, 15);
					   for (int u = 0; u <= strlen(str3); u++)
						   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str3[u]);
					   display1();
				   }
			}
				break;
			case 2:{ for (int u = 0; u <= strlen(str1); u++)
			{
					   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str1[u]);

			}
				   if (flag % 2 == 0)
				   {
					   glColor3f(0, 0, 0);
					   glBegin(GL_POLYGON);
					   glVertex2f(15, 10);
					   glVertex2f(15, 20);
					   glVertex2f(30, 20);
					   glVertex2f(30, 10);
					   glEnd();
					   glPointSize(14);
					   glColor3f(0.4, 0.7, 0.9);
					   glBegin(GL_POINTS);
					   glVertex2f(20, 8);
					   glEnd();
					   glPointSize(14);
					   glColor3f(0.5, 0.35, 0.05);
					   glBegin(GL_POINTS);
					   glVertex2f(80, 8);
					   glEnd();
					   val1 += r;
					   if (val1 == 4)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s15); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s15[i]);
						   val1 = 39;
					   }
					   else if (val1 == 15)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s16); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s16[i]);
						   val1 = 48;
					   }
					   else if (val1 == 25)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s17); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s17[i]);
						   val1 = 43;
					   }
					   else if (val1 == 31)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s18); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s18[i]);
						   val1 = 52;
					   }
					   else if (val1 == 58)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s19); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s19[i]);
						   val1 = 85;
					   }
					   else if (val1 == 62)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s20); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s20[i]);
						   val1 = 81;
					   }
					   else if (val1 == 68)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s21); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s21[i]);
						   val1 = 95;
					   }
					   if (val1 == 28)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s22); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s22[i]);
						   val1 = 10;
					   }
					   else if (val1 == 42)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s23); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s23[i]);
						   val1 = 21;
					   }
					   else if (val1 == 56)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s24); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s24[i]);
						   val1 = 34;
					   }
					   else if (val1 == 75)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s25); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s25[i]);
						   val1 = 53;
					   }
					   else if (val1 == 91)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s26); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s26[i]);
						   val1 = 72;
					   }
					   else if (val1 == 99)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s27); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s27[i]);
						   val1 = 77;
					   }
					   glColor3f(1, 1, 1);
					   _itoa_s(val1, str2, 10);
					   glRasterPos2f(20, 15);
					   for (int u = 0; u <= strlen(str2); u++)
						   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str2[u]);
					   display1();
				   }
				   else
				   {

					   glColor3f(0, 0, 0);
					   glBegin(GL_POLYGON);
					   glVertex2f(75, 10);
					   glVertex2f(75, 20);
					   glVertex2f(90, 20);
					   glVertex2f(90, 10);
					   glEnd();
					   glPointSize(14);
					   glColor3f(0.53, 0.12, 0.47);
					   glBegin(GL_POINTS);
					   glVertex2f(20, 8);
					   glEnd();
					   glPointSize(14);
					   glColor3f(0.4, 0.7, 0.9);
					   glBegin(GL_POINTS);
					   glVertex2f(80, 8);
					   glEnd();
					   val2 += r;
					   if (val2 == 4)
					   {
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s15); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s15[i]);
						   val2 = 39;
					   }
					   else if (val2 == 15)
					   {
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s16); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s16[i]);
						   val2 = 48;
					   }
					   else if (val2 == 25)
					   {
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s17); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s17[i]);
						   val2 = 43;
					   }
					   else if (val2 == 31)
					   {
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s18); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s18[i]);
						   val2 = 52;
					   }
					   else if (val2 == 58)
					   {
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s19); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s19[i]);
						   val2 = 85;
					   }
					   else if (val2 == 62)
					   {
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s20); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s20[i]);
						   val2 = 81;
					   }
					   else if (val2 == 68)
					   {
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s21); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s21[i]);
						   val2 = 95;
					   }
					   if (val2 == 28)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s22); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s22[i]);
						   val2 = 10;
					   }
					   else if (val2 == 42)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s23); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s23[i]);
						   val2 = 21;
					   }
					   else if (val2 == 56)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s24); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s24[i]);
						   val2 = 34;
					   }
					   else if (val2 == 75)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s25); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s25[i]);
						   val2 = 53;
					   }
					   else if (val2 == 91)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s26); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s26[i]);
						   val2 = 72;
					   }
					   else if (val2 == 99)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						    for (int i = 0; i < sizeof(s27); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s27[i]);
						   val2 = 77;
					   }
					   glColor3f(1, 1, 1);
					   _itoa_s(val2, str3, 10);
					   glRasterPos2f(80, 15);
					   for (int u = 0; u <= strlen(str3); u++)
						   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str3[u]);
					   display1();
				   }
			}
				break;
			case 3:{ for (int u = 0; u <= strlen(str1); u++)
			{
					   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str1[u]);

			}
				   if (flag % 2 == 0)
				   {
					   glColor3f(0, 0, 0);
					   glBegin(GL_POLYGON);
					   glVertex2f(15, 10);
					   glVertex2f(15, 20);
					   glVertex2f(30, 20);
					   glVertex2f(30, 10);
					   glEnd();
					   glPointSize(14);
					   glColor3f(0.4, 0.7, 0.9);
					   glBegin(GL_POINTS);
					   glVertex2f(20, 8);
					   glEnd();
					   glPointSize(14);
					   glColor3f(0.5, 0.35, 0.05);
					   glBegin(GL_POINTS);
					   glVertex2f(80, 8);
					   glEnd();
					   val1 += r;
					   if (val1 == 4)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s15); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s15[i]);
						   val1 = 39;
					   }
					   else if (val1 == 15)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s16); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s16[i]);
						   val1 = 48;
					   }
					   else if (val1 == 25)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s17); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s17[i]);
						   val1 = 43;
					   }
					   else if (val1 == 31)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s18); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s18[i]);
						   val1 = 52;
					   }
					   else if (val1 == 58)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s19); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s19[i]);
						   val1 = 85;
					   }
					   else if (val1 == 62)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s20); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s20[i]);
						   val1 = 81;
					   }
					   else if (val1 == 68)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s21); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s21[i]);
						   val1 = 95;
					   }
					   if (val1 == 28)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s22); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s22[i]);
						   val1 = 10;
					   }
					   else if (val1 == 42)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s23); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s23[i]);
						   val1 = 21;
					   }
					   else if (val1 == 56)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s24); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s24[i]);
						   val1 = 34;
					   }
					   else if (val1 == 75)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s25); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s25[i]);
						   val1 = 53;
					   }
					   else if (val1 == 91)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s26); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s26[i]);
						   val1 = 72;
					   }
					   else if (val1 == 99)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s27); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s27[i]);
						   val1 = 77;
					   }
					   glColor3f(1, 1, 1);
					   _itoa_s(val1, str2, 10);
					   glRasterPos2f(20, 15);
					   for (int u = 0; u <= strlen(str2); u++)
						   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str2[u]);
					   display1();
				   }
				   else
				   {

					   glColor3f(0, 0, 0);
					   glBegin(GL_POLYGON);
					   glVertex2f(75, 10);
					   glVertex2f(75, 20);
					   glVertex2f(90, 20);
					   glVertex2f(90, 10);
					   glEnd();
					   glPointSize(14);
					   glColor3f(0.53, 0.12, 0.47);
					   glBegin(GL_POINTS);
					   glVertex2f(20, 8);
					   glEnd();
					   glPointSize(14);
					   glColor3f(0.4, 0.7, 0.9);
					   glBegin(GL_POINTS);
					   glVertex2f(80, 8);
					   glEnd();
					   val2 += r;
					   if (val2 == 4)
					   {
						   glRasterPos2f(36, 10);
						   for (int i = 0; i <sizeof(s15); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s15[i]);
						   val2 = 39;
					   }
					   else if (val2 == 15)
					   {
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s16); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s16[i]);
						   val2 = 48;
					   }
					   else if (val2 == 25)
					   {
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s17); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s17[i]);
						   val2 = 43;
					   }
					   else if (val2 == 31)
					   {
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s18); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s18[i]);
						   val2 = 52;
					   }
					   else if (val2 == 58)
					   {
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s19); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s19[i]);
						   val2 = 85;
					   }
					   else if (val2 == 62)
					   {
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s20); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s20[i]);
						   val2 = 81;
					   }
					   else if (val2 == 68)
					   {
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s21); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s21[i]);
						   val2 = 95;
					   }
					   if (val2 == 28)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s22); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s22[i]);
						   val2 = 10;
					   }
					   else if (val2 == 42)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s23); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s23[i]);
						   val2 = 21;
					   }
					   else if (val2 == 56)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s24); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s24[i]);
						   val2 = 34;
					   }
					   else if (val2 == 75)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s25); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s25[i]);
						   val2 = 53;
					   }
					   else if (val2 == 91)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s26); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s26[i]);
						   val2 = 72;
					   }
					   else if (val2 == 99)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s27); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s27[i]);
						   val2 = 77;
					   }
					   glColor3f(1, 1, 1);
					   _itoa_s(val2, str3, 10);
					   glRasterPos2f(80, 15);
					   for (int u = 0; u <= strlen(str3); u++)
						   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str3[u]);
					   display1();
				   }
			}
				break;
			case 4:{ for (int u = 0; u <= strlen(str1); u++)
			{
					   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str1[u]);

			}
				   if (flag % 2 == 0)
				   {
					   glColor3f(0, 0, 0);
					   glBegin(GL_POLYGON);
					   glVertex2f(15, 10);
					   glVertex2f(15, 20);
					   glVertex2f(30, 20);
					   glVertex2f(30, 10);
					   glEnd();
					   glPointSize(14);
					   glColor3f(0.4, 0.7, 0.9);
					   glBegin(GL_POINTS);
					   glVertex2f(20, 8);
					   glEnd();
					   glPointSize(14);
					   glColor3f(0.5, 0.35, 0.05);
					   glBegin(GL_POINTS);
					   glVertex2f(80, 8);
					   glEnd();
					   val1 += r;
					   if (val1 == 4)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s15); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s15[i]);
						   val1 = 39;
					   }
					   else if (val1 == 15)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s16); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s16[i]);
						   val1 = 48;
					   }
					   else if (val1 == 25)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s17); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s17[i]);
						   val1 = 43;
					   }
					   else if (val1 == 31)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s18); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s18[i]);
						   val1 = 52;
					   }
					   else if (val1 == 58)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s19); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s19[i]);
						   val1 = 85;
					   }
					   else if (val1 == 62)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s20); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s20[i]);
						   val1 = 81;
					   }
					   else if (val1 == 68)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s21); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s21[i]);
						   val1 = 95;
					   }
					   if (val1 == 28)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i <sizeof(s22); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s22[i]);
						   val1 = 10;
					   }
					   else if (val1 == 42)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i <sizeof(s23); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s23[i]);
						   val1 = 21;
					   }
					   else if (val1 == 56)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s24); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s24[i]);
						   val1 = 34;
					   }
					   else if (val1 == 75)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s25); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s25[i]);
						   val1 = 53;
					   }
					   else if (val1 == 91)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s26); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s26[i]);
						   val1 = 72;
					   }
					   else if (val1 == 99)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s27); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s27[i]);
						   val1 = 77;
					   }
					   glColor3f(1, 1, 1);
					   _itoa_s(val1, str2, 10);
					   glRasterPos2f(20, 15);
					   for (int u = 0; u <= strlen(str2); u++)
						   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str2[u]);
					   display1();
				   }
				   else
				   {

					   glColor3f(0, 0, 0);
					   glBegin(GL_POLYGON);
					   glVertex2f(75, 10);
					   glVertex2f(75, 20);
					   glVertex2f(90, 20);
					   glVertex2f(90, 10);
					   glEnd();
					   glPointSize(14);
					   glColor3f(0.53, 0.12, 0.47);
					   glBegin(GL_POINTS);
					   glVertex2f(20, 8);
					   glEnd();
					   glPointSize(14);
					   glColor3f(0.4, 0.7, 0.9);
					   glBegin(GL_POINTS);
					   glVertex2f(80, 8);
					   glEnd();
					   val2 += r;
					   if (val2 == 4)
					   {
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s15); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s15[i]);
						   val2 = 39;
					   }
					   else if (val2 == 15)
					   {
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s16); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s16[i]);
						   val2 = 48;
					   }
					   else if (val2 == 25)
					   {
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s17); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s17[i]);
						   val2 = 43;
					   }
					   else if (val2 == 31)
					   {
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s18); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s18[i]);
						   val2 = 52;
					   }
					   else if (val2 == 58)
					   {
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s19); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s19[i]);
						   val2 = 85;
					   }
					   else if (val2 == 62)
					   {
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s20); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s20[i]);
						   val2 = 81;
					   }
					   else if (val2 == 68)
					   {
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s21); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s21[i]);
						   val2 = 95;
					   }
					   if (val2 == 28)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s22); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s22[i]);
						   val2 = 10;
					   }
					   else if (val2 == 42)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s23); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s23[i]);
						   val2 = 21;
					   }
					   else if (val2 == 56)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s24); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s24[i]);
						   val2 = 34;
					   }
					   else if (val2 == 75)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s25); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s25[i]);
						   val2 = 53;
					   }
					   else if (val2 == 91)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s26); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s26[i]);
						   val2 = 72;
					   }
					   else if (val2 == 99)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s27); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s27[i]);
						   val2 = 77;
					   }
					   glColor3f(1, 1, 1);
					   _itoa_s(val2, str3, 10);
					   glRasterPos2f(80, 15);
					   for (int u = 0; u <= strlen(str3); u++)
						   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str3[u]);
					   display1();
				   }
			}
				break;
			case 5:{ for (int u = 0; u <= strlen(str1); u++)
			{
					   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str1[u]);

			}
				   if (flag % 2 == 0)
				   {
					   glColor3f(0, 0, 0);
					   glBegin(GL_POLYGON);
					   glVertex2f(15, 10);
					   glVertex2f(15, 20);
					   glVertex2f(30, 20);
					   glVertex2f(30, 10);
					   glEnd();
					   glPointSize(14);
					   glColor3f(0.4, 0.7, 0.9);
					   glBegin(GL_POINTS);
					   glVertex2f(20, 8);
					   glEnd();
					   glPointSize(14);
					   glColor3f(0.5, 0.35, 0.05);
					   glBegin(GL_POINTS);
					   glVertex2f(80, 8);
					   glEnd();
					   val1 += r;
					   if (val1 == 4)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s15); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s15[i]);
						   val1 = 39;
					   }
					   else if (val1 == 15)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s16); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s16[i]);
						   val1 = 48;
					   }
					   else if (val1 == 25)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s17); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s17[i]);
						   val1 = 43;
					   }
					   else if (val1 == 31)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s18); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s18[i]);
						   val1 = 52;
					   }
					   else if (val1 == 58)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s19); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s19[i]);
						   val1 = 85;
					   }
					   else if (val1 == 62)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s20); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s20[i]);
						   val1 = 81;
					   }
					   else if (val1 == 68)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s21); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s21[i]);
						   val1 = 95;
					   }
					   if (val1 == 28)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s22); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s22[i]);
						   val1 = 10;
					   }
					   else if (val1 == 42)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s23); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s23[i]);
						   val1 = 21;
					   }
					   else if (val1 == 56)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s24); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s24[i]);
						   val1 = 34;
					   }
					   else if (val1 == 75)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s25); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s25[i]);
						   val1 = 53;
					   }
					   else if (val1 == 91)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s26); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s26[i]);
						   val1 = 72;
					   }
					   else if (val1 == 99)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s27); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s27[i]);
						   val1 = 77;
					   }
					   glColor3f(1, 1, 1);
					   _itoa_s(val1, str2, 10);
					   glRasterPos2f(20, 15);
					   for (int u = 0; u <= strlen(str2); u++)
						   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str2[u]);
					   display1();
				   }
				   else
				   {

					   glColor3f(0, 0, 0);
					   glBegin(GL_POLYGON);
					   glVertex2f(75, 10);
					   glVertex2f(75, 20);
					   glVertex2f(90, 20);
					   glVertex2f(90, 10);
					   glEnd();
					   glPointSize(14);
					   glColor3f(0.53, 0.12, 0.47);
					   glBegin(GL_POINTS);
					   glVertex2f(20, 8);
					   glEnd();
					   glPointSize(14);
					   glColor3f(0.4, 0.7, 0.9);
					   glBegin(GL_POINTS);
					   glVertex2f(80, 8);
					   glEnd();
					   glColor3f(1, 1, 1);
					   val2 += r;
					   if (val2 == 4)
					   {
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s15); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s15[i]);
						   val2 = 39;
					   }
					   else if (val2 == 15)
					   {
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s16); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s16[i]);
						   val2 = 48;
					   }
					   else if (val2 == 25)
					   {
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s17); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s17[i]);
						   val2 = 43;
					   }
					   else if (val2 == 31)
					   {
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s18); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s18[i]);
						   val2 = 52;
					   }
					   else if (val2 == 58)
					   {
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s19); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s19[i]);
						   val2 = 85;
					   }
					   else if (val2 == 62)
					   {
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s20); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s20[i]);
						   val2 = 81;
					   }
					   else if (val2 == 68)
					   {
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s21); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s21[i]);
						   val2 = 95;
					   }
					   if (val2 == 28)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s22); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s22[i]);
						   val2 = 10;
					   }
					   else if (val2 == 42)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s23); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s23[i]);
						   val2 = 21;
					   }
					   else if (val2 == 56)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s24); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s24[i]);
						   val2 = 34;
					   }
					   else if (val2 == 75)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s25); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s25[i]);
						   val2 = 53;
					   }
					   else if (val2 == 91)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s26); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s26[i]);
						   val2 = 72;
					   }
					   else if (val2 == 99)
					   {
						   glColor3f(1, 1, 1);
						   glRasterPos2f(36, 10);
						   for (int i = 0; i < sizeof(s27); i++)
							   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s27[i]);
						   val2 = 77;
					   }
					   glColor3f(1, 1, 1);
					   _itoa_s(val2, str2, 10);
					   glRasterPos2f(80, 15);
					   for (int u = 0; u <= strlen(str2); u++)
						   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str2[u]);
					   display1();
				   }
			}
				break;
			case 6: { for (int u = 0; u <= strlen(str1); u++)
			{
						glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str1[u]);
			}
					if (flag % 2 == 0)
					{
						glColor3f(0, 0, 0);
						glBegin(GL_POLYGON);
						glVertex2f(15, 10);
						glVertex2f(15, 20);
						glVertex2f(30, 20);
						glVertex2f(30, 10);
						glEnd();
						glPointSize(14);
						glColor3f(0.4, 0.7, 0.9);
						glBegin(GL_POINTS);
						glVertex2f(20, 8);
						glEnd();
						glPointSize(14);
						glColor3f(0.5, 0.35, 0.05);
						glBegin(GL_POINTS);
						glVertex2f(80, 8);
						glEnd();
						val1 += r;
						if (val1 == 4)
						{
							glColor3f(1, 1, 1);
							glRasterPos2f(36, 10);
							for (int i = 0; i < sizeof(s15); i++)
								glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s15[i]);
							val1 = 39;
						}
						else if (val1 == 15)
						{
							glColor3f(1, 1, 1);
							glRasterPos2f(36, 10);
							for (int i = 0; i < sizeof(s16); i++)
								glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s16[i]);
							val1 = 48;
						}
						else if (val1 == 25)
						{
							glColor3f(1, 1, 1);
							glRasterPos2f(36, 10);
							for (int i = 0; i < sizeof(s17); i++)
								glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s17[i]);
							val1 = 43;
						}
						else if (val1 == 31)
						{
							glColor3f(1, 1, 1);
							glRasterPos2f(36, 10);
							for (int i = 0; i < sizeof(s18); i++)
								glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s18[i]);
							val1 = 52;
						}
						else if (val1 == 58)
						{
							glColor3f(1, 1, 1);
							glRasterPos2f(36, 10);
							for (int i = 0; i < sizeof(s19); i++)
								glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s19[i]);
							val1 = 85;
						}
						else if (val1 == 62)
						{
							glColor3f(1, 1, 1);
							glRasterPos2f(36, 10);
							for (int i = 0; i < sizeof(s20); i++)
								glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s20[i]);
							val1 = 81;
						}
						else if (val1 == 68)
						{
							glColor3f(1, 1, 1);
							glRasterPos2f(36, 10);
							for (int i = 0; i < sizeof(s21); i++)
								glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s21[i]);
							val1 = 95;
						}
						if (val1 == 28)
						{
							glColor3f(1, 1, 1);
							glRasterPos2f(36, 10);
							for (int i = 0; i < sizeof(s22); i++)
								glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s22[i]);
							val1 = 10;
						}
						else if (val1 == 42)
						{
							glColor3f(1, 1, 1);
							glRasterPos2f(36, 10);
							for (int i = 0; i < sizeof(s23); i++)
								glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s23[i]);
							val1 = 21;
						}
						else if (val1 == 56)
						{
							glColor3f(1, 1, 1);
							glRasterPos2f(36, 10);
							for (int i = 0; i < sizeof(s24); i++)
								glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s24[i]);
							val1 = 34;
						}
						else if (val1 == 75)
						{
							glColor3f(1, 1, 1);
							glRasterPos2f(36, 10);
							for (int i = 0; i < sizeof(s25); i++)
								glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s25[i]);
							val1 = 53;
						}
						else if (val1 == 91)
						{
							glColor3f(1, 1, 1);
							glRasterPos2f(36, 10);
							for (int i = 0; i < sizeof(s26); i++)
								glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s26[i]);
							val1 = 72;
						}
						else if (val1 == 99)
						{
							glColor3f(1, 1, 1);
							glRasterPos2f(36, 10);
							for (int i = 0; i < sizeof(s27); i++)
								glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s27[i]);
							val1 = 77;
						}
						glColor3f(1, 1, 1);
						_itoa_s(val1, str2, 10);
						glRasterPos2f(20, 15);
						for (int u = 0; u <= strlen(str2); u++)
							glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str2[u]);
						display1();
					}
					else
					{

						glColor3f(0, 0, 0);
						glBegin(GL_POLYGON);
						glVertex2f(75, 10);
						glVertex2f(75, 20);
						glVertex2f(90, 20);
						glVertex2f(90, 10);
						glEnd();
						glPointSize(14);
						glColor3f(0.53, 0.12, 0.47);
						glBegin(GL_POINTS);
						glVertex2f(20, 8);
						glEnd();
						glPointSize(14);
						glColor3f(0.4, 0.7, 0.9);
						glBegin(GL_POINTS);
						glVertex2f(80, 8);
						glEnd();
						val2 += r;
						if (val2 == 4)
						{
							glRasterPos2f(36, 10);
							for (int i = 0; i < sizeof(s15); i++)
								glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s15[i]);
							val2 = 39;
						}
						else if (val2 == 15)
						{
							glRasterPos2f(36, 10);
							for (int i = 0; i < sizeof(s16); i++)
								glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s16[i]);
							val2 = 48;
						}
						else if (val2 == 25)
						{
							glRasterPos2f(36, 10);
							for (int i = 0; i < sizeof(s17); i++)
								glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s17[i]);
							val2 = 43;
						}
						else if (val2 == 31)
						{
							glRasterPos2f(36, 10);
							for (int i = 0; i < sizeof(s18); i++)
								glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s18[i]);
							val2 = 52;
						}
						else if (val2 == 58)
						{
							glRasterPos2f(36, 10);
							for (int i = 0; i < sizeof(s19); i++)
								glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s19[i]);
							val2 = 85;
						}
						else if (val2 == 62)
						{
							glRasterPos2f(36, 10);
							for (int i = 0; i < sizeof(s20); i++)
								glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s20[i]);
							val2 = 81;
						}
						else if (val2 == 68)
						{
							glRasterPos2f(36, 10);
							for (int i = 0; i < sizeof(s21); i++)
								glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s21[i]);
							val2 = 95;
						}
						if (val2 == 28)
						{
							glColor3f(1, 1, 1);
							glRasterPos2f(36, 10);
							for (int i = 0; i < sizeof(s22); i++)
								glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s22[i]);
							val2 = 10;
						}
						else if (val2 == 42)
						{
							glColor3f(1, 1, 1);
							glRasterPos2f(36, 10);
							for (int i = 0; i < sizeof(s23); i++)
								glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s23[i]);
							val2 = 21;
						}
						else if (val2 == 56)
						{
							glColor3f(1, 1, 1);
							glRasterPos2f(36, 10);
							for (int i = 0; i < sizeof(s24); i++)
								glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s24[i]);
							val2 = 34;
						}
						else if (val2 == 75)
						{
							glColor3f(1, 1, 1);
							glRasterPos2f(36, 10);
							for (int i = 0; i < sizeof(s25); i++)
								glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s25[i]);
							val2 = 53;
						}
						else if (val2 == 91)
						{
							glColor3f(1, 1, 1);
							glRasterPos2f(36, 10);
							for (int i = 0; i < sizeof(s26); i++)
								glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s26[i]);
							val2 = 72;
						}
						else if (val2 == 99)
						{
							glColor3f(1, 1, 1);
							glRasterPos2f(36, 10);
							for (int i = 0; i < sizeof(s27); i++)
								glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s27[i]);
							val2 = 77;
						}
						glColor3f(1, 1, 1);
						_itoa_s(val2, str3, 10);
						glRasterPos2f(80, 15);
						for (int u = 0; u <= strlen(str3); u++)
							glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str3[u]);
						display1();
					}
			}
			}
			flag++;
			glFlush();
		}
		else if (val1 >= 100 || val2 >= 100)
		{
			glutInitWindowSize(1500, 800);
			glutInitWindowPosition(0, 0);
			id3 = glutCreateWindow("GAME OVER");
			init();
			glutDisplayFunc(display3);
			PlaySound(TEXT("stageclear_converted.wav"), NULL, SND_ASYNC | SND_FILENAME);
		}
	}
}
void main()
{
	val1 = 0;
	val2 = 0;
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(800, 800);
	glutInitWindowPosition(0, 0);
	PlaySound(TEXT("Lost-Jungle_converted.wav"), NULL, SND_ASYNC | SND_FILENAME | SND_LOOP);
	id1 = glutCreateWindow("Snake & Ladder");
	init();
	glutDisplayFunc(display1);
	glutInitWindowSize(500, 800);
	glutInitWindowPosition(800, 0);
	id2 = glutCreateWindow("UR GAMES");
	init();
	glutDisplayFunc(display2);
	glutMainLoop();
}
void mykey(unsigned char k, int x, int y)
{
	if (k == 'r' | k == 'R')
	{
		main();
	}
	if (k == 'q' | k == 'Q')
		exit(0);
}