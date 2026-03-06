// 函数名称: sub_4bb770
// 虚拟地址: 0x4bb770
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_4bb770(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?do_get@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MBE?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AAVios_base@2@AAHPAUtm@@DD@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_ec = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ecx_1 = arg2 & 0x80000003
    
    if (ecx_1 s< 0)
        ecx_1 = ((ecx_1 - 1) | 0xfffffffc) + 1
    
    int32_t eax_4
    int32_t edx
    edx:eax_4 = sx.q(arg2)
    int32_t var_14 = (eax_4 + (edx & 3)) s>> 2
    int32_t var_18 = ecx_1
    
    if ((data_31656d0 & 1) == 0)
        data_31656d0.d |= 1
        int32_t var_8_1 = 0
        data_31656cc = sub_4f5220(data_307c624, "tblAvatar")
        int32_t var_8_2 = 0xffffffff
    
    void var_9c
    int32_t eax_9
    int80_t st0
    st0, eax_9 = sub_40a930(&var_9c)
    long double x87_r6 = fconvert.t(*(arg1 + 0xc))
    int32_t* edx_3 = data_307c624
    void var_5c
    int32_t var_f8 = __builtin_memcpy(&var_5c, eax_9, 0x40)
    void var_dc
    int32_t eax_10
    int80_t result
    result, eax_10 =
        sub_4f66d0(&var_dc, edx_3, data_31656cc, &var_18, fconvert.s(x87_r6), nullptr, nullptr)
    int32_t entry_ebx
    __builtin_memcpy(entry_ebx, eax_10, 0x40)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
