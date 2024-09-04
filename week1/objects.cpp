#include <iostream>
#include <vector>
using namespace std;

void displayVector(const vector<student> &v);
void insertionSortV(vector<int> &array);
const int SIZE = 5;
struct student
{
    string name;
    int age;
};

int main()
{
    vector<student> num;
    student temp;
    temp.name = "Kate";
    temp.age = 20;
    num.push_back(temp);
    displayVector(num);
    
    return 0;
}

void displayVector(const vector<student> &v)
{
   for (size_t i = 0; i< v.size(); i++){
        cout<<v[i].name<<" "<<v[i].age<<endl;
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