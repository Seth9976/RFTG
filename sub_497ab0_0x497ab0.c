// 函数名称: sub_497ab0
// 虚拟地址: 0x497ab0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_497ab0(int32_t arg1 @ edi, int128_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t* ecx
    int32_t* ecx
    int32_t* edx
    ecx, edx = __chkstk(0x1ef0)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t var_10 = arg1
    int32_t i_1 = 0xffffffff
    void var_1ed4
    sub_48bb40(arg2, &var_1ed4, edx.b)
    char* eax_3
    char edx_1
    eax_3, edx_1 = sub_4a79a0(&var_1ed4)
    double var_1ef4 = fconvert.d(sub_4904a0(eax_3, edx_1, &var_1ed4, arg1))
    int32_t* edx_2 = edx
    int32_t i = 0
    int32_t entry_ebx
    
    if (*edx_2 s> 0)
        do
            int32_t var_10_2 = arg1
            sub_48bb40(arg2, &var_1ed4, edx_2.b)
            char var_2c[0x1c]
            var_2c[i] = 1
            *(&(&__saved_ebp)[arg1 * 0x2d] - 0x1e2d) -= 1
            char* eax_8
            char edx_3
            eax_8, edx_3 = sub_4a79a0(&var_1ed4)
            int32_t eax_9
            long double st0_1
            st0_1, eax_9 = sub_4904a0(eax_8, edx_3, &var_1ed4, arg1)
            long double x87_r6_2 = fconvert.t(var_1ef4) - fconvert.t(9.9999999999999995e-07)
            x87_r6_2 - st0_1
            eax_9.w = (x87_r6_2 < st0_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, st0_1) ? 1 : 0) << 0xa
                | (x87_r6_2 == st0_1 ? 1 : 0) << 0xe | 0x3800
            bool p_1 = unimplemented  {test ah, 0x41}
            
            if (not(p_1))
                var_1ef4 = fconvert.d(st0_1)
                i_1 = i
            
            edx_2 = edx
            i += 1
        while (i s< *edx_2)
        
        if (i_1 != 0xffffffff)
            *ecx = ecx[i_1]
            *arg3 = arg3[i_1]
            *edx = 1
            sub_5a6aba(entry_ebx ^ &__saved_ebp)
            return 
    
    *edx = 0
    sub_5a6aba(entry_ebx ^ &__saved_ebp)
}
