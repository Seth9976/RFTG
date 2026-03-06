// 函数名称: zip_source_seek
// 虚拟地址: 0x5c1280
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tzip_source_seek(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (arg1[0xa].b == 0)
        if (arg1[8] u<= 0 || (arg4 != 0 && arg4 != 1 && arg4 != 2))
            zip_error_set(&arg1[3], 0x12, 0)
        else
            int32_t var_10_1 = arg4
            int32_t var_18 = arg2
            int32_t var_14_1 = arg3
            int32_t eax_3
            int32_t edx_3
            eax_3, edx_3 = sub_5c2f90(arg1, &var_18, 0x10, 0, 6)
            
            if (edx_3 s> 0)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return 0
            
            if (edx_3 s>= 0 && eax_3 u>= 0)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return 0
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0xffffffff
}
