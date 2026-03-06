// 函数名称: sub_401ed0
// 虚拟地址: 0x401ed0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_401ed0(int32_t* arg1 @ esi, void* arg2 @ edi)
{
    // 第一条实际指令: if (*(arg2 + 4) == 0)
    if (*(arg2 + 4) == 0)
        return 
    
    if (arg1[2] != 1)
        sub_4c5870("message.dataLen == sizeof(HeartbeatMessage)", &data_83f3d3, "..\code\CardNet.cpp", 
            0x115, "SServerHandleStatusRequest")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    char* ecx
    int32_t edx_1 = sub_4b7710(ecx)
    int32_t* eax_2 = data_8c8710
    int32_t var_14 = 1
    int32_t* ecx_1 = *eax_2
    int32_t* var_18_1 = &var_14
    int32_t var_1c_1 = 0xf4247
    int32_t* var_c_1 = ecx_1
    sub_4c8dd0(*arg1, edx_1, ecx_1)
    
    if (arg1[3].b == 0 || data_8c8710[3] != 2)
        return 
    
    void* var_18_2 = arg2 + 0x10
    int32_t var_1c_2 = *(arg2 + 4)
    sub_4c57f0("game desc query player:%d %s")
}
