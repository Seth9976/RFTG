// 函数名称: sub_498b00
// 虚拟地址: 0x498b00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_498b00(int128_t* arg1, char* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t* arg9, double* arg10)
{
    // 第一条实际指令: __chkstk(0x23fc)
    __chkstk(0x23fc)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t edi = 0
    int32_t entry_ebx
    
    if (arg7 s<= arg6)
        if (arg6 != 0)
            sub_498b00(arg1, arg2, arg3, arg4, arg5, arg6 - 1, arg7, arg8 * 2, arg9, arg10)
            
            if (arg7 != 0)
                sub_498b00(arg1, arg2, arg3, arg4, arg5, arg6 - 1, arg7 - 1, arg8 * 2 + 1, arg9, arg10)
                sub_5a6aba(entry_ebx ^ &__saved_ebp)
                return 
        else
            int32_t ecx_1 = 0
            int32_t var_52c[0x13d]
            
            if (arg8 s>= 1)
                int32_t eax_4 = 1
                
                do
                    if ((arg8 & eax_4) != 0)
                        var_52c[edi] = *(arg5 + (ecx_1 << 2))
                        edi += 1
                    
                    ecx_1 += 1
                    eax_4 = 1 << ecx_1.b
                while (eax_4 s<= arg8)
            
            char* var_14_1 = arg2
            void var_23f4
            sub_48bb40(arg1, &var_23f4, arg8.b)
            int32_t i
            int32_t edx_4
            i, edx_4 = sub_4aa080(&var_23f4, arg2, arg4, &var_23f4, arg3, &var_52c, edi)
            
            do
                i, edx_4 = sub_4ab170(i, edx_4, &var_23f4, arg2)
            while (i != 0)
            
            int32_t i_1 = i
            int32_t eax_9
            char edx_5
            eax_9, edx_5 = sub_48bc70(&var_23f4, edx_4)
            int32_t eax_10
            long double st0_1
            st0_1, eax_10 = sub_4904a0(eax_9, edx_5, &var_23f4, arg2)
            long double x87_r6_2 = fconvert.t(*arg10) - fconvert.t(9.9999999999999995e-07)
            x87_r6_2 - st0_1
            eax_10.w = (x87_r6_2 < st0_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_2, st0_1) ? 1 : 0) << 0xa | (x87_r6_2 == st0_1 ? 1 : 0) << 0xe
                | 0x3800
            bool p_1 = unimplemented  {test ah, 0x41}
            
            if (not(p_1))
                *arg10 = fconvert.d(st0_1)
                *arg9 = arg8
                sub_5a6aba(entry_ebx ^ &__saved_ebp)
                return 
    
    sub_5a6aba(entry_ebx ^ &__saved_ebp)
}
