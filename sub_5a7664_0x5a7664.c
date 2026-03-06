// 函数名称: sub_5a7664
// 虚拟地址: 0x5a7664
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5a7664()
{
    // 第一条实际指令: int32_t eax = sub_5accf7()
    int32_t eax = sub_5accf7()
    ___set_app_type(eax)
    __initp_misc_purevirt(eax)
    __set_pgmptr(eax)
    __initp_misc_invarg(eax)
    ___acrt_initialize_signal_handlers(eax)
    int32_t var_1c = eax
    return __initp_eh_hooks()
}
