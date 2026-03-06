// 函数名称: sub_47dfc0
// 虚拟地址: 0x47dfc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_47dfc0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6908ee
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_18 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* eax_3 = data_307c748
    
    if ((data_3165264 & 1) == 0)
        data_3165264.d |= 1
        int32_t var_8_1 = 0
        data_3165260 = sub_4f5220(eax_3, "BtnBack")
    
    if (arg1 == data_3165260)
        data_30d6f38 = data_307c76c
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
