// 函数名称: sub_4b6cc0
// 虚拟地址: 0x4b6cc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_4b6cc0(void* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* edi = data_27e7a44
    int32_t i_1 = 0
    int32_t var_14
    
    if (*(arg1 + 0x140) s> 0)
        int32_t* ebx_1 = arg1 + 0x48
        int32_t i
        
        do
            int32_t ecx = *ebx_1
            int32_t* eax_4
            
            if (ecx != 0)
                uint32_t eax_2 = zx.d(ecx.w)
                
                if (eax_2 u>= *(edi + 0x20))
                    goto label_4b6d1f
                
                eax_4 = eax_2 * 0x1c4 + *(edi + 0x1c)
                
                if (eax_4[0x70] != ecx || eax_4[1] != ebx_1[-0x12])
                    goto label_4b6d1f
                
                goto label_4b6d34
            
        label_4b6d1f:
            eax_4 = sub_4b7170(ebx_1[-0x12])
            
            if (eax_4 != 0)
                *ebx_1 = eax_4[0x70]
            label_4b6d34:
                
                if (eax_4 != 0)
                    int32_t ecx_2 = ebx_1[-6]
                    
                    if (ecx_2 u> 6)
                        sub_4c5870("Halt", &data_83f3d3, "..\code\SServer.cpp", 0x2a7, "GameDescResync")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    switch (ecx_2)
                        case 0, 4, 6
                            void* ecx_4 = *eax_4
                            
                            if (ecx_4 != 0)
                                int32_t** edx_2 = data_27e7bb8
                                uint32_t eax_5 = zx.d(ecx_4.w)
                                
                                if (eax_5 u< edx_2[1])
                                    void* eax_7 = &(*edx_2)[eax_5 * 0x13]
                                    
                                    if (*(eax_7 + 0x48) == ecx_4)
                                        int32_t* var_30_1 = &var_14
                                        void* var_34_1 = eax_7 + 0x3c
                                        int32_t var_10_1 = 0x1f8
                                        int32_t var_c_1 = 0xf4249
                                        var_14 = 0xfeedface
                                        void* ecx_5
                                        int32_t** edx_3
                                        ecx_5, edx_3 = sub_4c72b0(0xc, edx_2, ecx_4)
                                        void* var_38_1 = arg1
                                        void* var_3c_1 = eax_7 + 0x3c
                                        sub_4c72b0(0x1f8, edx_3, ecx_5)
                                        edi = data_27e7a44
            
            i = i_1 + 1
            ebx_1 = &ebx_1[0x14]
            i_1 = i
        while (i s< *(arg1 + 0x140))
    
    void* result_1 = nullptr
    label_4b6dd2:
    void* result
    
    if (result_1 != 0)
        result = result_1 + 0xc
    else
        result = *(edi + 0x54)
    
    int32_t ecx_9 = *(edi + 0x54) + *(edi + 0x58) * 0xc
    
    if (result u< ecx_9)
        while (true)
            if ((*(result + 8) & 0xffff0000) != 0)
                result_1 = result
                
                if (*(arg1 + 0x1d4) != *(result + 4))
                    break
                
                int32_t edx_6 = *result
                
                if (edx_6 == 0)
                    break
                
                uint32_t ecx_13 = zx.d(edx_6.w)
                
                if (ecx_13 u>= *(edi + 0x20))
                    break
                
                int32_t* ecx_15 = ecx_13 * 0x1c4 + *(edi + 0x1c)
                
                if (ecx_15[0x70] != edx_6)
                    break
                
                int32_t esi_4 = *(arg1 + 0x140)
                int32_t edx_7 = 0
                
                if (esi_4 s> 0)
                    void* edi_1 = arg1
                    
                    do
                        if (*edi_1 == ecx_15[1])
                            edi = data_27e7a44
                            int32_t ecx_18 = *(edi + 0x60)
                            *(edi + 0x60) = zx.d(*(result + 8))
                            *(result + 8) = ecx_18
                            *(edi + 0x64) -= 1
                            goto label_4b6dd2
                        
                        edx_7 += 1
                        edi_1 += 0x50
                    while (edx_7 s< esi_4)
                    
                    data_27e7a44
                
                void* ecx_16 = *ecx_15
                
                if (ecx_16 == 0)
                    break
                
                int32_t** edx_8 = data_27e7bb8
                uint32_t eax_12 = zx.d(ecx_16.w)
                
                if (eax_12 u>= edx_8[1])
                    break
                
                void* eax_14 = &(*edx_8)[eax_12 * 0x13]
                
                if (*(eax_14 + 0x48) != ecx_16)
                    break
                
                int32_t* var_30_2 = &var_14
                void* var_34_2 = eax_14 + 0x3c
                int32_t var_10_2 = 0x1f8
                int32_t var_c_2 = 0xf424b
                var_14 = 0xfeedface
                void* var_38_2 = arg1
                void* var_3c_2 = eax_14 + 0x3c
                sub_4c72b0(0x1f8, sub_4c72b0(0xc, edx_8, ecx_16), arg1)
                data_27e7a44
                break
            
            result += 0xc
            
            if (result u>= ecx_9)
                goto label_4b6e38
    
    label_4b6e38:
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
