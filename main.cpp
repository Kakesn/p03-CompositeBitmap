#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string> 
#include "bitmap.h"

using namespace std;
void PixelAVG();
bool ValidBMP(string);
bool ValidSize(string);
const int MaxFiles = 10;
vector <vector < Pixel > > AverageRGB(vector <Bitmap>);
unsigned int firstRow = 0;
unsigned int firstCol = 0;
bool firstImage = false;

int main()
{
Bitmap image;
vector < vector < Pixel > > Image;
vector < string > FileList;
vector < vector < Pixel > > CompBMP;
filename(FileList);
rgbValue(FileList);
rgbAvgImg(Image);
image.save("Composite-Kakesn.bmp");

return 0;
}

string files;
string firstFile;
cout << "Please enter file names or type DONE (when done entering names)" << endl;
do 
{
cin >> firstFile;
firstFileSize (firstFileName);
List.push_back(fistFile);
cin >> files;
if (files == "DONE")
{
}
else if(validBMP(files) == true)
    {
           List.push_back(files);
    }
        else;
}
       
while(ListBMP(string File);

return List;
}
bool ValidBMP(string File)
{
Bitmap image;
image.open(File)
return image.isImage();
}

bool ValidSize(string File)
{
Bitmap image;
image.open(File);
vector < vector < Pixel > > BMP;
bool firstImage = false;
unsigned int firstRow = 0;
unsigned int firstCol = 0;

if (firstImage)
return (bmp.size() == FirstRow && BMP[0].soze() == firstCol);

firstRow = bmp.size();
firstCol = bmp[0].size();
firstImage = true;

return true;
}

vector < vector < Pixel > > PixelAVG( vector <Bitmap> pics)
{
    vector < vector < Pixel > > CompImg;
    CompImg = pics[0].toPixelMatrix();
    for (int = 0; i < CompImg.size(); i++)
        for (int j = 0; j < CompImg[0].size(); j++)
        {
            CompImg[i][j].red = 0;
            CompImg[i][j].green = 0;
            CompImg[i][j].blue = 0;
        }
    RGB
        rgb.red = 0;
        rgb.green = 0;
        rgb.blue = 0;
        for (unsigned int i = 0; i < pics.size(); i++)
        {
        vector < vector < Pixel > > Img = pics[i].toPixelMatrix();
        cout << "Completing Image" << i+1 << " of " << pics.size() << endl;
        for (int row = 0; row < Img.size(); row++)
        {
            for (int col = 0; col < Img[0].size(); col++)
            {
                CompImg[row][col].red += Img[row][col].red;
                CompImg[row][col].green += Img[row][col].green;
                CompImg[row][col].blue += Img[row][col].blue;
            }
        }
        }
        for (int row = 0; row < CompImg.size(); row++);
        {
            for (int col = 0; col < CompImg[0].size(); col++)
            {
            CompImg[row][col].red = CompImg[row][col].red / pictures.size();
            CompImg[row][col].green = CompImg[row][col].green / pictures.size();
            CompImg[row][col].blue /= pictures.size();
            }
        }
        return CompImg;
}


/*user enters valid bmp file names. End process at 10 files
or when user enters "DONE" */


/*Print errors for file name that has problems, (1) if file does not exist/not 
valid bmp (2) image not same dimensio*/
    
// Create vector row that pushes back number of files to a maximum of 10.// 

/*Error if user does not input at least 2 file "Composite Image cannot be
created with less than 2 Images"
*/

//Error should disregard error files but continue to compose others.//

//Combine valid bmp images into one composite. 

//During process, algorithm should display progress update. Output "image 2 of 10 combined"

//Lastly composite image file should save as "composite-Kakesn.bmp"
