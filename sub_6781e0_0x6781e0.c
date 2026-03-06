// 函数名称: sub_6781e0
// 虚拟地址: 0x6781e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_6781e0(int32_t* arg1, char* arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* var_8_1 = nullptr
    uint32_t ecx_4
    uint32_t edx_3
    
    if (arg1[0x21] s<= 0)
        ecx_4 = arg3 + 5
        edx_3 = ecx_4
    else
        void* edi_1 = *arg1
        
        if (*(edi_1 + 0x2c) == 2)
            *(edi_1 + 0x2c) = sub_677a50(arg1)
        
        sub_677d50(arg1, &arg1[0x2c6])
        sub_677d50(arg1, &arg1[0x2c9])
        void* eax_4 = sub_677f50(arg1)
        edx_3 = (arg1[0x5aa] + 0xa) u>> 3
        ecx_4 = (arg1[0x5ab] + 0xa) u>> 3
        var_8_1 = eax_4
        
        if (ecx_4 u<= edx_3)
            edx_3 = ecx_4
    
    int32_t ecx_5
    int32_t edi_2
    
    if (arg3 + 4 u<= edx_3 && arg2 != 0)
        edi_2 = arg4
        ecx_5 = sub_678020(arg1, arg2, arg3, edi_2.w)
    else if (arg1[0x22] == 4 || ecx_4 == edx_3)
        void* ecx_13 = arg1[0x5af]
        edi_2 = arg4
        char* ecx_15
        
        if (ecx_13 s<= 0xd)
            arg1[0x5ae].w |= (edi_2.w + 2) << ecx_13.b
            ecx_15 = ecx_13 + 3
            arg1[0x5af] = ecx_15
        else
            edx_3.w = edi_2.w + 2
            edx_3.w <<= ecx_13.b
            arg1[0x5ae].w |= edx_3.w
            arg1[5][arg1[2]] = arg1[0x5ae].b
            arg1[5] += 1
            arg1[5][arg1[2]] = *(arg1 + 0x16b9)
            int32_t edx_10 = arg1[0x5af]
            arg1[5] += 1
            ecx_15.b = 0x10
            ecx_15.b = 0x10 - edx_10.b
            edx_3 = edx_10 - 0xd
            arg1[0x5af] = edx_3
            arg1[0x5ae].w = (edi_2.w + 2) u>> ecx_15.b
        
        int32_t var_18_4 = 0x833d48
        int32_t var_1c_4 = 0x8338c8
        ecx_5 = sub_677670(arg1, edx_3, ecx_15)
    else
        int32_t ecx_6 = arg1[0x5af]
        edi_2 = arg4
        
        if (ecx_6 s<= 0xd)
            arg1[0x5ae].w |= (edi_2.w + 4) << ecx_6.b
            arg1[0x5af] = ecx_6 + 3
        else
            char* eax_5
            eax_5.w = edi_2.w + 4
            eax_5.w <<= ecx_6.b
            arg1[0x5ae].w |= eax_5.w
            arg1[5][arg1[2]] = arg1[0x5ae].b
            arg1[5] += 1
            arg1[5][arg1[2]] = *(arg1 + 0x16b9)
            int32_t eax_8 = arg1[0x5af]
            arg1[5] += 1
            int32_t ecx_8
            ecx_8.b = 0x10
            ecx_8.b = 0x10 - eax_8.b
            arg1[0x5af] = eax_8 - 0xd
            arg1[0x5ae].w = (edi_2.w + 4) u>> ecx_8.b
        
        void* var_24_2 = &arg1[0x262]
        void* var_28_1 = &arg1[0x25]
        ecx_5 = sub_677670(arg1, sub_677420(arg1, arg1[0x2c7] + 1, arg1[0x2ca] + 1, var_8_1 + 1), 
            &arg1[0x25])
    
    int32_t* result = sub_676a60(ecx_5, arg1)
    
    if (edi_2 != 0)
        result = arg1
        sub_677b40(result)
    
    return result
}
