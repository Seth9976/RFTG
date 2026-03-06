// 函数名称: sub_4cb5f0
// 虚拟地址: 0x4cb5f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_4cb5f0(char** arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6903f9
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* const esi = &data_83f3d3
    int32_t var_20 = 0
    char* const var_14 = &data_83f3d3
    int32_t var_8_1 = 1
    long double x87_r7 = fconvert.t(9.99999975e-06f)
    char* arg_8
    int32_t* eax_3 = arg_8
    long double temp0 = fconvert.t(eax_3[0xa])
    x87_r7 - temp0
    int32_t ecx = *eax_3
    void* edi = eax_3[2]
    int32_t edx_1 = eax_3[1] + ecx
    eax_3.w = (x87_r7 < temp0 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe
    char* edi_1 = edi + ecx
    int32_t var_24 = edx_1
    
    if ((eax_3:1.b & 0x41) == 0)
        if (edi_1 != 0)
            sub_4c42b0(arg1, edi_1)
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg1
        
        sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (edi_1 u< edx_1)
        do
            eax_3.b = *edi_1
            char* var_1c_1 = edi_1
            char* var_18 = edi_1
            
            if (eax_3.b u>= 0x80)
                ecx.b = eax_3.b
                ecx.b &= 0xe0
                
                if (ecx.b != 0xc0)
                    edx_1.b = eax_3.b
                    edx_1.b &= 0xf0
                    
                    if (edx_1.b != 0xe0)
                        eax_3.b &= 0xf8
                        
                        if (eax_3.b != 0xf0)
                            sub_4c5870("!Xutf8_is_invalid_lead_char(str)", &data_83f3d3, 
                                "c:\ax2010\engine\Xutf8.cpp", 0x20f, "Xutf8_next")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
            
            sub_4ba310(&var_18)
            edi_1 = var_18
            sub_4c4690(&var_14, var_1c_1)
            char* const esi_4 = var_14
            char* const ecx_3 = &data_83f3d3
            
            if (esi_4 != 0)
                ecx_3 = esi_4
            
            char* ebx_3 = arg_8
            int32_t var_38_2 = *(ebx_3 + 0x2c)
            long double st0_1
            st0_1, eax_3, ecx, edx_1 = sub_4cb0b0(ecx_3)
            var_18 = fconvert.s(st0_1 * fconvert.t(*(ebx_3 + 0x28)))
            long double x87_r7_3 = fconvert.t(var_18)
            long double x87_r6_1 = fconvert.t(*(ebx_3 + 0x18))
            x87_r6_1 - x87_r7_3
            eax_3.w = (x87_r6_1 < x87_r7_3 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_1, x87_r7_3) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_3 ? 1 : 0) << 0xe
            bool p_1 = unimplemented  {test ah, 0x5}
            
            if (not(p_1) && edi_1 != var_1c_1)
                if (esi_4 != 0 && *esi_4 != 0)
                    sub_4c4060(&var_14)
                
                int128_t* eax_17 = &data_83f3d3
                
                if (esi_4 != 0)
                    eax_17 = esi_4
                
                sub_4c4380(eax_17, edx_1, &arg_8)
                var_8_1.b = 2
                char* edi_4 = arg_8
                *arg1 = edi_4
                
                if (edi_4 != 0 && *edi_4 != 0)
                    void* eax_19 = sub_4c4060(arg1)
                    *(eax_19 + 4) += 1
                
                int32_t var_20_2 = 1
                var_8_1.b = 1
                
                if (edi_4 != 0 && *edi_4 != 0)
                    void* eax_21 = sub_4c4060(&arg_8)
                    int32_t temp2_1 = *(eax_21 + 4)
                    *(eax_21 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        int32_t esi_8 = *(eax_21 + 0xc) + 0x10
                        sub_4f4430(eax_21, sub_4f4380(esi_8), esi_8)
                        esi_4 = var_14
                
                var_8_1.b = 0
                
                if (esi_4 != 0 && *esi_4 != 0)
                    void* eax_25 = sub_4c4060(&var_14)
                    int32_t temp3_1 = *(eax_25 + 4)
                    *(eax_25 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        int32_t esi_10 = *(eax_25 + 0xc) + 0x10
                        sub_4f4430(eax_25, sub_4f4380(esi_10), esi_10)
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg1
        while (edi_1 u< var_24)
        
        esi = var_14
    
    *arg1 = esi
    
    if (esi != 0 && *esi != 0)
        void* eax_9 = sub_4c4060(arg1)
        *(eax_9 + 4) += 1
    
    int32_t var_20_1 = 1
    var_8_1.b = 0
    
    if (esi != 0 && *esi != 0)
        void* eax_11 = sub_4c4060(&var_14)
        int32_t temp1_1 = *(eax_11 + 4)
        *(eax_11 + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_6 = *(eax_11 + 0xc) + 0x10
            sub_4f4430(eax_11, sub_4f4380(esi_6), esi_6)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
