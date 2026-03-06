// 函数名称: sub_413e30
// 虚拟地址: 0x413e30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_413e30()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69305c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_3
    int80_t result
    result, eax_3 = sub_4f6f00(data_307c550)
    void* entry_ebx
    *(entry_ebx + 8) = eax_3
    void* eax_4 = sub_4fc3d0(&data_be1cb8, eax_3)
    bool cond:0 = (data_31658f0 & 1) != 0
    *(eax_4 + 0x2c) = Concurrency::details::_Micro_queue::_Pop_finalizer::~_Pop_finalizer
    
    if (not(cond:0))
        data_31658f0.d |= 1
        int32_t var_8_1 = 0
        data_31658ec = sub_4f5220(data_307c550, "tblGamesYours")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_31658f0 & 2) == 0)
        data_31658f0.d |= 2
        int32_t var_8_3 = 1
        data_31658e8 = sub_4f5220(data_307c550, "tblGamesOpen")
        int32_t var_8_4 = 0xffffffff
    
    int128_t* eax_9 = sub_4f6e90(data_31658ec, sub_4fc3d0(&data_be1cb8, *(entry_ebx + 8)), &data_83f3d3)
    int32_t edi_2 = data_31658e8
    *(eax_9 + 0x11c) = sub_413ac0
    *(sub_4f6e90(edi_2, sub_4fc3d0(&data_be1cb8, *(entry_ebx + 8)), &data_83f3d3) + 0x11c) = sub_413a00
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
