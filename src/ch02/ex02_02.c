/**
 * ex02_02.c - 距离转换程序
 *
 * 输入 y 码(yard) f 英尺(foot) i 英寸(inche)。输出 xxx 英寸
 *
 * 注意: 1 yard = 3 feet;   1 foot = 12 inches
**/

#include <stdio.h>

int main(void)
{
    // 声明三个变量，分别存储 y 码 f 英尺 i 英寸
    int yards = 0, feet = 0, inches = 0;
    printf("Enter three intager for yards、feet、inches: ");
    scanf("%d%*c%d%*c%d", &yards, &feet, &inches);

    const unsigned feet_per_yard = 3;
    const unsigned inches_per_foot = 12;

    // 将  y 码(yard) f 英尺(foot) i 英寸(inche) 转换为英寸(inches)
    unsigned total_inches = 0;
    total_inches = inches + feet * inches_per_foot + yards * feet_per_yard * inches_per_foot;
    printf("This distance corresponds to %d inches.\n", total_inches);

    printf("Enter a distance in inches: ");
    scanf("%d%*c", &total_inches);

    // 将 m 英寸(inches) 转换为 y 码(yard) f 英尺(foot) i 英寸(inche)
    feet = total_inches / inches_per_foot;  // inches => feet
    inches = total_inches % inches_per_foot;  // total_inches - (feet * inches_per_foot)
    yards = feet / feet_per_yard;  // feet => yards
    feet = feet % feet_per_yard;
    printf("This distance corresponds to %d yards %d feet %d inches.", yards, feet, inches);
}