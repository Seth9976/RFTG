// 函数名称: sub_5d6450
// 虚拟地址: 0x5d6450
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d6450(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: int32_t ebx = arg7
    int32_t ebx = arg7
    
    if (ebx == 0)
        void* const __saved_esi = &data_6b641c
        sub_5cce60("Parameter '%s' is invalid")
        return 0xffffffff
    
    if (arg8 == 0)
        char const* const __saved_esi_1 = "dst_pitch"
        sub_5cce60("Parameter '%s' is invalid")
        return 0xffffffff
    
    if (arg3 != arg6)
        void var_194
        void var_13c
        void var_e4
        void var_b8
        void var_8c
        void var_50
        
        if (sub_5d63b0(arg2, arg1, arg3, &var_8c, &var_13c, arg1, arg2, arg4, arg5, &var_e4) != 0
                && sub_5d63b0(&var_b8, arg1, arg6, &var_50, &var_194, arg1, arg2, ebx, arg8, &var_b8)
                != 0)
            int32_t var_14 = 0
            int32_t var_10 = 0
            int32_t var_c = arg1
            int32_t var_8 = arg2
            return sub_5d5ff0(&var_8c, &var_14, &var_50, &var_14)
        
        return 0xffffffff
    
    int32_t ecx_1
    
    if (arg3 == 0 || (arg3 & 0xf0000000) == 0x10000000)
        ecx_1 = arg3 & 0xff
    else
        bool cond:1_1
        
        if (arg3 u> 0x55595659)
            if (arg3 != 0x56555949)
                cond:1_1 = arg3 == 0x59565955
            label_5d64dd:
                
                if (not(cond:1_1))
                    sub_5cce60("Unknown FOURCC pixel format")
                    return 0xffffffff
        else if (arg3 != 0x55595659 && arg3 != 0x32315659)
            cond:1_1 = arg3 == 0x32595559
            goto label_5d64dd
        ecx_1 = 2
    
    int32_t i = arg2
    
    if (i s> 0)
        int32_t edi_1 = arg4
        
        do
            int32_t var_1a4_1 = ecx_1 * arg1
            int32_t var_1a8_1 = edi_1
            int32_t var_1ac_1 = ebx
            i -= 1
            sub_5cd110()
            edi_1 += arg5
            ebx += arg8
        while (i s> 0)
    
    return 0
}
