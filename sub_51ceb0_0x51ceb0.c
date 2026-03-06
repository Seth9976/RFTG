// 函数名称: sub_51ceb0
// 虚拟地址: 0x51ceb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_51ceb0(int32_t arg1)
{
    // 第一条实际指令: if (arg1 u> 0x27)
    if (arg1 u> 0x27)
        sub_4c5870("frameIndex >= 0 && frameIndex < PROFILER_MAX_FRAMES", &data_83f3d3, 
            "PerfEvent.cpp", 0x1c1, "ProfilerCalcGroupBy")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    void* ecx = data_30786fc
    int32_t i = arg1 * 0x259a10
    void* edx = ecx + i
    int32_t esi = 0
    void* var_c = edx
    int32_t i_1 = 0
    
    if (*(edx + 0x249f00) s> 0)
        void* edi_1 = edx + 8
        
        do
            int32_t eax = *(edi_1 + 4)
            
            if (eax == 1)
                if (esi s> 0)
                    int32_t eax_1 = *(ecx + 0x5e206b0)
                    int32_t __saved_ebx
                    void* edx_1 = (&__saved_ebx)[esi]
                    
                    if (eax_1 != 1)
                        if (eax_1 == 2)
                            int32_t eax_5 = *edi_1
                            
                            if (eax_5 == *(ecx + 0x5e206b4))
                                if (eax_5 s< 0 || eax_5 s>= *(ecx + 0x5e20684))
                                    sub_4c5870(
                                        "profileEvent->mFuncPointIndex >= 0 && profileEvent->mFuncPointIndex "
                                    "< gProfilerGlobals->mFuncPointCount", 
                                        &data_83f3d3, "PerfEvent.cpp", 0x1df, "ProfilerCalcGroupBy")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                *(ecx + *(edx_1 + 8) * 0x1c + 0x5e0129c) = 1
                    else if (*(edx_1 + 8) == *(ecx + 0x5e206b4))
                        int32_t eax_3 = *edi_1
                        
                        if (eax_3 s< 0 || eax_3 s>= *(ecx + 0x5e20684))
                            sub_4c5870(
                                "profileEvent->mFuncPointIndex >= 0 && profileEvent->mFuncPointIndex < 
                                    gProfilerGlobals->mFuncPointCount", 
                                &data_83f3d3, "PerfEvent.cpp", 0x1d6, "ProfilerCalcGroupBy")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        *(ecx + eax_3 * 0x1c + 0x5e0129c) = 1
                
                if (esi s>= 0x64)
                    sub_4c5870("stackSize < PROFILER_MAX_STACK_SIZE", &data_83f3d3, "PerfEvent.cpp", 
                        0x1e6, "ProfilerCalcGroupBy")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                edx = var_c
                int32_t var_19c[0x64]
                var_19c[esi] = edi_1 - 8
                esi += 1
            else if (eax == 2)
                if (esi s<= 0)
                    sub_4c5870("stackSize > 0", &data_83f3d3, "PerfEvent.cpp", 0x1ec, 
                        "ProfilerCalcGroupBy")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                esi -= 1
            
            i = i_1 + 1
            edi_1 += 0x18
            i_1 = i
        while (i s< *(edx + 0x249f00))
    
    return i
}
