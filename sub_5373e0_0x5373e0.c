// 函数名称: sub_5373e0
// 虚拟地址: 0x5373e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5373e0(float* arg1)
{
    // 第一条实际指令: int32_t* eax
    int32_t* eax
    float* ecx
    eax, ecx = sub_537110()
    
    if (eax == 0)
        sub_4c5870("pTrack", &data_83f3d3, "Windows\EditorWindow.cpp", 0x29d, "NodeGraphGetMinMax")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    float* eax_2 = eax[1]
    
    if (eax_2 s<= 0)
        sub_4c5870("pTrack->paramCount > 0", &data_83f3d3, "Windows\EditorWindow.cpp", 0x29f, 
            "NodeGraphGetMinMax")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t i = 0
    float* entry_ebx
    
    if (eax_2 s> 0)
        int32_t edi_1 = 0
        
        do
            ecx = *eax + edi_1
            bool p_1
            
            if (i != 0)
                long double x87_r7_1 = fconvert.t(*arg1)
                long double x87_r6_1 = fconvert.t(*ecx)
                x87_r6_1 - x87_r7_1
                eax_2.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
                p_1 = unimplemented  {test ah, 0x5}
            
            if (i == 0 || not(p_1))
                eax_2 = arg1
                *eax_2 = fconvert.s(fconvert.t(*ecx))
            
            if (i != 0)
                long double x87_r7_3 = fconvert.t(*entry_ebx)
                long double x87_r6_2 = fconvert.t(ecx[1])
                x87_r6_2 - x87_r7_3
                eax_2.w = (x87_r6_2 < x87_r7_3 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_2, x87_r7_3) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_3 ? 1 : 0) << 0xe
            
            if (i == 0 || (eax_2:1.b & 0x41) == 0)
                *entry_ebx = fconvert.s(fconvert.t(ecx[1]))
            
            i += 1
            edi_1 += 0x10
        while (i s< eax[1])
    
    float* var_14 = ecx
    i.b = 1
    int32_t eax_4
    long double st0
    st0, eax_4 = sub_5372e0(eax_2, i.b, fconvert.s(fconvert.t(*arg1)))
    *arg1 = fconvert.s(st0)
    i.b = 0
    int32_t result
    long double st0_1
    st0_1, result = sub_5372e0(eax_4, i.b, fconvert.s(fconvert.t(*entry_ebx)))
    *entry_ebx = fconvert.s(st0_1)
    return result
}
