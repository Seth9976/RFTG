// 函数名称: sub_41eb70
// 虚拟地址: 0x41eb70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_41eb70(int32_t arg1)
{
    // 第一条实际指令: void* eax_1 = *(data_27e7a40 + 0x548)
    void* eax_1 = *(data_27e7a40 + 0x548)
    
    if (eax_1 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* result = *(eax_1 + 0x45844)
    int32_t ecx
    ecx.b = *(result + 0x1ec0)
    
    if (ecx.b == 0xff || ecx.b == 0xa)
        result.b = 0
        return result
    
    if (ecx.b s< 0 || ecx.b s> 9)
        sub_4c5870("g->cur_action >= ACT_SEARCH && g->cur_action <= ACT_PRODUCE", &data_83f3d3, 
            "..\code\RFTGClient.cpp", 0xd53, "IsPhaseSelected")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (arg1 - 1 u<= 9)
        switch (arg1)
            case 1
                if (*(result + 0x1eb8) == 0 && *(result + 0x1eb7) == 0)
                    return 0
                
                return 1
            case 2
                result.b = *(result + 0x1eb9) != 0
                return result
            case 3
                result.b = *(result + 0x1ebb) != 0
                return result
            case 4
                if (*(result + 0x1ebd) == 0 && *(result + 0x1ebe) == 0)
                    return 0
                
                return 1
            case 5
                result.b = *(result + 0x1ebf) != 0
                return result
            case 8
                result.b = *(result + 0x1eba) != 0
                return result
            case 9
                result.b = *(result + 0x1ebc) != 0
                return result
            case 0xa
                result.b = *(result + 0x1eb6) != 0
                return result
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0xd68, "IsPhaseSelected")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
