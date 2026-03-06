// 函数名称: sub_4c80d0
// 虚拟地址: 0x4c80d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4c80d0(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* eax = arg1[9]
    int32_t* eax = arg1[9]
    
    if (eax != 1)
        if (eax == 3 || eax != 2)
            return eax
        
        eax = (*(*data_27e7bb4 + 0x1c))(arg1[4])
        
        if (eax == 2)
            return eax
        
        if (eax == 4)
            if (arg1[5] == 3)
                arg1[0xb] = 0
                
                if (arg3 == 1)
                    arg1[9] = 3
                    return eax
            
            arg1[9] = 4
            return sub_4c68d0(arg1, 0x3ec)
        
        if (eax != 5)
            sub_4c5870("Halt", &data_83f3d3, "Network.cpp", 0x48e, "UpdateTCPConnectStatus")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        arg1[9] = eax
        int32_t eax_7 = arg1[0xa]
        
        if (eax_7 != 2)
            if (eax_7 == 3)
                return sub_4c68d0(arg1, 0xfa1)
            
            sub_4c5870("Halt", &data_83f3d3, "Network.cpp", 0x487, "UpdateTCPConnectStatus")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    else
        if (arg1[4] != 0xffffffff)
            sub_4c5870("loc.socket == TG_INVALID_SOCKET", &data_83f3d3, "Network.cpp", 0x440, 
                "UpdateTCPConnectStatus")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t eax_3 = (*(*data_27e7bb4 + 0x18))(arg1)
        arg1[4] = eax_3
        
        if (eax_3 != 0xffffffff)
            arg1[9] = 2
            return eax_3
        
        arg1[9] = 5
    
    return sub_4c68d0(arg1, 0x3ed)
}
