// 函数名称: sub_4d83b0
// 虚拟地址: 0x4d83b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4d83b0(float* arg1, float* arg2)
{
    // 第一条实际指令: fconvert.t(*arg1) - fconvert.t(*arg2)
    fconvert.t(*arg1) - fconvert.t(*arg2)
    bool p = unimplemented  {test ah, 0x5}
    
    if (p)
        long double x87_r7_2 = fconvert.t(arg2[3])
        long double x87_r6_1 = fconvert.t(*arg1)
        x87_r6_1 - x87_r7_2
        
        if ((((x87_r6_1 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe):1.b & 0x41) == 0)
            arg2[3] = fconvert.s(fconvert.t(*arg1))
    else
        *arg2 = fconvert.s(fconvert.t(*arg1))
    
    fconvert.t(arg1[1]) - fconvert.t(arg2[1])
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        long double x87_r7_6 = fconvert.t(arg2[4])
        long double x87_r6_3 = fconvert.t(arg1[1])
        x87_r6_3 - x87_r7_6
        
        if ((((x87_r6_3 < x87_r7_6 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_3, x87_r7_6) ? 1 : 0) << 0xa
                | (x87_r6_3 == x87_r7_6 ? 1 : 0) << 0xe):1.b & 0x41) == 0)
            arg2[4] = fconvert.s(fconvert.t(arg1[1]))
    else
        arg2[1] = fconvert.s(fconvert.t(arg1[1]))
    
    long double x87_r7_8 = fconvert.t(arg2[2])
    long double x87_r6_4 = fconvert.t(arg1[2])
    x87_r6_4 - x87_r7_8
    bool p_2 = unimplemented  {test ah, 0x5}
    
    if (not(p_2))
        arg2[2] = fconvert.s(fconvert.t(arg1[2]))
        return (x87_r6_4 < x87_r7_8 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_4, x87_r7_8) ? 1 : 0) << 0xa
            | (x87_r6_4 == x87_r7_8 ? 1 : 0) << 0xe
    
    long double x87_r7_10 = fconvert.t(arg2[5])
    long double x87_r6_5 = fconvert.t(arg1[2])
    x87_r6_5 - x87_r7_10
    int16_t result = (x87_r6_5 < x87_r7_10 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_5, x87_r7_10) ? 1 : 0) << 0xa | (x87_r6_5 == x87_r7_10 ? 1 : 0) << 0xe
    
    if ((result:1.b & 0x41) == 0)
        arg2[5] = fconvert.s(fconvert.t(arg1[2]))
    
    return result
}
