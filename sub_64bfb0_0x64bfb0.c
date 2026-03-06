// 函数名称: sub_64bfb0
// 虚拟地址: 0x64bfb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_64bfb0(void* arg1, float arg2)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(arg2)
    long double x87_r7 = fconvert.t(arg2)
    void* result = arg1 + 8
    int32_t i_1 = 7
    int32_t i
    
    do
        long double x87_r6_1 = fconvert.t(*(result - 8))
        result += 0x20
        i = i_1
        i_1 -= 1
        *(result - 0x28) = fconvert.s(x87_r6_1 + x87_r7)
        *(result - 0x24) = fconvert.s(x87_r7 + fconvert.t(*(result - 0x24)))
        *(result - 0x20) = fconvert.s(fconvert.t(*(result - 0x20)) + x87_r7)
        *(result - 0x1c) = fconvert.s(fconvert.t(*(result - 0x1c)) + x87_r7)
        *(result - 0x18) = fconvert.s(fconvert.t(*(result - 0x18)) + x87_r7)
        *(result - 0x14) = fconvert.s(fconvert.t(*(result - 0x14)) + x87_r7)
        *(result - 0x10) = fconvert.s(x87_r7 + fconvert.t(*(result - 0x10)))
        *(result - 0xc) = fconvert.s(fconvert.t(*(result - 0xc)) + x87_r7)
    while (i != 1)
    return result
}
