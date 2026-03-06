// 函数名称: sub_5bda40
// 虚拟地址: 0x5bda40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t**sub_5bda40(int32_t* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t var_44
    int32_t var_44
    zip_stat_init(&var_44)
    
    if (zip_source_stat(arg1, &var_44) s< 0)
        sub_5bf050(arg3, arg1)
        return 0
    
    if ((var_44 & 4) == 0)
        zip_error_set(arg3, 4, 0x82)
        return 0
    
    uint32_t var_2c
    int32_t* var_28
    
    if ((var_2c | var_28) == 0)
        int32_t** eax_9 = sub_5bf410(arg3)
        
        if (eax_9 == 0)
            zip_source_free(arg1)
            return 0
        
        *eax_9 = arg1
        eax_9[1] = arg2
        
        if ((arg2.b & 0x10) == 0)
            return eax_9
        
        eax_9[5] |= 2
        eax_9[6] |= 2
        return eax_9
    
    int32_t* eax_11 = sub_5bf410(arg3)
    
    if (eax_11 != 0)
        *eax_11 = arg1
        eax_11[1] = arg2
        
        if ((arg2.b & 0x10) != 0)
            eax_11[5] |= 2
            eax_11[6] |= 2
        
        int32_t* eax_14 = sub_5bd760(eax_11, var_2c, var_28)
        
        if (eax_14 != 0)
            eax_11[0x10] = *eax_14
            eax_11[0xc] = eax_14[2]
            eax_11[0xd] = eax_14[3]
            eax_11[0xe] = eax_14[4]
            eax_11[0xf] = eax_14[5]
            int32_t ecx_7 = eax_11[5]
            eax_11[8] = eax_14[0xa]
            eax_11[6] = ecx_7
            __free_base(eax_14)
            return eax_11
        
        sub_5bf010(arg3, &eax_11[2])
        zip_source_keep(arg1)
        zip_discard(eax_11)
    
    return 0
}
