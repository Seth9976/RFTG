// 函数名称: sub_5c60d0
// 虚拟地址: 0x5c60d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c60d0(int32_t* arg1, int32_t* arg2, int32_t* arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: switch (arg6)
    switch (arg6)
        case 0
            if (sub_5c5fd0(arg2, arg1) s< 0)
                return 0xffffffff
            
            return 0
        case 1
            int32_t result
            int32_t ecx_3
            int32_t edx_3
            result, ecx_3, edx_3 = zip_source_read(arg1, arg3, arg4, arg5)
            
            if (edx_3 s<= 0 && (edx_3 s< 0 || result u< 0))
                sub_5bf050(arg2, arg1)
                return 0xffffffff
            
            sub_5c5f10(result, edx_3.w, ecx_3, arg2, arg3, arg3, result, edx_3, 0)
            return result
        case 2
            return 0
        case 3
            *arg3 |= 0x80
            int32_t edx_7 = arg3[1]
            *(arg3 + 0x36) = 0
            int32_t ecx_5 = *arg3
            arg3[1] = edx_7
            
            if ((ecx_5 & 8) != 0)
                int32_t temp1_1 = arg3[8]
                arg3[8] -= 0xc
                arg3[9] = adc.d(arg3[9], 0xffffffff, temp1_1 u>= 0xc)
            
            return 0
        case 4
            return zip_error_to_data(arg2, arg3, arg4, arg5)
        case 5
            __free_base(arg2)
            return 0
        case 0xe
            int32_t __saved_ebx = 0xffffffff
            int32_t __saved_esi = 5
            int32_t var_14_2 = 4
            int32_t var_18_3 = 3
            int32_t var_1c_2 = 2
            return zip_source_make_command_bitmap(0, 1)
    
    zip_error_set(arg2, 0x12, 0)
    return 0xffffffff
}
