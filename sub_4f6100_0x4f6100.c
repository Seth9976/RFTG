// 函数名称: sub_4f6100
// 虚拟地址: 0x4f6100
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4f6100(int32_t* arg1, int32_t arg2, float arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    int32_t var_9c = eax
    int32_t ecx
    int32_t var_a0 = ecx
    void var_48
    int32_t edx
    __builtin_memcpy(&var_48, sub_4f62d0(arg2, fconvert.s(fconvert.t(arg3)), edx), 0x40)
    int32_t eax_3 = sub_4f4890(arg1)
    int32_t arg_c
    int32_t edi = arg_c
    float* esi_4 = arg2 * 0x118 + *eax_3
    int32_t* ecx_2
    
    if (edi != 3)
        if (edi == 2)
            ecx_2 = esi_4[0x39]
            goto label_4f616f
        
        if (edi == 1)
            ecx_2 = esi_4[0x38]
            goto label_4f616f
        
    label_4f6173:
        ecx_2 = esi_4[0x1a]
        
        if (ecx_2 != 0)
            sub_4f67d0(eax_3, nullptr, ecx_2, esi_4, &data_be1ae0, &var_48, nullptr, nullptr)
    else
        ecx_2 = esi_4[0x3a]
    label_4f616f:
        
        if (ecx_2 == 0)
            goto label_4f6173
        
        sub_4f67d0(eax_3, nullptr, ecx_2, esi_4, &data_be1ae0, &var_48, nullptr, nullptr)
    int32_t* ecx_3 = arg4
    
    if (ecx_3 == 0)
        ecx_3 = esi_4[0x37]
        
        if (ecx_3 != 0)
            goto label_4f61a3
        
        return 
    
    label_4f61a3:
    
    if (*ecx_3 == 0)
        return 
    
    void* eax_4 = &esi_4[0x3b]
    
    if (edi != 3)
        eax_4 = &esi_4[0x2e]
    
    arg_c = *eax_4
    void* eax_6 = &esi_4[0x3c]
    
    if (edi != 3)
        eax_6 = &esi_4[0x2f]
    
    int32_t var_9c_1 = 0
    int32_t* var_a0_2 = &arg2
    arg2 = *eax_6
    int32_t* var_a4_2 = &arg_c
    sub_4f4bd0(&arg2, &arg_c, &var_48, esi_4, ecx_3)
}
