// 函数名称: sub_43acf0
// 虚拟地址: 0x43acf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_43acf0(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, float arg5)
{
    // 第一条实际指令: int32_t* var_c
    int32_t* var_c
    
    if (sub_419400(&var_c) != 0 && *var_c != 0x47)
        *(sub_4f6e90(arg1, sub_4fc3d0(&data_be1cb8, arg4), &data_83f3d3) + 0x22) = 1
        int32_t var_20_1 = 1
        return sub_4fa4e0(arg4, arg5, arg5.b)
    
    void* result = data_27e7a40
    int32_t esi_2 = *(result + 0x74)
    
    if (esi_2 == 0xffffffff)
        return result
    
    void* eax_5 = sub_46b2b0(esi_2)
    int32_t ecx_1
    
    if (*(eax_5 + 0xaa2) == 0 && *(eax_5 + 0xaa1) == 0 && *(eax_5 + 0xaa0) == 0
            && *(eax_5 + 0x550) == 0)
        ecx_1 = *(eax_5 + 0x1c)
    
    char var_5_1
    void* ebx
    
    if (*(eax_5 + 0xaa2) == 0 && *(eax_5 + 0xaa1) == 0 && *(eax_5 + 0xaa0) == 0 && *(eax_5 + 0x550) == 0
            && (ecx_1 != 0xd || *(eax_5 + 0xa94) == 0) && (ecx_1 != 0x1b || *(eax_5 + 0xa94) == 0)
            && ecx_1 != 2)
        var_5_1 = 0
        ebx.b = 1
    else
        var_5_1 = 1
        
        if (*(arg3 + 0x2c079) != 0 || *(arg3 + 0x2c07a) != 0)
            ebx.b = 1
        else
            ebx.b = 0
    
    *(sub_4f6e90(arg1, sub_4fc3d0(&data_be1cb8, arg4), &data_83f3d3) + 0x22) = ebx.b
    uint32_t edx_1 = zx.d(var_5_1 == 0)
    uint32_t var_20_2 = edx_1
    return sub_4fa4e0(arg4, arg5, edx_1.b)
}
