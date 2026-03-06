// 函数名称: sub_4d0d20
// 虚拟地址: 0x4d0d20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4d0d20(int32_t arg1, int32_t** arg2, void* arg3 @ esi, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_28 = *(arg3 + 4)
    int32_t* entry_ebx
    int32_t var_24 = *(entry_ebx + *(arg3 + 0xc))
    int32_t var_20 = arg4
    void* eax_6 = *(arg3 + 0x10)
    int32_t var_1c = 0
    
    if (arg1 != 0)
        void* edi_1 = data_27e7bb8
        uint32_t eax_7 = zx.d(arg1.w)
        
        if (eax_7 u< *(edi_1 + 4))
            void* eax_9 = eax_7 * 0x4c + *edi_1
            
            if (*(eax_9 + 0x48) == arg1)
                if (eax_6 + 0x10 s> 0xfd0)
                    sub_4c5870("length <= MAX_NET_MESSAGE_SIZE", &data_83f3d3, "Network.cpp", 0x29f, 
                        "NetBufferStartMessage")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                void* var_14_1 = eax_6 + 0x10
                int32_t var_18
                int32_t* var_3c_1 = &var_18
                void* var_40_1 = eax_9 + 0x3c
                int32_t var_10_1 = 0x7d1
                var_18 = 0xfeedface
                void* ecx_2
                int32_t** edx
                ecx_2, edx = sub_4c72b0(0xc, arg2, eax_6 + 0x10)
                int32_t* var_44_1 = &var_28
                void* var_48_1 = eax_9 + 0x3c
                void* ecx_3
                int32_t** edx_1
                ecx_3, edx_1 = sub_4c72b0(0x10, edx, ecx_2)
                int32_t* var_4c_1 = entry_ebx
                void* var_50_1 = eax_9 + 0x3c
                sub_4c72b0(eax_6, edx_1, ecx_3)
    
    arg2[0x149] += 1
    int32_t result = *(arg3 + 0x10) + 0x10
    arg2[0x14b] += result
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
