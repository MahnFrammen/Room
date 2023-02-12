//Zach Pedersen
//This is my work!
//Prof. Citro
//CST-310

#include <GLFW/glfw3.h>
#include <iostream>

int main(void) {
    GLFWwindow* window;

    if (!glfwInit())
        return -1;

    window = glfwCreateWindow(640, 480, "My Room", NULL, NULL);
    if (!window) {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window)) {
        int width, height;
        glfwGetFramebufferSize(window, &width, &height);
        glViewport(0, 0, width, height);

        // Clear the screen to white
        glClearColor(1.0, 1.0, 1.0, 1.0);
        glClear(GL_COLOR_BUFFER_BIT);

        // Draw the bed
        glBegin(GL_QUADS);
        glColor3f(0.8, 0.8, 0.8);
        glVertex2f(-0.7, -0.7);
        glVertex2f(0.7, -0.7);
        glVertex2f(0.7, -0.5);
        glVertex2f(-0.7, -0.5);
        glEnd();

        // Draw the floor
        glBegin(GL_QUADS);
        glColor3f(0.1, 0.0, 0.0);
        glVertex2f(-1.0, -1.0);
        glVertex2f(1.0, -1.0);
        glVertex2f(1.0, -0.7);
        glVertex2f(-1.0, -0.7);
        glEnd();

        // Draw the window
        glBegin(GL_QUADS);
        glColor3f(0.9, 0.8, 0.6);
        glVertex2f(-0.2, -0.2);
        glVertex2f(0.8, -0.2);
        glVertex2f(0.8, 0.8);
        glVertex2f(-0.2, 0.8);
        glEnd();

        // Draw the fridge
        glBegin(GL_QUADS);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(-0.9, -0.7);
        glVertex2f(-0.7, -0.7);
        glVertex2f(-0.7, -0.1);
        glVertex2f(-0.9, -0.1);
        glEnd();
        
        // Draw the blanket
        glBegin(GL_QUADS);
        glColor3f(0.1, 0.1, 0.1);
        glVertex2f(-0.6, -0.6);
        glVertex2f(0.6, -0.6);
        glVertex2f(0.6, -0.5);
        glVertex2f(-0.6, -0.5);
        glEnd();
        
        // Draw the wooden support
        glBegin(GL_QUADS);
        glColor3f(1.0, 0.5, 0.0);
        glVertex2f(0.8, 0.3);
        glVertex2f(0.7, 0.3);
        glVertex2f(0.7, -0.7);
        glVertex2f(0.8, -0.7);
        glEnd();

	// Draw the pillow
        glBegin(GL_QUADS);
        glColor3f(0.7, 0.7, 0.7);
	glVertex2f(-0.7, -0.55);
        glVertex2f(-0.5, -0.55);
        glVertex2f(-0.5, -0.35);
        glVertex2f(-0.7, -0.35);
        glEnd();

	// Draw the suitcases
        glBegin(GL_QUADS);
        glColor3f(1, 0.0, 0.0);
	glVertex2f(-0.5, -0.95);
        glVertex2f(-0.3, -0.95);
        glVertex2f(-0.3, -0.7);
        glVertex2f(-0.5, -0.7);
        glEnd();
	
	
	// Draw the suitcases 2
        glBegin(GL_QUADS);
        glColor3f(0.6, 0.6, 0.6);
	glVertex2f(-0.1, -0.95);
        glVertex2f(0.1, -0.95);
        glVertex2f(0.1, -0.7);
        glVertex2f(-0.1, -0.7);
        glEnd();
        
        // Draw the fan
        glBegin(GL_QUADS);
        glColor3f(0, 0, 0);
	glVertex2f(0.7, 0.25);
        glVertex2f(0.55, 0.25);
        glVertex2f(0.55, 0.5);
        glVertex2f(0.7, 0.5);
        glEnd();
        
        // Draw the curtain
        glBegin(GL_QUADS);
        glColor3f(0.0, 0.1, 0.1);
        glVertex2f(-0.4, 0.0);
        glVertex2f(0.0, 0.0);
        glVertex2f(0.0, 0.8);
        glVertex2f(-0.4, 0.8);
        glEnd();
        
        // Draw the lamp
        glBegin(GL_QUADS);
        glColor3f(0.7, 0.7, 0.7);
	glVertex2f(-0.9, 0.3);
        glVertex2f(-0.88, 0.3);
        glVertex2f(-0.88, -0.1);
        glVertex2f(-0.9, -0.1);
        glEnd();
        
        // Draw the lamp
        glBegin(GL_QUADS);
        glColor3f(0.7, 0.7, 0.7);
	glVertex2f(-0.9, 0.3);
        glVertex2f(-0.8, 0.3);
        glVertex2f(-0.8, 0.2);
        glVertex2f(-0.9, 0.2);
        glEnd();

        glfwSwapBuffers(window);

        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
