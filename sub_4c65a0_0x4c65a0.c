// 函数名称: sub_4c65a0
// 虚拟地址: 0x4c65a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4c65a0()
{
    // 第一条实际指令: int32_t* entry_ebx
    int32_t* entry_ebx
    int32_t esi = entry_ebx[2]
    
    if (esi s<= 0)
        return 
    
    int32_t* edi_1 = *entry_ebx
    
    if (edi_1 == 0)
        sub_4c5870("buffer.dataPtr != NULL", &data_83f3d3, "Network.cpp", 0x4b, "ResizableBufferFree")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    sub_4f4430(edi_1, sub_4f4380(esi), esi)
    *entry_ebx = 0
    entry_ebx[2] = 0
    entry_ebx[1] = 0
}
