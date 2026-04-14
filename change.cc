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



// #include <iostream>
// #include <iomanip>
// #include <cmath>

// using namespace std;

// int main() {
//     double da;
//     cout << "Enter Dollar amount: ";
//     cin >> da;

//     int total_cents = round(da * 100);
//     long long count = 0; 

//     for (int hundred = 0; hundred <= total_cents; hundred += 10000) {
//         int rem100 = total_cents - hundred;
//         for (int fifty = 0; fifty <= rem100; fifty += 5000) {
//             int rem50 = rem100 - fifty;
//             for (int twenty = 0; twenty <= rem50; twenty += 2000) {
//                 int rem20 = rem50 - twenty;
//                 for (int ten = 0; ten <= rem20; ten += 1000) {
//                     int rem10 = rem20 - ten;
//                     for (int five = 0; five <= rem10; five += 500) {
//                         int rem5 = rem10 - five;
//                         for (int two = 0; two <= rem5; two += 200) {
//                             int rem2 = rem5 - two;
//                             for (int one = 0; one <= rem2; one += 100) {
//                                 int rem1 = rem2 - one;
//                                 for (int h_dollar = 0; h_dollar <= rem1; h_dollar += 50) {
//                                     int rem_hd = rem1 - h_dollar;
//                                     for (int quarter = 0; quarter <= rem_hd; quarter += 25) {
//                                         int rem_q = rem_hd - quarter;
//                                         for (int dime = 0; dime <= rem_q; dime += 10) {
//                                             int final_remainder = rem_q - dime;
//                                             count += (final_remainder / 5) + 1;
//                                         }
//                                     }
//                                 }
//                             }
//                         }
//                     }
//                 }
//             }
//         }
//     }
//     cout << setprecision(2) << fixed << "There are " << count << " ways to make $" << da << " with US currency." << endl;
//     return 0;
// }