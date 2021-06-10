#include "splashkit.h"

void draw_house_scene()
{  
    clear_screen(COLOR_WHITE);
    fill_ellipse(COLOR_GREEN, 0, 400, 800, 400);
    fill_rectangle(COLOR_GRAY, 300, 300, 200, 200);
    fill_triangle(COLOR_RED, 250, 300, 400, 150, 550, 300);
    refresh_screen(60);
}

void draw_my_scene()
{
    clear_screen(COLOR_WHITE);
    fill_circle(COLOR_YELLOW, 50, 70, 25);
    fill_rectangle(COLOR_BROWN, 200, 200, 400, 400);
    fill_rectangle(COLOR_BEIGE, 250, 250, 100, 100);
    fill_rectangle(COLOR_BEIGE, 450, 250, 100, 100);
    fill_rectangle(COLOR_BEIGE, 350, 400, 100, 200);
    fill_ellipse(COLOR_BLACK, 420, 500, 25, 25); 
    refresh_screen(60);
}

int main()
{
    open_window("House Drawing", 800, 600);

    draw_house_scene();

    delay(1000);

    draw_my_scene();

    delay(1000);

    draw_house_scene();

    delay(1000);

    draw_my_scene();
    
    delay(1000);

    return 0;
}