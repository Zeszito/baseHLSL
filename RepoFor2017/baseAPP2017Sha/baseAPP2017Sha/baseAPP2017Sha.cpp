#include <iostream>
#include <GLFW/glfw3.h>

const float steps = 10;
const float angle = 3.1415925 * 2.f / steps;
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


	bool toggle = true;

	int incre = 0;
	float xPos = 0; float yPos = 0; float radius = 1.0f;



	while (!glfwWindowShouldClose(window))
	{
		glClearColor(1.0, 1.0, 0.0, 0.0);
		glClear(GL_COLOR_BUFFER_BIT);

	


		
				glBegin(GL_TRIANGLES);
	
			

			glEnd();

		

		


		glfwSwapBuffers(window);
		glfwPollEvents();



	}

	char c;
	std::cin >> c;
	return 0;
}
