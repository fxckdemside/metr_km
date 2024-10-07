

#include <iostream>
#include <string>

using namespace std;

int main()
{
  
        const int m_per_km{ 1000 };    

        int meters{};
        std::cout << "Enter a number of metres: ";
        std::cin >> meters;   

        const int kilometers{ meters / m_per_km };        
        const int remaining_meters{ meters % m_per_km };  

        std::cout << meters << " meters = " << kilometers << " kilometers and " << remaining_meters << " meters.";
}


