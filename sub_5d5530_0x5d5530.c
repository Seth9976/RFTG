// 函数名称: sub_5d5530
// 虚拟地址: 0x5d5530
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d5530(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ecx = arg4
    int32_t ecx = arg4
    int32_t var_c = 0
    int32_t var_8 = 0
    int32_t eax_1
    int32_t ebx
    int32_t edi
    
    if (arg2 == 0)
        ebx = arg3 - data_bf7f8c
        int32_t eax_3 = arg4 - data_bf7f90
        arg2 = eax_3
        edi = eax_3
        eax_1 = arg3
    else
        ebx = arg3
        eax_1 = arg3 + data_bf7f8c
        edi = ecx
        ecx += data_bf7f90
        arg2 = edi
        arg3 = eax_1
        arg4 = ecx
    
    if (ebx == 0 && edi == 0)
        return 0
    
    if (data_bf7f98 != 0)
        data_bf7f7c += ebx
        data_bf7f80 += edi
    else
        data_bf7f7c = eax_1
        data_bf7f80 = ecx
    
    sub_5c9bb0(data_bf7f78, &var_c, &var_8)
    int32_t eax_5 = var_c
    var_8 -= 1
    var_c = eax_5 - 1
    
    if (data_bf7f7c s> eax_5 - 1)
        data_bf7f7c = eax_5 - 1
    
    if (data_bf7f7c s< 0)
        data_bf7f7c = 0
    
    int32_t eax_7 = var_8
    
    if (data_bf7f80 s> eax_7)
        data_bf7f80 = eax_7
    
    if (data_bf7f80 s< 0)
        data_bf7f80 = 0
    
    data_bf7f84 += ebx
    data_bf7f88 += edi
    
    if (data_bf7fb0 != 0 && data_bf7f98 == 0)
        int32_t ecx_1 = data_bf7f64
        
        if (ecx_1 != 0)
            int32_t eax_8 = data_bf7fac
            
            if (eax_8 != 0)
                ecx_1(eax_8)
    
    int32_t result = 0
    
    if (sub_5c7830(0x400, 0xffffffff) == 1)
        void* eax_10 = data_bf7f78
        int32_t var_44 = 0x400
        
        if (eax_10 == 0)
            int32_t var_3c_2 = 0
        else
            int32_t var_3c_1 = *(eax_10 + 4)
        
        int32_t var_30_1 = data_bf7f7c
        int32_t var_38_1 = arg1
        int32_t var_34_1 = data_bf7f94
        int32_t var_2c_1 = data_bf7f80
        int32_t var_28_1 = ebx
        int32_t var_24_1 = arg2
        int32_t result_1
        result_1.b = sub_5c76a0(&var_44) s> 0
        result = result_1
    
    data_bf7f90 = arg4
    data_bf7f8c = arg3
    return result
}
