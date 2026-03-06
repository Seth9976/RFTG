// 函数名称: sub_4d7ba0
// 虚拟地址: 0x4d7ba0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4d7ba0(float* arg1, float* arg2)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    fconvert.t(arg2[3]) - fconvert.t(*arg1)
    bool p = unimplemented  {test ah, 0x5}
    
    if (p)
        long double x87_r7_1 = fconvert.t(*arg1)
        long double x87_r6_1 = fconvert.t(*arg2)
        x87_r6_1 - x87_r7_1
        
        if ((((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe):1.b & 0x41) == 0)
            result = 2
    else
        result = 1
    
    fconvert.t(arg2[4]) - fconvert.t(arg1[1])
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        long double x87_r7_3 = fconvert.t(arg1[1])
        long double x87_r6_3 = fconvert.t(arg2[1])
        x87_r6_3 - x87_r7_3
        
        if ((((x87_r6_3 < x87_r7_3 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_3, x87_r7_3) ? 1 : 0) << 0xa
                | (x87_r6_3 == x87_r7_3 ? 1 : 0) << 0xe):1.b & 0x41) == 0)
            result |= 8
    else
        result |= 4
    
    fconvert.t(arg2[5]) - fconvert.t(arg1[2])
    bool p_2 = unimplemented  {test ah, 0x5}
    
    if (not(p_2))
        return result | 0x20
    
    long double x87_r7_5 = fconvert.t(arg1[2])
    long double x87_r6_5 = fconvert.t(arg2[2])
    x87_r6_5 - x87_r7_5
    
    if ((((x87_r6_5 < x87_r7_5 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_5, x87_r7_5) ? 1 : 0) << 0xa
            | (x87_r6_5 == x87_r7_5 ? 1 : 0) << 0xe):1.b & 0x41) != 0)
        return result
    
    return result | 0x10
}
