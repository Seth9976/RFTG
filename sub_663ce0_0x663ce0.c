// 函数名称: sub_663ce0
// 虚拟地址: 0x663ce0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_663ce0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void var_2c
    void var_2c
    void arg_c
    __builtin_memcpy(&var_2c, &arg_c, 0x20)
    int32_t eax_1 = sub_6639a0(arg2)
    
    if (eax_1 == 0)
        return 1
    
    void* var_14
    
    if (eax_1 == 1)
        char const* const var_10_1 = "extreme cHRM chunk cannot be converted to tristimulus values"
        var_14 = arg1
        sub_664100(var_14, var_10_1)
        return 0
    
    char const* const var_10 = "internal error in png_XYZ_from_xy"
    var_14 = arg1
    sub_664320(var_14, var_10)
    noreturn
}
