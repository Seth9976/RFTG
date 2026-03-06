// 函数名称: sub_5cece0
// 虚拟地址: 0x5cece0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5cece0(char* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* esi = data_bedd1c
    int32_t* esi = data_bedd1c
    
    if (esi == 0)
        return 
    
    while (sub_5cd590(arg1, *esi) != 0)
        esi = esi[4]
        
        if (esi == 0)
            return 
    
    int32_t* eax = esi[3]
    int32_t* ecx_1 = nullptr
    
    if (eax == 0)
        return 
    
    while (arg2 != *eax || arg3 != eax[1])
        ecx_1 = eax
        eax = eax[2]
        
        if (eax == 0)
            return 
    
    if (ecx_1 != 0)
        int32_t* var_10_2 = eax
        ecx_1[2] = eax[2]
        sub_5d0af0()
        return 
    
    int32_t* var_10_3 = eax
    esi[3] = eax[2]
    sub_5d0af0()
}
