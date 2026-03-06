// 函数名称: sub_552070
// 虚拟地址: 0x552070
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_552070(int32_t* arg1, void* arg2, int32_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t esi = *(arg2 + 4)
    int32_t esi = *(arg2 + 4)
    
    if (esi == 0)
        esi = arg3[4]
    
    *arg1 = arg3[1]
    int32_t edx = arg3[2]
    arg1[3] = 1
    arg1[0xd] = 1
    arg1[1] = edx
    int32_t* eax_2
    int32_t edx_1
    eax_2, edx_1 = sub_4cce80(8)
    *eax_2 = 0
    eax_2[1] = 0
    arg1[1]
    arg1[0xf] = eax_2
    arg1[6] = 0
    int32_t ecx_1 = *arg1
    arg1[4] = 8
    arg1[5] = esi
    int32_t eax_4 = sub_554170(esi, edx_1, ecx_1)
    int32_t* ebx_1 = arg1[0xf]
    *ebx_1 = eax_4
    int32_t result
    int16_t x87control
    
    if (arg3[4] != esi || arg5 == 2)
        int32_t eax_7 = sub_4cce80(eax_4)
        ebx_1[1] = eax_7
        int32_t ecx_3 = arg1[1]
        int32_t var_1c = eax_7
        int32_t eax_8 = *arg1
        int32_t var_18_1 = eax_8
        int32_t var_14_1 = ecx_3
        int32_t var_10_1 = sub_5540b0(esi, eax_8)
        int32_t var_c_1 = esi
        sub_554750(&var_1c)
        
        if (arg5 != 2)
            sub_550ba0(x87control, &var_1c)
        
        result = *arg3
        
        if (result != 0)
            _aligned_free_base(result)
        
        *arg3 = 0
    else
        ebx_1[1] = *arg3
        int80_t st0_1
        st0_1, result = sub_550ba0(x87control, arg3)
    
    if (*(arg2 + 8) == 0)
        int32_t var_2c_4 = arg4
        sub_4c5680("Autogeneration of mipmaps is not implemented for %s")
    
    result.b = 1
    return result
}
