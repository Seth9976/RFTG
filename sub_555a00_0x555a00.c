// 函数名称: sub_555a00
// 虚拟地址: 0x555a00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")sub_555a00(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MBE?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AAVios_base@2@AAHAA_N@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_cc = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    char* result_1
    char* result_2 = result_1
    char* const result_5 = &data_83f3d3
    
    if (result_2 != 0)
        result_5 = result_2
    
    int32_t* eax_4 = sub_5a898b(result_5, "rb")
    
    if (eax_4 == 0)
        sub_4c5870("file", &data_83f3d3, "SoundImport.cpp", 0xa1, "ReadWav")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void var_20
    char* result
    
    if (sub_5a9cf0(&var_20, 0xc, 1, eax_4) == 1)
        int32_t var_b8
        char const* const var_d4_2
        
        if (sub_5a9cf0(&var_b8, 8, 1, eax_4) != 1)
        label_555bc9:
            char* const result_7 = result_5
            var_d4_2 = "failed to read wav file (wave): %s"
        label_555d04:
            sub_4c5680(var_d4_2)
            sub_5a8c61(eax_4)
        else
            while (true)
                int32_t eax_11 = var_b8
                void* var_b4
                
                if (eax_11 != 0x20746d66)
                    if (eax_11 == 0x61746164)
                        if (arg3[6] != 0)
                            sub_4c5870("pSoundData->bits == NULL", &data_83f3d3, "SoundImport.cpp", 
                                0xcd, "ReadWav")
                            
                            if (IsDebuggerPresent() != 1)
                                sub_4c5a30()
                                noreturn
                            
                            breakpoint
                        
                        arg3[4] = 1
                        arg3[5] = var_b4
                        arg3[3] = var_b4
                        int128_t* eax_20 = sub_4cce80(var_b4)
                        int32_t ecx_2 = arg3[5]
                        arg3[6] = eax_20
                        
                        if (sub_5a9cf0(eax_20, ecx_2, 1, eax_4) != 1)
                            char* const result_10 = result_5
                            sub_4c5680("failed to read wav data: %s")
                            int32_t edi_2 = arg3[6]
                            
                            if (edi_2 != 0)
                                _aligned_free_base(edi_2)
                            
                            sub_5a8c61(eax_4)
                            break
                        
                        sub_5a8c61(eax_4)
                        int32_t eax_22 = *arg4
                        
                        if (eax_22 != 1)
                            if (eax_22 != 2)
                                char* result_3 = result_1
                                
                                if (result_3 == 0)
                                    result_3 = &data_83f3d3
                                
                                char* result_4 = result_3
                                sub_4c5680("can't convert sound storage type %s")
                            else
                                sub_535bc0(arg3)
                        
                        int32_t var_8_3 = 0xffffffff
                        sub_4c43d0(&result_1)
                        result.b = 1
                        goto label_555d26
                    
                    if (sub_5a9831(eax_4, var_b4, FILE_CURRENT) != 0)
                        char* const result_11 = result_5
                        var_d4_2 = "failed to read unknown wav data: %s"
                        goto label_555d04
                else
                    if (var_b4 u>= 0x90)
                        sub_4c5870("sizeof(WAVE_FMT_HEADER) > wave.SubchunkSize", &data_83f3d3, 
                            "SoundImport.cpp", 0xb8, "ReadWav")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int16_t var_b0
                    uint32_t eax_13 = sub_5a9cf0(&var_b0, var_b4, 1, eax_4)
                    
                    if (eax_13 != 1)
                        char* const result_8 = result_5
                        var_d4_2 = "failed to read wav format: %s"
                        goto label_555d04
                    
                    if (var_b0 != eax_13.w)
                        char* const result_9 = result_5
                        var_d4_2 = "unsupported wav format: %s"
                        goto label_555d04
                    
                    int16_t var_a2
                    arg3[1] = sx.d(var_a2)
                    int16_t var_ae
                    arg3[2] = sx.d(var_ae)
                    int32_t var_ac
                    *arg3 = var_ac
                
                if (sub_5a9cf0(&var_b8, 8, 1, eax_4) != 1)
                    goto label_555bc9
        int32_t var_8_4 = 0xffffffff
        sub_4c43d0(&result_1)
    else
        char* const result_6 = result_5
        sub_4c5680("failed to read wav file (riff): %s")
        sub_5a8c61(eax_4)
        int32_t var_8_2 = 0xffffffff
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_4c4060(&result_1)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_2 = *(result + 0xc) + 0x10
                sub_4f4430(result, sub_4f4380(esi_2), esi_2)
    
    result.b = 0
    label_555d26:
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
