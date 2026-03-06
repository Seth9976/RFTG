// 函数名称: sub_5b8a35
// 虚拟地址: 0x5b8a35
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b8a35(void* arg1 @ edi)
{
    // 第一条实际指令: int32_t var_8 = 0
    int32_t var_8 = 0
    int32_t eax = _rand_s(&var_8)
    
    if (eax != 0)
        int32_t var_28_3
        __builtin_memset(&var_28_3, 0, 0x14)
        sub_5ad34e()
        noreturn
    
    if (var_8 == 0)
        return eax
    
    int32_t edx_1 = *(arg1 + 0x14)
    
    if (edx_1 != data_8b9208 || edx_1 != data_8b9214)
        if (data_bed2c4 == 0)
            int32_t eax_15 = 3
            int32_t ecx_3 = 2
            int32_t var_10_1 = 0xb
            int32_t var_c_1 = 1
            
            if (edx_1 s< 0x6b)
                eax_15 = 4
                ecx_3 = 1
                var_10_1 = 0xa
                var_c_1 = 5
            
            sub_5b883e(var_10_1, sub_5b883e(eax_15, edx_1, 2, 1, 1, edx_1, ecx_3, 0, 0, 0, 0, 0), 2, 0, 
                1, *(arg1 + 0x14), var_c_1, 0, 0, 0, 0, 0)
        else
            int32_t var_38_1
            int32_t var_34_1
            uint32_t var_30_1
            uint32_t var_2c_1
            uint32_t var_28_1
            
            if (data_bed2b0 != 0)
                var_28_1 = zx.d(data_bed2b6)
                var_2c_1 = 0
                var_30_1 = 0
                var_34_1 = edx_1
                var_38_1 = 0
            else
                var_28_1 = 0
                var_2c_1 = zx.d(data_bed2b4)
                var_30_1 = zx.d(data_bed2b6)
                var_34_1 = edx_1
                var_38_1 = 1
            
            int32_t edx_2 = sub_5b883e(zx.d(data_bed2b2), edx_1, zx.d(data_bed2b8), 1, var_38_1, 
                var_34_1, var_30_1, var_2c_1, var_28_1, zx.d(data_bed2ba), zx.d(data_bed2bc), 
                zx.d(data_bed2be))
            int32_t var_38_2
            int32_t var_34_2
            uint32_t var_30_2
            uint32_t var_2c_2
            uint32_t var_28_2
            
            if (data_bed25c != 0)
                var_28_2 = zx.d(data_bed262)
                var_2c_2 = 0
                var_30_2 = 0
                var_34_2 = *(arg1 + 0x14)
                var_38_2 = 0
            else
                var_28_2 = 0
                var_2c_2 = zx.d(data_bed260)
                var_30_2 = zx.d(data_bed262)
                var_34_2 = *(arg1 + 0x14)
                var_38_2 = 1
            
            sub_5b883e(zx.d(data_bed25e), edx_2, zx.d(data_bed264), 0, var_38_2, var_34_2, var_30_2, 
                var_2c_2, var_28_2, zx.d(data_bed266), zx.d(data_bed268), zx.d(data_bed26a))
    
    int32_t ecx_4 = data_8b920c
    int32_t eax_17 = data_8b9218
    int32_t edx_4 = *(arg1 + 0x1c)
    
    if (ecx_4 s>= eax_17)
        if (edx_4 s< eax_17 || edx_4 s> ecx_4)
            return 1
        
        if (edx_4 s> eax_17 && edx_4 s< ecx_4)
            return 0
    else
        if (edx_4 s< ecx_4 || edx_4 s> eax_17)
            return 0
        
        if (edx_4 s> ecx_4 && edx_4 s< eax_17)
            return 1
    
    int32_t eax_23 = ((*(arg1 + 8) * 0x3c + *(arg1 + 4)) * 0x3c + *arg1) * 0x3e8
    int32_t ecx_5
    
    if (edx_4 != ecx_4)
        ecx_5.b = eax_23 s< data_8b921c
    else
        ecx_5.b = eax_23 s>= data_8b9210
    
    return ecx_5
}
