// 函数名称: sub_4e3550
// 虚拟地址: 0x4e3550
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4e3550(float* arg1)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(*arg1)
    long double x87_r7 = fconvert.t(*arg1)
    long double x87_r6 = float.t(0)
    x87_r6 - x87_r7
    int32_t eax
    eax.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe | 0x3000
    bool p = unimplemented  {test ah, 0x44}
    
    if (not(p))
        long double x87_r6_1 = fconvert.t(arg1[1])
        x87_r7 - x87_r6_1
        eax.w = (x87_r7 < x87_r6_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, x87_r6_1) ? 1 : 0) << 0xa
            | (x87_r7 == x87_r6_1 ? 1 : 0) << 0xe | 0x3800
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (not(p_1))
            long double x87_r6_2 = fconvert.t(arg1[2])
            x87_r6_2 - x87_r7
            eax.w = (x87_r6_2 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, x87_r7) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7 ? 1 : 0) << 0xe
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (not(p_2))
                return 1
    
    return 0
}
