// 函数名称: sub_5ac504
// 虚拟地址: 0x5ac504
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

enum COMPARESTRING_RESULT __convention("regparm")sub_5ac504(int32_t arg1, char* arg2, int32_t* arg3, uint32_t arg4, uint32_t arg5, char* arg6, int32_t arg7, int32_t arg8, uint32_t arg9)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char* lpMultiByteStr_1 = arg6
    int32_t edi
    int32_t var_3c = edi
    int32_t cbMultiByte = arg7
    char* lpMultiByteStr = lpMultiByteStr_1
    
    if (cbMultiByte s> 0)
        int32_t cbMultiByte_1 = cbMultiByte
        
        while (true)
            cbMultiByte_1 -= 1
            
            if (*lpMultiByteStr_1 == 0)
                break
            
            lpMultiByteStr_1 = &lpMultiByteStr_1[1]
            
            if (cbMultiByte_1 == 0)
                cbMultiByte_1 = 0xffffffff
                break
        
        cbMultiByte += 0xffffffff - cbMultiByte_1
        arg7 = cbMultiByte
        goto label_5ac545
    
    enum COMPARESTRING_RESULT result
    
    if (cbMultiByte s>= 0xffffffff)
    label_5ac545:
        int32_t esi_1 = arg8
        
        if (esi_1 s> 0)
            int32_t ecx = esi_1
            char* eax_3 = arg2
            
            while (true)
                ecx -= 1
                
                if (*eax_3 == 0)
                    break
                
                eax_3 = &eax_3[1]
                
                if (ecx == 0)
                    ecx = 0xffffffff
                    break
            
            esi_1 += 0xffffffff - ecx
            arg8 = esi_1
            goto label_5ac57b
        
        if (esi_1 s< 0xffffffff)
            result = 0
        else
        label_5ac57b:
            enum COMPARESTRING_RESULT result_1 = 0
            
            if (arg9 == 0)
                arg9 = *(*arg3 + 4)
            
            if (cbMultiByte != 0 && esi_1 != 0)
            label_5ac648:
                int32_t eax_10 = MultiByteToWideChar(arg9, MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, 
                    lpMultiByteStr, cbMultiByte, nullptr, 0)
                
                if (eax_10 == 0)
                    result = 0
                else
                    int32_t* var_20_1
                    
                    if (eax_10 s<= 0 || divu.dp.d(0:0xffffffe0, eax_10) u< 2)
                        var_20_1 = nullptr
                    else
                        int32_t* eax_14
                        
                        if (eax_10 * 2 + 8 u> 0x400)
                            eax_14 = sub_5a881a(eax_10 * 2 + 8)
                            
                            if (eax_14 != 0)
                                *eax_14 = 0xdddd
                                eax_14 = &eax_14[2]
                        else
                            __alloca_probe_16(eax_10 * 2 + 8)
                            eax_14 = &var_3c
                            
                            if (&var_3c != 0)
                                var_3c = 0xcccc
                                eax_14 = &eax_14[2]
                        
                        var_20_1 = eax_14
                    
                    if (var_20_1 == 0)
                        result = 0
                    else
                        if (MultiByteToWideChar(arg9, MB_PRECOMPOSED, lpMultiByteStr, arg7, var_20_1, 
                                eax_10) != 0)
                            int32_t eax_16 = MultiByteToWideChar(arg9, 
                                MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, arg2, arg8, nullptr, 0)
                            
                            if (eax_16 != 0)
                                wchar16* edi_1
                                
                                if (eax_16 s<= 0 || divu.dp.d(0:0xffffffe0, eax_16) u< 2)
                                    edi_1 = nullptr
                                else
                                    wchar16* eax_20
                                    
                                    if (eax_16 * 2 + 8 u> 0x400)
                                        eax_20 = sub_5a881a(eax_16 * 2 + 8)
                                        
                                        if (eax_20 != 0)
                                            *eax_20 = 0xdddd
                                            eax_20 = &eax_20[4]
                                    else
                                        __alloca_probe_16(eax_16 * 2 + 8)
                                        eax_20 = &var_3c
                                        
                                        if (&var_3c != 0)
                                            var_3c = 0xcccc
                                            eax_20 = &eax_20[4]
                                    
                                    edi_1 = eax_20
                                
                                if (edi_1 != 0)
                                    if (MultiByteToWideChar(arg9, MB_PRECOMPOSED, arg2, arg8, edi_1, 
                                            eax_16) != 0)
                                        result_1 =
                                            CompareStringW(arg4, arg5, var_20_1, eax_10, edi_1, eax_16)
                                    
                                    __freea_crt(edi_1)
                        
                        __freea_crt(var_20_1)
                        result = result_1
            else if (cbMultiByte == esi_1)
            label_5ac59d:
                result = CSTR_EQUAL
            else if (esi_1 s> 1)
                result = CSTR_LESS_THAN
            else
                CPINFO cPInfo
                
                if (cbMultiByte s<= 1)
                    if (GetCPInfo(arg9, &cPInfo) == 0)
                        result = 0
                    else
                        var_16
                        char edx
                        
                        if (cbMultiByte s<= 0)
                            if (esi_1 s<= 0)
                                goto label_5ac648
                            
                            if (cPInfo.MaxCharSize u>= 2)
                                void* eax_9 = &var_16
                                
                                if (cPInfo.LeadByte[0] != 0)
                                    do
                                        edx = *(eax_9 + 1)
                                        
                                        if (edx == 0)
                                            break
                                        
                                        char* ecx_2
                                        ecx_2.b = *arg2
                                        
                                        if (ecx_2.b u>= *eax_9 && ecx_2.b u<= edx)
                                            goto label_5ac59d
                                        
                                        eax_9 += 2
                                    while (*eax_9 != 0)
                            
                            result = CSTR_LESS_THAN
                        else
                            if (cPInfo.MaxCharSize u>= 2)
                                char* eax_8 = &var_16
                                
                                if (cPInfo.LeadByte[0] != 0)
                                    do
                                        edx = eax_8[1]
                                        
                                        if (edx == 0)
                                            break
                                        
                                        char* ecx_1
                                        ecx_1.b = *lpMultiByteStr
                                        
                                        if (ecx_1.b u>= *eax_8 && ecx_1.b u<= edx)
                                            goto label_5ac59d
                                        
                                        eax_8 = &eax_8[2]
                                    while (*eax_8 != 0)
                            
                            result = CSTR_GREATER_THAN
                else
                    result = CSTR_GREATER_THAN
    else
        result = 0
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
