/**
 *   @file: change.cc
 * @author: Silas Campbell
 *   @date: April 13, 2026
 *  @brief: Ways to make change US currency
 */

#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[]) {
    double da;
    cout << "Enter Dollar amount: ";
    cin >> da;
    da *= 100;
    long long count = 0;
    for(int hundred = 0; hundred <= da; hundred += 10000){
        for(int fifty = 0; hundred + fifty <= da; fifty += 5000){
            for(int twenty = 0; hundred + fifty + twenty <= da; twenty += 2000){
                for(int ten = 0; hundred + fifty + twenty + ten <= da; ten += 1000){
                    for(int five = 0; hundred + fifty + twenty + ten + five <= da; five += 500){
                        for(int two = 0; hundred + fifty + twenty + ten + five + two <= (da); two += 200){
                            for(int one = 0; hundred + fifty + twenty + ten + five + two + one <= (da); one += 100){
                                for(int h = 0; hundred + fifty + twenty + ten + five + two + one + h <= (da); h += 50){
                                    for(int q = 0; hundred + fifty + twenty + ten + five + two + one + h + q <= (da); q += 25){
                                        for(int d = 0; hundred + fifty + twenty + ten + five + two + one + h + q + d <= (da); d += 10){
                                            for(int n = 0; (hundred + fifty + twenty + ten + five + two + one + h + q + d + n) <= (da); n += 5){
                                                    count++;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout << setprecision(2) << fixed << "There are " << count << " ways to make $"<< da/100 << " with US currency." << endl;
	return 0;
}