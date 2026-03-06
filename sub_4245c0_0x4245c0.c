// 函数名称: sub_4245c0
// 虚拟地址: 0x4245c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4245c0()
{
    // 第一条实际指令: void* entry_ebx
    void* entry_ebx
    
    if (*entry_ebx != 0)
        sub_4c5870("gfx.type == RFTGGFX_CARD", &data_83f3d3, "..\code\RFTGClient.cpp", 0x134d, 
            "DiscardSelectionToHand")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_1 = *(entry_ebx + 0x74)
    
    if (eax_1 != 6)
        if (eax_1 == 4)
            data_c02120 -= 1
            *(entry_ebx + 0x9b) = 0
            *(entry_ebx + 0x74) = 7
            return eax_1
        
        if (eax_1 == 2)
            data_c020d4 -= 1
            *(entry_ebx + 0x9b) = 0
        
        *(entry_ebx + 0x74) = 7
        return eax_1
    
    int32_t edi = *(entry_ebx + 0x58)
    
    if (edi != 0xffffffff)
        int32_t eax_2 = sub_46b360(edi)
        
        if (eax_2 != 0xffffffff)
            int32_t eax_4 = *sub_46b2b0(eax_2)
            *((eax_4 << 2) + &data_c02108) -= 1
            *(entry_ebx + 0x9b) = 0
            *(entry_ebx + 0x74) = 7
            return eax_4
    
    data_c02104 -= 1
    *(entry_ebx + 0x9b) = 0
    *(entry_ebx + 0x74) = 7
    return 0xffffffff
}
