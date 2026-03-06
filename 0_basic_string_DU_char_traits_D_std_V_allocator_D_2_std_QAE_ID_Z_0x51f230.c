// 函数名称: ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@ID@Z
// 虚拟地址: 0x51f230
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@ID@Z()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68c9a8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* const var_14 = &data_83f3d3
    
    if (data_30785f2 != 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return "xbin/ios/"
    
    int32_t var_8_1 = 0xffffffff
    char* const* ecx_2 = &var_14
    
    if (data_30785f3 == 0)
        sub_4c43d0(ecx_2)
        fsbase->NtTib.ExceptionList = ExceptionList
        return "xbin/"
    
    sub_4c43d0(ecx_2)
    fsbase->NtTib.ExceptionList = ExceptionList
    return "xbin/web/"
}
