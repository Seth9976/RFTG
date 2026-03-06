// 函数名称: sub_5ab55d
// 虚拟地址: 0x5ab55d
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ab55d(int32_t* arg1, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: if (arg1 == 0x123)
    if (arg1 == 0x123)
        *arg2 = 0x5ab608
        return 1
    
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = nullptr
    int32_t (__convention("regparm")* var_28_1)(int32_t arg1, int32_t arg2, int32_t arg3, 
        EXCEPTION_RECORD* arg4, void* arg5, int32_t arg6) = sub_5ab634
    int32_t var_24_1 = __security_cookie ^ &ExceptionList
    int32_t var_20_1 = arg4
    int32_t* var_1c_1 = arg2
    int32_t var_18_1 = arg5
    int32_t var_14_1 = arg6
    int32_t var_10_1 = 0
    int32_t var_c_1 = 0
    int32_t var_8_1 = 0
    int32_t __saved_ebx
    int32_t* var_10_2 = &__saved_ebx
    int32_t __saved_ebp
    int32_t* var_c_2 = &__saved_ebp
    TEB* fsbase
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_3c_1 = 1
    int32_t* var_38 = arg1
    int32_t var_34_1 = arg3
    int32_t eax_11 = __getptd()[0x20]
    eax_11(*arg1, &var_38)
    
    if (var_8_1 == 0)
        fsbase->NtTib.ExceptionList = ExceptionList
    else
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = ExceptionList
        ExceptionList_1->Next = fsbase->NtTib.ExceptionList->Next
        fsbase->NtTib.ExceptionList = ExceptionList_1
    
    return 0
}
