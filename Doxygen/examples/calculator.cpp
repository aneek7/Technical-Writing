/** @file calculator.cpp
 * @brief Small documented calculator for the TW portfolio.
 */
/** @mainpage Calculator Documentation
 * A standalone demonstration of class and function documentation.
 * This example is not the supplied multi-file laboratory assignment.
 */
#include <iostream>
/** @brief Performs basic arithmetic on floating-point numbers. */
class Calculator {
public:
    /** @brief Adds two values.
     * @param a First value.
     * @param b Second value.
     * @return Sum of the values.
     */
    double add(double a, double b) const { return a + b; }
    /** @brief Multiplies two values.
     * @param a First factor.
     * @param b Second factor.
     * @return Product of the values.
     */
    double multiply(double a, double b) const { return a * b; }
};
/** @brief Reads two numbers and prints results.
 * @return Zero on success, one on invalid input.
 */
int main() {
    double a, b;
    std::cout << "Enter first number: ";
    if (!(std::cin >> a)) return 1;
    std::cout << "Enter second number: ";
    if (!(std::cin >> b)) return 1;
    Calculator calc;
    std::cout << "Sum: " << calc.add(a,b) << '\n';
    std::cout << "Product: " << calc.multiply(a,b) << '\n';
}
