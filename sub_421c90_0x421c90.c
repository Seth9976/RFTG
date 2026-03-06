// 函数名称: sub_421c90
// 虚拟地址: 0x421c90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_421c90(int32_t arg1)
{
    // 第一条实际指令: void* edi = *(data_27e7a40 + 0x548)
    void* edi = *(data_27e7a40 + 0x548)
    
    if (arg1 u> 9)
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0xb33, "PhaseButtonToPhase")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t ecx_1
    
    switch (arg1)
        case 0
            ecx_1 = 0xa
        case 1, 2
            ecx_1 = 1
        case 3
            ecx_1 = 2
        case 4
            ecx_1 = 8
        case 5
            ecx_1 = 3
        case 6
            ecx_1 = 9
        case 7, 8
            ecx_1 = 4
        case 9
            ecx_1 = 5
    
    int32_t esi = *(edi + 0x20c)
    
    while (true)
        int32_t result = 0
        
        if (esi s> 0)
            void* edx_1 = edi + 0x1cc
            
            do
                if (*edx_1 == ecx_1)
                    return result
                
                result += 1
                edx_1 += 4
            while (result s< esi)
        
        if (ecx_1 == 8)
            ecx_1 = 2
        else if (ecx_1 == 9)
            ecx_1 = 3
        else if (ecx_1 != 5)
            if (ecx_1 != 0xa)
                break
            
            ecx_1 = 4
        else
            ecx_1 = 4
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x1034, "PhaseButtonsToPhaseIndex")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
