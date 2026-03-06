// 函数名称: sub_4d7b10
// 虚拟地址: 0x4d7b10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4d7b10(float* arg1 @ esi, float* arg2 @ edi, float* arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_14 = ecx
    float var_8 = fconvert.s(fconvert.t(arg2[4]) * fconvert.t(arg1[1])
        + fconvert.t(arg2[3]) * fconvert.t(*arg1) + fconvert.t(arg2[5]) * fconvert.t(arg1[2]))
    long double st0 = sub_4064d0(fconvert.s(fconvert.t(var_8)))
    long double temp1 = fconvert.t(9.99999975e-06f)
    st0 - temp1
    int32_t eax
    eax.w = (st0 < temp1 ? 1 : 0) << 8 | (is_unordered.t(st0, temp1) ? 1 : 0) << 0xa
        | (st0 == temp1 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x5}
    
    if (p)
        long double x87_r7_12 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(
            fconvert.t(arg2[1]) * fconvert.t(arg1[1]) + fconvert.t(*arg2) * fconvert.t(*arg1)
            + fconvert.t(arg2[2]) * fconvert.t(arg1[2]))) + fconvert.t(arg1[3])))
        long double x87_r6_9 = x87_r7_12 * fconvert.t(var_8)
        long double temp2_1 = fconvert.t(0.0)
        x87_r6_9 - temp2_1
        eax.w = (x87_r6_9 < temp2_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_9, temp2_1) ? 1 : 0) << 0xa
            | (x87_r6_9 == temp2_1 ? 1 : 0) << 0xe | 0x3000
        bool p_1 = unimplemented  {test ah, 0x41}
        
        if (not(p_1))
            long double x87_r6_12 = fneg(x87_r7_12)
            *arg3 = fconvert.s(x87_r6_12 / x87_r6_12)
            float* eax_1
            eax_1.b = 1
            return 
    
    eax.b = 0
}
