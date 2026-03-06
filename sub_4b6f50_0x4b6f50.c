// 函数名称: sub_4b6f50
// 虚拟地址: 0x4b6f50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_4b6f50(int32_t arg1, void* arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int128_t* i = *arg4
    void* esi = arg3
    int32_t** edx = data_27e7bb8
    void* var_34 = esi
    int32_t var_20
    
    if (i != 0)
        uint32_t ecx = zx.d(i.w)
        
        if (ecx u< edx[1])
            void* ecx_2 = &(*edx)[ecx * 0x13]
            
            if (*(ecx_2 + 0x48) == i)
                int32_t var_24
                int32_t* var_44_1 = &var_24
                void* var_48_1 = ecx_2 + 0x3c
                var_20 = 4
                int32_t var_1c_1 = 0xf424c
                var_24 = 0xfeedface
                void* var_4c_1 = esi + 0x1d4
                void* var_50_1 = ecx_2 + 0x3c
                i = sub_4c72b0(4, sub_4c72b0(0xc, edx, ecx_2), esi + 0x1d4)
                edx = data_27e7bb8
    
    int128_t* i_1 = nullptr
    int32_t var_18
    
    if (*(esi + 0x140) s> 0)
        void* var_28_1 = esi
        int32_t* ebx_2 = arg2 + 4
        
        do
            void* edi_2 = *ebx_2
            var_20 = *(esi + 0x1d4)
            int32_t ecx_6 = *arg4
            int32_t var_1c_2 = *var_28_1
            
            if (ecx_6 != 0)
                uint32_t eax_5 = zx.d(ecx_6.w)
                
                if (eax_5 u< edx[1])
                    void* eax_7 = &(*edx)[eax_5 * 0x13]
                    
                    if (*(eax_7 + 0x48) == ecx_6)
                        if (edi_2 + 0x10 s> 0xfd0)
                            sub_4c5870("length <= MAX_NET_MESSAGE_SIZE", &data_83f3d3, "Network.cpp", 
                                0x29f, "NetBufferStartMessage")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        int32_t* var_44_2 = &var_18
                        void* var_48_2 = eax_7 + 0x3c
                        void* var_14_1 = edi_2 + 0x10
                        int32_t var_10_1 = 0xf424d
                        var_18 = 0xfeedface
                        void* ecx_8
                        int32_t** edx_2
                        ecx_8, edx_2 = sub_4c72b0(0xc, edx, edi_2 + 0x10)
                        int32_t* var_4c_2 = &var_20
                        void* var_50_2 = eax_7 + 0x3c
                        void* ecx_9
                        int32_t** edx_3
                        ecx_9, edx_3 = sub_4c72b0(8, edx_2, ecx_8)
                        int32_t* var_54_1 = ebx_2
                        void* var_58_1 = eax_7 + 0x3c
                        sub_4c72b0(edi_2 + 8, edx_3, ecx_9)
                        edx = data_27e7bb8
                        esi = var_34
            
            var_28_1 += 0x50
            i = i_1 + 1
            ebx_2 = &ebx_2[0x138a]
            i_1 = i
        while (i s< *(esi + 0x140))
    
    void* ecx_11 = *arg4
    
    if (ecx_11 != 0)
        i = zx.d(ecx_11.w)
        
        if (i u< edx[1])
            i = &(*edx)[i * 0x13]
            
            if (*(i + 0x48) == ecx_11)
                int32_t* var_44_3 = &var_18
                void* var_48_3 = i + 0x3c
                int32_t var_14_2 = 4
                int32_t var_10_2 = 0xf424e
                var_18 = 0xfeedface
                void* ecx_12
                int32_t** edx_4
                ecx_12, edx_4 = sub_4c72b0(0xc, edx, ecx_11)
                void* var_4c_3 = esi + 0x1d4
                void* var_50_3 = i + 0x3c
                i = sub_4c72b0(4, edx_4, ecx_12)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return i
}
