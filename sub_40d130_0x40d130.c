// 函数名称: sub_40d130
// 虚拟地址: 0x40d130
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_40d130()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    sub_4075c0()
    char* entry_ebx
    char* eax_2 = entry_ebx
    void* edx = &eax_2[1]
    char i
    
    do
        i = *eax_2
        eax_2 = &eax_2[1]
    while (i != 0)
    void* ecx_1 = *(data_27e7a40 + 0x28)
    
    if (ecx_1 != 0)
        int32_t** edx_1 = data_27e7bb8
        uint32_t eax_4 = zx.d(ecx_1.w)
        
        if (eax_4 u< edx_1[1])
            void* eax_6 = &(*edx_1)[eax_4 * 0x13]
            
            if (*(eax_6 + 0x48) == ecx_1)
                if (eax_2 - edx + 1 s> 0xfd0)
                    sub_4c5870("length <= MAX_NET_MESSAGE_SIZE", &data_83f3d3, "Network.cpp", 0x29f, 
                        "NetBufferStartMessage")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t var_14
                int32_t* var_20_1 = &var_14
                void* var_24_1 = eax_6 + 0x3c
                void* var_10_1 = eax_2 - edx + 1
                int32_t var_c_1 = 0xf4267
                var_14 = 0xfeedface
                void* ecx_2
                int32_t** edx_2
                ecx_2, edx_2 = sub_4c72b0(0xc, edx_1, ecx_1)
                char* var_28_1 = entry_ebx
                void* var_2c_1 = eax_6 + 0x3c
                sub_4c72b0(eax_2 - edx + 1, edx_2, ecx_2)
    
    sub_407670()
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}
