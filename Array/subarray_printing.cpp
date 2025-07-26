#include <iostream>
#include <vector>

using namespace std;

int  subArraySum(vector<int> v)
{
    int max_sum = INT_MIN; 
    int current_sum = 0;

    for (int i = 0; i < v.size(); i++)
    {
        current_sum = 0;
        for (int j = i; j < v.size(); j++)
        {
            current_sum += v[j];
            if (current_sum > max_sum)
            {
                max_sum = current_sum;
            }
        }
    }

    return max_sum;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    int max_sum = subArraySum(v);

    cout << "The maximum subarray sum is: " << max_sum << endl;

    return 0;
}