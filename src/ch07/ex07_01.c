/**
 * ex07_01.c - 使用 `mbrtoc16()` 函数将 UTF-8 字符串转换为 `char16_t` 字符串
**/

#include <locale.h>
#include <uchar.h>
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

#if __STDC_UTF_16__ != 1
#error "__STD_UTF_16__ NOT supported in this implementation"
#endif

int main()
{
    // 设置区域设置为支持 UTF-8 编码的中文环境
    setlocale(LC_ALL, "zh_CN.UTF-8");

    char input[] = u8"你好，世界！"; // UTF-8 编码的字符串

    const size_t input_size = sizeof(input);

    char16_t output[input_size]; // 输出缓冲区，大小足够容纳转换后的字符

    char *p_input = input;
    char *p_end = input + input_size;
    char16_t *p_output = output;
    size_t code;
    mbstate_t state = {0}; // 初始化转换状态
    puts(input);

    while ((code = mbrtoc16(p_output, p_input, p_end-p_input, &state)))
    {
        if (code == (size_t)-1)
        {
            break; // -1 检测到无效的代码单元序列
        }
        else if (code == (size_t)-2)
        {
            break;  // -2 检测到不完整的代码单元序列
        }
        else if (code == (size_t)-3)
        {
            p_output++; // -3 代理对偶（surrogate pair）中的高代理
        }
        else
        {
            p_output++; // 成功转换一个字符，移动输出指针
            p_input += code; // 移动输入指针，跳过已转换的字节
        }
    }
    size_t output_size = p_output - output; // 计算转换后的字符数量
    printf("Converted before: %zu bytes: [ ", input_size);
    for (size_t i = 0; i < input_size; ++i)
    {
        printf("%#x ", (unsigned char)input[i]); // 以十六进制格式输出 UTF-8 字节
    }
    puts("]");
    printf("Converted to %zu UTF-16 code units: [ ", output_size);
    for (size_t i = 0; i < output_size; ++i)
    {
        printf("%#x ", output[i]); // 以十六进制格式输出 UTF-16 代码单元
    }
    puts("]");
    return 0;
}
