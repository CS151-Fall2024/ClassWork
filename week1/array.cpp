#include <iostream>
#include <vector>
using namespace std;

void displayArray(int array[], int size);
void insertionSort(int array[], int size);
void displayVector(const vector<int> &v);
void insertionSortV(vector<int> &array);
const int SIZE = 5;
int main()
{
    // int numbers[SIZE] = {1,12,31,4,15};
    // displayArray(numbers, SIZE);
    // insertionSort(numbers, SIZE);
    // cout<<"Sorted array...\n";
    // displayArray(numbers, SIZE);
    vector<int> num;
    num.push_back(1);
    num.push_back(12);
    num.push_back(31);
    num.push_back(4);
    num.push_back(15);
    displayVector(num);
    insertionSortV(num);
    displayVector(num);
    return 0;
}
void displayArray(int array[], int size)
{
    for (int i = 0; i< size; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
void displayVector(const vector<int> &v)
{
   for (size_t i = 0; i< v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl; 
}

void insertionSort(int array[], int size)
{
    for (int startScan = 1; startScan < size; ++startScan)
    {
        int key = array[startScan];
        int index = startScan - 1;

        while (index >= 0 && array[index] > key)
        {
            array[index+1] = array[index];
            --index;
        }
        array[index+1] = key;
    }
}
void insertionSortV(vector<int> &array)
{
    for (size_t startScan = 1; startScan < array.size(); ++startScan)
    {
        int key = array[startScan];
        int index = startScan - 1;

        while (index >= 0 && array[index] > key)
        {
            array[index+1] = array[index];
            --index;
        }
        array[index+1] = key;
    }
}
