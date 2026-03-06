// 函数名称: sub_499150
// 虚拟地址: 0x499150
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_499150(int32_t arg1 @ esi, int128_t* arg2 @ edi, int32_t arg3)
{
    // 第一条实际指令: __chkstk(0x1f04)
    __chkstk(0x1f04)
    int32_t __saved_ebp
    void* eax_1 = __security_cookie ^ &__saved_ebp
    void* var_c = eax_1
    double var_1f00 = fconvert.d(fconvert.t(-1.0))
    int32_t i_2 = 0xffffffff
    int32_t var_1edc = 0
    
    if (*(arg2 + 0x18) != 0)
        sub_5a6aba(arg1 ^ &__saved_ebp)
        return 
    
    int32_t i_4 = sx.d(arg2[0x46].w)
    int32_t esi_1 = arg3
    
    if (i_4 s> 0)
        eax_1 = arg2 + 0x468
        int32_t i
        
        do
            if ((1 << esi_1.b & zx.d(*eax_1)) == 0)
                var_1edc += 1
            
            eax_1 += 0x14
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    void* eax_3
    long double st0
    st0, eax_3 = sub_4904a0(eax_1, i_4.b, arg2, esi_1)
    int32_t i_1 = 1
    int32_t i_3 = 1
    
    do
        long double x87_r7_2 = float.t(0)
        int32_t ebx_2 = 0
        double var_1ef8_1 = fconvert.d(x87_r7_2)
        
        if (0 s< arg2[0x46].w)
            int32_t edx = 1 << esi_1.b
            eax_3 = arg2 + 0x46c
            void* var_1ee4_1 = eax_3
            int32_t var_1eec_1 = edx
            
            while (true)
                if ((edx & zx.d(*(eax_3 - 4))) == 0)
                    void* edx_1 = *eax_3
                    
                    if (sx.d(*(edx_1 + 7)) == i_3)
                        int32_t var_10_1 = esi_1
                        esi_1 = arg3
                        int32_t var_10_2 = 2
                        void var_1ed8
                        int32_t eax_6
                        char edx_3
                        eax_6, edx_3 =
                            sub_49cc30(&var_1ed8, ebx_2, sub_48bb40(arg2, &var_1ed8, edx_1.b), esi_1)
                        eax_3 = var_1ee4_1
                        x87_r7_2 = sub_4904a0(eax_6, edx_3, &var_1ed8, esi_1) / float.t(var_1edc)
                            + fconvert.t(var_1ef8_1)
                    else
                        x87_r7_2 = x87_r7_2 + fconvert.t(fconvert.d(st0)) / float.t(var_1edc)
                    
                    var_1ef8_1 = fconvert.d(x87_r7_2)
                
                ebx_2 += 1
                eax_3 += 0x14
                var_1ee4_1 = eax_3
                
                if (ebx_2 s>= sx.d(arg2[0x46].w))
                    break
                
                edx = var_1eec_1
            
            i_1 = i_3
        
        long double x87_r6_4 = fconvert.t(var_1f00) - fconvert.t(9.9999999999999995e-07)
        x87_r6_4 - x87_r7_2
        eax_3.w = (x87_r6_4 < x87_r7_2 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_4, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r6_4 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800
        bool p_1 = unimplemented  {test ah, 0x41}
        
        if (not(p_1))
            var_1f00 = fconvert.d(x87_r7_2)
            i_2 = i_1
        
        i_1 += 1
        i_3 = i_1
    while (i_1 s<= 7)
    
    sub_5a6aba(arg1 ^ &__saved_ebp)
}
