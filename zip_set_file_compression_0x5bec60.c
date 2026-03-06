// 函数名称: zip_set_file_compression
// 虚拟地址: 0x5bec60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tzip_set_file_compression(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t temp0 = *(arg1 + 0x34)
    int32_t temp0 = *(arg1 + 0x34)
    
    if (arg3 u>= temp0 && (arg3 u> temp0 || arg2 u>= *(arg1 + 0x30)))
        zip_error_set(arg1 + 8, 0x12, 0)
        return 0xffffffff
    
    if ((*(arg1 + 0x18) & 2) != 0)
        zip_error_set(arg1 + 8, 0x19, 0)
        return 0xffffffff
    
    if (arg4 != 0xffffffff && arg4 != 0 && arg4 != 8)
        zip_error_set(arg1 + 8, 0x10, 0)
        return 0xffffffff
    
    int32_t* esi_2 = (arg2 << 4) + *(arg1 + 0x40)
    void* eax_4 = *esi_2
    int32_t ecx
    
    if (eax_4 != 0)
        ecx = *(eax_4 + 0xc)
    else
        ecx = 0xffffffff
    
    if (arg4 != ecx)
        if (esi_2[1] == 0)
            int32_t* eax_8 = sub_5bfce0(eax_4)
            esi_2[1] = eax_8
            
            if (eax_8 == 0)
                zip_error_set(arg1 + 8, 0xe, eax_8)
                return 0xffffffff
        
        *(esi_2[1] + 0xc) = arg4
        int32_t* esi_3 = esi_2[1]
        *esi_3 |= 1
    else
        int32_t* eax_5 = esi_2[1]
        
        if (eax_5 != 0)
            *eax_5 &= 0xfffffffe
            int32_t* eax_6 = esi_2[1]
            
            if (*eax_6 == 0)
                sub_5bf7f0(eax_6)
                esi_2[1] = 0
    
    return 0
}
