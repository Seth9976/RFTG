// 函数名称: sub_41f350
// 虚拟地址: 0x41f350
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_41f350(int32_t arg1)
{
    // 第一条实际指令: if (arg1 u> 9)
    if (arg1 u> 9)
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0xb46, "PhaseButtonToRole")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t edi
    
    switch (arg1)
        case 0
            edi = 0
        case 1
            edi = 1
        case 2
            edi = 2
        case 3
            edi = 3
        case 4
            edi = 4
        case 5
            edi = 5
        case 6
            edi = 6
        case 7
            edi = 7
        case 8
            edi = 8
        case 9
            edi = 9
    
    void* eax_1 = sub_46b2b0(*(data_27e7a40 + 0x74))
    int32_t i = 0
    void* edx = eax_1 + 0x1f44
    
    do
        if (*edx == edi)
            return eax_1 + (i << 3) + 0x1f44
        
        i += 1
        edx += 8
    while (i s< 2)
    
    return 0
}
