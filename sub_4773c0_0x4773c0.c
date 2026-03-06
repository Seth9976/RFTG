// 函数名称: sub_4773c0
// 虚拟地址: 0x4773c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_4773c0(void* arg1)
{
    // 第一条实际指令: int128_t* eax = arg1 + 0xc
    int128_t* eax = arg1 + 0xc
    int128_t* var_8 = eax
    int32_t var_10 = 0x1c
    void* ebx = &eax[0x11]
    
    while (true)
        sub_5abfc0(eax, 0, 0x32c)
        var_8 += 0x32c
        __builtin_memcpy(ebx - 0x100, &data_be1088, 0x100)
        __builtin_memcpy(ebx, &data_be1088, 0x100)
        void* edi_3 = ebx + 0x100
        ebx += 0x32c
        int32_t temp0_1 = var_10
        var_10 -= 1
        __builtin_memcpy(edi_3, &data_be1088, 0x100)
        
        if (temp0_1 - 1 s< 0)
            break
        
        eax = var_8
    
    int128_t* eax_2 = arg1 + 0x5c08
    int128_t* var_8_1 = eax_2
    int32_t var_10_1 = 6
    void* ebx_1 = &eax_2[0x11]
    
    while (true)
        sub_5abfc0(eax_2, 0, 0x32c)
        var_8_1 += 0x32c
        __builtin_memcpy(ebx_1 - 0x100, &data_be1088, 0x100)
        __builtin_memcpy(ebx_1, &data_be1088, 0x100)
        void* edi_6 = ebx_1 + 0x100
        ebx_1 += 0x32c
        int32_t temp1_1 = var_10_1
        var_10_1 -= 1
        __builtin_memcpy(edi_6, &data_be1088, 0x100)
        
        if (temp1_1 - 1 s< 0)
            break
        
        eax_2 = var_8_1
    
    void* eax_4 = arg1 + 0x723c
    void* var_8_2 = eax_4
    int32_t var_10_2 = 6
    void* ebx_2 = eax_4 + 0x110
    
    while (true)
        sub_5abfc0(eax_4, 0, 0x32c)
        var_8_2 += 0x32c
        __builtin_memcpy(ebx_2 - 0x100, &data_be1088, 0x100)
        __builtin_memcpy(ebx_2, &data_be1088, 0x100)
        void* edi_9 = ebx_2 + 0x100
        ebx_2 += 0x32c
        int32_t temp2_1 = var_10_2
        var_10_2 -= 1
        __builtin_memcpy(edi_9, &data_be1088, 0x100)
        
        if (temp2_1 - 1 s< 0)
            break
        
        eax_4 = var_8_2
    
    return arg1
}
