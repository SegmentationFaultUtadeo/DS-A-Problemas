# Omens - Solution

## Problem Analysis

This is a **geometric probability** problem where:
- Two sacred stones are thrown uniformly at random in an L×W rectangle
- The Circle of Destiny has diameter equal to the distance between stones  
- We need the probability that this circle is completely contained within the rectangle
- A "good omen" occurs when the circle doesn't extend outside the rectangle boundaries

## Mathematical Setup

Let the two stones land at positions (x₁,y₁) and (x₂,y₂) where:
- 0 ≤ x₁, x₂ ≤ L
- 0 ≤ y₁, y₂ ≤ W

The Circle of Destiny:
- **Center**: ((x₁+x₂)/2, (y₁+y₂)/2) - midpoint of the stones
- **Radius**: √((x₁-x₂)² + (y₁-y₂)²)/2 - half the distance between stones

## Constraint for Good Omen

For the circle to be completely within the rectangle:
- Center_x - radius ≥ 0 → (x₁+x₂)/2 ≥ √((x₁-x₂)² + (y₁-y₂)²)/2
- Center_x + radius ≤ L → (x₁+x₂)/2 ≤ L - √((x₁-x₂)² + (y₁-y₂)²)/2
- Center_y - radius ≥ 0 → (y₁+y₂)/2 ≥ √((x₁-x₂)² + (y₁-y₂)²)/2  
- Center_y + radius ≤ W → (y₁+y₂)/2 ≤ W - √((x₁-x₂)² + (y₁-y₂)²)/2

## Solution Strategy

Due to the complexity of the analytical integration, we use **numerical integration (Monte Carlo method)**:

1. **Discretize the space**: Divide the rectangle into a grid
2. **Sample uniformly**: Try all combinations of grid positions for both stones
3. **Check constraint**: For each pair of positions, verify if the resulting circle fits
4. **Calculate probability**: Count valid configurations divided by total configurations

### Algorithm Steps

1. Create a grid of STEPS×STEPS positions for each stone
2. For each combination of positions (x₁,y₁) and (x₂,y₂):
   - Calculate distance between stones
   - Find circle center and radius
   - Check if circle is completely within rectangle bounds
   - Increment counter if valid
3. Return: valid_count / total_combinations

## Time Complexity
O(n⁴) where n is the number of discretization steps

## Space Complexity
O(1) - constant space for calculations

## Accuracy vs Performance Trade-off
- Higher STEPS value → more accurate but slower
- Lower STEPS value → faster but less accurate
- The solution uses STEPS=200 for reasonable balance

## C++ Implementation

```cpp
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double PI = 3.14159265358979323846;

int main() {
    int L, W;
    
    while (cin >> L >> W && (L != 0 || W != 0)) {
        // Mathematical approach using integration
        // The probability can be calculated analytically
        
        double totalArea = (double)L * W * L * W;
        double goodArea = 0.0;
        
        // We need to calculate the integral over all valid positions
        // This is a complex 4D integral, so we'll use numerical integration
        
        const int STEPS = 200;  // Reduced for better performance
        double step = 1.0 / STEPS;
        
        for (int i1 = 0; i1 < STEPS; i1++) {
            for (int j1 = 0; j1 < STEPS; j1++) {
                for (int i2 = 0; i2 < STEPS; i2++) {
                    for (int j2 = 0; j2 < STEPS; j2++) {
                        double x1 = ((double)i1 + 0.5) * L / STEPS;
                        double y1 = ((double)j1 + 0.5) * W / STEPS;
                        double x2 = ((double)i2 + 0.5) * L / STEPS;
                        double y2 = ((double)j2 + 0.5) * W / STEPS;
                        
                        if (x1 == x2 && y1 == y2) continue;
                        
                        // Distance between stones (diameter of circle)
                        double dist = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
                        double radius = dist / 2.0;
                        
                        // Center of circle (midpoint of stones)
                        double centerX = (x1 + x2) / 2.0;
                        double centerY = (y1 + y2) / 2.0;
                        
                        // Check if circle is completely within rectangle
                        if (centerX >= radius && centerX <= L - radius &&
                            centerY >= radius && centerY <= W - radius) {
                            goodArea += 1.0;
                        }
                    }
                }
            }
        }
        
        double probability = goodArea / (STEPS * STEPS * STEPS * STEPS);
        cout << fixed << setprecision(4) << probability << endl;
    }
    
    return 0;
}
```