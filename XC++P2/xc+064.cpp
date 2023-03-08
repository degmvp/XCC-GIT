/*
---------------------------------------
# ✅ xc+064
# ✅ C++ criado: 2021/03/05
# ✅ Objetivo:sql server - C++ Lib
---------------------------------------*/

create proc [dbo].[xc+064]
AS
/*
// C++ program for linear search
#include<bits/stdc++.h>
using namespace std;

void search(vector<int> arr, int search_Element)
{
    int left = 0;
    int length = arr.size();
    int position = -1;
      int right = length - 1;

    // Run loop from 0 to right
    for(left = 0; left <= right;)
    {

        // If search_element is found with
        // left varaible
        if (arr[left] == search_Element)
        {

            position = left;
            cout << "Element found in Array at "
                 << position + 1 << " Position with "
                 << left + 1 << " Attempt\n";

            break;
        }

        // If search_element is found with
        // right varaible
        if (arr[right] == search_Element)
        {
            position = right;
            cout << "Element found in Array at "
                 << position + 1 << " Position with "
                 << length - right << " Attempt\n";

            break;
        }
        left++;
        right--;
    }

    // If element not found
    if (position == -1)
        cout << "Not found in Array with "
             << left << " Attempt";
}

// Driver code
int main()
{
    vector<int> arr{ 1, 2, 3, 4, 5,10,20,30,40,50,60,70,80,90 };
    int search_element = 1;

    // Function call
    search(arr, search_element);
}

*/