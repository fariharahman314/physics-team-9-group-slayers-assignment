1)//code for maximum angle which helps to bent the light most//

#include <stdio.h>
#include <math.h>
#define pi 3.1416
int main() {
    int num_slits = 3;
    double slit_widths[num_slits];
    double wavelength;
    double max_angle = -1.0; // Initialize with a value outside the valid range
    int max_slit = -1; // Initialize with an invalid slit number

    for (int i = 0; i < num_slits; i++) {
        printf("Enter the width of slit %d (in micrometers): ", i + 1);
        scanf("%lf", &slit_widths[i]);
    }

    printf("Enter the wavelength (in nm): ");
    scanf("%lf", &wavelength);

    if (wavelength >= 380 && wavelength <= 750) {
        for (int i = 0; i < num_slits; i++) {
            double theta = 2 * asin(wavelength / (2 * slit_widths[i]));
            double angle_degrees = theta * (180.0 / pi);

            if (angle_degrees > max_angle) {
                max_angle = angle_degrees;
                max_slit = i + 1; // Adding 1 to convert to 1-based indexing
            }
        }

        printf("Slit %d bent the light the most with an angle of %.2f degrees.\n", max_slit, max_angle);
    } else {
        printf("Out of the range. Please enter a valid number.\n");
    }

    return 0;}
