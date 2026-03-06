// 函数名称: sub_499e30
// 虚拟地址: 0x499e30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_499e30(int32_t arg1 @ edi, int32_t arg2)
{
    // 第一条实际指令: __chkstk(0x1efc)
    __chkstk(0x1efc)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    int32_t i = 0
    double var_1f00 = fconvert.d(fconvert.t(-1.0))
    int32_t i_1 = 0xffffffff
    int32_t i_2 = 0
    
    do
        int128_t* entry_ebx
        
        if (*(entry_ebx + 0x45c) == 0 || i != 8)
            long double x87_r7_1 = float.t(0)
            int32_t edi = 0
            double var_1ef8_1 = fconvert.d(x87_r7_1)
            int32_t var_1edc_1 = 0
            
            if (0 s< entry_ebx[0x46].w)
                int32_t eax_2 = 1 << arg2.b
                void* esi_1 = entry_ebx + 0x46c
                void* var_1ee8_1 = esi_1
                int32_t var_1eec_1 = eax_2
                
                while (true)
                    if ((eax_2 & zx.d(*(esi_1 - 4))) == 0 && i u<= 8)
                        if (sub_49e1d0(*esi_1, i, i) != 0)
                            int32_t var_10_1 = arg2
                            void var_1ed8
                            sub_48bb40(entry_ebx, &var_1ed8, arg2.b)
                            int32_t eax_7
                            char edx_1
                            eax_7, edx_1 = sub_492910(edi, 1, &var_1ed8, arg2)
                            x87_r7_1 =
                                sub_4904a0(eax_7, edx_1, &var_1ed8, arg2) + fconvert.t(var_1ef8_1)
                            esi_1 = var_1ee8_1
                            var_1edc_1 += 1
                            var_1ef8_1 = fconvert.d(x87_r7_1)
                        
                        i = i_2
                    
                    edi += 1
                    esi_1 += 0x14
                    var_1ee8_1 = esi_1
                    
                    if (edi s>= sx.d(entry_ebx[0x46].w))
                        break
                    
                    eax_2 = var_1eec_1
                
                if (var_1edc_1 != 0)
                    x87_r7_1 = x87_r7_1 / float.t(var_1edc_1)
                    long double x87_r6_2 = fconvert.t(var_1f00) - fconvert.t(9.9999999999999995e-07)
                    x87_r6_2 - x87_r7_1
                    int32_t eax_8
                    eax_8.w = (x87_r6_2 < x87_r7_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_2, x87_r7_1) ? 1 : 0) << 0xa
                        | (x87_r6_2 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800
                    bool p_1 = unimplemented  {test ah, 0x41}
                    
                    if (not(p_1))
                        var_1f00 = fconvert.d(x87_r7_1)
                        i_1 = i
        
        i += 1
        i_2 = i
    while (i s< 9)
    
    sub_5a6aba(arg1 ^ &__saved_ebp)
}
