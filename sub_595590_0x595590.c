// 函数名称: sub_595590
// 虚拟地址: 0x595590
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_595590(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: uint32_t var_c
    uint32_t var_c
    uint32_t var_8
    char eax_1
    int32_t edx
    eax_1, edx = sub_595130(arg4, arg2, &var_c, arg3, &var_8)
    
    if (eax_1 == 0)
        return eax_1
    
    uint32_t esi = var_8
    
    if (esi != 0xc)
        uint32_t var_10
        var_8 = sub_5540b0(esi, var_10)
        int32_t eax_5 = sub_554170(esi, edx, var_10)
        uint32_t edx_1 = var_c
        uint32_t ecx_2 = var_8
        arg4[1] = var_10
        arg4[2] = edx_1
        arg4[4] = esi
        arg4[3] = ecx_2
        int32_t eax_6 = sub_4cce80(eax_5)
        *arg4 = eax_6
        int32_t* eax_7 = sub_5a898b(arg3, "rb")
        
        if (eax_7 == 0)
            int32_t* var_28_1 = arg3
            sub_4c5680("failed to open tga file: %s")
            int32_t eax_8
            eax_8.b = 0
            return eax_8
        
        if (sub_595320(eax_7, var_10, var_c, arg3, eax_6, var_8, eax_7) != 0)
            return 1
    else
        int32_t* var_28 = arg3
        sub_4c5680("We don't currently support palletized textures '%s'")
    
    return 0
}
