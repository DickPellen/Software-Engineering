#include <iostream>
#include <vector>
#define AMOUNT 3

int main() {
    std::vector<int> tag(0);

    for (int i = 0; i < 1000; i++)
    {
        if (AMOUNT*i <= 1000)
        {
            tag.insert(tag.end(),(AMOUNT*i));
        }
    }

    int sum = 0;

    for (int i = 0; i < tag.size(); i++)
    {
        sum += tag.at(i);
    }

    std::cout << sum;

    return 0;
}