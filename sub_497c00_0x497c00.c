// 函数名称: sub_497c00
// 虚拟地址: 0x497c00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_497c00(int32_t arg1 @ edi, int32_t* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int128_t* ecx
    int128_t* ecx
    int32_t* edx
    ecx, edx = __chkstk(0x1f04)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    int32_t* esi = arg4
    int32_t* var_1ef4 = esi
    int32_t i_2 = 0xffffffff
    int32_t j_1 = 0xffffffff
    int32_t* edx_1
    char* entry_ebx
    long double st0
    st0, edx_1 = sub_4904a0(0xffffffff, edx.b, ecx, entry_ebx)
    double var_1f08 = fconvert.d(st0)
    int32_t i_1 = 0
    
    if (*esi s> 0)
        int32_t* var_1ee4_1 = arg3
        int32_t i
        
        do
            int32_t j = 0
            
            if (*edx s> 0)
                do
                    char* var_10_1 = entry_ebx
                    void var_1ed8
                    int128_t* esi_1 = &var_1ed8
                    sub_48bb40(ecx, esi_1, edx_1.b)
                    int32_t eax_6
                    char edx_3
                    eax_6, edx_3 = sub_4a4940(arg2, *var_1ee4_1, arg2[j], esi_1, entry_ebx)
                    
                    if (eax_6 != 0)
                        int32_t eax_7
                        long double st0_1
                        st0_1, eax_7 = sub_4904a0(eax_6, edx_3, &var_1ed8, entry_ebx)
                        long double x87_r6_2 = fconvert.t(var_1f08) - fconvert.t(9.9999999999999995e-07)
                        x87_r6_2 - st0_1
                        eax_7.w = (x87_r6_2 < st0_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_2, st0_1) ? 1 : 0) << 0xa
                            | (x87_r6_2 == st0_1 ? 1 : 0) << 0xe | 0x3800
                        bool p_1 = unimplemented  {test ah, 0x41}
                        
                        if (not(p_1))
                            var_1f08 = fconvert.d(st0_1)
                            i_2 = i_1
                            j_1 = j
                    
                    edx_1 = edx
                    j += 1
                while (j s< *edx_1)
                
                esi = var_1ef4
            
            var_1ee4_1 = &var_1ee4_1[1]
            i = i_1 + 1
            i_1 = i
        while (i s< *esi)
        
        if (i_2 != 0xffffffff)
            *arg2 = arg2[j_1]
            *arg3 = arg3[i_2]
            *esi = 1
            *edx = 1
            sub_5a6aba(arg1 ^ &__saved_ebp)
            return 
    
    *esi = 0
    *edx = 0
    sub_5a6aba(arg1 ^ &__saved_ebp)
}
