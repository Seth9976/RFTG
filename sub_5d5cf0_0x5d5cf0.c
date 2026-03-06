// 函数名称: sub_5d5cf0
// 虚拟地址: 0x5d5cf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d5cf0(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        char const* const __saved_edi = "surface"
        sub_5cce60("Parameter '%s' is invalid")
        return 0xffffffff
    
    int32_t* eax_1 = *(*(arg1 + 4) + 4)
    
    if (eax_1 != 0 && arg3 u>= *eax_1)
        void* const __saved_ebx_1 = &data_8735d8
        sub_5cce60("Parameter '%s' is invalid")
        return 0xffffffff
    
    if ((arg2.b & 2) != 0)
        sub_5d5cb0(arg1, 1)
    
    void* eax_2 = *(arg1 + 0x34)
    int32_t edx = *(eax_2 + 0x44)
    
    if (arg2 == 0)
        void* ecx_5 = *(arg1 + 4)
        
        if (*(ecx_5 + 4) != 0)
            *(*(*(ecx_5 + 4) + 4) + (*(eax_2 + 0x48) << 2) + 3) = 0xff
            void* eax_13 = *(*(arg1 + 4) + 4)
            *(eax_13 + 8) += 1
            
            if (*(*(*(arg1 + 4) + 4) + 8) == 0)
                *(*(*(arg1 + 4) + 4) + 8) = 1
        
        void* eax_18 = *(arg1 + 0x34)
        *(eax_18 + 0x44) &= 0xfffffeff
    else
        *(eax_2 + 0x44) |= 0x100
        *(*(arg1 + 0x34) + 0x48) = arg3
        
        if (*(*(arg1 + 4) + 4) != 0)
            *(*(*(*(arg1 + 4) + 4) + 4) + (*(*(arg1 + 0x34) + 0x48) << 2) + 3) = 0
            void* eax_6 = *(*(arg1 + 4) + 4)
            *(eax_6 + 8) += 1
            
            if (*(*(*(arg1 + 4) + 4) + 8) == 0)
                *(*(*(arg1 + 4) + 4) + 8) = 1
    
    int32_t* esi_1 = *(arg1 + 0x34)
    
    if (esi_1[0x11] != edx)
        sub_5d8400(esi_1)
    
    return 0
}
