// 函数名称: __wincmdln
// 虚拟地址: 0x5b223a
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* const__wincmdln()
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_8 = edi
    int32_t edi_1 = 0
    
    if (data_3168010 == 0)
        ___initmbctable()
    
    char* const result = data_3166fe4
    
    if (result == 0)
        result = &data_83f3d3
    
    while (true)
        int32_t eax
        eax.b = *result
        
        if (eax.b u<= 0x20)
            if (eax.b == 0)
                return result
            
            if (edi_1 == 0)
                while (true)
                    eax.b = *result
                    
                    if (eax.b == 0)
                        break
                    
                    if (eax.b u> 0x20)
                        break
                    
                    result = &result[1]
                
                return result
        
        if (eax.b == 0x22)
            int32_t ecx_1
            ecx_1.b = edi_1 == 0
            edi_1 = ecx_1
        
        if (__ismbblead(eax.b) != 0)
            result = &result[1]
        
        result = &result[1]
}
