// 函数名称: sub_4ce710
// 虚拟地址: 0x4ce710
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4ce710(int32_t* arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t entry_ebx
    
    if (entry_ebx u<= 0x5f5e100)
        int32_t* esi_2 = *arg3 + arg2
        int32_t* eax_1
        
        if (entry_ebx == 0)
            *esi_2 = entry_ebx
            eax_1.b = 1
            return eax_1
        
        int32_t ecx_1 = arg3[0xa]
        int32_t edi_1 = *esi_2
        
        if ((ecx_1.b & 0x10) != 0)
            eax_1.b = 1
            return eax_1
        
        if ((ecx_1 & 0x100) != 0 && edi_1 s>= arg5)
            eax_1.b = 1
            return eax_1
        
        void* ecx_3 = arg1 + edi_1
        *esi_2 = ecx_3
        
        if (sub_4fe2c0(arg3[6]) * entry_ebx + edi_1 s<= arg5 && ecx_3 s> arg2)
            return sub_4ce4c0(arg1, *esi_2, entry_ebx, arg3, arg4, arg5)
    
    int32_t* eax
    eax.b = 0
    return eax
}
