// 函数名称: sub_4e9b00
// 虚拟地址: 0x4e9b00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4e9b00(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: arg3[1] = arg1
    arg3[1] = arg1
    float* ecx
    
    if (arg1 != 0)
        float* eax = sub_4cce80(arg1)
        sub_5abfc0(eax, 0, arg1)
        ecx = eax
    else
        ecx = nullptr
    
    *arg3 = ecx
    arg3[2] = 3
    int32_t edi_3 = arg1 s/ 0xa
    void* eax_2 = &ecx[edi_3 * 2]
    float var_24 = 0f
    float var_20 = 0f
    int32_t* result = arg4[1]
    int32_t i = 0
    int32_t var_14 = edi_3
    int32_t* result_1 = nullptr
    
    if (result s>= 0xffff)
        sub_4c5870("pMayaVertex->mFrameCount < MAXUINT16", &data_83f3d3, "Flanim.cpp", 0x57a, 
            "FlanimCompressConstantVec2")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (result s> 0)
        int32_t var_8_1 = 0
        float* esi_1 = ecx
        
        do
            result = *arg4 + var_8_1
            float ecx_2
            float edx_3
            
            if (arg5 == 0)
                ecx_2 = *result
                edx_3 = result[1]
            else if (arg5 == 1)
                ecx_2 = result[2]
                edx_3 = result[3]
            else if (arg5 != 2)
                if (arg5 != 3)
                    sub_4c5870("Halt", &data_83f3d3, "Flanim.cpp", 0x52c, "FlanimCompressGetVec2")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                ecx_2 = result[6]
                edx_3 = result[7]
            else
                ecx_2 = result[4]
                edx_3 = result[5]
            
            if (i == 0)
            label_4e9c1f:
                *(eax_2 + (result_1 << 1)) = i.w
                edi_3 = var_14
                result = result_1 + 1
                *esi_1 = ecx_2
                esi_1[1] = edx_3
                var_24 = ecx_2
                var_20 = edx_3
                result_1 = result
                esi_1 = &esi_1[2]
            else
                long double x87_r7_1 = fconvert.t(var_24)
                long double x87_r6_1 = fconvert.t(ecx_2)
                x87_r6_1 - x87_r7_1
                result.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
                bool p_1 = unimplemented  {test ah, 0x44}
                
                if (p_1)
                    goto label_4e9c1f
                
                long double x87_r7_2 = fconvert.t(var_20)
                long double x87_r6_2 = fconvert.t(edx_3)
                x87_r6_2 - x87_r7_2
                result.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    goto label_4e9c1f
            
            var_8_1 += 0x30
            i += 1
        while (i s< arg4[1])
    
    if (result_1 == edi_3)
        return result
    
    sub_4c5870("dataIndex == numValues", &data_83f3d3, "Flanim.cpp", 0x589, 
        "FlanimCompressConstantVec2")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
