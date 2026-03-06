// 函数名称: sub_5d5960
// 虚拟地址: 0x5d5960
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d5960(int32_t* arg1, int32_t arg2, char arg3, char arg4)
{
    // 第一条实际指令: int32_t ebx = data_bf7f94
    int32_t ebx = data_bf7f94
    uint32_t eax = zx.d(arg3)
    int32_t var_8
    int32_t eax_4
    int32_t ebx_1
    
    if (eax == 0)
        var_8 = 0x402
        eax_4 = not.d(1 << (arg4 - 1))
        ebx_1 = ebx & eax_4
    else
        if (eax != 1)
            return 0
        
        eax_4 = 1 << (arg4 - 1)
        var_8 = 0x401
        ebx_1 = ebx | eax_4
    
    if (arg1 != 0 && arg3 == 1)
        int32_t ecx_4 = data_bf7f80
        int32_t edx_1 = data_bf7f7c
        int32_t var_50_1 = ecx_4
        sub_5d5880(eax_4, edx_1, ecx_4, arg1, edx_1)
    
    if (ebx_1 == data_bf7f94)
        return 0
    
    data_bf7f94 = ebx_1
    int32_t result = 0
    char eax_8
    int32_t edx_2
    eax_8, edx_2 = sub_5c7830(var_8, 0xffffffff)
    
    if (eax_8 == 1)
        void* eax_9 = data_bf7f78
        int32_t var_40 = var_8
        
        if (eax_9 == 0)
            int32_t var_38_2 = 0
        else
            int32_t var_38_1 = *(eax_9 + 4)
        
        edx_2.b = arg4
        int32_t ecx_5
        ecx_5.b = arg3
        char var_30_1 = edx_2.b
        int32_t var_34_1 = arg2
        char var_2f_1 = ecx_5.b
        int32_t var_2c_1 = data_bf7f7c
        int32_t var_28_1 = data_bf7f80
        int32_t eax_12
        eax_12, edx_2 = sub_5c76a0(&var_40)
        result.b = eax_12 s> 0
    
    if (arg1 != 0 && arg3 == 0)
        int32_t eax_13 = data_bf7f80
        int32_t ecx_7 = data_bf7f7c
        int32_t var_50_3 = eax_13
        sub_5d5880(eax_13, edx_2, ecx_7, arg1, ecx_7)
    
    return result
}
