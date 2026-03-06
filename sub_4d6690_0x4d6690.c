// 函数名称: sub_4d6690
// 虚拟地址: 0x4d6690
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4d6690()
{
    // 第一条实际指令: int32_t* ecx_3 = data_27e7fd4
    int32_t* ecx_3 = data_27e7fd4
    void* edi = *ecx_3
    int32_t result = 0
    void* esi = nullptr
    void* edx_2 = ecx_3[1] * 0x60 + edi
    
    while (true)
        void* ecx_1 = edi
        
        if (esi != 0)
            ecx_1 = esi + 0x60
        
        if (ecx_1 u>= edx_2)
            break
        
        void* ecx_2 = ecx_1
        
        while ((*(ecx_2 + 0x5c) & 0xffff0000) == 0)
            ecx_2 += 0x60
            
            if (ecx_2 u>= edx_2)
                return result
        
        esi = ecx_2
        int32_t entry_ebx
        
        if (*(ecx_2 + 4) == entry_ebx && *(ecx_2 + 0x56) != 0)
            result += 1
    
    return result
}
