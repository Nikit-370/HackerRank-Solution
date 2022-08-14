#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
 
/* Rectangle Area in C++ - Hacker Rank Solution START */

class Rectangle 
{
    public:
    int width, height;
    void display() 
    {
        cout << width << " " << height << "\n";
    }
};

class RectangleArea : public Rectangle 
{
    public:
    void read_input() 
    {
        cin >> width;
        cin >> height;
    }
    void display() 
    {
        cout << width * height << "\n";
    }
};

/* Rectangle Area in C++ - Hacker Rank Solution END */

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}