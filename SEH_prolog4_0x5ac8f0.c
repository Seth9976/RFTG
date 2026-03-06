// 函数名称: __SEH_prolog4
// 虚拟地址: 0x5ac8f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void__SEH_prolog4(int32_t arg1 @ esi, int32_t arg2 @ edi, void* arg3)
{
    // 第一条实际指令: int32_t (* var_4)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    int32_t (* var_4)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t arg_8
    int32_t eax = arg_8
    int32_t ebp
    arg_8 = ebp
    void* esp = &ExceptionList - eax
    int32_t entry_ebx
    *(esp - 4) = entry_ebx
    *(esp - 8) = arg1
    *(esp - 0xc) = arg2
    uint32_t __security_cookie_1 = __security_cookie
    *(esp - 0x10) = __security_cookie_1 ^ &arg_8
    void* var_10 = esp - 0x10
    *(esp - 0x14) = __return_addr
    void* __return_addr_1 = arg3 ^ __security_cookie_1
    arg3 = 0xfffffffe
    __return_addr = __return_addr_1
    fsbase->NtTib.ExceptionList = &ExceptionList
}
