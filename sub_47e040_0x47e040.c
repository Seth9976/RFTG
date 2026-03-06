// 函数名称: sub_47e040
// 虚拟地址: 0x47e040
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_47e040(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6908bc
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_18 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = data_307c74c
    
    if ((data_316525c & 1) == 0)
        data_316525c.d |= 1
        int32_t var_8_1 = 0
        data_3165258 = sub_4f5220(esi, "btnBack")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_316525c & 2) == 0)
        data_316525c.d |= 2
        int32_t var_8_3 = 1
        data_3165254 = sub_4f5220(esi, "btnBuy")
        int32_t var_8_4 = 0xffffffff
    
    if (arg1 != data_3165258)
        int32_t ecx
        
        if (arg1 == data_3165254)
            sub_4fe1b0(sub_4b9560(ecx, data_307d9b8))
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    if (data_307d9bc == 0)
        data_30d6f38 = data_307c748
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    data_30d6f38 = data_307c16c
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
