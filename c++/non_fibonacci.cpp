
#include <iostream>

int main()
{
	int x {}, y {1}, sum {}, limit {};
	std::cout << "Enter the limit of fibonacci  series ->";
	std::cin >> limit;
    	int j {};

    std::cout << "\nThe fibonacci numbers in the series are ::\n";
    std::cout << x << " " << y << " " << std::flush;
    for(; ;)
	{
		sum = x + y;
		x = y;
		y = sum;
		if(sum < limit)
        	    std::cout << sum << " " << std::flush;

        else
            break;
	}
    	x = 0;
    	y = 1;
    	sum = 0;
	std::cout << "\nThe missing numbers in the series are ::\n";
	for(; sum < limit;)
	{
		sum = x + y;
		x = y;
		y = sum;

		for(j = x + 1; j < y && y < limit; j++)
			std::cout << j << " " << std::flush;

        for(; (j  < limit) && (y >= limit); j++)
            std::cout << j << " " << std::flush;
	}
	return 0;
}