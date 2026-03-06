// 函数名称: sub_603900
// 虚拟地址: 0x603900
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_603900(int32_t* arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t* edx = arg1
    int32_t* edx = arg1
    int32_t* eax = arg3[1]
    uint32_t ecx = zx.d(*(eax + 9))
    void* var_c = nullptr
    
    if (*edx[1] != *eax)
        sub_5cce60("Only works with same format surfaces")
        return 0xffffffff
    
    int32_t* edi = arg2
    
    if (edi == 0)
        int32_t eax_2 = edx[2]
        int32_t ecx_6 = edx[3]
        int32_t var_38
        edi = &var_38
        var_38 = 0
        int32_t var_34_1 = 0
        int32_t var_30_1 = eax_2
        int32_t var_2c_1 = ecx_6
        arg2 = &var_38
    else
        int32_t ecx_3 = *edi
        int32_t eax_1
        
        if (ecx_3 s>= 0)
            eax_1 = edi[1]
        
        if (ecx_3 s< 0 || eax_1 s< 0 || edi[2] + ecx_3 s> edx[2] || edi[3] + eax_1 s> edx[3])
            sub_5cce60("Invalid source blit rectangle")
            return 0xffffffff
    
    int32_t* esi_3 = arg4
    
    if (esi_3 == 0)
        int32_t var_40_1 = arg3[2]
        int32_t ecx_11 = arg3[3]
        int32_t var_48
        esi_3 = &var_48
        var_48 = 0
        int32_t var_44_1 = 0
        int32_t var_3c_1 = ecx_11
        arg4 = &var_48
    else
        int32_t ecx_7 = *esi_3
        int32_t eax_3
        
        if (ecx_7 s>= 0)
            eax_3 = esi_3[1]
        
        if (ecx_7 s< 0 || eax_3 s< 0 || esi_3[2] + ecx_7 s> arg3[2] || esi_3[3] + eax_3 s> arg3[3])
            sub_5cce60("Invalid destination blit rectangle")
            return 0xffffffff
        
        edx = arg1
    
    int32_t var_14 = 0
    
    if ((*arg3 & 2) != 0)
        sub_5d6350(arg3)
        edx = arg1
        var_14 = 1
    
    int32_t var_20 = 0
    
    if ((*edx & 2) != 0)
        sub_5d6350(edx)
        var_20 = 1
    
    int32_t ecx_12 = esi_3[3]
    int32_t eax_6
    int32_t edx_3
    edx_3:eax_6 = sx.q(edi[3] << 0x10)
    int32_t ebx_1 = esi_3[1]
    int32_t var_8 = 0x10000
    int32_t var_10 = edi[1]
    int32_t var_1c = ebx_1
    int32_t eax_8 = ecx_12 + ebx_1
    
    while (ebx_1 s< eax_8)
        uint32_t ecx_13 = ecx
        void* edx_8 = arg3[4] * ebx_1 + *esi_3 * ecx_13 + arg3[5]
        
        if (var_8 s>= 0x10000)
            int32_t esi_4 = arg1[4]
            void* eax_16 = esi_4 * var_10 + *edi * ecx_13 + arg1[5]
            uint32_t i_1 = var_8 u>> 0x10
            var_8 += i_1 * 0xffff0000
            var_10 += i_1
            uint32_t i
            
            do
                var_c = eax_16
                eax_16 += esi_4
                i = i_1
                i_1 -= 1
            while (i != 1)
            edi = arg2
            esi_3 = arg4
            ebx_1 = var_1c
            ecx_13 = ecx
        
        if (ecx_13 - 1 u<= 3)
            switch (ecx_13)
                case 1
                    sub_603750(edi[2], edx_8, esi_3[2], var_c, edx_8)
                case 2
                    sub_6037b0(edi[2], var_c, esi_3[2], var_c, edx_8)
                case 3
                    sub_603870(edi[2], edx_8, var_c, edx_8, esi_3[2])
                case 4
                    sub_603810(edi[2], edx_8, esi_3[2], var_c, edx_8)
        
        var_8 += divs.dp.d(edx_3:eax_6, ecx_12)
        ebx_1 += 1
        var_1c = ebx_1
    
    if (var_14 != 0)
        sub_5d6380(arg3)
    
    if (var_20 != 0)
        sub_5d6380(arg1)
    
    return 0
}
