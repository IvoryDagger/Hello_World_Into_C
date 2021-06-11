#include "splashkit.h"


#define STROUHAL 0.33
#define CONSTANT 0.50

double air_speed(double freq, double amp)
{
    double result;
    result = freq * amp / STROUHAL;
    return result;
}

double Area(double base, double height)
{
    double result;
    result = CONSTANT * base * height;
    return result;
}

void output_air_speed(string name, double freq, double amp)
{
    write(name + ": ");
    write_line(air_speed(freq,amp));
}

void output_area_triangle(string tri, double base, double height)
{
    write(tri + ": ");
    write_line(Area(base,height));
}

string read_string(string prompt)
{
    string result;

    write(prompt);
    result = read_line();

    return result;   
}

int read_integer(string prompt)
{
    string line;
    line = read_string(prompt);
    return convert_to_integer(line);
}

double read_double(string prompt)
{
    string line;
    line = read_string(prompt);
    return convert_to_double(line);
}

int main()
{
    string name;
    string type;
    string line;
    string tri;
    int age;
    int freq;
    int amp;
    int base;
    int height;

    name = read_string("What is your name: ");
    age = read_integer("What is your age: ");
    freq = read_double("What is the frequency: ");
    amp = read_double("What is the amplitude: ");
    type = read_string("What is the type of the bird: ");
    tri = read_string("What is the name of the triangle: ");
    base = read_double("What is the base: ");
    height = read_double("What is the height: ");

    write_line(name);
    write("Age: ");
    write_line(age);
    output_air_speed("African Swallow", 15, 0.21);
    output_air_speed("European Swallow", 14, 0.22);
    write("Type: ");
    write_line(type);
    write("Freq: ");
    write_line(freq);
    write("Amp: ");
    write_line(amp);
    output_air_speed(type, freq, amp);
    write_line(tri);
    write("Base: ");
    write_line(base);
    write("Height: ");
    write_line(height);
    output_area_triangle(tri, base, height);

    return 0;
}