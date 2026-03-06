// 函数名称: sub_4d0e30
// 虚拟地址: 0x4d0e30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4d0e30(void* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_28 = *(arg1 + 4)
    void* eax_3 = *(arg1 + 0x10)
    void* var_24 = nullptr
    void* var_1c
    void* edi
    
    if (eax_3 s>= 0xfc8)
        var_1c = 0xfc8
        edi = 0xfc8
    else
        edi = eax_3
        var_1c = edi
    
    void* ebx = *(arg1 + 0x18)
    int32_t** edx = eax_3
    int32_t** var_20 = edx
    
    if (edx != 0)
        void* esi_1 = data_27e7bb8
        
        while (true)
            if (edx s< edi)
                edi = edx
            
            if (arg3 != 0)
                uint32_t eax_4 = zx.d(arg3.w)
                
                if (eax_4 u< *(esi_1 + 4))
                    void* eax_6 = eax_4 * 0x4c + *esi_1
                    
                    if (*(eax_6 + 0x48) == arg3)
                        if (edi + 8 s> 0xfd0)
                            sub_4c5870("length <= MAX_NET_MESSAGE_SIZE", &data_83f3d3, "Network.cpp", 
                                0x29f, "NetBufferStartMessage")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        void* var_14_1 = edi + 8
                        int32_t var_18
                        int32_t* var_44_1 = &var_18
                        void* var_48_1 = eax_6 + 0x3c
                        int32_t var_10_1 = 0x7d2
                        var_18 = 0xfeedface
                        void* ecx_2
                        int32_t** edx_1
                        ecx_2, edx_1 = sub_4c72b0(0xc, edx, edi + 8)
                        int32_t* var_4c_1 = &var_28
                        void* var_50_1 = eax_6 + 0x3c
                        void* ecx_3
                        int32_t** edx_2
                        ecx_3, edx_2 = sub_4c72b0(8, edx_1, ecx_2)
                        void* var_54_1 = ebx
                        void* var_58_1 = eax_6 + 0x3c
                        sub_4c72b0(edi, edx_2, ecx_3)
                        esi_1 = data_27e7bb8
                        edx = var_20
            
            var_24 += edi
            ebx += edi
            int32_t** temp1_1 = edx
            edx -= edi
            var_20 = edx
            
            if (temp1_1 == edi)
                break
            
            edi = var_1c
    
    *(arg2 + 0x528) += 1
    int32_t result = *(arg1 + 0x10) + 8
    *(arg2 + 0x52c) += result
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
