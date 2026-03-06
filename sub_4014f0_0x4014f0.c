// 函数名称: sub_4014f0
// 虚拟地址: 0x4014f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4014f0()
{
    // 第一条实际指令: void* esi = data_8c86e8
    void* esi = data_8c86e8
    void* eax = nullptr
    void* ecx_1 = data_8c86ec * 0x318b10 + esi
    
    while (true)
        if (eax != 0)
            eax += 0x318b10
        else
            eax = esi
        
        if (eax u>= ecx_1)
            return 0
        
        while ((*(eax + 0x318b08) & 0xffff0000) == 0)
            eax += 0x318b10
            
            if (eax u>= ecx_1)
                return 0
        
        void* edx_1 = *(eax + 0x528)
        
        if (edx_1 != 0)
            int32_t entry_ebx
            
            if (*(edx_1 + 4) == entry_ebx)
                break
    
    return eax + 8
}
