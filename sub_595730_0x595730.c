// 函数名称: sub_595730
// 虚拟地址: 0x595730
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_595730(int32_t* arg1, int32_t arg2, uint32_t* arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: if (sub_598c10(arg3) != 0)
    if (sub_598c10(arg3) != 0)
        return sub_598bd0(arg4, arg3)
    
    int32_t eax_2 = sub_599c80(arg3)
    int32_t* ecx_1 = arg3[0x2c]
    arg3[0x2a] = ecx_1
    
    if (eax_2 != 0)
        int32_t* var_2c_1 = arg5
        int32_t* var_30 = arg4
        uint32_t* var_18 = arg3
        return sub_59b6c0(arg1, &var_18, arg5, ecx_1)
    
    int32_t eax_7 = sub_59b730(arg3)
    arg3[0x2a] = arg3[0x2c]
    
    if (eax_7 != 0)
        return sub_59b930(eax_7, arg1, arg5, arg3, arg4)
    
    int32_t eax_9 = sub_59e540(arg3)
    arg3[0x2a] = arg3[0x2c]
    
    if (eax_9 != 0)
        return sub_59f9c0(arg3, arg5)
    
    uint32_t eax_11 = sub_5959c0(arg3)
    uint32_t eax_12 = sub_5959c0(arg3)
    uint32_t* edx_5 = arg3[0x2c]
    int32_t eax_15
    eax_15.b = eax_12 + (eax_11 << 0x10) == 0x38425053
    arg3[0x2a] = edx_5
    
    if (eax_15 != 0)
        int32_t* var_2c_4 = arg1
        int32_t* var_30_1 = arg5
        return sub_59d630(arg3, edx_5, arg4, arg4)
    
    int32_t eax_20 = sub_59dbc0(arg3)
    void** edx_6 = arg3[0x2c]
    arg3[0x2a] = edx_6
    
    if (eax_20 != 0)
        int32_t* var_2c_5 = arg1
        int32_t* var_30_2 = arg5
        return sub_59e3e0(arg3, edx_6, arg4, arg4)
    
    int32_t eax_25 = sub_59faf0(arg3)
    
    if (eax_25 != 0)
        float* eax_26
        int32_t ecx_11
        int16_t x87control
        eax_26, ecx_11, x87control = sub_59fde0(eax_25, arg1, arg5, arg3, arg4)
        int32_t edx_8 = *arg5
        int32_t var_34_2 = *arg1
        int32_t var_38 = edx_8
        return sub_596010(*arg4, x87control, edx_8, eax_26, ecx_11)
    
    int32_t eax_30 = sub_59cb90(arg3)
    uint32_t* ecx_12 = arg3[0x2c]
    arg3[0x2a] = ecx_12
    
    if (eax_30 == 0)
        data_273ac1c = "unknown image type"
        return 0
    
    uint32_t* edx_9 = arg5
    int32_t* var_2c_7 = arg1
    uint32_t* var_30_4 = edx_9
    return sub_59ce10(arg3, edx_9, ecx_12, arg4)
}
