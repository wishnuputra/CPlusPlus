#include <vector>
#include <iomanip>
#include <algorithm>
#include <numeric>

using namespace std;

namespace week1
{

void printArray(vector<int> arr)
{
    for (size_t i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl; 
}

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

void miniMaxSum(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    printArray(arr);
    unsigned int minSum = accumulate(arr.begin(), --arr.end(), 0);
    unsigned int maxSum = accumulate(++arr.begin(), arr.end(), 0);
    cout << minSum << " " << maxSum;
}

void run()
{
    vector<int> arr(5);
    arr[0] = 256741038;
    arr[1] = 623958417;
    arr[2] = 467905213;
    arr[3] = 714532089;
    arr[4] = 938071625;
    //arr[5] = 1;
    
    week1::miniMaxSum(arr);
}



}