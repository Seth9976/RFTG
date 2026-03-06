// 函数名称: sub_5b250f
// 虚拟地址: 0x5b250f
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b250f()
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_1c = edi
    
    if (data_3168010 == 0)
        ___initmbctable()
    
    data_bed20c = 0
    void* ecx = GetModuleFileNameA(nullptr, &data_bed108, 0x104)
    char* eax = data_3166fe4
    data_bec5a8 = &data_bed108
    char* var_8_1
    
    if (eax != 0)
        var_8_1 = eax
    
    if (eax == 0 || *eax == 0)
        var_8_1 = &data_bed108
    
    int32_t var_c
    int32_t* var_20 = &var_c
    int32_t var_10
    sub_5b2375(&var_c, var_8_1, &var_10, ecx, nullptr, nullptr)
    int32_t eax_2 = var_c
    
    if (eax_2 u< 0x3fffffff)
        int32_t ecx_1 = var_10
        
        if (ecx_1 u< 0xffffffff)
            int32_t edi_3 = eax_2 << 2
            uint32_t eax_3 = edi_3 + ecx_1
            
            if (eax_3 u>= ecx_1)
                char* eax_4 = sub_5abd7c(eax_3)
                
                if (eax_4 != 0)
                    int32_t* var_20_2 = &var_c
                    sub_5b2375(&var_c, var_8_1, &var_10, eax_3, eax_4, &eax_4[edi_3])
                    data_bec58c = var_c - 1
                    data_bec590 = eax_4
                    return 0
    
    return 0xffffffff
}
