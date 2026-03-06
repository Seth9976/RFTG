// 函数名称: sub_5b9bd3
// 虚拟地址: 0x5b9bd3
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5b9bd3(char* arg1, char* arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: void var_1c
    void var_1c
    sub_5a73dd(&var_1c, arg4)
    void* var_14
    char var_10
    
    if (arg3 == 0)
        if (var_10 != 0)
            *(var_14 + 0x70) &= 0xfffffffd
        
        return 0
    
    void* var_18
    uint32_t result
    
    if (*(var_18 + 8) != 0)
        if (arg1 == 0)
            *__errno() = 0x16
            __invalid_parameter_noinfo()
            
            if (var_10 != 0)
                *(var_14 + 0x70) &= 0xfffffffd
            
            return 0x7fffffff
        
        int32_t edi
        int32_t var_24_2 = edi
        char* edi_1 = arg2
        
        if (edi_1 != 0)
            int32_t esi
            int32_t var_28_2 = esi
            
            while (true)
                uint32_t ecx_3 = zx.d(*arg1)
                arg3 -= 1
                arg1 = &arg1[1]
                uint16_t var_c_3
                
                if ((*(zx.d(ecx_3.b) + var_18 + 0x1d) & 4) == 0)
                    uint32_t edx_4 = zx.d(ecx_3.w)
                    void* ecx_7 = edx_4 + var_18
                    uint16_t ecx_8
                    
                    if ((*(ecx_7 + 0x1d) & 0x10) == 0)
                        ecx_8 = edx_4.w
                    else
                        ecx_8 = zx.w(*(ecx_7 + 0x11d))
                    
                    var_c_3 = ecx_8
                    goto label_5b9d22
                
                int16_t var_8_2
                uint32_t ecx_4
                
                if (arg3 == 0)
                    ecx_4 = zx.d(*edi_1)
                    int32_t var_c_2 = 0
                    
                    if ((*(ecx_4 + var_18 + 0x1d) & 4) == 0)
                        esi.w = 0
                    label_5b9d96:
                        var_8_2 = ecx_4.w
                    label_5b9d99:
                        ecx_4.w = var_8_2
                    label_5b9da0:
                        
                        if (ecx_4.w != esi.w)
                            result = (sbb.d(var_18, var_18, ecx_4.w u< esi.w) & 2) - 1
                            
                            if (var_10 != 0)
                                *(var_14 + 0x70) &= 0xfffffffd
                            
                            break
                        
                        if (esi.w != 0 && arg3 != 0)
                            continue
                    
                    if (var_10 != 0)
                        *(var_14 + 0x70) &= 0xfffffffd
                    
                    result = 0
                    break
                
                char* edx_2
                edx_2.b = *arg1
                
                if (edx_2.b != 0)
                    arg1 = &arg1[1]
                    uint32_t ecx_6 = zx.d((ecx_3 << 8).w) | zx.d(edx_2.b)
                    esi.w = ecx_6.w
                    uint32_t var_c_4 = ecx_6
                    
                    if (esi.w u>= *(var_18 + 0x10) && esi.w u<= *(var_18 + 0x12))
                        esi.w += *(var_18 + 0x14)
                    else if (esi.w u>= *(var_18 + 0x16) && esi.w u<= *(var_18 + 0x18))
                        esi.w += *(var_18 + 0x1a)
                else
                    var_c_3 = 0
                label_5b9d22:
                    esi.w = var_c_3
                
                ecx_4 = zx.d(*edi_1)
                edi_1 = &edi_1[1]
                
                if ((*(zx.d(ecx_4.b) + var_18 + 0x1d) & 4) == 0)
                    uint32_t edx_7 = zx.d(ecx_4.w)
                    void* ecx_10 = edx_7 + var_18
                    
                    if ((*(ecx_10 + 0x1d) & 0x10) == 0)
                        ecx_4 = edx_7
                    else
                        ecx_4 = zx.d(*(ecx_10 + 0x11d))
                    
                    goto label_5b9d96
                
                if (arg3 == 0)
                    var_8_2 = 0
                    goto label_5b9d99
                
                uint32_t edx_5
                edx_5.b = *edi_1
                arg3 -= 1
                
                if (edx_5.b == 0)
                    var_8_2 = 0
                    goto label_5b9d99
                
                ecx_4 = zx.d((ecx_4 << 8).w) | zx.d(edx_5.b)
                edi_1 = &edi_1[1]
                uint32_t var_8_3 = ecx_4
                
                if (ecx_4.w u>= *(var_18 + 0x10) && ecx_4.w u<= *(var_18 + 0x12))
                    ecx_4.w += *(var_18 + 0x14)
                else if (ecx_4.w u>= *(var_18 + 0x16) && ecx_4.w u<= *(var_18 + 0x18))
                    ecx_4.w += *(var_18 + 0x1a)
                
                goto label_5b9da0
        else
            *__errno() = 0x16
            __invalid_parameter_noinfo()
            
            if (var_10 != 0)
                *(var_14 + 0x70) &= 0xfffffffd
            
            result = 0x7fffffff
    else
        result = sub_5a9f0b(arg1, arg2, arg3)
        
        if (var_10 != 0)
            *(var_14 + 0x70) &= 0xfffffffd
    
    return result
}
