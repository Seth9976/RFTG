// 函数名称: sub_67c550
// 虚拟地址: 0x67c550
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_67c550(int32_t* arg1, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t edi_1 = arg3 + arg4
    int32_t edi_1 = arg3 + arg4
    
    if (edi_1 u> arg2[1] || arg4 u> arg2[3] || *arg2 == 0)
        *(*arg1 + 0x14) = 0x16
        (**arg1)(arg1)
    
    int32_t eax_2 = arg2[6]
    
    if (arg3 u< eax_2 || edi_1 u> arg2[4] + eax_2)
        if (arg2[0xa] == 0)
            *(*arg1 + 0x14) = 0x45
            (**arg1)(arg1)
        
        if (arg2[9] != 0)
            sub_67c360(arg2, arg1, 1)
            arg2[9] = 0
        
        int32_t eax_5 = arg3
        
        if (eax_5 u<= arg2[6])
            eax_5 = edi_1 - arg2[4]
            
            if (edi_1 - arg2[4] s< 0)
                eax_5 = 0
        
        arg2[6] = eax_5
        sub_67c360(arg2, arg1, 0)
    
    int32_t edi_2 = arg2[7]
    
    if (edi_2 u>= edi_1)
    label_67c655:
        
        if (arg5 != 0)
            arg2[9] = 1
    else
        if (edi_2 u< arg3)
            if (arg5 != 0)
                *(*arg1 + 0x14) = 0x16
                (**arg1)(arg1)
            
            edi_2 = arg3
        
        if (arg5 != 0)
            arg2[7] = edi_1
        
        if (arg2[8] != 0)
            int32_t eax_8 = arg2[6]
            int32_t i = edi_2 - eax_8
            int32_t ebx_2 = arg2[2] << 7
            
            for (; i u< edi_1 - eax_8; i += 1)
                sub_67d220(*(*arg2 + (i << 2)), ebx_2)
            
            goto label_67c655
        
        if (arg5 == 0)
            *(*arg1 + 0x14) = 0x16
            (**arg1)(arg1)
            return *arg2 + ((arg3 - arg2[6]) << 2)
        
        arg2[9] = 1
    
    return *arg2 + ((arg3 - arg2[6]) << 2)
}
