// 函数名称: sub_4d2210
// 虚拟地址: 0x4d2210
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __thiscallsub_4d2210(char* arg1, void* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* entry_ebx
    int32_t* esi = *(entry_ebx + 0x1c)
    int128_t* i = *(entry_ebx + 0x10)
    int32_t* edi = *(entry_ebx + 0x18)
    
    while (i u>= 4)
        if (*edi != *esi)
            goto label_4d227e
        
        i -= 4
        esi = &esi[1]
        edi = &edi[1]
    
    if (i != 0)
        int32_t edx
        edx.b = *esi
        
        if (edx.b != *edi)
        label_4d227e:
            void* edx_4 = arg2
            *arg1 = 1
            void* eax_3 = *(entry_ebx + 0x10)
            int32_t esi_1 = *(edx_4 + 4)
            int32_t var_34_1 = esi_1
            int32_t var_30 = *(entry_ebx + 4)
            void* var_2c_1 = nullptr
            void* var_20_1
            void* edi_1
            
            if (eax_3 s>= 0xfc8)
                var_20_1 = 0xfc8
                edi_1 = 0xfc8
            else
                edi_1 = eax_3
                var_20_1 = edi_1
            
            void* ecx_1 = eax_3
            void* var_28_1 = ecx_1
            void* var_1c_1 = *(entry_ebx + 0x18)
            
            if (ecx_1 != 0)
                int32_t** edx_1 = data_27e7bb8
                
                while (true)
                    if (ecx_1 s< edi_1)
                        edi_1 = ecx_1
                    
                    if (esi_1 != 0)
                        uint32_t eax_5 = zx.d(esi_1.w)
                        
                        if (eax_5 u< edx_1[1])
                            void* eax_7 = &(*edx_1)[eax_5 * 0x13]
                            
                            if (*(eax_7 + 0x48) == esi_1)
                                if (edi_1 + 8 s> 0xfd0)
                                    sub_4c5870("length <= MAX_NET_MESSAGE_SIZE", &data_83f3d3, 
                                        "Network.cpp", 0x29f, "NetBufferStartMessage")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                void* var_14_1 = edi_1 + 8
                                int32_t var_18
                                int32_t* var_44_1 = &var_18
                                void* var_48_1 = eax_7 + 0x3c
                                int32_t var_10_1 = 0x7d2
                                var_18 = 0xfeedface
                                void* ecx_3
                                int32_t** edx_2
                                ecx_3, edx_2 = sub_4c72b0(0xc, edx_1, edi_1 + 8)
                                int32_t* var_4c_1 = &var_30
                                void* var_50_1 = eax_7 + 0x3c
                                void* ecx_4
                                int32_t** edx_3
                                ecx_4, edx_3 = sub_4c72b0(8, edx_2, ecx_3)
                                void* var_54_1 = var_1c_1
                                void* var_58_1 = eax_7 + 0x3c
                                sub_4c72b0(edi_1, edx_3, ecx_4)
                                edx_1 = data_27e7bb8
                                esi_1 = var_34_1
                                ecx_1 = var_28_1
                    
                    var_2c_1 += edi_1
                    var_1c_1 += edi_1
                    void* temp1_1 = ecx_1
                    ecx_1 -= edi_1
                    var_28_1 = ecx_1
                    
                    if (temp1_1 == edi_1)
                        break
                    
                    edi_1 = var_20_1
                
                edx_4 = arg2
            
            *(edx_4 + 0x528) += 1
            *(edx_4 + 0x52c) += *(entry_ebx + 0x10) + 8
            i = sub_5ab990(*(entry_ebx + 0x1c), *(entry_ebx + 0x18), *(entry_ebx + 0x10))
        else if (i u> 1)
            edx.b = *(esi + 1)
            
            if (edx.b != *(edi + 1))
                goto label_4d227e
            
            if (i u> 2)
                i.b = *(esi + 2)
                
                if (i.b != *(edi + 2))
                    goto label_4d227e
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return i
}
