// 函数名称: sub_401000
// 虚拟地址: 0x401000
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __fastcallsub_401000(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f668
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_14 = arg1
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int128_t* result = sub_401a90(&data_8c86e8)
    int32_t var_28 = data_315f8d4
    sub_4c4a50(&var_14, "bot %d")
    int32_t var_8_1 = 0
    char* const eax_4 = var_14
    
    if (eax_4 == 0)
        eax_4 = &data_83f3d3
    
    char* edx_1 = &result[0x3188f] - eax_4
    char i
    
    do
        i = *eax_4
        *(edx_1 + eax_4) = i
        eax_4 = &eax_4[1]
    while (i != 0)
    *(result + 0x318908) = 4
    sub_407510(result + 8)
    
    if (*(data_27e7a40 + 0x18) == 0)
        sub_403080(1)
    
    *(result + 0x21) = 1
    sub_4022e0()
    sub_407670()
    data_315f8d4 += 1
    int32_t var_8_2 = 0xffffffff
    char* eax_6 = var_14
    
    if (eax_6 != 0 && *eax_6 != 0)
        void* eax_8 = sub_4c4060(&var_14)
        int32_t temp0_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(eax_8 + 0xc) + 0x10
            sub_4f4430(eax_8, sub_4f4380(esi_2), esi_2)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
