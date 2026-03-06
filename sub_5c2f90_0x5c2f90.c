// 函数名称: sub_5c2f90
// 虚拟地址: 0x5c2f90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c2f90(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t eax_1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(1 << arg5.b)
    int32_t eax_3 = (eax_1 & arg1[6]) | (edx & arg1[7])
    
    if (eax_3 == 0)
        zip_error_set(&arg1[3], 0x1c, eax_3)
        return 0xffffffff
    
    int32_t eax_4 = *arg1
    int32_t result
    int32_t edx_4
    
    if (eax_4 != 0)
        result, edx_4 = arg1[1](eax_4, arg1[2], arg2, arg3, arg4, arg5)
    else
        result, edx_4 = arg1[1](arg1[2], arg2, arg3, arg4, arg5)
    
    int32_t var_8 = edx_4
    
    if (edx_4 s<= 0 && (edx_4 s< 0 || result u< 0) && arg5 != 4 && arg5 != 0xe)
        int32_t var_14
        int32_t eax_7
        int32_t edx_8
        eax_7, edx_8 = sub_5c2f90(arg1, &var_14, 8, 0, 4)
        int32_t var_28_3
        int32_t var_24_1
        
        if (edx_8 s> 0 || (edx_8 s>= 0 && eax_7 u>= 0))
            int32_t var_10
            var_24_1 = var_10
            var_28_3 = var_14
        else
            var_24_1 = 0
            var_28_3 = 0x14
        
        zip_error_set(&arg1[3], var_28_3, var_24_1)
    
    return result
}
