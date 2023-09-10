#include <vector>
#include <iomanip>

using namespace std;

namespace week1
{
void plusMinus(vector<int> arr)
{
    int positiveValues = 0;
    int negativeValues = 0;
    int zeros = 0;
    
    for(int i = 0; i < arr.size(); i++)
    {
        int num = arr[i];
        if(num > 0) 
        {
            positiveValues++;
        }
        else if(num < 0)
        {
            negativeValues++;
        }
        else if(num == 0)
        {
            zeros++;
        }
    }
    
    cout << fixed;
    cout << setprecision(6) << (float) positiveValues / (float) arr.size() << endl;
    cout << setprecision(6) << (float) negativeValues/ (float) arr.size() << endl;
    cout << setprecision(6) << (float) zeros/ (float) arr.size() << endl;
    
}

void runPlusMinus()
{
    vector<int> arr(6);
    arr[0] = -4;
    arr[1] = 3;
    arr[2] = -9;
    arr[3] = 0;
    arr[4] = 4;
    arr[5] = 1;

    week1::plusMinus(arr);
}

}