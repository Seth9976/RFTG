// 函数名称: sub_5b6177
// 虚拟地址: 0x5b6177
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_5b6177(int32_t* arg1, uint32_t arg2, uint8_t* arg3, int32_t arg4, uint16_t* arg5, uint32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t var_c = ecx
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    wchar16* ebx = nullptr
    int32_t edi
    int32_t var_18 = edi
    BOOL result_1 = 0
    
    if (arg6 == 0)
        arg6 = *(*arg1 + 4)
    
    int32_t eax_5
    eax_5.b = arg7 != 0
    int32_t cchWideChar = MultiByteToWideChar(arg6, (eax_5 << 3) + 1, arg3, arg4, nullptr, 0)
    
    if (cchWideChar != 0 && cchWideChar s> 0 && cchWideChar u<= 0x7ffffff0)
        int32_t* eax_8
        
        if (cchWideChar * 2 + 8 u> 0x400)
            eax_8 = sub_5a881a(cchWideChar * 2 + 8)
            
            if (eax_8 != 0)
                *eax_8 = 0xdddd
                eax_8 = &eax_8[2]
        else
            __alloca_probe_16(cchWideChar * 2 + 8)
            eax_8 = &var_18
            
            if (&var_18 != 0)
                var_18 = 0xcccc
                eax_8 = &eax_8[2]
        
        ebx = eax_8
    
    BOOL result
    
    if (cchWideChar == 0 || ebx == 0)
        result = 0
    else
        sub_5abfc0(ebx, 0, cchWideChar * 2)
        int32_t cchSrc = MultiByteToWideChar(arg6, MB_PRECOMPOSED, arg3, arg4, ebx, cchWideChar)
        
        if (cchSrc != 0)
            result_1 = GetStringTypeW(arg2, ebx, cchSrc, arg5)
        
        __freea_crt(ebx)
        result = result_1
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
