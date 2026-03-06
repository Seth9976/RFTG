// 函数名称: sub_499fb0
// 虚拟地址: 0x499fb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_499fb0(int32_t arg1 @ esi, int32_t arg2 @ edi, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: char edx = __chkstk(0x1ef4)
    char edx = __chkstk(0x1ef4)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    double var_1eec = fconvert.d(float.t(0))
    int32_t var_1ed8 = 0
    int128_t* entry_ebx
    
    if (*(entry_ebx + 0x18) == 0)
        int32_t var_c_1 = arg2
        void var_1ed4
        sub_48bb40(entry_ebx, &var_1ed4, edx)
        int32_t var_c_3 = 0
        int32_t eax_5
        char edx_2
        eax_5, edx_2 = sub_48bc70(&var_1ed4, sub_492910(arg3, 1, &var_1ed4, arg2))
        int32_t edx_3
        long double st0_1
        st0_1, edx_3 = sub_4904a0(eax_5, edx_2, &var_1ed4, arg2)
        int32_t var_1edc_1 = 0
        
        if (0 s< entry_ebx[0x46].w)
            int32_t eax_6 = 1 << arg2.b
            void* esi_1 = entry_ebx + 0x46c
            void* var_1ee0_1 = esi_1
            int32_t var_1ee4_1 = eax_6
            int32_t eax_14
            
            while (true)
                if ((eax_6 & zx.d(*(esi_1 - 4))) == 0 && arg4 u<= 8)
                    int32_t eax_8
                    char edx_4
                    eax_8, edx_4 = sub_49e1d0(*esi_1, edx_3, arg4)
                    
                    if (eax_8 != 0)
                        int32_t var_c_5 = arg2
                        sub_48bb40(entry_ebx, &var_1ed4, edx_4)
                        int32_t var_c_7 = 0
                        int32_t eax_12
                        char edx_6
                        eax_12, edx_6 =
                            sub_48bc70(&var_1ed4, sub_492910(var_1edc_1, 1, &var_1ed4, arg2))
                        esi_1 = var_1ee0_1
                        var_1ed8 += 1
                        var_1eec = fconvert.d(sub_4904a0(eax_12, edx_6, &var_1ed4, arg2)
                            + fconvert.t(var_1eec))
                
                edx_3 = sx.d(entry_ebx[0x46].w)
                eax_14 = var_1edc_1 + 1
                esi_1 += 0x14
                var_1edc_1 = eax_14
                var_1ee0_1 = esi_1
                
                if (eax_14 s>= edx_3)
                    break
                
                eax_6 = var_1ee4_1
            
            if (var_1ed8 != 0)
                long double x87_r7_5 = fconvert.t(var_1eec) / float.t(var_1ed8)
                long double x87_r6_2 =
                    fconvert.t(fconvert.d(st0_1)) - fconvert.t(9.9999999999999995e-07)
                x87_r6_2 - x87_r7_5
                eax_14.w = (x87_r6_2 < x87_r7_5 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_2, x87_r7_5) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_5 ? 1 : 0) << 0xe
                bool p_1 = unimplemented  {test ah, 0x41}
                
                if (not(p_1))
                    sub_5a6aba(arg1 ^ &__saved_ebp)
                    return 0
    
    sub_5a6aba(arg1 ^ &__saved_ebp)
    return 1
}
