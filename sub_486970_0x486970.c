// 函数名称: sub_486970
// 虚拟地址: 0x486970
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_486970()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6965bc
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t result = data_307d9c8
    int32_t entry_ebx
    data_307d9c8 = entry_ebx
    sub_4075c0()
    void* eax_3 = sub_4fc3d0(&data_be1cb8, entry_ebx)
    bool cond:0 = (data_31661c4 & 1) != 0
    *(eax_3 + 0x2c) = sub_486650
    
    if (not(cond:0))
        data_31661c4.d |= 1
        int32_t var_8_1 = 0
        data_31661c0 = sub_4f5220(data_307ca58, "tblGamesYours")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_31661c4 & 2) == 0)
        data_31661c4.d |= 2
        int32_t var_8_3 = 1
        data_31661bc = sub_4f5220(data_307ca58, "tblGamesOpen")
        int32_t var_8_4 = 0xffffffff
    
    int128_t* eax_7 = sub_4f6e90(data_31661bc, sub_4fc3d0(&data_be1cb8, entry_ebx), &data_83f3d3)
    int32_t edi_2 = data_31661c0
    *(eax_7 + 0x11c) = sub_4865a0
    int128_t* eax_9
    int32_t edx_2
    eax_9, edx_2 = sub_4f6e90(edi_2, sub_4fc3d0(&data_be1cb8, entry_ebx), &data_83f3d3)
    int32_t* ecx_2 = data_307ca58
    *(eax_9 + 0x11c) = sub_486270
    sub_4152a0(eax_9, edx_2, ecx_2, &data_307d9c0)
    sub_407670()
    data_307d9c8 = result
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
