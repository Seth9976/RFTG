// 函数名称: sub_512fa0
// 虚拟地址: 0x512fa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_512fa0(void* arg1 @ esi, char** arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68ccb9
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_24 = arg3
    int32_t var_8_1 = 0
    int32_t var_14_1 = 0
    sub_4c4a50(arg2, "samplerFn_%s")
    int32_t var_8_2 = 0
    int32_t eax_4 = *(arg1 + 0x104)
    *(arg1 + 0x104) = eax_4 + 1
    *(arg1 + (*(arg1 + 0x148) << 2) + 0x108) = eax_4
    *(arg1 + 0x148) += 1
    int32_t var_14_2 = 1
    sub_4c4510(arg2)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg2
}
