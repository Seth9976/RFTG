// 函数名称: sub_459b60
// 虚拟地址: 0x459b60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_459b60()
{
    // 第一条实际指令: void* eax = *(data_27e7a40 + 0x548)
    void* eax = *(data_27e7a40 + 0x548)
    int32_t esi = *(eax + 0xbfac)
    
    if (esi != 0)
        int32_t eax_2 = sub_446520(sub_463f60(eax + 0x43960, esi))
        
        if (eax_2 u> 0xc)
            sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x5fe6, "GetZoomCardActionText")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        switch (eax_2)
            case 1
                return "Place"
            case 4
                return "Takeover"
            case 5
                return "Discard"
            case 7
                return "Cancel"
            case 8, 9
                return &data_8623a4
            case 0xb
                return "Select"
    
    return 0
}
