// 函数名称: sub_4ba4f0
// 虚拟地址: 0x4ba4f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4ba4f0(int32_t arg1, void* arg2 @ esi)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6904cc
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t var_14 = arg1
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ebx
    ebx.b = arg1.b
    bool cond:0 = (data_31651b8 & 1) != 0
    *(arg2 + 0x4fc) = ebx.b
    char edx
    
    if (not(cond:0))
        data_31651b8.d |= 1
        int32_t var_8_1 = 0
        int32_t eax_4
        eax_4, edx = sub_4f5220(data_307c740, "animDlg")
        data_31651b4 = eax_4
        int32_t var_8_2 = 0xffffffff
    
    ebx.b = ebx.b == 0
    int32_t var_20 = ebx
    char edx_1 = sub_4fa4e0(*(arg2 + 0x18), data_31651b4, edx)
    
    if ((data_31651b8 & 2) == 0)
        data_31651b8.d |= 2
        int32_t var_8_3 = 1
        int32_t eax_6
        eax_6, edx_1 = sub_4f5220(data_307c740, "animBg")
        data_31651b0 = eax_6
        int32_t var_8_4 = 0xffffffff
    
    int32_t var_20_1 = ebx
    int32_t result = sub_4fa4e0(*(arg2 + 0x18), data_31651b0, edx_1)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
