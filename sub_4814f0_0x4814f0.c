// 函数名称: sub_4814f0
// 虚拟地址: 0x4814f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4814f0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6959ce
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_3165f9c & 1) == 0)
        data_3165f9c.d |= 1
        int32_t var_8_1 = 0
        data_3165f98 = sub_4f5220(data_307c1c0, "tblFriends")
        int32_t var_8_2 = 0xffffffff
    
    int32_t entry_ebx
    *(sub_4f6e90(data_3165f98, sub_4fc3d0(&data_be1cb8, entry_ebx), &data_83f3d3) + 0x11c) = sub_4812a0
    *(sub_4fc3d0(&data_be1cb8, entry_ebx) + 0x2c) = sub_4810a0
    bool cond:0 = data_30d7278 == 0
    int32_t esi_3 = data_307cd44
    data_307cd44 = entry_ebx
    
    if (cond:0)
        data_307d080 = 4
        data_307cd3c = 1
    else
        data_307cd3c = 0
    
    int32_t result = sub_40d9a0(&data_307cd0c)
    data_307cd44 = esi_3
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
