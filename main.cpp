#include <iostream>
using namespace std;
int find()
{
    int arr[10];
    int n;
    for (int i = 0; i < 10; i++)
    {
	cin >> n;
	arr[i] = n;
    }
    cout << "Array created" << endl;
    int num;
    cin >> num;
    for (int i = 0; i < 10; i++)
    {
    if (arr[i] == num)
    {
        cout << "This array has number " << num;
	break;
	return 0;
    }
    }
    cout << "No number " << num << " in this array";
    return 1;
}
int main(int argc, char*[])
{
    find();
    int boot;
    cin >> boot;
    return 0;
}
