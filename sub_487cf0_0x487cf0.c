// 函数名称: sub_487cf0
// 虚拟地址: 0x487cf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_487cf0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69058a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_14 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* edx
    
    if ((data_31651c8 & 1) == 0)
        data_31651c8.d |= 1
        int32_t var_8_1 = 0
        char const* const var_18_1 = "ui_opponent_left"
        int32_t eax_4
        char* edx_1
        eax_4, edx_1 = sub_510710(data_307ca78, edx)
        data_bebff4 = eax_4
        char const* const var_18_2 = "ui_opponent_middle"
        int32_t eax_6
        char* edx_2
        eax_6, edx_2 = sub_510710(data_307ca78, edx_1)
        data_bebff8 = eax_6
        char const* const var_18_3 = "ui_opponent_right"
        int32_t eax_8
        eax_8, edx = sub_510710(data_307ca78, edx_2)
        data_bebffc = eax_8
        int32_t var_8_2 = 0xffffffff
    
    if ((data_31651c8 & 2) == 0)
        data_31651c8.d |= 2
        int32_t var_8_3 = 1
        char const* const var_18_4 = "ui_opponent_left"
        int32_t eax_10
        char* edx_3
        eax_10, edx_3 = sub_510710(data_307ca78, edx)
        data_bec004 = eax_10
        char const* const var_18_5 = "ui_opponent_right"
        int32_t eax_12
        eax_12, edx = sub_510710(data_307ca78, edx_3)
        data_bec008 = eax_12
        int32_t var_8_4 = 0xffffffff
    
    if ((data_31651c8 & 4) == 0)
        data_31651c8.d |= 4
        int32_t var_8_5 = 2
        char const* const var_18_6 = "ui_opponent_middle"
        data_bec010 = sub_510710(data_307ca78, edx)
        int32_t var_8_6 = 0xffffffff
    
    int32_t result = *(*((arg2 << 2) + &data_bec014) + (arg1 << 2))
    
    if (result != 0xffffffff)
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    sub_4c5870("retval != -1", &data_83f3d3, "..\code\RftGVR.cpp", 0x182c, "OpponentUIIdx")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
