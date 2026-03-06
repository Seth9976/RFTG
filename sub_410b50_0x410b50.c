// 函数名称: sub_410b50
// 虚拟地址: 0x410b50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_410b50(int32_t arg1 @ esi)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6914ce
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_14 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_31654ec & 1) == 0)
        data_31654ec.d |= 1
        int32_t var_8_1 = 0
        int32_t eax_4 = sub_4f5220(data_307c190, "btn_expansionPromoOwned")
        int32_t* ecx_1 = data_307c190
        data_315f920 = eax_4
        int32_t eax_5 = sub_4f5220(ecx_1, "btnExp1Owned")
        int32_t* edx_1 = data_307c190
        data_315f924 = eax_5
        data_315f928 = sub_4f5220(edx_1, "btnExp2Owned")
        int32_t eax_8 = sub_4f5220(data_307c190, "btnExp3Owned")
        int32_t* ecx_2 = data_307c190
        data_315f92c = eax_8
        int32_t eax_9 = sub_4f5220(ecx_2, "btnExpAlienOwned")
        int32_t* edx_2 = data_307c190
        data_315f930 = eax_9
        data_315f934 = sub_4f5220(edx_2, "btnExpXenoOwned")
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return *((arg1 << 2) + &data_315f91c)
}
