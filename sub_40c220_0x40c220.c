// 函数名称: sub_40c220
// 虚拟地址: 0x40c220
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_40c220(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6916ac
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_14 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_3165548 & 1) == 0)
        data_3165548.d |= 1
        int32_t var_8_1 = 0
        data_3165544 = sub_4f5220(data_307c1c4, "btnFriend")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_3165548 & 2) == 0)
        data_3165548.d |= 2
        int32_t var_8_3 = 1
        data_3165540 = sub_4f5220(data_307c1c4, "btnTrash")
        int32_t var_8_4 = 0xffffffff
    
    if (arg2 == data_3165544)
        fsbase->NtTib.ExceptionList = ExceptionList
        return *(arg1 + 4) + 0xa
    
    if (arg2 == data_3165540)
        fsbase->NtTib.ExceptionList = ExceptionList
        return *(arg1 + 4) + 0x1b
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\GameSetupDlg.cpp", 0x9a, "FriendTableClick")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
