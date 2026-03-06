// 函数名称: sub_4d0f70
// 虚拟地址: 0x4d0f70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __fastcallsub_4d0f70(int32_t arg1, int32_t** arg2, void* arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    uint32_t result = __security_cookie ^ &__saved_ebp
    uint32_t result_2 = result
    int32_t** var_1c = arg2
    uint32_t result_1 = 0
    
    if (arg2[0x142] s> 0)
        int32_t* ebx_1 = &arg2[7]
        void** var_18_1 = ebx_1
        
        while (true)
            void* esi_1 = &ebx_1[-5]
            
            if (ebx_1[-5] == 0)
                void* eax_1 = *ebx_1
                
                if (eax_1 == 0)
                    if (ebx_1[1] == 0)
                        sub_4c5870("Halt", &data_83f3d3, "NetSync.cpp", 0x12d, 
                            "NetSync::HostSendAllObjects")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    sub_4d0e30(esi_1, arg2, arg3)
                    arg2 = var_1c
                else
                    int32_t edi_1 = 0
                    
                    if (*(eax_1 + 4) s> 0)
                        while (true)
                            if (edi_1 s< 0 || edi_1 s>= *(eax_1 + 8))
                                sub_4c5870(
                                    "index >= 0 && index < (int)syncObject.mDataArray->mMaxSize", 
                                    &data_83f3d3, "NetSync.cpp", 0xec, "GetItemInDataArray")
                                
                                if (IsDebuggerPresent() != 1)
                                    sub_4c5a30()
                                    noreturn
                                
                                breakpoint
                            
                            ebx_1[-3]
                            *eax_1
                            sub_4d0d20(arg3, var_1c, esi_1, edi_1)
                            eax_1 = *var_18_1
                            ebx_1 = var_18_1
                            edi_1 += 1
                            
                            if (edi_1 s>= *(eax_1 + 4))
                                break
                            
                            continue
                        
                        arg2 = var_1c
            
            result = result_1 + 1
            ebx_1 = &ebx_1[0xa]
            result_1 = result
            var_18_1 = ebx_1
            
            if (result s>= arg2[0x142])
                break
    
    if (arg3 != 0)
        int32_t** edx_1 = data_27e7bb8
        result = zx.d(arg3.w)
        
        if (result u< edx_1[1])
            result = &(*edx_1)[result * 0x13]
            
            if (*(result + 0x48) == arg3)
                int32_t var_14
                int32_t* var_34_3 = &var_14
                int32_t var_38_1 = result + 0x3c
                int32_t var_10_1 = 0
                int32_t var_c_1 = 0x7d3
                var_14 = 0xfeedface
                result = sub_4c72b0(0xc, edx_1, arg3)
    
    sub_5a6aba(result_2 ^ &__saved_ebp)
    return result
}
