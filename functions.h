/*
* @file functions.h
* @author Чернявський В.С. 515в
* @date 7 липня 2022
* @brief Літня практика
*/
#pragma once
#include <stdio.h>
int intersection_check(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
    double d, t, u;
    d = (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4);
    t = ((x1 - x3) * (y3 - y4) - (y1 - y3) * (x3 - x4)) / d;
    u = ((x1 - x3) * (y1 - y2) - (y1 - y3) * (x1 - x2)) / d;
    if (t >= 0 && t <= 1 && u >= 0 && u <= 1) {
        return 1;
    }
    else {
        return 0;
    }
}
void result_output(int intersection_check) {
    if (intersection_check == 1) {
        printf("Отрезки пересекаются");
    }
    else {
        printf("Отрезки не пересекаются");
    }
}
