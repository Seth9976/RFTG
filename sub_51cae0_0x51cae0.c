// 函数名称: sub_51cae0
// 虚拟地址: 0x51cae0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_51cae0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d51b
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_4e0 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg1 u> 0x27)
        sub_4c5870("frameIndex >= 0 && frameIndex < PROFILER_MAX_FRAMES", &data_83f3d3, 
            "PerfEvent.cpp", 0x16f, "ProfilerCalcFuncData")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    void* edx = data_30786fc
    int32_t eax_4 = arg1 * 0x259a10
    void* ebx = edx + eax_4
    
    if (*(edx + eax_4 + 0x259a0c) == 0)
        long double x87_r7_1 = float.t(0)
        int32_t esi_1 = 0
        int32_t i = 0
        
        if (*(edx + 0x5e20684) s> 0)
            int32_t* eax_5 = ebx + 0x24a014
            
            do
                eax_5[-1] = fconvert.s(x87_r7_1)
                *eax_5 = 0
                eax_5[-2] = fconvert.s(x87_r7_1)
                i += 1
                eax_5[1] = fconvert.s(x87_r7_1)
                eax_5 = &eax_5[4]
            while (i s< *(edx + 0x5e20684))
        
        char* i_2 = nullptr
        
        if (*(ebx + 0x249f00) s> 0)
            void* edi_1 = ebx + 8
            void* i_1
            
            do
                int32_t eax_6 = *(edi_1 + 4)
                int32_t var_334[0x63]
                int32_t var_1a4[0x64]
                
                if (eax_6 == 1)
                    if (esi_1 s>= 0x64)
                        sub_4c5870("stackSize < PROFILER_MAX_STACK_SIZE", &data_83f3d3, 
                            "PerfEvent.cpp", 0x18c, "ProfilerCalcFuncData")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    var_1a4[esi_1] = fconvert.s(x87_r7_1)
                    var_334[esi_1] = fconvert.s(x87_r7_1)
                    int32_t var_4cc[0x64]
                    var_4cc[esi_1] = edi_1 - 8
                    esi_1 += 1
                else if (eax_6 != 2)
                    if (eax_6 != 3)
                        sub_4c5870("Halt", &data_83f3d3, "PerfEvent.cpp", 0x1b3, "ProfilerCalcFuncData")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    if (esi_1 s> 0)
                        (&i_2)[esi_1] = fconvert.s(fconvert.t(*(edi_1 + 8)) + fconvert.t((&i_2)[esi_1]))
                else
                    if (esi_1 s<= 0)
                        sub_4c5870("stackSize > 0", &data_83f3d3, "PerfEvent.cpp", 0x194, 
                            "ProfilerCalcFuncData")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    void var_4d0
                    int32_t* eax_8 = *(&var_4d0 + (esi_1 << 2))
                    int32_t ecx_1 = eax_8[2]
                    esi_1 -= 1
                    
                    if (ecx_1 != *edi_1)
                        void* eax_18 = data_30786fc + ecx_1 * 0x1c
                        int32_t var_4e4_2 = *(eax_18 + 0x5e01288)
                        int32_t var_4e8_2 = *(eax_18 + 0x5e01284)
                        int32_t var_8_1 = 0
                        char* eax_20 = *sub_4c4a50(&i_2, "Mismatched profiler event '%s%s'")
                        
                        if (eax_20 == 0)
                            eax_20 = &data_83f3d3
                        
                        sub_4c5870("eventStart->mFuncPointIndex == profileEvent->mFuncPointIndex", 
                            eax_20, "PerfEvent.cpp", 0x199, "ProfilerCalcFuncData")
                        int32_t var_8_2 = 0xffffffff
                        char* i_3 = i_2
                        
                        if (i_3 != 0 && *i_3 != 0)
                            void* eax_22 = sub_4c4060(&i_2)
                            int32_t temp0_1 = *(eax_22 + 4)
                            *(eax_22 + 4) -= 1
                            
                            if (temp0_1 == 1)
                                int32_t esi_3 = *(eax_22 + 0xc) + 0x10
                                sub_4f4430(eax_22, sub_4f4380(esi_3), esi_3)
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    float var_33c_1 =
                        fconvert.s(sub_4c5fa0(*eax_8, eax_8[1], *(edi_1 - 8), *(edi_1 - 4)))
                    int32_t eax_10 = *edi_1
                    
                    if (eax_10 s< 0 || eax_10 s>= 0xfa0)
                        sub_4c5870(
                            "profileEvent->mFuncPointIndex >= 0 && profileEvent->mFuncPointIndex < 
                                PROFILER_MAX_FUNC_POINTS", 
                            &data_83f3d3, "PerfEvent.cpp", 0x19d, "ProfilerCalcFuncData")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    long double x87_r7_3 = fconvert.t(var_33c_1)
                    int32_t eax_11 = eax_10 * 2
                    *(ebx + (eax_11 << 3) + 0x24a014) += 1
                    *(ebx + (eax_11 << 3) + 0x24a00c) =
                        fconvert.s(x87_r7_3 + fconvert.t(*(ebx + (eax_11 << 3) + 0x24a00c)))
                    *(ebx + (eax_11 << 3) + 0x24a010) = fconvert.s(x87_r7_3 - fconvert.t(var_1a4[esi_1])
                        + fconvert.t(*(ebx + (eax_11 << 3) + 0x24a010)))
                    *(ebx + (eax_11 << 3) + 0x24a018) = fconvert.s(fconvert.t(var_334[esi_1]))
                    void var_1a8
                    
                    if (esi_1 s> 0)
                        *(&var_1a8 + (esi_1 << 2)) =
                            fconvert.s(x87_r7_3 + fconvert.t(*(&var_1a8 + (esi_1 << 2))))
                    x87_r7_1 = float.t(0)
                i_1 = &i_2[1]
                edi_1 += 0x18
                i_2 = i_1
            while (i_1 s< *(ebx + 0x249f00))
        
        if (*(ebx + 0x249f00) != 0x186a0 && esi_1 != 0)
            sub_4c5870("stackSize == 0", &data_83f3d3, "PerfEvent.cpp", 0x1b9, "ProfilerCalcFuncData")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *(ebx + 0x259a0c) = 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
}
