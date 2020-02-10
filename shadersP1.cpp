// shadersP1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <GLFW/glfw3.h>



void drawTriangle() {
    glBegin(GL_TRIANGLES);


   


    glEnd();
}

int main()
{
    GLFWwindow * window;

    if (!glfwInit()) {
        std::cout << "Erro\n";
        exit(-1);
    }
    else {
        std::cout << "works\n";
    }

    window = glfwCreateWindow(800, 600, "myWindow", 0, 0);

    if (!window) {
        std::cout << "window creation error ";
        glfwTerminate();
        return -1;
    }



    glfwMakeContextCurrent(window);





    while (!glfwWindowShouldClose(window))
    {
        glClearColor(1.0, 1.0, 1.0, 0.0);
        glClear(GL_COLOR_BUFFER_BIT);


   
        drawTriangle();

        
        
        glfwSwapBuffers(window);
        glfwPollEvents();
   


    }

    char c;
    std::cin >> c;
    return 0;
}

