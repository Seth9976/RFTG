// 函数名称: sub_4d2cf0
// 虚拟地址: 0x4d2cf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_4d2cf0(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    bool cond:0 = *(sub_4c92a0(*arg1) + 0x14) != 0
    void* ebx = arg1[2]
    void* esi_1 = &arg1[3]
    void* var_29c = esi_1
    
    if (not(cond:0))
        ebx -= 4
        esi_1 += 4
        var_29c = esi_1
    
    if (ebx u< 0x10)
        sub_4c5870("dataLen >= sizeof(VoipMsgHeader)", &data_83f3d3, "Voip.cpp", 0x9f, 
            "VoipServerGotMessage")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* result = sub_4d2c70(arg1)
    void* result_1 = result
    void* result_2 = result_1
    
    if (result_1 != 0)
        *esi_1 = *result_1
        void* var_2a4_1 = nullptr
        
        while (true)
            void* esi_3
            
            if (var_2a4_1 != 0)
                esi_3 = var_2a4_1 + 0x24
            else
                esi_3 = data_be1a60
            
            result = data_be1a60 + data_be1a64 * 0x24
            
            if (esi_3 u>= result)
                break
            
            while ((*(esi_3 + 0x20) & 0xffff0000) == 0)
                esi_3 += 0x24
                
                if (esi_3 u>= result)
                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                    return result
            
            var_2a4_1 = esi_3
            
            if (*(result_1 + 0x1c) == *(esi_3 + 0x1c))
                if (result_1 == esi_3 && data_be1a7c == 0)
                    continue
                
                int32_t eax_7 = *(esi_3 + 8)
                
                if (eax_7 != 0)
                    if (ebx + 4 s>= 0x280)
                        sub_4c5870("packetLength < VOIP_BYTES_PER_FRAME", &data_83f3d3, "Voip.cpp", 
                            0xc8, "VoipServerGotMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t var_28c = 0xbb9
                    void var_288
                    int32_t ecx_5
                    int32_t edx_6
                    ecx_5, edx_6 = sub_5ab990(&var_288, var_29c, ebx)
                    int32_t* var_2b8_3 = &var_28c
                    void* var_2bc_3 = ebx + 4
                    sub_4c7470(eax_7, edx_6, ecx_5, esi_3 + 0xc)
                    result_1 = result_2
                else
                    int32_t esi_4 = *(esi_3 + 4)
                    
                    if (esi_4 != 0)
                        int32_t** edx_3 = data_27e7bb8
                        uint32_t eax_8 = zx.d(esi_4.w)
                        
                        if (eax_8 u< edx_3[1])
                            void* eax_10 = &(*edx_3)[eax_8 * 0x13]
                            
                            if (*(eax_10 + 0x48) == esi_4)
                                if (ebx s> 0xfd0)
                                    sub_4c5870("length <= MAX_NET_MESSAGE_SIZE", &data_83f3d3, 
                                        "Network.cpp", 0x29f, "NetBufferStartMessage")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t var_298
                                int32_t* var_2b8_1 = &var_298
                                void* var_2bc_1 = eax_10 + 0x3c
                                void* var_294_1 = ebx
                                int32_t var_290_1 = 0xbb9
                                var_298 = 0xfeedface
                                void* var_2c0_1 = var_29c
                                void* var_2c4_1 = eax_10 + 0x3c
                                sub_4c72b0(ebx, sub_4c72b0(0xc, edx_3, result_1), var_29c)
                                result_1 = result_2
    else if (data_316006c == result.b)
        data_316006c = 1
        result = sub_4c5680("Server got voip from unknown client")
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
