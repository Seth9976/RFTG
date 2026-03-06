// 函数名称: sub_475ff0
// 虚拟地址: 0x475ff0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_475ff0(int32_t arg1)
{
    // 第一条实际指令: sub_4075c0()
    sub_4075c0()
    void* eax_2
    
    if (*(data_27e7a40 + 0x24) != 0)
        eax_2 = data_8c8744
    
    if (*(data_27e7a40 + 0x24) == 0 || eax_2 == 0)
        eax_2 = &data_83f3d3
    
    sub_4c4590(eax_2)
    int32_t eax_3 = *(data_27e7a40 + 0x24)
    
    if (eax_3 u> 8)
        sub_4c5870("Halt", &data_83f3d3, "..\code\RftgTitleScreen.cpp", 0x69c, "GetServerStatusMsg")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    switch (eax_3)
        case 0
            data_bebee0 = "Profile Offline"
        case 1, 3
            data_bebee0 = "Network unavailable"
        case 2
            data_bebee0 = "WiFi unavailable"
        case 4, 8
            data_bebee0 = &data_83f3d3
        case 5
            data_bebee0 = "Update required"
        case 6
            data_bebee0 = "Server unavailable"
        case 7
            data_bebee0 = "Server full"
    
    sub_407670()
    return sub_4c4590(data_bebee0)
}
