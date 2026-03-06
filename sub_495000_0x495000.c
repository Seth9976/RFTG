// 函数名称: sub_495000
// 虚拟地址: 0x495000
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_495000(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* ecx
    int32_t* ecx
    int128_t* edx
    ecx, edx = __chkstk(0x1ef4)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t var_14 = arg1
    void var_1ed4
    void* esi = &var_1ed4
    int32_t i_2 = 0xffffffff
    sub_48bb40(edx, esi, edx.b)
    int32_t var_14_1 = 0
    int32_t eax_5
    char edx_1
    eax_5, edx_1 = sub_48bc70(&var_1ed4, 1)
    char edx_2
    long double st0
    st0, edx_2 = sub_4904a0(eax_5, edx_1, &var_1ed4, arg1)
    double var_1ef4 = fconvert.d(st0)
    int32_t entry_ebx
    
    if (*(edx + 0x18) != 0)
        int32_t var_14_3 = arg1
        int128_t* eax_7 = sub_48bb40(edx, esi, edx_2)
        int32_t esi_2 = arg1 * 0xb4
        int16_t var_1e24[0xf06]
        var_1e24[arg1 * 0x5a] += 1
        int32_t var_14_5 = 0
        int32_t eax_9
        char edx_4
        eax_9, edx_4 = sub_48bc70(&var_1ed4, sub_49d110(eax_7, 1, 0, &var_1ed4, arg1))
        int32_t eax_10
        int32_t edx_5
        long double st0_1
        st0_1, eax_10, edx_5 = sub_4904a0(eax_9, edx_4, &var_1ed4, arg1)
        long double x87_r6_2 = fconvert.t(var_1ef4) - fconvert.t(9.9999999999999995e-07)
        x87_r6_2 - st0_1
        eax_10.w = (x87_r6_2 < st0_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, st0_1) ? 1 : 0) << 0xa
            | (x87_r6_2 == st0_1 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x41}
        
        if (not(p_1))
            *(esi_2 + edx + 0xb0) += 1
            sub_49d110(eax_10, edx_5, 0, edx, arg1)
        
        *ecx = 0
        sub_5a6aba(entry_ebx ^ &__saved_ebp)
        return 
    
    int32_t i_1 = 0
    
    if (*ecx s> 0)
        int32_t i
        
        do
            int32_t var_14_8 = arg1
            int32_t ecx_7 = sub_48bb40(edx, &var_1ed4, edx_2)
            int32_t var_14_9 = 1
            int32_t edx_9 = sub_49cc30(&var_1ed4, arg2[i_1], ecx_7, 0xffffffff)
            *(&(&__saved_ebp)[arg1 * 0x2d] - 0x1e2d) += 1
            char var_1ebc
            
            if (var_1ebc == 0)
                int32_t var_14_10 = 1
                edx_9 = sub_49b990(arg1, edx_9)
            
            int32_t var_14_11 = 0
            (&__saved_ebp)[arg1 * 0x2d - 0x78b].b = 1
            int32_t eax_16
            char edx_10
            eax_16, edx_10 = sub_48bc70(&var_1ed4, edx_9)
            int32_t eax_17
            long double st0_2
            st0_2, eax_17, edx_2 = sub_4904a0(eax_16, edx_10, &var_1ed4, arg1)
            long double x87_r6_4 = fconvert.t(var_1ef4) - fconvert.t(9.9999999999999995e-07)
            x87_r6_4 - st0_2
            eax_17.w = (x87_r6_4 < st0_2 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_4, st0_2) ? 1 : 0) << 0xa | (x87_r6_4 == st0_2 ? 1 : 0) << 0xe
                | 0x3800
            bool p_2 = unimplemented  {test ah, 0x41}
            
            if (not(p_2))
                var_1ef4 = fconvert.d(st0_2)
                i_2 = i_1
            
            i = i_1 + 1
            i_1 = i
        while (i s< *ecx)
        
        if (i_2 s>= 0)
            *arg2 = arg2[i_2]
            *ecx = 1
            sub_5a6aba(entry_ebx ^ &__saved_ebp)
            return 
    
    *ecx = 0
    sub_5a6aba(entry_ebx ^ &__saved_ebp)
}
