#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int vacationRental(int people, int day){
    // 関数を完成させてください
    double Tax = 1.08;
    double CleaningCost = 1.12;
    double result = 0;

    if(0 <= day && day <= 3) {
        int StayCost= day * 80;
        
        result = StayCost * people;
        result = result * CleaningCost;
        result = result * Tax;
    } else if(4 <= day && day <= 9) {
        int StayCost= day * 60;
        
        result = StayCost * people;
        result = result * CleaningCost;
        result = result * Tax;   
    } else if(10 <= day) {
        int StayCost= day * 50;
        
        result = StayCost * people;
        result = result * CleaningCost;
        result = result * Tax;
    }
    return floor(result);
}
