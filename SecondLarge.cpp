#include <iostream>
#include <vector>
#include <climits>

std::vector<int> getSecondOrderElements(int n, std::vector<int> a) {
    if(n<2)
    {
        return {};
    }

    int largest=a[0],secondLargest = INT_MIN;
    int smallest=a[0],secondsmallest =INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(a[i]>largest)
        {
            secondLargest = largest;
            largest =a[i];
        }
        else if (a[i] > secondLargest && a[i] != largest)
        {
            secondLargest = a[i];
        }
    }

    for(int i= 0;i<n;i++){
        if(a[i]<smallest)
        {
            secondsmallest  =smallest;
            smallest = a[i];
        }
        else if (a[i] < secondsmallest && a[i] != smallest)
        {
            secondsmallest = a[i];
        }
    }

    return {secondLargest, secondsmallest};
}

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> a;
  
    for(int i=0;i<n;i++)
    {
        int temp;
        std::cin >> temp;
        a.push_back(temp);
    }
     std::vector<int> result = getSecondOrderElements(n,a);

     for(int i=0;i<2;i++)
    {
        std::cout << result[i] << " ";
    }
    return 0;
}
