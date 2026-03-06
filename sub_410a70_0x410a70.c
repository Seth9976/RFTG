// 函数名称: sub_410a70
// 虚拟地址: 0x410a70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_410a70(int32_t arg1 @ esi)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6914fe
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_14 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_31654f0 & 1) == 0)
        data_31654f0.d |= 1
        int32_t var_8_1 = 0
        int32_t eax_4 = sub_4f5220(data_307c190, "btn_expansionPromoUnowned")
        int32_t* ecx_1 = data_307c190
        data_315f904 = eax_4
        int32_t eax_5 = sub_4f5220(ecx_1, "btnExp1")
        int32_t* edx_1 = data_307c190
        data_315f908 = eax_5
        data_315f90c = sub_4f5220(edx_1, "btnExp2")
        int32_t eax_8 = sub_4f5220(data_307c190, "btnExp3")
        int32_t* ecx_2 = data_307c190
        data_315f910 = eax_8
        int32_t eax_9 = sub_4f5220(ecx_2, "btnExpAlien")
        int32_t* edx_2 = data_307c190
        data_315f914 = eax_9
        data_315f918 = sub_4f5220(edx_2, "btnExpXeno")
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return *((arg1 << 2) + &data_315f900)
}
