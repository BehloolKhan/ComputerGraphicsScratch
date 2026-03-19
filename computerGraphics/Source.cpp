//This will be the standard file
//This is where it all begins

//importing required libraries
//
#include <iostream>
#include <fstream>
#include <cstdlib>

int main() {

	//need to create an object of class that can output to file -> ofstream
	//
	std::ofstream fileOutPut("output.ppm"); //string specifies the name of the file we are outputting too, if it doesnt exist it will create it

	if (fileOutPut.fail()) {

		return -1; // file didnt open or couldnt be create or something;
	}



	//now we need to write the format of file
	//
	fileOutPut << "P3" <<"\n"; //P3 is a magic number, tells it what type of ppm file u r dealing with -> ascii

	//set dimensions and write/output them to file
	int width = 20;
	int height = 20;

	fileOutPut << width << " ";
	fileOutPut << height << "\n";

	//now outputting to file all pixels

	for (int i = 1; i <= height; ++i) {

		for (int j = 1; j <= width; ++j) {
			
			fileOutPut << std::rand() % 256 << " "; //Red
			fileOutPut << std::rand() % 256 << " "; //Green
			fileOutPut << std::rand() % 256 << "  "; //Blue
		}

		fileOutPut << "\n"; //start a new line for new row
	}

	fileOutPut.close(); 

	return 0;
}