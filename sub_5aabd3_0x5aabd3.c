// 函数名称: sub_5aabd3
// 虚拟地址: 0x5aabd3
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5aabd3(void* arg1, char* arg2, int32_t* arg3)
{
    // 第一条实际指令: void var_18
    void var_18
    sub_5a73dd(&var_18, arg3)
    char* edx = arg1
    void* var_10
    char var_c
    
    if (edx == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        
        if (var_c != 0)
            *(var_10 + 0x70) &= 0xfffffffd
        
        return 0x7fffffff
    
    char* ebx = arg2
    
    if (ebx == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        
        if (var_c != ebx.b)
            *(var_10 + 0x70) &= 0xfffffffd
        
        return 0x7fffffff
    
    void* var_14
    void* eax_5 = var_14
    uint32_t result
    
    if (*(eax_5 + 8) != 0)
        int32_t edi
        int32_t var_20_2 = edi
        
        while (true)
            uint32_t ecx_2 = zx.d(*edx)
            arg1 = &edx[1]
            uint16_t esi_2
            
            if ((*(zx.d(ecx_2.b) + eax_5 + 0x1d) & 4) == 0)
                void* ecx_4 = ecx_2 + eax_5
                
                if ((*(ecx_4 + 0x1d) & 0x10) == 0)
                    esi_2 = ecx_2.w
                else
                    esi_2 = zx.w(*(ecx_4 + 0x11d))
                
                goto label_5aacf5
            
            char var_8
            char var_7
            
            if (edx[1] != 0)
                int32_t eax_6 =
                    sub_5ac384(&var_18, *(eax_5 + 0xc), 0x200, edx, 2, &var_8, 2, *(eax_5 + 4), 1)
                
                if (eax_6 == 1)
                    esi_2 = zx.w(var_8)
                label_5aacd7:
                    arg1 += 1
                    eax_5 = var_14
                    goto label_5aacf5
                
                if (eax_6 == 2)
                    esi_2 = zx.w(var_8) * 0x100 + zx.w(var_7)
                    goto label_5aacd7
            else
                esi_2 = 0
            label_5aacf5:
                uint32_t ecx_5 = zx.d(*ebx)
                ebx = &ebx[1]
                uint16_t ecx_6
                
                if ((*(zx.d(ecx_5.b) + eax_5 + 0x1d) & 4) == 0)
                    void* ecx_9 = ecx_5 + eax_5
                    
                    if ((*(ecx_9 + 0x1d) & 0x10) == 0)
                        ecx_6 = ecx_5.w
                    else
                        ecx_6 = zx.w(*(ecx_9 + 0x11d))
                    
                    goto label_5aad73
                
                if (*ebx != 0)
                    int32_t eax_8 = sub_5ac384(&var_18, *(eax_5 + 0xc), 0x200, &ebx[0xffffffff], 2, 
                        &var_8, 2, *(eax_5 + 4), 1)
                    
                    if (eax_8 == 1)
                        ecx_6 = zx.w(var_8)
                    label_5aad54:
                        eax_5 = var_14
                        ebx = &ebx[1]
                        goto label_5aad73
                    
                    if (eax_8 == 2)
                        ecx_6 = zx.w(var_8) * 0x100 + zx.w(var_7)
                        goto label_5aad54
                else
                    ecx_6 = 0
                label_5aad73:
                    
                    if (ecx_6 != esi_2)
                        result = (sbb.d(eax_5, eax_5, ecx_6 u< esi_2) & 2) - 1
                        
                        if (var_c != 0)
                            *(var_10 + 0x70) &= 0xfffffffd
                        
                        break
                    
                    if (esi_2 != 0)
                        edx = arg1
                        continue
                    
                    if (var_c != 0)
                        *(var_10 + 0x70) &= 0xfffffffd
                    
                    result = 0
                    break
            *__errno() = 0x16
            
            if (var_c != 0)
                *(var_10 + 0x70) &= 0xfffffffd
            
            result = 0x7fffffff
            break
    else
        result = sub_5a95d7(edx, ebx, &var_18)
        
        if (var_c != 0)
            *(var_10 + 0x70) &= 0xfffffffd
    
    return result
}
