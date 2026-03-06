// 函数名称: sub_67c400
// 虚拟地址: 0x67c400
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_67c400(int32_t* arg1, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t ebx_1 = arg3 + arg4
    int32_t ebx_1 = arg3 + arg4
    int32_t* edi
    
    if (ebx_1 u> arg2[1] || arg4 u> arg2[3] || *arg2 == 0)
        edi = arg1
        *(*edi + 0x14) = 0x16
        (**edi)(edi)
    else
        edi = arg1
    
    int32_t eax_2 = arg2[6]
    
    if (arg3 u< eax_2 || ebx_1 u> arg2[4] + eax_2)
        if (arg2[0xa] == 0)
            *(*edi + 0x14) = 0x45
            (**edi)(edi)
        
        if (arg2[9] != 0)
            sub_67c2c0(arg2, edi, 1)
            arg2[9] = 0
        
        int32_t eax_5 = arg3
        
        if (eax_5 u<= arg2[6])
            eax_5 = ebx_1 - arg2[4]
            
            if (ebx_1 - arg2[4] s< 0)
                eax_5 = 0
        
        arg2[6] = eax_5
        sub_67c2c0(arg2, edi, 0)
    
    int32_t eax_6 = arg2[7]
    
    if (eax_6 u>= ebx_1)
    label_67c507:
        
        if (arg5 != 0)
            arg2[9] = 1
    else
        int32_t edi_1
        
        if (eax_6 u>= arg3)
            edi_1 = eax_6
        else
            if (arg5 != 0)
                *(*edi + 0x14) = 0x16
                (**edi)(edi)
            
            edi_1 = arg3
        
        if (arg5 != 0)
            arg2[7] = ebx_1
        
        if (arg2[8] != 0)
            int32_t eax_9 = arg2[2]
            int32_t eax_10 = arg2[6]
            
            for (int32_t i = edi_1 - eax_10; i u< ebx_1 - eax_10; i += 1)
                sub_67d220(*(*arg2 + (i << 2)), eax_9)
            
            goto label_67c507
        
        if (arg5 == 0)
            *(*arg1 + 0x14) = 0x16
            (**arg1)(arg1)
            return *arg2 + ((arg3 - arg2[6]) << 2)
        
        arg2[9] = 1
    
    return *arg2 + ((arg3 - arg2[6]) << 2)
}
