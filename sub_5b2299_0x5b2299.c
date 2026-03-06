// 函数名称: sub_5b2299
// 虚拟地址: 0x5b2299
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b2299()
{
    // 第一条实际指令: if (data_3168010 == 0)
    if (data_3168010 == 0)
        ___initmbctable()
    
    char* esi = data_bec5c4
    int32_t edi = 0
    
    if (esi != 0)
        while (true)
            void* eax
            eax.b = *esi
            
            if (eax.b == 0)
                break
            
            if (eax.b != 0x3d)
                edi += 1
            
            esi = esi + _strlen(esi) + 1
        
        int32_t* edi_2 = __calloc_crt(edi + 1, 4)
        data_bec598 = edi_2
        
        if (edi_2 != 0)
            char* esi_1 = data_bec5c4
            int32_t result
            
            while (true)
                if (*esi_1 == 0)
                    __free_base(data_bec5c4)
                    data_bec5c4 = 0
                    *edi_2 = 0
                    data_3168004 = 1
                    result = 0
                    break
                
                void* eax_2 = _strlen(esi_1)
                
                if (*esi_1 != 0x3d)
                    char* eax_3 = __calloc_crt(eax_2 + 1, 1)
                    *edi_2 = eax_3
                    
                    if (eax_3 == 0)
                        __free_base(data_bec598)
                        data_bec598 = 0
                        result = 0xffffffff
                        break
                    
                    if (sub_5b04a4(eax_3, eax_2 + 1, esi_1) != 0)
                        int32_t var_20
                        __builtin_memset(&var_20, 0, 0x14)
                        sub_5ad34e()
                        noreturn
                    
                    edi_2 = &edi_2[1]
                
                esi_1 += eax_2 + 1
            
            return result
    
    return 0xffffffff
}
