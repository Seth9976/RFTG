// 函数名称: sub_498030
// 虚拟地址: 0x498030
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_498030(int32_t arg1 @ esi, int128_t* arg2 @ edi, char* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t* ecx
    int32_t* ecx
    int32_t edx
    ecx, edx = __chkstk(0x1ef4)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    double var_1ef4 = fconvert.d(fconvert.t(-1.0))
    int32_t var_1ed8 = 0xffffffff
    int32_t* entry_ebx
    int32_t eax_3 = sub_497d90(arg3, edx, entry_ebx, arg2, *ecx)
    *ecx = eax_3
    int32_t i_1 = 0
    
    if (eax_3 s> 0)
        int32_t i
        
        do
            char* var_c_1 = arg3
            void var_1ed4
            sub_48bb40(arg2, &var_1ed4, arg3.b)
            int32_t j
            int32_t edx_4
            j, edx_4 = sub_4a8710(arg4, arg3, &var_1ed4, entry_ebx[i_1], arg4, 0)
            int32_t eax_6
            long double x87_r7_1
            long double st0_1
            
            if (*(arg2 + 0x18) == 0)
                do
                    j, edx_4 = sub_4ab170(j, edx_4, &var_1ed4, arg3)
                while (j != 0)
                
                int32_t j_1 = j
                eax_6, edx_4 = sub_48bc70(&var_1ed4, edx_4)
                st0_1, eax_6 = sub_4904a0(eax_6, edx_4.b, &var_1ed4, arg3)
                x87_r7_1 = st0_1
            else
                eax_6 = sx.d(*(arg2 + 0x19))
                int16_t var_1e26[0xf09]
                
                if (eax_6 == arg3)
                    st0_1, eax_6 = sub_4904a0(eax_6, edx_4.b, &var_1ed4, arg3)
                    x87_r7_1 = st0_1
                else
                    x87_r7_1 = float.t(sx.d(var_1e26[arg3 * 0x5a]))
            long double x87_r6_2 = fconvert.t(var_1ef4) - fconvert.t(9.9999999999999995e-07)
            x87_r6_2 - x87_r7_1
            eax_6.w = (x87_r6_2 < x87_r7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_2, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800
            bool p_1 = unimplemented  {test ah, 0x41}
            
            if (not(p_1))
                var_1ef4 = fconvert.d(x87_r7_1)
                var_1ed8 = entry_ebx[i_1]
            
            i = i_1 + 1
            i_1 = i
        while (i s< *ecx)
        
        if (var_1ed8 != 0xffffffff)
            *entry_ebx = var_1ed8
            *ecx = 1
            sub_5a6aba(arg1 ^ &__saved_ebp)
            return 
    
    char const* const var_c_5 = "Could not find trade\n"
    sub_4c5680("error %s")
    sub_5a79f4()
    noreturn
}
