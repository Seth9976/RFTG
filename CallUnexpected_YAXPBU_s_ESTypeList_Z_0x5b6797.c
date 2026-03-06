// 函数名称: ?CallUnexpected@@YAXPBU_s_ESTypeList@@@Z
// 虚拟地址: 0x5b6797
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void?CallUnexpected@@YAXPBU_s_ESTypeList@@@Z() __noreturn
{
    // 第一条实际指令: int32_t var_4 = 4
    int32_t var_4 = 4
    int32_t (* var_c)(void* arg1) = __ehhandler$??2@YAPAXIW4align_val_t@std@@ABUnothrow_t@1@@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ebp
    var_4 = ebp
    int32_t var_24 = __security_cookie ^ &var_4
    int32_t* var_14 = &var_24
    void* const var_28 = &data_5b67a3
    int32_t var_8_1 = 0xffffffff
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (__getptd()[0x25] != 0)
        _inconsistency()
        noreturn
    
    int32_t var_8 = 0
    unexpected()
    noreturn
}
