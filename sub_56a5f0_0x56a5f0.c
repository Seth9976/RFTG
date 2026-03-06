// 函数名称: sub_56a5f0
// 虚拟地址: 0x56a5f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_56a5f0()
{
    // 第一条实际指令: void* result = data_3079210
    void* result = data_3079210
    int32_t ecx = *(result + 0x14)
    int32_t var_8 = ecx
    
    if (ecx != 0)
        long double x87_r6_1 = float.t(1)
        long double x87_r6_2 = fconvert.t(fconvert.s(x87_r6_1 / x87_r6_1))
        *(result + 0x4c) = fconvert.s(fconvert.t(0f) * x87_r6_2)
        *(result + 0x50) = fconvert.s(x87_r6_2 * fconvert.t(0f))
        *(result + 0x54) = fconvert.s(x87_r6_2 * fconvert.t(0f))
    
    return result
}
