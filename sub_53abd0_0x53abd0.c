// 函数名称: sub_53abd0
// 虚拟地址: 0x53abd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_53abd0()
{
    // 第一条实际指令: int32_t* eax = sub_537110()
    int32_t* eax = sub_537110()
    
    if (eax != 0)
        int32_t esi_1 = data_3078834
        
        if (esi_1 s>= 0 && esi_1 s< eax[1])
            int32_t esi_2 = esi_1 << 4
            float* esi_3 = esi_2 + *eax
            
            if (esi_2 != neg.d(*eax))
                long double x87_r7 = fconvert.t(esi_3[1])
                long double x87_r6 = fconvert.t(*esi_3)
                x87_r6 - x87_r7
                eax.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
                    | (x87_r6 == x87_r7 ? 1 : 0) << 0xe
                
                if ((eax:1.b & 0x41) == 0)
                    esi_3[1] = fconvert.s(fconvert.t(*esi_3))
                
                int32_t* edi = sub_537110()
                
                if (edi == 0)
                    sub_4c5870("pTrack", &data_83f3d3, "Windows\EditorWindow.cpp", 0x6be, 
                        "EditorClampNodeValues")
                    
                    if (IsDebuggerPresent() != 1)
                        sub_4c5a30()
                        noreturn
                    
                    breakpoint
                
                long double x87_r7_2 = float.t(0)
                long double temp2 = fconvert.t(esi_3[2])
                x87_r7_2 - temp2
                int32_t* eax_2
                eax_2.w = (x87_r7_2 < temp2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_2, temp2) ? 1 : 0) << 0xa
                    | (x87_r7_2 == temp2 ? 1 : 0) << 0xe | 0x3800
                
                if ((eax_2:1.b & 0x41) == 0)
                    esi_3[2] = fconvert.s(x87_r7_2)
                
                long double x87_r7_3 = float.t(1)
                long double temp3 = fconvert.t(esi_3[2])
                x87_r7_3 - temp3
                eax_2.w = (x87_r7_3 < temp3 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_3, temp3) ? 1 : 0) << 0xa
                    | (x87_r7_3 == temp3 ? 1 : 0) << 0xe | 0x3800
                bool p = unimplemented  {test ah, 0x5}
                
                if (not(p))
                    esi_3[2] = fconvert.s(x87_r7_3)
                
                int32_t ecx = data_3078834
                
                if (ecx s> 0)
                    int32_t edx_1 = *edi
                    long double x87_r7_4 = fconvert.t(esi_3[2])
                    int32_t eax_5 = ecx * 2
                    long double x87_r6_1 = fconvert.t(*(edx_1 + (eax_5 << 3) - 8))
                    void* edx_2 = edx_1 + (eax_5 << 3) - 0x10
                    x87_r6_1 - x87_r7_4
                    eax_5.w = (x87_r6_1 < x87_r7_4 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_1, x87_r7_4) ? 1 : 0) << 0xa
                        | (x87_r6_1 == x87_r7_4 ? 1 : 0) << 0xe
                    
                    if ((eax_5:1.b & 0x41) == 0)
                        esi_3[2] = fconvert.s(fconvert.t(*(edx_2 + 8)))
                        ecx = data_3078834
                
                if (ecx s< edi[1] - 1)
                    long double x87_r7_6 = fconvert.t(esi_3[2])
                    void* ecx_3 = ((ecx + 1) << 4) + *edi
                    long double x87_r6_2 = fconvert.t(*(ecx_3 + 8))
                    x87_r6_2 - x87_r7_6
                    int32_t eax_7
                    eax_7.w = (x87_r6_2 < x87_r7_6 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_2, x87_r7_6) ? 1 : 0) << 0xa
                        | (x87_r6_2 == x87_r7_6 ? 1 : 0) << 0xe
                    bool p_1 = unimplemented  {test ah, 0x5}
                    
                    if (not(p_1))
                        esi_3[2] = fconvert.s(fconvert.t(*(ecx_3 + 8)))
                
                return 
    
    sub_4c5870("pNode", &data_83f3d3, "Windows\EditorWindow.cpp", 0x6b6, "EditorClampNodeValues")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
