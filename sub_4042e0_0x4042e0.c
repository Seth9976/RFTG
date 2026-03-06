// 函数名称: sub_4042e0
// 虚拟地址: 0x4042e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4042e0(void* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (*(arg1 + 8) != 0x1f8)
        sub_4c5870("message.dataLen == msgSize", &data_83f3d3, "..\code\CClient.cpp", 0x61b, 
            "ClientGotGameDesc")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int32_t edi = *(arg1 + 0x1e0)
    *(arg1 + 0x1fc) = performanceCount
    int32_t var_14
    *(arg1 + 0x200) = var_14
    int32_t performanceCount_1
    int32_t edx_1
    performanceCount_1, edx_1 = sub_4045b0(edi)
    performanceCount = performanceCount_1
    int32_t var_14_1 = edx_1
    void* eax_4
    
    if (edx_1 != 0)
        eax_4 = sub_404690(&performanceCount)
        int32_t edx_3 = *(eax_4 + 8)
        int32_t ebx_1 = *(eax_4 + 0x58)
        performanceCount = *(eax_4 + 0xa8)
        int32_t ecx_5 = *(eax_4 + 0xf8)
        __builtin_memcpy(eax_4, arg1 + 0xc, 0x1f8)
        *(eax_4 + 8) = edx_3
        int32_t performanceCount_2 = performanceCount
        *(eax_4 + 0x58) = ebx_1
        *(eax_4 + 0xa8) = performanceCount_2
        *(eax_4 + 0xf8) = ecx_5
    else
        void* edx_2 = data_27e7a40
        eax_4 = *(edx_2 + 0x2c4958)
        
        if (eax_4 s< 0x24)
            if (eax_4 s>= 0)
                int32_t eax_6 = eax_4 * 0x1f8
                __builtin_memcpy(eax_6 + edx_2 + 0xad8, arg1 + 0xc, 0x1f8)
                *(edx_2 + 0x2c4958) += 1
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_6
            
            sub_4c5870("gCClient->numGameDescNetwork >= 0", &data_83f3d3, "..\code\CClient.cpp", 0x626, 
                "ClientGotGameDesc")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_4
}
