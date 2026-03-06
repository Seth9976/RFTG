// 函数名称: sub_4872a0
// 虚拟地址: 0x4872a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_4872a0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_693ccc
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = sub_4fc3d0(&data_be1cb8, arg1)
    bool cond:0 = (data_3165a98 & 1) != 0
    *(eax_3 + 0x2c) = sub_486d60
    
    if (not(cond:0))
        data_3165a98.d |= 1
        int32_t var_8_1 = 0
        data_3165a94 = sub_4f5220(data_307c1b8, "Name")
        int32_t var_8_2 = 0xffffffff
    
    int128_t* eax_7 = sub_4f6e90(data_3165a94, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    int32_t ebx_1 = data_3165a94
    void* eax_9 = sub_4fc3d0(&data_be1cb8, arg1)
    int128_t* eax_10 = sub_4f6e90(ebx_1, eax_9, &data_83f3d3)
    void* ebx_3 = ebx_1 * 0x118 + *sub_4f4890(*(eax_9 + 4))
    
    if (*(eax_10 + 0x15c) == 0)
        sub_4fb4a0(ebx_3, eax_10)
    
    ebx_3.b = sub_40d210(&eax_7[0x16])
    
    if ((data_3165a98 & 2) == 0)
        data_3165a98.d |= 2
        int32_t var_8_3 = 1
        data_3165a90 = sub_4f5220(data_307c1b8, "BtnOK")
        int32_t var_8_4 = 0xffffffff
    
    ebx_3.b = ebx_3.b == 0
    int128_t* result = sub_4f6e90(data_3165a90, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    *(result + 0x23) = ebx_3.b
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
