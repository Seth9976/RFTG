// 函数名称: ??1_StructuredTaskCollection@details@Concurrency@@QAE@XZ
// 虚拟地址: 0x40a2a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**??1_StructuredTaskCollection@details@Concurrency@@QAE@XZ(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f1a0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_27c0600 == 0)
        struct _EXCEPTION_REGISTRATION_RECORD** eax_3
        eax_3.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_3
    
    int32_t var_2c = *(data_27e7a64 + 4)
    char* var_18
    sub_4c4a50(&var_18, "rftg-game-%d")
    int32_t var_8_1 = 0
    char* const ecx_3 = var_18
    
    if (ecx_3 == 0)
        ecx_3 = &data_83f3d3
    
    int32_t* eax_5 = data_27e7a64
    int32_t var_2c_1 = eax_5[1]
    char* const var_30 = ecx_3
    int32_t var_34_1 = arg1
    int32_t var_38 = *eax_5
    char* var_14
    char* edx_2 =
        sub_4c4a50(&var_14, "v=1&tid=UA-34292269-5&cid=%d&t=event&ec=game-play&ea=%s&el=%s&ev=%d")
    var_8_1.b = 1
    char* const eax_6 = var_14
    
    if (eax_6 == 0)
        eax_6 = &data_83f3d3
    
    char* const var_2c_2 = eax_6
    sub_4c8ff0(0x27c05fc, edx_2)
    var_8_1.b = 0
    char* eax_7 = var_14
    
    if (eax_7 != 0 && *eax_7 != 0)
        void* eax_9 = sub_4c4060(&var_14)
        int32_t temp0_1 = *(eax_9 + 4)
        *(eax_9 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(eax_9 + 0xc) + 0x10
            sub_4f4430(eax_9, sub_4f4380(esi_2), esi_2)
    
    int32_t var_8_2 = 0xffffffff
    char* eax_12 = var_18
    
    if (eax_12 != 0 && *eax_12 != 0)
        eax_12 = sub_4c4060(&var_18)
        int32_t temp1_1 = *(eax_12 + 4)
        *(eax_12 + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_4 = *(eax_12 + 0xc) + 0x10
            sub_4f4430(eax_12, sub_4f4380(esi_4), esi_4)
    
    eax_12.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_12
}
