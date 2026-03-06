// 函数名称: sub_51e4e0
// 虚拟地址: 0x51e4e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_51e4e0(int32_t arg1)
{
    // 第一条实际指令: void* result = data_30786fc
    void* result = data_30786fc
    int32_t i = 0
    
    if (*(result + 0x5e20684) s> 0)
        void* edx_1 = result + 0x5e0129c
        
        do
            *edx_1 = 0
            i += 1
            edx_1 += 0x1c
        while (i s< *(result + 0x5e20684))
    
    int32_t i_1 = 0
    *(result + 0x5e206b0) = 2
    *(result + 0x5e206b4) = arg1
    int32_t esi = 0
    
    if (*(result + 0x249f00) s> 0)
        void* edi_1 = result + 8
        
        do
            int32_t ecx_1 = *(edi_1 + 4)
            
            if (ecx_1 == 1)
                if (esi s> 0)
                    int32_t ecx_2 = *(result + 0x5e206b0)
                    int32_t __saved_ebx
                    void* edx_2 = (&__saved_ebx)[esi]
                    
                    if (ecx_2 != 1)
                        if (ecx_2 == 2)
                            int32_t ecx_4 = *edi_1
                            
                            if (ecx_4 == *(result + 0x5e206b4))
                                if (ecx_4 s< 0 || ecx_4 s>= *(result + 0x5e20684))
                                    sub_4c5870(
                                        "profileEvent->mFuncPointIndex >= 0 && profileEvent->mFuncPointIndex "
                                    "< gProfilerGlobals->mFuncPointCount", 
                                        &data_83f3d3, "PerfEvent.cpp", 0x1df, "ProfilerCalcGroupBy")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                *(result + *(edx_2 + 8) * 0x1c + 0x5e0129c) = 1
                    else if (*(edx_2 + 8) == *(result + 0x5e206b4))
                        int32_t ecx_3 = *edi_1
                        
                        if (ecx_3 s< 0 || ecx_3 s>= *(result + 0x5e20684))
                            sub_4c5870(
                                "profileEvent->mFuncPointIndex >= 0 && profileEvent->mFuncPointIndex < 
                                    gProfilerGlobals->mFuncPointCount", 
                                &data_83f3d3, "PerfEvent.cpp", 0x1d6, "ProfilerCalcGroupBy")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        *(result + ecx_3 * 0x1c + 0x5e0129c) = 1
                
                if (esi s>= 0x64)
                    sub_4c5870("stackSize < PROFILER_MAX_STACK_SIZE", &data_83f3d3, "PerfEvent.cpp", 
                        0x1e6, "ProfilerCalcGroupBy")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t var_194[0x64]
                var_194[esi] = edi_1 - 8
                esi += 1
            else if (ecx_1 == 2)
                if (esi s<= 0)
                    sub_4c5870("stackSize > 0", &data_83f3d3, "PerfEvent.cpp", 0x1ec, 
                        "ProfilerCalcGroupBy")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                esi -= 1
            
            i_1 += 1
            edi_1 += 0x18
        while (i_1 s< *(result + 0x249f00))
    
    int32_t i_2 = 0
    
    if (*(result + 0x5e20684) s> 0)
        void* edx_6 = result + 0x5e0129c
        
        do
            if (*edx_6 != 0 && i_2 != arg1)
                *(result + 0x5e206b0) = 1
                *(result + 0x5e206b4) = i_2
                return result
            
            i_2 += 1
            edx_6 += 0x1c
        while (i_2 s< *(result + 0x5e20684))
    
    *(result + 0x5e206b0) = 0
    return result
}
