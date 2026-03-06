// 函数名称: sub_4e9910
// 虚拟地址: 0x4e9910
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4e9910(int32_t* arg1, int32_t arg2, float* arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_28 = ecx
    void var_14
    sub_4e88f0(&var_14, arg1[4], arg1[3], fconvert.s(fconvert.t(arg1[1])))
    
    if (*(arg1 + 0x8d) != 0)
        float var_c_1 = fconvert.s(float.t(0))
    
    void* eax_1 = sub_4e7210(*arg1)
    sub_4e97f0(eax_1, &var_14, arg3, eax_1, arg2)
    int32_t result = arg1[0x1d]
    
    if (result s> 0 || arg1[0x23].b != 0)
        float* esi_5 = arg2 * 0x60 + arg1[0x1a]
        float var_8_1 = fconvert.s(float.t(result) / float.t(arg1[0x1c]))
        
        if (arg1[0x23].b != 0)
            var_8_1 = fconvert.s(float.t(1))
        
        if (esi_5[0x12] != 0)
            int32_t ecx_3
            int80_t st0_1
            st0_1, result, ecx_3 = sub_4e9480(arg3, esi_5)
            
            if (result.b == 0)
                int32_t var_28_3 = ecx_3
                return sub_4e9650(arg3, esi_5, fconvert.s(fconvert.t(var_8_1)))
    
    return result
}
