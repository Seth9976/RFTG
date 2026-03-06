// 函数名称: sub_447c30
// 虚拟地址: 0x447c30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_447c30(int32_t arg1, int32_t arg2)
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
        if (arg1 != 0)
            if (arg1 != 1)
                sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x48c6, "ZoomRoleNext")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (arg2 - 1 u> 7)
            label_447e17:
                sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x48c1, "ZoomRoleNext")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            switch (arg2)
                case 1
                    return 2
                case 2
                    return 7
                case 3
                    goto label_447e17
                case 4, 8
                    return 4
                case 5
                    return 1
                case 6
                    return 5
                case 7
                    return 8
        else
            if (arg2 u> 4)
                sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x48b2, "ZoomRoleNext")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            switch (arg2)
                case 0
                    return 1
                case 1
                    return 2
                case 2
                    return 3
                case 3, 4
                    return 4
    else if (arg1 != 0)
        if (arg1 != 1)
            sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x48a3, "ZoomRoleNext")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (arg2 - 9 u> 9)
        label_447d33:
            sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x489e, "ZoomRoleNext")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        switch (arg2)
            case 9
                return 0x10
            case 0xa, 0xd
                goto label_447d33
            case 0xb
                return 0xc
            case 0xc
                return 0x11
            case 0xe, 0x12
                return 0xe
            case 0xf
                return 0xb
            case 0x10
                return 0xf
            case 0x11
                return 0x12
    else
        if (arg2 - 0xa u> 4)
            sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x488e, "ZoomRoleNext")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        switch (arg2)
            case 0xa
                return 0xb
            case 0xb
                return 0xc
            case 0xc
                return 0xd
            case 0xd, 0xe
                return 0xe
}
