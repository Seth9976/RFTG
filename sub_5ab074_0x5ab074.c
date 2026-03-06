// 函数名称: sub_5ab074
// 虚拟地址: 0x5ab074
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ab074(char* arg1, char* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_18 = edi
    void var_14
    sub_5a73dd(&var_14, arg3)
    char* edi_1 = arg1
    void* var_c
    char var_8
    
    if (edi_1 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        
        if (var_8 != 0)
            *(var_c + 0x70) &= 0xfffffffd
        
        return 0x7fffffff
    
    char* esi_1 = arg2
    
    if (esi_1 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        
        if (var_8 != 0)
            *(var_c + 0x70) &= 0xfffffffd
        
        return 0x7fffffff
    
    void* var_10
    int32_t result
    
    if (*(var_10 + 8) != 0)
        while (true)
            uint32_t ecx_2 = zx.d(*edi_1)
            edi_1 = &edi_1[1]
            
            if ((*(zx.d(ecx_2.b) + var_10 + 0x1d) & 4) != 0)
                uint32_t eax_5
                eax_5.b = *edi_1
                
                if (eax_5.b != 0)
                    ecx_2 = zx.d((ecx_2 << 8).w) | zx.d(eax_5.b)
                    edi_1 = &edi_1[1]
                else
                    ecx_2 = 0
            
            uint32_t eax_7 = zx.d(*esi_1)
            esi_1 = &esi_1[1]
            
            if ((*(zx.d(eax_7.b) + var_10 + 0x1d) & 4) != 0)
                uint32_t edx_1
                edx_1.b = *esi_1
                
                if (edx_1.b != 0)
                    eax_7 = zx.d((eax_7 << 8).w) | zx.d(edx_1.b)
                    esi_1 = &esi_1[1]
                else
                    eax_7 = 0
            
            if (eax_7.w != ecx_2.w)
                result = (sbb.d(eax_7, eax_7, eax_7.w u< ecx_2.w) & 2) - 1
                break
            
            if (ecx_2.w == 0)
                if (var_8 != ecx_2.b)
                    *(var_c + 0x70) &= 0xfffffffd
                
                return 0
    else
        result = sub_5ac040(edi_1, esi_1)
    
    if (var_8 != 0)
        *(var_c + 0x70) &= 0xfffffffd
    
    return result
}
