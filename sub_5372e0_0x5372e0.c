// 函数名称: sub_5372e0
// 虚拟地址: 0x5372e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long double __convention("regparm")sub_5372e0(int32_t arg1, char arg2, float arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    
    if (arg2 != 0)
        arg3 = fconvert.s(fneg(fconvert.t(arg3)))
    
    long double x87_r7_3 = float.t(0)
    int32_t ecx = 0
    float var_38 = fconvert.s(x87_r7_3)
    float var_34 = fconvert.s(float.t(1))
    float var_30 = fconvert.s(fconvert.t(5f))
    float var_2c = fconvert.s(fconvert.t(10f))
    float var_28 = fconvert.s(fconvert.t(50f))
    float var_24 = fconvert.s(fconvert.t(100f))
    float var_20 = fconvert.s(fconvert.t(500f))
    float var_1c = fconvert.s(fconvert.t(1000f))
    float var_18 = fconvert.s(fconvert.t(5000f))
    float var_14 = fconvert.s(fconvert.t(10000f))
    float var_10 = fconvert.s(fconvert.t(50000f))
    long double x87_r5_9 = fconvert.t(100000f)
    float var_c = fconvert.s(x87_r5_9)
    long double x87_r5_10 = fconvert.t(arg3)
    long double x87_r7_4
    
    while (true)
        long double x87_r4_1 = fconvert.t((&var_38)[ecx])
        x87_r4_1 - x87_r5_10
        int32_t eax_1
        eax_1.w = (x87_r4_1 < x87_r5_10 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_1, x87_r5_10) ? 1 : 0) << 0xa
            | (x87_r4_1 == x87_r5_10 ? 1 : 0) << 0xe | 0x2800
        
        if ((eax_1:1.b & 1) == 0)
            long double x87_r5_12 = fconvert.t(fconvert.s(fconvert.t((&var_38)[ecx])))
            x87_r7_3 - x87_r5_12
            eax_1.w = (x87_r7_3 < x87_r5_12 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_3, x87_r5_12) ? 1 : 0) << 0xa
                | (x87_r7_3 == x87_r5_12 ? 1 : 0) << 0xe | 0x2800
            bool p_1 = unimplemented  {test ah, 0x44}
            
            if (p_1)
                x87_r7_4 = x87_r5_10
                break
            
            if (arg2 == 0)
                sub_5a6aba(var_8 ^ &__saved_ebp)
                return x87_r7_3
            
            sub_5a6aba(var_8 ^ &__saved_ebp)
            return x87_r5_12
        
        ecx += 1
        
        if (ecx u>= 0xc)
            x87_r7_4 = fconvert.t(fconvert.s(x87_r5_9))
            break
    
    if (arg2 != 0)
        x87_r7_4 = fneg(x87_r7_4)
    
    sub_5a6aba(var_8 ^ &__saved_ebp)
    return x87_r7_4
}
