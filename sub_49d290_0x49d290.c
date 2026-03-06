// 函数名称: sub_49d290
// 虚拟地址: 0x49d290
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_49d290(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* edi = arg1
    void* result = nullptr
    bool cond:0 = *(edi + 0x45a) != 3
    int32_t* var_410 = edi
    int32_t var_418 = 0
    int32_t var_41c = 0
    
    if (not(cond:0) && edi[0x116].b s> 0)
        int32_t i_5 = sx.d(edi[0x116].b)
        result = edi + 0xa3
        int32_t i_4 = i_5
        int32_t i
        
        do
            int32_t ecx = sx.d(*result)
            
            if (ecx s> var_418)
                var_418 = ecx
            
            result += 0xb4
            i = i_4
            i_4 -= 1
        while (i != 1)
        int32_t edx_1 = var_418
        
        if (edx_1 != 0)
            void* eax_2 = edi + 0xa3
            int32_t i_3 = i_5
            int32_t i_1
            
            do
                if (sx.d(*eax_2) == edx_1)
                    var_41c += 1
                
                eax_2 += 0xb4
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
            int32_t eax_3 = 0
            int32_t var_414_1 = 0
            
            while (true)
                void* esi_2 = &edi[eax_3 * 0x2d + 8]
                void* var_420_1 = esi_2
                
                if (sx.d(*(esi_2 + 0x83)) == edx_1)
                    *(esi_2 + 0x86) += 1
                    edi[0x781].b -= 1
                    void var_40c
                    
                    if (edi[6].b == 0)
                        void* ebx_1 = data_27e7a40
                        void* eax_6 = *(ebx_1 + 0x548)
                        int32_t ecx_1 = *(eax_6 + 0x2c024)
                        
                        if (ecx_1 s>= 0x800)
                            sub_4c5870("gui->numUIActions < MAX_UIACTIONS", &data_83f3d3, 
                                "..\code\RFTGClient.cpp", 0x2c21, "UIActionQueueAlloc")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        *(eax_6 + 0x2c024) = ecx_1 + 1
                        sub_5abfc0((ecx_1 << 6) + eax_6 + 0xc024, 0, 0x40)
                        *((ecx_1 << 6) + eax_6 + 0xc04c) = 0xffffffff
                        *((ecx_1 << 6) + eax_6 + 0xc050) = 0xffffffff
                        *((ecx_1 << 6) + eax_6 + 0xc024) = 0x22
                        *((ecx_1 << 6) + eax_6 + 0xc060) = 0
                        void* eax_7 = *(ebx_1 + 0x548)
                        
                        if (eax_7 == 0)
                            sub_4c5870("gCClient->rftgClientData", &data_83f3d3, 
                                "..\code\RFTGClient.cpp", 0xcc, "GetGame")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        int32_t eax_11
                        
                        switch (sx.d(*(*(eax_7 + 0x45844) + 0x1ec0)) + 0xa)
                            case 0
                                eax_11 = 0xfffffff6
                            label_49d43c:
                                *((ecx_1 << 6) + eax_6 + 0xc054) = eax_11
                                int32_t eax_13
                                
                                if (var_414_1 != 0xffffffff)
                                    eax_13 = *sub_46b2b0(var_414_1)
                                    ebx_1 = data_27e7a40
                                    esi_2 = var_420_1
                                else
                                    eax_13 = 0xffffffff
                                
                                *((ecx_1 << 6) + eax_6 + 0xc028) = eax_13
                                *((ecx_1 << 6) + eax_6 + 0xc02c) = 1
                                bool cond:1_1 = *(*(ebx_1 + 0x548) + 0x2c068) != 0
                                *((ecx_1 << 6) + eax_6 + 0xc038) = 0xffffffff
                                int32_t eax_15
                                eax_15.b = cond:1_1
                                int32_t eax_16 = data_bebce4
                                *((ecx_1 << 6) + eax_6 + 0xc030) = eax_16
                                *((ecx_1 << 6) + eax_6 + 0xc05c) = zx.d(eax_15.b)
                                data_bebce4 = eax_16 + 1
                                *((ecx_1 << 6) + eax_6 + 0xc058) = 0
                                int32_t var_430_1 = *esi_2
                                sub_5a733b(&var_40c, "%s earns VP")
                                edi = var_410
                            case 9, 0xa, 0x14
                                eax_11 = 0
                                goto label_49d43c
                            case 0xb, 0xc
                                eax_11 = 1
                                goto label_49d43c
                            case 0xd
                                eax_11 = 2
                                goto label_49d43c
                            case 0xe
                                eax_11 = 8
                                goto label_49d43c
                            case 0xf
                                eax_11 = 3
                                goto label_49d43c
                            case 0x10
                                eax_11 = 9
                                goto label_49d43c
                            case 0x11, 0x12
                                eax_11 = 4
                                goto label_49d43c
                            case 0x13
                                eax_11 = 5
                                goto label_49d43c
                            default
                                sub_49b2a0()
                                noreturn
                    
                    int32_t eax_5
                    
                    if (var_41c == 1 && *(esi_2 + 0x84) != 0)
                        sub_49cd90(edi, 0)
                        int32_t* edx_6 = var_410
                        
                        if (edx_6[6].b != 0)
                            edi = edx_6
                        else
                            eax_5 = &var_410:3
                            char i_2
                            
                            do
                                i_2 = *(eax_5 + 1)
                                eax_5 += 1
                            while (i_2 != 0)
                            edi = var_410
                            __builtin_strcpy(eax_5, " and card")
                    
                    if (edi[6].b == 0)
                        void* edi_2 = &var_410:3
                        
                        do
                            eax_5.b = *(edi_2 + 1)
                            edi_2 += 1
                        while (eax_5.b != 0)
                        
                        int16_t* esi_4
                        int16_t* edi_3
                        edi_3, esi_4 = __builtin_strncpy(edi_2, " for Prestige Leader.\n", 0x14)
                        *edi_3 = *esi_4
                        char const* const var_430_2 = "prestige"
                        void* var_434_1 = &var_40c
                        edi_3[1].b = esi_4[1].b
                        sub_4c5680("%s (%s)")
                        esi_2 = var_420_1
                        edi = var_410
                
                *(esi_2 + 0x84) = 0
                eax_3 = var_414_1 + 1
                var_414_1 = eax_3
                
                if (eax_3 s>= sx.d(edi[0x116].b))
                    break
                
                edx_1 = var_418
            
            sub_49d660(edi)
            result = sub_4ae980()
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
