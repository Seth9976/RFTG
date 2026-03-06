// 函数名称: sub_4d1780
// 虚拟地址: 0x4d1780
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4d1780(void* arg1 @ esi)
{
    // 第一条实际指令: if (*arg1 != 2)
    if (*arg1 != 2)
        sub_4c5870("mNetSyncState == NETSYNCSTATE_HOST_RUNNING", &data_83f3d3, "NetSync.cpp", 0x1ef, 
            "NetSync::ServerGotEndOfFrame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    while (*(arg1 + 0x514) != 0)
        int32_t* eax_3
        int32_t edx_1
        eax_3, edx_1 = sub_4db440(arg1 + 0x50c)
        int32_t eax_4 = eax_3[1]
        
        if (eax_4 == 0x7d1)
            sub_4c5870("Halt", &data_83f3d3, "NetSync.cpp", 0x1f9, "NetSync::ServerGotEndOfFrame")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (eax_4 != 0x7d2)
            sub_4c5870("Halt", &data_83f3d3, "NetSync.cpp", 0x201, "NetSync::ServerGotEndOfFrame")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        sub_4d18e0(eax_3, edx_1, arg1)
        int32_t* var_8 = eax_3
        sub_4c4590(&data_83f3d3)
        sub_518190(data_27e7bb8 + 0x50, &var_8)
}
