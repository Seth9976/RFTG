// 函数名称: sub_4e9cc0
// 虚拟地址: 0x4e9cc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4e9cc0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: float var_1c = 0f
    float var_1c = 0f
    int32_t ecx = arg1[1]
    float var_18 = 0f
    int32_t edx = 0
    int32_t edi = 0
    int32_t var_8 = 0
    
    if (ecx s> 0)
        int32_t* ebx_1 = *arg1
        void* ecx_1 = &ebx_1[4]
        
        do
            float edx_1
            float esi_1
            
            if (arg2 == 0)
                edx_1 = *ebx_1
                esi_1 = ebx_1[1]
            else if (arg2 == 1)
                edx_1 = *(ecx_1 - 8)
                esi_1 = *(ecx_1 - 4)
            else if (arg2 != 2)
                if (arg2 != 3)
                    sub_4c5870("Halt", &data_83f3d3, "Flanim.cpp", 0x52c, "FlanimCompressGetVec2")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                edx_1 = *(ecx_1 + 8)
                esi_1 = *(ecx_1 + 0xc)
            else
                edx_1 = *ecx_1
                esi_1 = *(ecx_1 + 4)
            
            if (edi == 0)
            label_4e9d4b:
                var_8 += 1
                var_1c = edx_1
                var_18 = esi_1
            else
                long double x87_r7_1 = fconvert.t(var_1c)
                long double x87_r6_1 = fconvert.t(edx_1)
                x87_r6_1 - x87_r7_1
                int32_t eax
                eax.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
                bool p_1 = unimplemented  {test ah, 0x44}
                
                if (p_1)
                    goto label_4e9d4b
                
                long double x87_r7_2 = fconvert.t(var_18)
                long double x87_r6_2 = fconvert.t(esi_1)
                x87_r6_2 - x87_r7_2
                eax.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    goto label_4e9d4b
            
            edi += 1
            ebx_1 = &ebx_1[0xc]
            ecx_1 += 0x30
        while (edi s< ecx)
        
        edx = var_8
    
    return edx * 0xa
}
