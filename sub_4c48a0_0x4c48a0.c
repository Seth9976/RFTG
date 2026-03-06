// 函数名称: sub_4c48a0
// 虚拟地址: 0x4c48a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __stdcallsub_4c48a0(int32_t* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68cf59
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t var_14 = 0
    char* eax_4 = *arg1
    *arg2 = eax_4
    
    if (eax_4 != 0 && *eax_4 != 0)
        void* eax_6 = sub_4c4060(arg2)
        *(eax_6 + 4) += 1
    
    int32_t var_8_2 = 0
    char* const eax_7 = *arg3
    int32_t var_14_1 = 1
    
    if (eax_7 == 0)
        eax_7 = &data_83f3d3
    
    sub_4c4620(arg2, eax_7)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg2
}
