// 函数名称: sub_47f570
// 虚拟地址: 0x47f570
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __fastcallsub_47f570(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_691bbe
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t var_14 = arg1
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = sub_4fc3d0(&data_be1cb8, arg1)
    bool cond:0 = (data_3165660 & 1) != 0
    *(eax_3 + 0x2c) = sub_47e150
    
    if (not(cond:0))
        data_3165660.d |= 1
        int32_t var_8_1 = 0
        data_316565c = sub_4f5220(data_307c174, "TxtVersion")
        int32_t var_8_2 = 0xffffffff
    
    char* edx = *(data_27e7fd0 + 0x10)
    int128_t* eax_7 = sub_4f6e90(data_316565c, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    *(eax_7 + 0x64) = *eax_7 + 1
    int32_t* result = sub_4c4590(edx)
    *(eax_7 + 0x151) = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
