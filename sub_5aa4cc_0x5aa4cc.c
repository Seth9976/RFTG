// 函数名称: sub_5aa4cc
// 虚拟地址: 0x5aa4cc
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5aa4cc(PSTR arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_11c = 0
    int32_t result_1 = 0xffffffff
    uint8_t buffer[0x108]
    uint8_t (* esi)[0x108] = &buffer
    int32_t result
    
    if (arg1 != 0)
        int32_t edi
        int32_t var_128_1 = edi
        
        if (SetCurrentDirectoryA(arg1) == 0)
            ___acrt_errno_map_os_error(GetLastError())
        else
            uint32_t edi_1 = GetCurrentDirectoryA(0x105, &buffer)
            
            if (edi_1 s<= 0x104)
                goto label_5aa575
            
            esi = __calloc_crt(edi_1 + 1, 1)
            
            if (esi == 0)
                ___acrt_errno_map_os_error(GetLastError())
            else
                var_11c = 1
                
                if (edi_1 == 0)
                    ___acrt_errno_map_os_error(GetLastError())
                else
                    edi_1 = GetCurrentDirectoryA(edi_1 + 1, esi)
                label_5aa575:
                    
                    if (edi_1 == 0)
                        ___acrt_errno_map_os_error(GetLastError())
                    else
                        uint32_t eax_6
                        eax_6.b = *esi
                        
                        if (eax_6.b == 0x5c)
                            if (eax_6.b != (*esi)[1])
                                goto label_5aa588
                            
                            result_1 = 0
                        else if (eax_6.b != 0x2f || eax_6.b != (*esi)[1])
                        label_5aa588:
                            char name = 0x3d
                            char var_113_1 = __mbsnextc(zx.d(*esi))
                            int16_t var_112_1 = 0x3a
                            
                            if (SetEnvironmentVariableA(&name, esi) == 0)
                                ___acrt_errno_map_os_error(GetLastError())
                            else
                                result_1 = 0
                        else
                            result_1 = 0
        
        if (var_11c != 0)
            __free_base(esi)
        
        result = result_1
    else
        *___doserrno() = 0
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = 0xffffffff
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
