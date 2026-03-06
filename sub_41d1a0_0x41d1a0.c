// 函数名称: sub_41d1a0
// 虚拟地址: 0x41d1a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_41d1a0(int32_t arg1, char arg2)
{
    // 第一条实际指令: void* eax = *(data_27e7a40 + 0x548)
    void* eax = *(data_27e7a40 + 0x548)
    
    if (eax == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    if (*(*(eax + 0x45844) + 0x45a) != 3)
        if (arg2 == 0)
            int32_t eax_26 = *(eax + (arg1 << 2) + 0x188) - 1
            
            if (eax_26 u> 8)
                sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0xb0b, "ZoomRollFromIndex")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            switch (eax_26)
                case 0
                    return 6
                case 1
                    return 5
                case 2, 3
                    return 1
                case 4, 5
                    return 2
                case 6
                    return 7
                case 7
                    return 8
                case 8
                    return 4
        else
            switch (*(eax + (arg1 << 2) + 0x1cc) - 1)
                case 0
                    return 0
                case 1, 7
                    return 1
                case 2, 8
                    return 2
                case 3
                    return 3
                case 4
                    return 4
                default
                    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0xaf9, 
                        "ZoomRollFromIndex")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
    else if (arg2 == 0)
        int32_t eax_11 = *(eax + (arg1 << 2) + 0x188)
        
        if (eax_11 u> 9)
            sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0xae6, "ZoomRollFromIndex")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        switch (eax_11)
            case 0
                return 9
            case 1
                return 0x10
            case 2
                return 0xf
            case 3, 4
                return 0xb
            case 5, 6
                return 0xc
            case 7
                return 0x11
            case 8
                return 0x12
            case 9
                return 0xe
    else
        switch (*(eax + (arg1 << 2) + 0x1cc) - 1)
            case 0
                return 0xa
            case 1, 7
                return 0xb
            case 2, 8
                return 0xc
            case 3
                return 0xd
            case 4
                return 0xe
            case 9
                return 9
            default
                sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0xad3, "ZoomRollFromIndex")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
}
