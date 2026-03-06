// 函数名称: sub_499700
// 虚拟地址: 0x499700
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_499700(int32_t* arg1 @ edi, char* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int128_t* ecx
    int128_t* ecx
    int32_t edx
    ecx, edx = __chkstk(0x1ef0)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    int32_t* entry_ebx
    char* eax_2 = *entry_ebx
    double var_1ef0 = fconvert.d(fconvert.t(-1.0))
    int128_t* esi = ecx
    char* var_c_1 = eax_2
    int128_t* var_1ee4 = esi
    int32_t var_1ee0 = 0xffffffff
    int32_t eax_3
    int32_t edx_1
    eax_3, edx_1 = sub_497d90(eax_2, edx, arg1, esi, var_c_1)
    *entry_ebx = eax_3
    
    if (eax_3 != 1)
        int32_t var_1edc_1 = 0
        
        if (eax_3 s> 0)
            while (true)
                char* var_c_2 = arg2
                void var_1ed8
                sub_48bb40(esi, &var_1ed8, edx_1.b)
                sub_4abcd0(arg3, &var_1ed8, arg2, arg1[var_1edc_1], arg3, arg4)
                int32_t i
                int32_t edx_5
                
                do
                    i, edx_5 = sub_4acd10(&var_1ed8, arg2)
                while (i != 0)
                
                int32_t i_1 = i
                int32_t eax_8
                char edx_6
                eax_8, edx_6 = sub_48bc70(&var_1ed8, edx_5)
                var_c_1 = arg2
                int32_t eax_9
                long double st0_1
                st0_1, eax_9, edx_1 = sub_4904a0(eax_8, edx_6, &var_1ed8, var_c_1)
                long double x87_r6_2 = fconvert.t(var_1ef0) - fconvert.t(9.9999999999999995e-07)
                x87_r6_2 - st0_1
                eax_9.w = (x87_r6_2 < st0_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_2, st0_1) ? 1 : 0) << 0xa
                    | (x87_r6_2 == st0_1 ? 1 : 0) << 0xe | 0x3800
                bool p_1 = unimplemented  {test ah, 0x41}
                
                if (not(p_1))
                    edx_1 = var_1edc_1
                    var_1ef0 = fconvert.d(st0_1)
                    var_1ee0 = arg1[edx_1]
                
                int32_t eax_12 = var_1edc_1 + 1
                var_1edc_1 = eax_12
                
                if (eax_12 s>= *entry_ebx)
                    break
                
                esi = var_1ee4
        
        if (eax_3 s<= 0 || var_1ee0 == 0xffffffff)
            char const* const var_c_5 = "Could not find windfall production\n"
            sub_4c5680("error %s")
            sub_5a79f4()
            noreturn
        
        *arg1 = var_1ee0
        *entry_ebx = 1
    
    sub_5a6aba(var_c_1 ^ &__saved_ebp)
}
