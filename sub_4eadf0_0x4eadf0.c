// 函数名称: sub_4eadf0
// 虚拟地址: 0x4eadf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4eadf0(float* arg1, float* arg2)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(*arg2)
    long double x87_r7 = fconvert.t(*arg2)
    long double x87_r6 = fconvert.t(*arg1)
    x87_r6 - x87_r7
    int32_t eax
    eax.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x44}
    
    if (not(p))
        long double x87_r7_1 = fconvert.t(arg2[1])
        long double x87_r6_1 = fconvert.t(arg1[1])
        x87_r6_1 - x87_r7_1
        eax.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (not(p_1))
            return 0
    
    return 1
}
