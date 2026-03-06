// 函数名称: sub_4040a0
// 虚拟地址: 0x4040a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4040a0(void* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (*(arg1 + 8) != 0x1f8)
        sub_4c5870("message.dataLen == msgSize", &data_83f3d3, "..\code\CClient.cpp", 0x5d6, 
            "ClientGotGameDescOpen")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t i = 0
    int32_t eax_4
    
    if (*(arg1 + 0x14c) s> 0)
        eax_4 = sub_4194b0()
        void* ecx_1 = arg1 + 0xc
        
        do
            if (*ecx_1 == eax_4)
                goto label_4042d2
            
            i += 1
            ecx_1 += 0x50
        while (i s< *(arg1 + 0x14c))
    
    int32_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int32_t performanceCount_1 = performanceCount
    int32_t var_24
    *(arg1 + 0x200) = var_24
    void* edx_2 = data_27e7a40
    *(arg1 + 0x1fc) = performanceCount_1
    int32_t edi = *(edx_2 + 0x2c9048)
    eax_4 = 0
    int32_t var_14
    
    if (edi s> 0)
        void* ecx_2 = edx_2 + 0x2c4b3c
        
        do
            if (*ecx_2 == *(arg1 + 0x1e0))
                void* eax_8 = eax_4 * 0x1f8
                int32_t ebx_3 = *(eax_8 + edx_2 + 0x2c49c0)
                void* eax_9 = eax_8 + edx_2
                int32_t edx_4 = *(eax_9 + 0x2c4970)
                var_14 = *(eax_8 + edx_2 + 0x2c4a10)
                int32_t ecx_5 = *(eax_9 + 0x2c4a60)
                __builtin_memcpy(eax_9 + 0x2c4968, arg1 + 0xc, 0x1f8)
                *(eax_9 + 0x2c4970) = edx_4
                int32_t edx_5 = var_14
                *(eax_9 + 0x2c49c0) = ebx_3
                *(eax_9 + 0x2c4a10) = edx_5
                *(eax_9 + 0x2c4a60) = ecx_5
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_9
            
            eax_4 += 1
            ecx_2 += 0x1f8
        while (eax_4 s< edi)
    
    if (edi s< 0x24)
        goto label_4041d5
    
    int32_t ecx_3 = 0
    int32_t ebx_2 = 0xffffffff
    int32_t var_10_1 = 0
    
    if (edi s> 0)
        void* edx_3 = edx_2 + 0x2c4b44
        
        do
            eax_4 = *edx_3
            
            if (eax_4 == 5 || eax_4 == 4 || eax_4 == 6 || eax_4 == 3)
                eax_4 = *(edx_3 - 8)
                
                if (ebx_2 == 0xffffffff || eax_4 s< var_10_1)
                    ebx_2 = ecx_3
                    var_10_1 = eax_4
            
            ecx_3 += 1
            edx_3 += 0x1f8
        while (ecx_3 s< edi)
        
        if (ebx_2 != 0xffffffff)
            int32_t var_10_2 = 3
            var_14 = ebx_2
            sub_405420(&var_14)
            edx_2 = data_27e7a40
        label_4041d5:
            int32_t eax_6 = *(edx_2 + 0x2c9048)
            
            if (eax_6 s>= 0x24)
                sub_4c5870("gCClient->numGameDescOpen < MAX_GAME_DESCS", &data_83f3d3, 
                    "..\code\CClient.cpp", 0x613, "ClientGotGameDescOpen")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (eax_6 s< 0)
                sub_4c5870("gCClient->numGameDescOpen >= 0", &data_83f3d3, "..\code\CClient.cpp", 
                    0x614, "ClientGotGameDescOpen")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            eax_4 = eax_6 * 0x1f8
            __builtin_memcpy(eax_4 + edx_2 + 0x2c4968, arg1 + 0xc, 0x1f8)
            *(edx_2 + 0x2c9048) += 1
    
    label_4042d2:
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_4
}
