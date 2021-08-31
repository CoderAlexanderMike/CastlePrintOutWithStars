#include <iostream>

using namespace std;

class Foundation_WD {
public:

    void BaseLine_Rectangle() {

        // Height
        for (int i = 1; i < 3; i++)
        {
            // empty rectangle
            int s = 1;
            while (s < 8)
            {
                cout << " ";
                s++;
            }
            // Width
            for (int j = 1; j < 24; j++)
            {
                cout << "*";
            }

            // Empty space for next rectangle
            int s1 = 0;
            while (s1 < 8)
            {
                cout << " ";
                s1++;
            }

            // next Rectangle
            for (int z = 1; z < 24; z++)
            {
                cout << "*";
            }
            cout << "\n";
        }

    }

    void FirstBase_Rectangle() {

        // lastLine for foundation
        int lstLine = 0;
        do
        {
            int ls = 1;

            // empty line for base
            while (ls < 8)
            {
                cout << " ";
                ls++;
            }

            // first stars from Base
            for (int a = 0; a < 3; a++)
            {
                cout << "*";
            }
            cout << " ";

            // second stars
            for (int b = 0; b < 20; b++)
            {
                cout << "*";
            }

            // empty spaces for Base
            int ls1 = 1;
            while (ls1 < 7)
            {
                cout << " ";
                ls1++;
            }

            // RHS first stars from Base
            for (int c = 0; c < 19; c++)
            {
                cout << "*";
            }
            cout << " ";

            // RHS second stars from Base
            for (int d = 0; d < 3; d++)
            {
                cout << "*";
            }
            cout << "\n";

            lstLine++;
        } while (lstLine < 1);

        // Height
        for (int i = 1; i < 2; i++)
        {
            int s = 1;

            // create empty spaces
            while (s < 9)
            {
                cout << " ";
                s++;
            }

            // Width
            for (int j = 0; j < 22; j++)
            {
                cout << "*";
            }

            int s2 = 0;
            // create empty spaces
            while (s2 < 8)
            {
                cout << " ";
                s2++;
            }

            // Width
            for (int z = 0; z < 21; z++)
            {
                cout << "*";
            }
            cout << "\n";
        }
    }
};

class Storey_WD {
public:

    void FirstStorey_Method() {

        // FirstStorey
        for (int i = 1; i < 6; i += 2) {

            // empty space from the start
            int s = 1;
            while (s < 6)
            {
                cout << " ";
                s++;
            }

            // empty space to make empty triangle 
            int es = 6 - i;
            while (es > 0)
            {
                cout << " ";
                es -= 2;
            }

            for (int a = 1; a <= i; a++) {
                cout << "*";
            } 

            int es1 = 7 - i;
            while (es1 > 0)
            {
                cout << " ";
                es1 -= 2;
            }

            int es2 = 7 - i;
            while (es2 > 0)
            {
                cout << " ";
                es2 -= 2;
            }

            for (int b = 0; b < 36; b++) {
                cout << "*";
            }

            for (int c = 1; c <= i; c++) {
                cout << "*";
            }

            int es3 = 7 - i;
            while (es3 > 0)
            {
                cout << " ";
                es3 -= 2;
            }

            int es4 = 7 - i;
            while (es4 > 0)
            {
                cout << " ";
                es4 -= 2;
            }

            for (int d = 1; d <= i; d++) {
                cout << "*";
            }
            cout << "\n";
        } 
    }

    void SecondStorey_Method() {

        // Second Storey
        for (int row = 1; row < 6; row+= 2)
        {
            // empty space from the start
            int emptySpace_01 = 0;
            while (emptySpace_01 < 11)
            {
                cout << " ";
                emptySpace_01++;
            }

            // empty space to make empty triangle 
            int emptyTriangle = 11 - row;
            while (emptyTriangle > 0)
            {
                cout << " ";
                emptyTriangle -= 2;
            }

            for (int a = 1; a <= row; a++) {
                cout << "*";
            }

            int emptyTriangle1 = 7 - row;
            while (emptyTriangle1 > 0)
            {
                cout << " ";
                emptyTriangle1 -= 2;
            }

            int emptyTriangle2 = 7 - row;
            while (emptyTriangle2 > 0)
            {
                cout << " ";
                emptyTriangle2 -= 2;
            }

            for (int column = 1; column < 14; column++) {
                cout << "*";
            }

            for (int b = 1; b <= row; b++) {
                cout << "*";
            }

            // New Code Era (30/08/2021)
            
            int emptyTriangle3 = 7 - row;
            while (emptyTriangle3 > 0)
            {
                cout << " ";
                emptyTriangle3 -= 2;
            }

            int emptyTriangle4 = 7 - row;
            while (emptyTriangle4 > 0)
            {
                cout << " ";
                emptyTriangle4 -= 2;
            }

            for (int c = 1; c <= row; c++) {
                cout << "*";
            }

            int emptyTriangle5 = 7 - row;
            while (emptyTriangle5 > 0)
            {
                cout << " ";
                emptyTriangle5 -= 2;
            }

            int emptyTriangle6 = 7 - row;
            while (emptyTriangle6 > 0)
            {
                cout << " ";
                emptyTriangle6 -= 2;
            }

            for (int c = 1; c <= row; c++) {
                cout << "*";
            }
            cout << "\n";
        }

        int ls = 1;
        // empty line for second base
        while (ls < 16)
        {
            cout << " ";
            ls++;
        }

        // first stars for second base
        for (int a = 0; a < 3; a++)
        {
            cout << "*";
        }
        cout << " ";

        // middle stars
        for (int b = 0; b < 22; b++)
        {
            cout << "*";
        }
        cout << " ";

        // second stars for second base
        for (int c = 0; c < 3; c++)
        {
            cout << "*";
        }
        cout << " ";

        // empty spaces for second base
        int ls1 = 1;
        while (ls1 < 4)
        {
            cout << " ";
            ls1++;
        }
        // third stars for second base
        for (int d = 0; d < 3; d++)
        {
            cout << "*";
        }
        cout << " ";

        cout << "\n";
    }
};

