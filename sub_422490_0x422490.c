// 函数名称: sub_422490
// 虚拟地址: 0x422490
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_422490(int32_t arg1)
{
    // 第一条实际指令: if (arg1 u> 9)
    if (arg1 u> 9)
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0xb46, "PhaseButtonToRole")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t esi
    
    switch (arg1)
        case 0
            esi = 0
        case 1
            esi = 1
        case 2
            esi = 2
        case 3
            esi = 3
        case 4
            esi = 4
        case 5
            esi = 5
        case 6
            esi = 6
        case 7
            esi = 7
        case 8
            esi = 8
        case 9
            esi = 9
    
    void* ecx = *(data_27e7a40 + 0x548)
    int32_t edx = *(ecx + 0x1c8)
    int32_t result = 0
    
    if (edx s> 0)
        void* ecx_1 = ecx + 0x188
        
        do
            if (*ecx_1 == esi)
                result.b = 1
                return result
            
            result += 1
            ecx_1 += 4
        while (result s< edx)
    
    result.b = 0
    return result
}
