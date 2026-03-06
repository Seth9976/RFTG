// 函数名称: sub_447ee0
// 虚拟地址: 0x447ee0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_447ee0(int32_t arg1, int32_t arg2)
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
                sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x4911, "ZoomRolePrev")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (arg2 - 1 u> 7)
            label_4480d2:
                sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x490c, "ZoomRolePrev")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            switch (arg2)
                case 1
                    return 5
                case 2
                    return 1
                case 3
                    goto label_4480d2
                case 4
                    return 8
                case 5, 6
                    return 6
                case 7
                    return 2
                case 8
                    return 7
        else
            if (arg2 u> 4)
                sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x48fd, "ZoomRolePrev")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            switch (arg2)
                case 0, 1
                    return 0
                case 2
                    return 1
                case 3
                    return 2
                case 4
                    return 3
    else if (arg1 != 0)
        if (arg1 != 1)
            sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x48ee, "ZoomRolePrev")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (arg2 - 9 u> 9)
        label_447fea:
            sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x48e9, "ZoomRolePrev")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        switch (arg2)
            case 9, 0x10
                return 9
            case 0xa, 0xd
                goto label_447fea
            case 0xb
                return 0xf
            case 0xc
                return 0xb
            case 0xe
                return 0x12
            case 0xf
                return 0x10
            case 0x11
                return 0xc
            case 0x12
                return 0x11
    else
        if (arg2 - 0xa u> 4)
            sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x48d9, "ZoomRolePrev")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        switch (arg2)
            case 0xa, 0xb
                return 0xa
            case 0xc
                return 0xb
            case 0xd
                return 0xc
            case 0xe
                return 0xd
}
