// 函数名称: sub_499630
// 虚拟地址: 0x499630
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_499630(int32_t arg1 @ esi, int128_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t edx
    ecx, edx = __chkstk(0x1ee8)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    double var_1eec = fconvert.d(fconvert.t(-1.0))
    int32_t edi = 0
    int32_t var_1ed8 = 0xffffffff
    
    if (arg3 s> 0)
        do
            int32_t entry_ebx
            int32_t var_10_1 = entry_ebx
            void var_1ed4
            int32_t ecx_1 = sub_48bb40(arg2, &var_1ed4, edx.b)
            int32_t var_10_2 = 2
            int32_t eax_5
            char edx_2
            eax_5, edx_2 = sub_49cc30(&var_1ed4, *(ecx + (edi << 2)), ecx_1, entry_ebx)
            int32_t eax_6
            long double st0_1
            st0_1, eax_6, edx = sub_4904a0(eax_5, edx_2, &var_1ed4, entry_ebx)
            long double x87_r6_2 = fconvert.t(var_1eec) - fconvert.t(9.9999999999999995e-07)
            x87_r6_2 - st0_1
            eax_6.w = (x87_r6_2 < st0_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, st0_1) ? 1 : 0) << 0xa
                | (x87_r6_2 == st0_1 ? 1 : 0) << 0xe | 0x3800
            bool p_1 = unimplemented  {test ah, 0x41}
            
            if (not(p_1))
                edx = *(ecx + (edi << 2))
                var_1eec = fconvert.d(st0_1)
                var_1ed8 = edx
            
            edi += 1
        while (edi s< arg3)
    
    sub_5a6aba(arg1 ^ &__saved_ebp)
}
