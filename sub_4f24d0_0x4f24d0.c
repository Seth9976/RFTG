// 函数名称: sub_4f24d0
// 虚拟地址: 0x4f24d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4f24d0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(arg1[1])
    long double x87_r7 = fconvert.t(arg1[1])
    long double x87_r6 = fconvert.t(arg2[1])
    x87_r6 - x87_r7
    int16_t result
    
    if ((((x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe):1.b & 0x41) == 0)
        result.b = 0
        return result
    
    fconvert.t(arg2[1]) - fconvert.t(arg1[1])
    bool p = unimplemented  {test ah, 0x5}
    
    if (p)
        int32_t eax = *arg1
        return neg.d(sbb.d(eax, eax, *arg2 u< eax))
    
    result.b = 1
    return result
}
