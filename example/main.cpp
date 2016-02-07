#include <stdio.h>

#include<test.h>

#include<cstdint>

constexpr size_t size = sizeof(std::int_fast32_t);
constexpr std::uint32_t size32 = sizeof(std::int_fast32_t);

int main(int argc, char* argv[]) {

    OutPutString("hello world!");

    OutPut(100);

    OutPut("hello world!");

    printf("%zd, %d", size, size32);

    getchar();

    return 0;
}