// 函数名称: sub_472e60
// 虚拟地址: 0x472e60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_472e60(void* arg1, int32_t arg2, int32_t* arg3, void* arg4)
{
    // 第一条实际指令: void* eax_1 = *(data_27e7a40 + 0x548)
    void* eax_1 = *(data_27e7a40 + 0x548)
    
    if (eax_1 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t edx = *arg3
    void* ebx = *(eax_1 + 0x45844)
    
    if (edx u> 5)
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGShared.cpp", 0x153d, "RFTGHandleAction")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    switch (edx)
        case 0
            *(arg4 + 0x2c0a1) = 1
            return eax_1
        case 1
            int32_t eax_3 = sub_46d560(arg3[2], arg1)
            *(arg4 + 0x2c0a1) = 1
            return eax_3
        case 2
            int32_t var_14 = 1
            sub_469e10(ebx, arg1, 0x10, arg3[2], 0, 0, 0, 0)
            sub_46e150(0)
            sub_469ff0(arg1)
            *(arg4 + 0x2c0a1) = 1
            return 0
        case 3
            int32_t* eax_4
            int32_t edx_4
            eax_4, edx_4 = sub_463f60(eax_1 + 0x43960, arg3[1])
            void* eax_5 = sub_471be0(eax_4, edx_4, arg1)
            *(arg4 + 0x2c0a1) = 1
            return eax_5
        case 4
            eax_1 = sub_46dfb0(arg1, edx, ebx)
            *(arg4 + 0x2c0a1) = 1
            return eax_1
        case 5
            sub_46dde0(arg1, ebx)
            *(arg4 + 0x2c0a1) = 1
            return 0
}
