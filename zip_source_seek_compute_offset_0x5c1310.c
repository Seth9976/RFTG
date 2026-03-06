// 函数名称: zip_source_seek_compute_offset
// 虚拟地址: 0x5c1310
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tzip_source_seek_compute_offset(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t* arg5, int32_t arg6, int32_t arg7, int32_t* arg8)
{
    // 第一条实际指令: if (arg7 u<= 0 && (arg7 u< 0 || arg6 u< 0x10))
    if (arg7 u<= 0 && (arg7 u< 0 || arg6 u< 0x10))
        zip_error_set(arg8, 0x12, 0)
        return 0xffffffff
    
    if (arg5 == 0)
        return 0xffffffff
    
    int32_t eax_1 = arg5[2]
    int32_t result
    int32_t edx_4
    
    if (eax_1 == 0)
        result = *arg5
        edx_4 = arg5[1]
    else if (eax_1 == 1)
        int32_t eax_6 = *arg5
        result = eax_6 + arg1
        edx_4 = adc.d(arg5[1], arg2, eax_6 + arg1 u< eax_6)
    else
        if (eax_1 != 2)
            zip_error_set(arg8, 0x12, 0)
            return 0xffffffff
        
        int32_t eax_5 = *arg5
        result = eax_5 + arg3
        edx_4 = adc.d(arg5[1], arg4, eax_5 + arg3 u< eax_5)
    
    if (edx_4 s< 0)
        zip_error_set(arg8, 0x12, 0)
        result = 0xffffffff
    else if (edx_4 s> 0)
        if (edx_4 u<= arg4)
            goto label_5c139c
        
        zip_error_set(arg8, 0x12, 0)
        result = 0xffffffff
    else if (result u< 0 || edx_4 u> arg4)
        zip_error_set(arg8, 0x12, 0)
        result = 0xffffffff
    else
    label_5c139c:
        
        if (edx_4 u>= arg4 && result u> arg3)
            zip_error_set(arg8, 0x12, 0)
            result = 0xffffffff
    
    return result
}
