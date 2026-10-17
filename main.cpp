#include <iostream>
#include <iomanip>
using namespace std;

int main() {
double replacementcoat;
    double minimuminsurance;

    cout << "enter the toal replacement cost of the building: $";
    cin >> replacementcoat;

    minimuminsurance = replacementcoat * 0.80;

    cout << fixed << setprecision(2);

    cout << "--- insurance calculation result ---" << endl;
    cout << "minimum amount of insurance recommended:  $" << minimuminsurance << endl;
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}