// 函数名称: sub_56a090
// 虚拟地址: 0x56a090
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

floatsub_56a090()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float var_10
    float eax_2
    int80_t st0
    st0, eax_2 = sub_4c6230(&var_10)
    
    if (eax_2.b != 0)
        eax_2 = data_3079210
        float var_30_1 = fconvert.s(fconvert.t(var_10) - fconvert.t(*(eax_2 i+ 0x44)))
        float var_c
        long double x87_r7_4 = fconvert.t(var_c) - fconvert.t(*(eax_2 i+ 0x48))
        *(eax_2 i+ 0x44) = var_10
        *(eax_2 i+ 0x48) = var_c
        long double x87_r7_5 = fconvert.t(var_30_1)
        long double x87_r6_1 = float.t(0)
        x87_r6_1 - x87_r7_5
        eax_2.w = (x87_r6_1 < x87_r7_5 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_5) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_5 ? 1 : 0) << 0xe | 0x3000
        bool p_1 = unimplemented  {test ah, 0x44}
        bool p_2
        
        if (not(p_1))
            long double x87_r6_2 = fconvert.t(fconvert.s(x87_r7_4))
            x87_r6_2 - x87_r7_5
            eax_2.w = (x87_r6_2 < x87_r7_5 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_2, x87_r7_5) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_5 ? 1 : 0) << 0xe
            p_2 = unimplemented  {test ah, 0x44}
        
        if (p_1 || p_2)
            float var_48_1 = 0f
            float var_44_1 = 0f
            long double x87_r7_8 = fconvert.t(fconvert.s(float.t(1) - fconvert.t(0.0)))
            float var_34 = fconvert.s(x87_r7_8)
            float var_30_2 = fconvert.s(x87_r7_8)
            float var_2c_2 = fconvert.s(x87_r7_8)
            float var_4c_1 = 0f
            float var_14 = var_34
            var_10 = var_30_2
            float var_c_2 = var_2c_2
            float var_5c[0x4]
            float* eax_4 = sub_4131a0(&var_14, &var_5c)
            float ecx_3 = *eax_4
            float edx_3 = eax_4[1]
            int32_t var_c_3 = eax_4[2]
            void* eax_6 = data_3079210
            long double x87_r7_10 = fconvert.t(var_4c_1) - fconvert.t(*(eax_6 + 0x58))
            float var_20 = 0f
            var_20 = fconvert.s(x87_r7_10)
            var_14 = ecx_3
            long double x87_r7_12 = fconvert.t(var_48_1) - fconvert.t(*(eax_6 + 0x5c))
            int32_t ecx_4 = *(eax_6 + 0x40)
            var_10 = edx_3
            float var_1c_2 = fconvert.s(x87_r7_12)
            float var_18_2 = fconvert.s(fconvert.t(var_44_1) - fconvert.t(*(eax_6 + 0x60)))
            
            if (ecx_4 == 0)
                int32_t* eax_7 = sub_569e40(eax_6, &var_34, &var_20, &var_34)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_7
            
            eax_2 = sub_569f60(&var_34, eax_6 + 0x4c, ecx_4)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_2
}
