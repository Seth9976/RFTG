// 函数名称: sub_4d0c20
// 虚拟地址: 0x4d0c20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4d0c20(int32_t arg1, void* arg2, void* arg3 @ esi, int32_t arg4, void* arg5, void* arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_28 = *(arg3 + 4)
    int32_t* entry_ebx
    int32_t var_24 = *(entry_ebx + *(arg3 + 0xc))
    int32_t var_20 = arg4
    void* var_1c = arg5
    
    if (arg1 != 0)
        int32_t** edx_4 = data_27e7bb8
        uint32_t eax_3 = zx.d(arg1.w)
        
        if (eax_3 u< edx_4[1])
            void* eax_5 = &(*edx_4)[eax_3 * 0x13]
            
            if (*(eax_5 + 0x48) == arg1)
                if (arg6 + 0x10 s> 0xfd0)
                    sub_4c5870("length <= MAX_NET_MESSAGE_SIZE", &data_83f3d3, "Network.cpp", 0x29f, 
                        "NetBufferStartMessage")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t var_18
                int32_t* var_3c_1 = &var_18
                void* var_40_1 = eax_5 + 0x3c
                void* var_14_1 = arg6 + 0x10
                int32_t var_10_1 = 0x7d1
                var_18 = 0xfeedface
                void* ecx_2
                int32_t** edx_5
                ecx_2, edx_5 = sub_4c72b0(0xc, edx_4, arg6 + 0x10)
                int32_t* var_44_1 = &var_28
                void* var_48_1 = eax_5 + 0x3c
                void* edx_7 = arg5 + entry_ebx
                void* var_4c_1 = edx_7
                void* var_50_1 = eax_5 + 0x3c
                sub_4c72b0(arg6, edx_7, sub_4c72b0(0x10, edx_5, ecx_2))
    
    int32_t result = *(arg3 + 0x10) + 0x10
    *(arg2 + 0x52c) += result
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
