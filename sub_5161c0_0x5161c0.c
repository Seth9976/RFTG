// 函数名称: sub_5161c0
// 虚拟地址: 0x5161c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5161c0(float* arg1)
{
    // 第一条实际指令: int32_t** entry_ebx
    int32_t** entry_ebx
    
    if (entry_ebx[3] == 0)
        return 
    
    int32_t* i_1 = entry_ebx[1]
    int32_t* i = i_1
    float var_c_1 = fconvert.s(float.t(0))
    void* edi_1 = nullptr
    
    if (i == 0)
    label_516236:
        sub_4c5870("totalWeight > EPSILON", &data_83f3d3, "Animation.cpp", 0x262, 
            "AnimationAccumBonePosition")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    do
        void* edx_1 = *i
        int32_t ecx_1 = *(edx_1 + 0x20)
        i = i[1]
        
        if (ecx_1 != 2 && ecx_1 != 4)
            if (edi_1 == 0)
                edi_1 = edx_1
            
            var_c_1 = fconvert.s(fconvert.t(*(edx_1 + 0x14)) + fconvert.t(var_c_1))
    while (i != 0)
    
    long double x87_r7_4 = fconvert.t(9.99999975e-06f)
    long double temp0_1 = fconvert.t(var_c_1)
    x87_r7_4 - temp0_1
    i.w = (x87_r7_4 < temp0_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_4, temp0_1) ? 1 : 0) << 0xa
        | (x87_r7_4 == temp0_1 ? 1 : 0) << 0xe
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        goto label_516236
    
    if (edi_1 == 0)
        sub_4c5870("pAnimSetBase != NULL", &data_83f3d3, "Animation.cpp", 0x263, 
            "AnimationAccumBonePosition")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    while (i_1 != 0)
        void* edi_2 = *i_1
        i_1 = i_1[1]
        void* eax_3 = sub_515a00(edi_2, entry_ebx)
        int32_t ecx_2 = *(edi_2 + 0x20)
        float var_8_1 = fconvert.s(fconvert.t(*(edi_2 + 0x14)) / fconvert.t(var_c_1))
        
        if (ecx_2 == 4)
            var_8_1 = fconvert.s(float.t(1))
        
        if (ecx_2 != 2)
            float* edx_2 = *(edi_2 + 0xac)
            sub_516080(eax_3, edx_2, arg1, eax_3, fconvert.s(fconvert.t(*(edi_2 + 4))), 
                fconvert.s(fconvert.t(var_8_1)), edi_2 + 0x2c, edx_2, *(edi_2 + 0xb0))
    
    void** i_2 = entry_ebx[1]
    
    while (i_2 != 0)
        void* edi_3 = *i_2
        i_2 = i_2[1]
        void* ecx_6 = sub_515a00(edi_3, entry_ebx)
        
        if (*(edi_3 + 0x20) == 2)
            long double x87_r7_11 = fconvert.t(fconvert.s(fconvert.t(*(edi_3 + 0x24))))
            long double x87_r5_1 = float.t(0)
            x87_r5_1 - x87_r7_11
            void* eax_4
            eax_4.w = (x87_r5_1 < x87_r7_11 ? 1 : 0) << 8
                | (is_unordered.t(x87_r5_1, x87_r7_11) ? 1 : 0) << 0xa
                | (x87_r5_1 == x87_r7_11 ? 1 : 0) << 0xe | 0x3800
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (p_2)
                int32_t eax_5 = *(edi_3 + 0x28) * 3
                sub_515f90(eax_5, arg1, entry_ebx[eax_5 + 7], ecx_6, 
                    fconvert.s(fconvert.t(*(edi_3 + 4))), fconvert.s(x87_r7_11))
}
