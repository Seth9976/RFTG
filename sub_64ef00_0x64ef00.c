// 函数名称: sub_64ef00
// 虚拟地址: 0x64ef00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_64ef00(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: long double x87_r7_2 = fconvert.t(fconvert.s(fconvert.t(**arg1)))
    long double x87_r7_2 = fconvert.t(fconvert.s(fconvert.t(**arg1)))
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(**arg2)))
    x87_r6 - x87_r7_2
    float* eax_1
    eax_1.w = (x87_r6 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_2 ? 1 : 0) << 0xe | 0x3000
    int32_t result
    
    if ((eax_1:1.b & 0x41) != 0)
        result = 0
    else
        result = 1
    
    x87_r6 - x87_r7_2
    eax_1.w = (x87_r6 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_2 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x5}
    
    if (p)
        return result
    
    return result - 1
}
