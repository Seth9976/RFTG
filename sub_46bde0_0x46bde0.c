// 函数名称: sub_46bde0
// 虚拟地址: 0x46bde0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_46bde0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void* esi = *(data_27e7a40 + 0x548)
    void* esi = *(data_27e7a40 + 0x548)
    
    if (esi == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ebx = *(esi + 0x45844)
    *(esi + 0x2c07b) = 1
    void* eax_3 = sub_418870(arg1)
    int32_t edx = data_315fba4
    data_315fba4 += 1
    int32_t var_10 = 0xffffffff
    int32_t var_c = 0x12
    int32_t var_1c = edx
    int32_t var_8 = edx
    sub_46b1d0(eax_3, &var_10)
    *(esi + 0x2c07c) = *(eax_3 + 0xac)
    *(esi + 0x2c080) = arg1
    int32_t result = sx.d(*(ebx + arg1 * 0x14 + 0x466))
    *(esi + 0x2c084) = result
    *(esi + 0x2c090) = 0xffffffff
    
    if (result == 0xffffffff)
        sub_4c5870("gui->takeoverSourceWho != -1", &data_83f3d3, "..\code\RFTGShared.cpp", 0x47a, 
            "TakeoverShow")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (arg2 != 0xffffffff)
        void* eax_7 = sub_418870(arg2)
        int32_t edx_3 = data_315fba4
        data_315fba4 += 1
        var_10 = 0xffffffff
        int32_t var_c_1 = 0x13
        int32_t var_1c_1 = edx_3
        int32_t var_8_1 = edx_3
        sub_46b1d0(eax_7, &var_10)
        *(esi + 0x2c088) = *(eax_7 + 0xac)
        result = sx.d(*(ebx + arg2 * 0x14 + 0x466))
        *(esi + 0x2c08c) = result
    else
        *(esi + 0x2c088) = 0
        *(esi + 0x2c08c) = 0xffffffff
    
    *(esi + 0x2c094) = 0xffffffff
    
    if (*(esi + 0x2c084) != *(esi + 0x2c08c))
        return result
    
    sub_4c5870("gui->takeoverSourceWho != gui->takeoverTargetWho", &data_83f3d3, 
        "..\code\RFTGShared.cpp", 0x48a, "TakeoverShow")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
