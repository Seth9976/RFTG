// 函数名称: sub_5ac7b4
// 虚拟地址: 0x5ac7b4
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_5ac7b4(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4 @ ebp, int32_t arg5 @ esi, int32_t arg6 @ edi) __noreturn
{
    // 第一条实际指令: bool p = unimplemented  {sub esp, 0x328}
    bool p = unimplemented  {sub esp, 0x328}
    bool a = unimplemented  {sub esp, 0x328}
    data_bec708 = arg1
    data_bec704 = arg3
    data_bec700 = arg2
    int32_t entry_ebx
    data_bec6fc = entry_ebx
    data_bec6f8 = arg5
    data_bec6f4 = arg6
    int16_t ss
    data_bec720 = ss
    int16_t cs
    data_bec714 = cs
    int16_t ds
    data_bec6f0 = ds
    int16_t es
    data_bec6ec = es
    int16_t fs
    data_bec6e8 = fs
    int16_t gs
    data_bec6e4 = gs
    int32_t var_32c
    int32_t var_4
    bool d
    int32_t var_330 = (add_overflow(&var_4, 0xfffffcd8) ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa
        | (&var_32c s< 0 ? 1 : 0) << 7 | (&var_4 == 0x328 ? 1 : 0) << 6 | (a ? 1 : 0) << 4
        | (p ? 1 : 0) << 2 | (&var_4 u< 0x328 ? 1 : 0)
    data_bec718 = var_330
    data_bec70c = arg4
    data_bec710 = __return_addr
    void arg_4
    data_bec71c = &arg_4
    data_bec658 = 0x10001
    data_bec60c = data_bec710
    data_bec600 = 0xc0000409
    data_bec604 = 1
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_328 = data_8b84a4
    data_bec650 = IsDebuggerPresent()
    sub_5b8ca0()
    SetUnhandledExceptionFilter(0)
    UnhandledExceptionFilter(&data_6b0ca4)
    
    if (data_bec650 == 0)
        sub_5b8ca0()
    
    TerminateProcess(GetCurrentProcess(), 0xc0000409)
    noreturn
}
