// 函数名称: sub_405420
// 虚拟地址: 0x405420
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_405420(int32_t* arg1)
{
    // 第一条实际指令: int128_t* result = arg1[1]
    int128_t* result = arg1[1]
    void var_1fc
    
    if (result != 2)
        if (result == 5)
            int32_t var_210_4 = *arg1
            sub_4c5680("stats game removed %d")
            void* eax_11 = data_27e7a40
            int32_t edx_5 = *arg1
            *(eax_11 + 0x317ad0) -= 1
            int32_t ebx_2 = *(eax_11 + 0x317ad0)
            __builtin_memcpy(edx_5 * 0x1f8 + eax_11 + 0x2c9050, ebx_2 * 0x1f8 + eax_11 + 0x2c9050, 
                0x1f8)
            return sub_5ab990(edx_5 * 0x138a8 + eax_11 + 0x2c9830, ebx_2 * 0x138a8 + eax_11 + 0x2c9830, 
                0x138a8)
        
        if (result == 3)
            int32_t eax_12 = *arg1
            void* edx_9 = data_27e7a40 + eax_12 * 0x1f8
            __builtin_memcpy(&var_1fc, edx_9 + 0x2c4968, 0x1f8)
            sub_5a6c10(edx_9 + 0x2c4968, edx_9 + 0x2c4b60, 
                (*(data_27e7a40 + 0x2c9048) - eax_12) * 0x1f8 - 0x1f8)
            result = data_27e7a40
            __builtin_memcpy(*(result + 0x2c9048) * 0x1f8 + result + 0x2c4770, &var_1fc, 0x1f8)
            int32_t temp1_1 = *(result + 0x2c9048)
            *(result + 0x2c9048) -= 1
            
            if (temp1_1 - 1 s< 0)
                sub_4c5870("gCClient->numGameDescOpen >= 0", &data_83f3d3, "..\code\CClient.cpp", 
                    0x98e, "RemoveNetworkGame")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
    else
        int32_t ebx_1 = *arg1
        void* eax_2 = ebx_1 * 0x1f8 + data_27e7a40
        __builtin_memcpy(&var_1fc, eax_2 + 0xad8, 0x1f8)
        sub_5a6c10(eax_2 + 0xad8, eax_2 + 0xcd0, (*(data_27e7a40 + 0x2c4958) - ebx_1) * 0x1f8 - 0x1f8)
        void* eax_4 = data_27e7a40
        __builtin_memcpy(*(eax_4 + 0x2c4958) * 0x1f8 + eax_4 + 0x8e0, &var_1fc, 0x1f8)
        
        if (*(eax_4 + 0x2c4960) == 2)
            *(eax_4 + 0x2c495c) = *(eax_4 + 0x2c4958) - 1
        
        void* ecx_10 = ebx_1 * 0x138a8 + eax_4
        sub_5a6c10(ecx_10 + 0x51b8, ecx_10 + 0x18a60, (*(eax_4 + 0x2c4958) - ebx_1) * 0x138a8 - 0x138a8)
        result = data_27e7a40
        int32_t temp0_1 = *(result + 0x2c4958)
        *(result + 0x2c4958) -= 1
        
        if (temp0_1 - 1 s< 0)
            sub_4c5870("gCClient->numGameDescNetwork >= 0", &data_83f3d3, "..\code\CClient.cpp", 0x977, 
                "RemoveNetworkGame")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    return result
}
