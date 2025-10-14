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