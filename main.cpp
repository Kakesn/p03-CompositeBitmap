#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string> 


using namespace std;
void PixelMatrix();
AverageRGB(bmp);
const int MaxFiles = 10;


int main()
{

    Bitmap image;
    vector <vector <Pixel> > bmp;
    bool validBmp;
    string file;
    int files;
    vector < vector <string> > fileNames;

/*user enters valid bmp file names. End process at 10 files
or when user enters "DONE" */

bool validBmp
/*Print errors for file name that has problems, (1) if file does not exist/not 
valid bmp (2) image not same dimensions as first file */
  do {
    cout<< "Please enter file name or type DONE (when done entering names)"<< endl;
    cin >> file; image.open(file);
    validBmp = imase.isImage();
    }
    while (validBmp = true);
    
// Create vector row that pushes back number of files to a maximum of 10.// 

/*Error if user does not input at least 2 file "Composite Image cannot be
created with less than 2 Images"
*/
bool samesize
//Error should disregard error files but continue to compose others.//

return progress; 

void AverageRGB
//Combine valid bmp images into one composite. 

//During process, algorithm should display progress update. Output "image 2 of 10 combined"

//Lastly composite image file should save as "composite-Kakesn.bmp"

return 0;
}
