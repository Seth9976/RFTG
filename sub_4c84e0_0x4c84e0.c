// 函数名称: sub_4c84e0
// 虚拟地址: 0x4c84e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4c84e0(void* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    
    for (void* i = data_27e7bb8; i != 0; i = data_27e7bb8)
        int32_t* esi_1
        
        if (*(i + 0x58) == 0)
            esi_1 = sub_4cce80(0xff8)
            sub_5abfc0(esi_1, 0, 0xff8)
        else
            esi_1 = sub_4c9050(i + 0x50)
        
        int32_t eax_4 = *(*data_27e7bb4 + 0x14)
        int32_t edx_1 = *(arg1 + 0x10)
        var_8 = esi_1
        int32_t eax_5 = eax_4(edx_1, &esi_1[0x3f9], &esi_1[3], 0xfd0)
        
        if (eax_5 == 0 || eax_5 == 0xffffffff)
            var_8 = esi_1
            sub_4c4590(&data_83f3d3)
            return sub_518190(data_27e7bb8 + 0x50, &var_8)
        
        if (eax_5 s<= 0)
            sub_4c5870("len > 0", &data_83f3d3, "Network.cpp", 0x4d7, "NetLocUDPReceive")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *esi_1 = *(arg1 + 0x48)
        esi_1[2] = eax_5
        
        if (eax_5 u< 4)
            esi_1[1] = 0x3e9
        else
            esi_1[1] = esi_1[3]
        
        if (esi_1[1] s<= 0x3e8)
            sub_4c5870("netMessage->messageType > NETMSG_MIN_VALUE", &data_83f3d3, "Network.cpp", 
                0x4e6, "NetLocUDPReceive")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        sub_518190(data_27e7bb8 + 0x38, &var_8)
    
    sub_4c5870("gNetwork", &data_83f3d3, "Network.cpp", 0x11f, "NetMessageAlloc")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
