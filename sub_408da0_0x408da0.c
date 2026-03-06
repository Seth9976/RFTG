// 函数名称: sub_408da0
// 虚拟地址: 0x408da0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_408da0(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f668
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* result_1 = arg1
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t esi = *(data_27e7a58 + 4)
    char* var_2c = arg1
    int32_t* eax_5
    int32_t edx
    eax_5, edx = sub_4fff30(data_307b66c, 0)
    sub_505030(eax_5, edx, data_27e7a58, eax_5, esi)
    void* eax_6 = data_27e7a58
    void* ecx_1 = data_27e7fd0
    *(eax_6 + 8) = esi
    data_27e7a54 = esi * 0x214 + *eax_6
    int32_t eax_7
    int32_t edi
    
    if (*(ecx_1 + 0x27) == 0)
        eax_7 = 7
        edi = 4
    else
        eax_7 = 0xe
        edi = 0xc
    
    *(data_27e7a54 + 0x18) = sub_4c96e0(eax_7, edi)
    int32_t eax_9 = sub_4c96e0(2, 0)
    void* ecx_2 = data_27e7a54
    *(ecx_2 + 0x1c) = eax_9
    void* eax_10 = data_27e7a58
    *(ecx_2 + 0x208) = *(eax_10 + 0xc)
    *(eax_10 + 0xc) += 1
    sub_474fc0(&result_1)
    int32_t var_8_1 = 0
    char* const result_2 = result_1
    
    if (result_2 == 0)
        result_2 = &data_83f3d3
    
    _strncpy(data_27e7a54, result_2, 0x10)
    void* edi_1 = data_27e7a54
    *(edi_1 + 0xf) = 0
    
    for (int32_t i = 0; i s< 0x18; )
        i += 1
        *(i + edi_1 + 0x1f) = (modu.dp.d(0:(sub_4c95c0()), 0x1a)).b + 0x61
    
    *(edi_1 + 0x39) = 0
    sub_4075c0()
    data_27e7a54
    sub_403e80()
    sub_407670()
    int32_t var_8_2 = 0xffffffff
    void* result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&result_1)
        int32_t temp3_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp3_1 == 1)
            int32_t esi_5 = *(result + 0xc) + 0x10
            result = sub_4f4430(result, sub_4f4380(esi_5), esi_5)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
