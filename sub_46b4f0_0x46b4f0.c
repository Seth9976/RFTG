// 函数名称: sub_46b4f0
// 虚拟地址: 0x46b4f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_46b4f0(int32_t arg1)
{
    // 第一条实际指令: void* eax = sub_46b2b0(arg1)
    void* eax = sub_46b2b0(arg1)
    int32_t ecx = *(eax + 0xa94)
    int32_t edi = 0
    void* entry_ebx
    
    if (ecx s> 0)
        void* eax_1 = eax + 0x574
        
        do
            if (*eax_1 == *(entry_ebx + 0xac))
                if (edi == 0xffffffff)
                    break
                
                void* eax_3 = sub_46b2b0(arg1)
                int128_t* eax_7 = sub_5a6c10(eax_3 + (edi << 2) + 0x574, eax_3 + (edi << 2) + 0x578, 
                    ((*(eax_3 + 0xa94) - edi) << 2) + 0xfffffffc)
                *(eax_3 + 0xa94) -= 1
                return eax_7
            
            edi += 1
            eax_1 += 4
        while (edi s< ecx)
    
    void* eax_2 = sub_46b2b0(arg1)
    int32_t ecx_1 = *(eax_2 + 0xa94)
    *(eax_2 + 0xa94) = ecx_1 + 1
    *(eax_2 + (ecx_1 << 2) + 0x574) = *(entry_ebx + 0xac)
    return eax_2
}