class CastleRoof_WD
{
public:

    void TopBase_Method() {
        
        for (int row = 0; row < 4; row += 2)
        {
            int emptySpace = 1;
            while (emptySpace < 18)
            {
                cout << " ";
                emptySpace++;
            }

            int emptyTriangle = 18 - row;
            while (emptyTriangle > 1)
            {
                cout << " ";
                emptyTriangle -= 2;
            }

            for (int column = 0; column <= row; column++) {
                cout << "*";
            }

            // empty rectangle
            int emptyRectangle = 0;
            while (emptyRectangle < 3)
            {
                cout << " ";
                emptyRectangle++;
            }

            for (int a = 7 - row; a > 0; a--)
            {
                cout << "*";
            }
            cout << "\n";
        }
    }

    void FinalRoof_Method() {


        for (int finalRow = 1; finalRow < 6; finalRow += 2)
        {
            // empty space
            int finalEmptySpace = 1;
            while (finalEmptySpace < 23)
            {
                cout << " ";
                finalEmptySpace++;
            }

            // empty triangle
            int finalEmptyTraingle = 23 - finalRow;
            while (finalEmptyTraingle > 1)
            {
                cout << " ";
                finalEmptyTraingle -= 2;
            }

            for (int finalColumn = 1; finalColumn <= finalRow; finalColumn++)
            {
                cout << "*";
            }
            cout << "\n";
        }

        // RoofBaseLine
        for (int row = 0; row < 3; row += 2)
        {
            int emptySpace = 0;
            while (emptySpace < 29)
            {
                cout << " ";
                emptySpace++;
            }

            int emptyTriangle = 6 - row;
            while (emptyTriangle > 0)
            {
                cout << " ";
                emptyTriangle-= 2;
            }

            for (int column = 6 - row; column < 9; column++)
            {
                cout << "*";
            }
            cout << "\n";
        }
    }

    void Stars_Method() {

        for (int topStarRow = 0; topStarRow < 3; topStarRow += 2)
        {
            int space = 0;
            while (space < 50)
            {
                cout << " ";
                space++;
            }

            for (int topStarColumn = 1; topStarColumn < 18; topStarColumn += 4)
            {
                cout << "*";
            }
            cout << "\n";
        }

        int starEmptySpace = 1;
        while (starEmptySpace < 42)
        {
            cout << " ";
            starEmptySpace++;
        }
        cout << "*";

        int starEmptySpace1 = 0;
        while (starEmptySpace1 < 5)
        {
            cout << " ";
            starEmptySpace1++;
        }
        cout << "*";
        cout << "\n";

        // starts half star
        for (int starRow = 0; starRow < 3; starRow += 2)
        {
            int emptySpaces = 0;
            while(emptySpaces < 45)
            {
                cout << " ";
                emptySpaces++;
            }

            int starEmptyTriangle = 6 - starRow;
            while (starEmptyTriangle < 7)
            {
                cout << " ";
                starEmptyTriangle += 2;
            }

            for (int starColumn1 = 6 - starRow; starColumn1 > 3; starColumn1--)
            {
                cout << "*";
            }
            cout << "\n";
        }
    }

};

int main() {

    CastleRoof_WD castleRoof_WD;

    Storey_WD storey_WD;

    Foundation_WD foundation_WD;

    castleRoof_WD.Stars_Method();

    castleRoof_WD.FinalRoof_Method();

    castleRoof_WD.TopBase_Method();

    storey_WD.SecondStorey_Method();

    storey_WD.FirstStorey_Method();

    foundation_WD.FirstBase_Rectangle();

    foundation_WD.BaseLine_Rectangle();
}