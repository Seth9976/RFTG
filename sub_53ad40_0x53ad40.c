// 函数名称: sub_53ad40
// 虚拟地址: 0x53ad40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_53ad40(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* eax
    int32_t* eax
    int32_t edx
    eax, edx = sub_537110()
    
    if (eax == 0)
        sub_4c5870("pTrack", &data_83f3d3, "Windows\EditorWindow.cpp", 0x6f1, "EditorAddNode")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    float eax_3
    float edx_1
    eax_3, edx_1 = sub_537720(arg2, edx, arg1)
    int32_t ecx_1 = eax[1]
    int32_t i = 0
    float var_c = eax_3
    long double x87_r7 = fconvert.t(var_c)
    
    if (ecx_1 s>= 4)
        void* edx_3 = *eax + 0x18
        
        do
            long double x87_r6_1 = fconvert.t(*(edx_3 - 0x10))
            x87_r6_1 - x87_r7
            eax_3.w = (x87_r6_1 < x87_r7 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_1, x87_r7) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7 ? 1 : 0) << 0xe | 0x3800
            
            if ((eax_3:1.b & 0x41) == 0)
                goto label_53ae1b
            
            long double x87_r6_2 = fconvert.t(*edx_3)
            x87_r6_2 - x87_r7
            eax_3.w = (x87_r6_2 < x87_r7 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_2, x87_r7) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7 ? 1 : 0) << 0xe | 0x3800
            
            if ((eax_3:1.b & 0x41) == 0)
                i += 1
                goto label_53ae1b
            
            long double x87_r6_3 = fconvert.t(*(edx_3 + 0x10))
            x87_r6_3 - x87_r7
            eax_3.w = (x87_r6_3 < x87_r7 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_3, x87_r7) ? 1 : 0) << 0xa
                | (x87_r6_3 == x87_r7 ? 1 : 0) << 0xe | 0x3800
            
            if ((eax_3:1.b & 0x41) == 0)
                i += 2
                goto label_53ae1b
            
            long double x87_r6_4 = fconvert.t(*(edx_3 + 0x20))
            x87_r6_4 - x87_r7
            eax_3.w = (x87_r6_4 < x87_r7 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_4, x87_r7) ? 1 : 0) << 0xa
                | (x87_r6_4 == x87_r7 ? 1 : 0) << 0xe | 0x3800
            
            if ((eax_3:1.b & 0x41) == 0)
                i += 3
                goto label_53ae1b
            
            i += 4
            edx_3 += 0x40
        while (i s< ecx_1 - 3)
    
    if (i s< ecx_1)
        float* edx_6 = *eax + i * 0x10 + 8
        
        do
            long double x87_r6_5 = fconvert.t(*edx_6)
            x87_r6_5 - x87_r7
            int32_t eax_4
            eax_4.w = (x87_r6_5 < x87_r7 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_5, x87_r7) ? 1 : 0) << 0xa
                | (x87_r6_5 == x87_r7 ? 1 : 0) << 0xe | 0x3800
            
            if ((eax_4:1.b & 0x41) == 0)
                break
            
            i += 1
            edx_6 = &edx_6[4]
        while (i s< ecx_1)
    
    label_53ae1b:
    int32_t var_24 = ecx_1
    int32_t* eax_6
    int32_t edx_7
    eax_6, edx_7 = sub_4fff30(data_315f7ec, 0)
    sub_505030(eax_6, edx_7, eax, eax_6, i)
    long double x87_r7_1 = fconvert.t(edx_1)
    int32_t ecx_4 = i << 4
    void* eax_8 = *eax + ecx_4
    *eax_8 = fconvert.s(x87_r7_1)
    *(eax_8 + 8) = fconvert.s(fconvert.t(var_c))
    
    if (eax[1] s<= 1)
        *(eax_8 + 0xc) = 1
    else if (i s<= 0)
        void* ebx_2 = *eax
        ecx_4 = *(ebx_2 + 0x1c)
        *(eax_8 + 0xc) = ecx_4
        x87_r7_1 = x87_r7_1 + fconvert.t(*(ebx_2 + 0x14)) - fconvert.t(*(ebx_2 + 0x10))
    else
        float* ebx_1 = *eax + ecx_4 - 0x10
        ecx_4 = ebx_1[3]
        *(eax_8 + 0xc) = ecx_4
        x87_r7_1 = x87_r7_1 + fconvert.t(ebx_1[1]) - fconvert.t(*ebx_1)
    
    *(eax_8 + 4) = fconvert.s(x87_r7_1)
    void* eax_9 = data_3079208
    
    if (eax_9 != 0)
        int32_t eax_10 = *(eax_9 + 4)
        
        if (eax_10 == 0x19)
            int32_t var_20_1 = 0xffffffff
            sub_536c00(sub_538a80(0xffffffff))
            return i
        
        if (eax_10 == 0x1b)
            ecx_4 = sub_539d30(0xffffffff)
    
    sub_536c00(ecx_4)
    return i
}
