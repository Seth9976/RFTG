// 函数名称: sub_553af0
// 虚拟地址: 0x553af0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_553af0(int32_t* arg1, long double arg2 @ st0, long double arg3 @ st1, float arg4, int32_t arg5, float arg6)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    
    if (*(esi + 0x11) != 0 && arg5 s> 0)
        float* ecx_1 = *esi + esi[1] * 0x10 - 0x10
        float* var_1c = ecx_1
        int32_t edx
        return sub_553a50(esi[2], edx, ecx_1, fconvert.s(fconvert.t(arg6)))
    
    void* edx_1 = esi[1]
    long double x87_r7_1 = fconvert.t(arg4)
    int32_t ecx_2 = 0
    
    if (edx_1 s< 4)
    label_553b77:
        
        if (ecx_2 s< edx_1)
            float* edi_4 = *esi + ecx_2 * 0x10 + 8
            
            do
                long double x87_r6_5 = fconvert.t(*edi_4)
                x87_r6_5 - x87_r7_1
                int32_t eax_5
                eax_5.w = (x87_r6_5 < x87_r7_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_5, x87_r7_1) ? 1 : 0) << 0xa
                    | (x87_r6_5 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800
                
                if ((eax_5:1.b & 1) == 0)
                    break
                
                ecx_2 += 1
                edi_4 = &edi_4[4]
            while (ecx_2 s< edx_1)
    else
        void* edi_2 = *esi + 0x18
        
        while (true)
            long double x87_r6_1 = fconvert.t(*(edi_2 - 0x10))
            x87_r6_1 - x87_r7_1
            arg1.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800
            
            if ((arg1:1.b & 1) == 0)
                break
            
            long double x87_r6_2 = fconvert.t(*edi_2)
            x87_r6_2 - x87_r7_1
            arg1.w = (x87_r6_2 < x87_r7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_2, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800
            
            if ((arg1:1.b & 1) == 0)
                ecx_2 += 1
                break
            
            long double x87_r6_3 = fconvert.t(*(edi_2 + 0x10))
            x87_r6_3 - x87_r7_1
            arg1.w = (x87_r6_3 < x87_r7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_3, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_3 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800
            
            if ((arg1:1.b & 1) == 0)
                ecx_2 += 2
                break
            
            long double x87_r6_4 = fconvert.t(*(edi_2 + 0x20))
            x87_r6_4 - x87_r7_1
            arg1.w = (x87_r6_4 < x87_r7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_4, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_4 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800
            
            if ((arg1:1.b & 1) == 0)
                ecx_2 += 3
                break
            
            ecx_2 += 4
            edi_2 += 0x40
            
            if (ecx_2 s>= edx_1 - 3)
                goto label_553b77
    
    int32_t eax_6
    float* ecx_3
    
    if (ecx_2 != 0)
        if (ecx_2 != edx_1)
            int32_t edx_3 = *esi
            int32_t ecx_5 = ecx_2 * 2
            float* edi_5 = edx_3 + (ecx_5 << 3)
            int32_t eax_10 = esi[2]
            float var_10 = fconvert.s((x87_r7_1 - fconvert.t(*(edx_3 + (ecx_5 << 3) - 8)))
                / (fconvert.t(edi_5[2]) - fconvert.t(edi_5[-2])))
            
            if (eax_10 u> 4)
                sub_4c5870("Halt", &data_83f3d3, "ParameterTrack.cpp", 0x3d, "TrackScalarRangeValue")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t eax_11
            
            switch (eax_10)
                case 0
                    eax_11 = 1
                case 1
                    eax_11 = 3
                case 2
                    eax_11 = 6
                case 3
                    eax_11 = 2
                case 4
                    eax_11 = 4
            
            float var_1c_3 = fconvert.s(fconvert.t(edi_5[-3]))
            float var_20_1 = fconvert.s(fconvert.t(edi_5[-4]))
            sub_4066a0(eax_11, fconvert.s(fconvert.t(arg6)))
            int32_t esi_3 = esi[2]
            
            if (esi_3 u> 4)
                sub_4c5870("Halt", &data_83f3d3, "ParameterTrack.cpp", 0x3d, "TrackScalarRangeValue")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t eax_12
            
            switch (esi_3)
                case 0
                    eax_12 = 1
                case 1
                    eax_12 = 3
                case 2
                    eax_12 = 6
                case 3
                    eax_12 = 2
                case 4
                    eax_12 = 4
            
            float var_1c_4 = fconvert.s(fconvert.t(edi_5[1]))
            float var_20_2 = fconvert.s(fconvert.t(*edi_5))
            sub_4066a0(eax_12, fconvert.s(fconvert.t(arg6)))
            float var_1c_5 = fconvert.s(fconvert.t(fconvert.s(arg3)))
            float var_20_3 = fconvert.s(fconvert.t(fconvert.s(arg2)))
            return sub_4066a0(edi_5[3], fconvert.s(fconvert.t(var_10)))
        
        int32_t esi_2 = esi[2]
        ecx_3 = *esi + edx_1 * 0x10 - 0x10
        
        if (esi_2 u> 4)
            sub_4c5870("Halt", &data_83f3d3, "ParameterTrack.cpp", 0x3d, "TrackScalarRangeValue")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        switch (esi_2)
            case 0
                eax_6 = 1
            case 1
                eax_6 = 3
            case 2
                eax_6 = 6
            case 3
                eax_6 = 2
            case 4
                eax_6 = 4
    else
        ecx_3 = *esi
        int32_t esi_1 = esi[2]
        
        if (esi_1 u> 4)
            sub_4c5870("Halt", &data_83f3d3, "ParameterTrack.cpp", 0x3d, "TrackScalarRangeValue")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        switch (esi_1)
            case 0
                eax_6 = 1
            case 1
                eax_6 = 3
            case 2
                eax_6 = 6
            case 3
                eax_6 = 2
            case 4
                eax_6 = 4
    
    float var_1c_2 = fconvert.s(fconvert.t(ecx_3[1]))
    float var_20 = fconvert.s(fconvert.t(*ecx_3))
    return sub_4066a0(eax_6, fconvert.s(fconvert.t(arg6)))
}
