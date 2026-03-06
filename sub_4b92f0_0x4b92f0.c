// 函数名称: sub_4b92f0
// 虚拟地址: 0x4b92f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4b92f0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) =
        __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@QAE@XZ
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_18 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = data_307c748
    
    if ((data_31651c4 & 1) == 0)
        data_31651c4.d |= 1
        int32_t var_8_1 = 0
        data_31651c0 = sub_4f5220(esi, "BtnBack")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_31651c4 & 2) == 0)
        data_31651c4.d |= 2
        int32_t var_8_3 = 1
        data_31651bc = sub_4f5220(esi, "btnRestore")
    
    if (arg1 == data_31651c0)
        data_307d96c = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    if (arg1 == data_31651bc && data_be1cd8 == 4)
        sub_4c5680("GameCenterQueryDLC")
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
