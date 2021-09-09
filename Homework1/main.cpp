#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::abs;

int main(){
    int height = 0;
    cout << "type a non-zero, positive integer. Decimals  will be rounded towards 0" << endl;
    cin >> height;
    //Error messages, I dec
    if(height == 0) {
        cout << "I couldn't read that input, or you entered 0";
        return 1;
    }
    if(height < 0) {
        cout << "That number was negative";
        return -1;
    }

    for(int j = 1; j < 2 * height; j++) {
        for (int i = 1; i < 2 * height; i++) {
            /*some complicated math to make the diamond

             xFunc = -2|x - k| + 2k - 1
             creates field that follows: 1, 3, 5, ... 2h-5, 2h-3, 2h-1, 2h-3, 2h-5, ... 5, 3, 1 along x axis
             yFunc =  2|y - k| + 1
             creates field that follows: 2h-1, 2h-3, 2h-5, ... 5, 3, 1, 3, 5, ... 2h-5, 2h-3, 2h-1 along y axis

             subtract the two to create field where >= 0 is a rhombus

             xFunc and yFunc to helped figure out the algebra, but also allow it to be generalized to any two fields
             and print the positive area

             There may be a better way to make sure i-h and j-h are unsigned but i don't know it yet

             Perhaps this way is better suited for array type stuff, but it is generalized as I said */
            int xFunc = 2 * height - 1 - 2 * abs(i - height);
            int yFunc = 2 * abs(j - height) + 1;

            if(xFunc >=  yFunc) {cout << "#";}
            else{cout << " ";}
        }
        cout << endl;
    }
    return 0;
}
