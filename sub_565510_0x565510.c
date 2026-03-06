// 函数名称: sub_565510
// 虚拟地址: 0x565510
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __stdcallsub_565510(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$??0system_error@std@@QAE@HABVerror_category@1@PBD@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_18 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 1
    sub_568260(&arg1[6])
    var_8_1.b = 0
    sub_567fd0(&arg1[3])
    int32_t var_8_2 = 0xffffffff
    int32_t* result = sub_567d40(arg1)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
