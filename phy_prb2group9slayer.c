//code for angle of red light //

#include <stdio.h>
#include <math.h>

int main() {
    // Given values
    double wavelength_green = 530e-9;  // Green light wavelength in meters
    double wavelength_red = 700e-9;    // Red light wavelength in meters
    int order_green = 3;                // Third-order for green light
    int order_red = 2;                  // Second-order for red light
    double angle_green_deg = 65.0;      // Angle for green light in degrees

    // Convert angle from degrees to radians
    double angle_green_rad = angle_green_deg * M_PI / 180.0;

    // Calculate grating spacing (d) for green light
    double grating_spacing_green = (order_green * wavelength_green) / sin(angle_green_rad);

    // Use the grating spacing to calculate the angle for the second-order red light
    double angle_red_rad = asin((order_red * wavelength_red) / grating_spacing_green);
    double angle_red_deg = angle_red_rad * 180.0 / M_PI;

    printf("The grating spacing for green light is %.6e meters.\n", grating_spacing_green);
    printf("The angle for the second-order red light is %.2f degrees.\n", angle_red_deg);

    return 0;
}
