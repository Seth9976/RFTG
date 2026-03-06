// 函数名称: sub_4d1a90
// 虚拟地址: 0x4d1a90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4d1a90(int32_t* arg1 @ esi)
{
    // 第一条实际指令: if (*arg1 != 5)
    if (*arg1 != 5)
        sub_4c5870("mNetSyncState == NETSYNCSTATE_CLIENT_CONNECTED", &data_83f3d3, "NetSync.cpp", 
            0x232, "NetSync::ClientGotEndOfFrame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    while (arg1[0x145] != 0)
        void* eax_3
        int32_t edx_1
        eax_3, edx_1 = sub_4db440(&arg1[0x143])
        int32_t eax_4 = *(eax_3 + 4)
        
        if (eax_4 == 0x7d1)
            sub_4d1490(arg1, eax_3)
        else
            if (eax_4 != 0x7d2)
                sub_4c5870("Halt", &data_83f3d3, "NetSync.cpp", 0x243, "NetSync::ClientGotEndOfFrame")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            sub_4d1b80(arg1, edx_1, eax_3)
        
        void* var_8 = eax_3
        sub_4c4590(&data_83f3d3)
        sub_518190(data_27e7bb8 + 0x50, &var_8)
}
