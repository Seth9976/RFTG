// 函数名称: sub_469310
// 虚拟地址: 0x469310
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __fastcallsub_469310(int32_t* arg1, void* arg2 @ edi)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f133
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_3c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = arg1
    int32_t eax_3 = 0
    char* result
    
    if (esi[0x50] s<= 0)
    label_46935c:
        int32_t* (__fastcall* var_40_1)(int32_t* arg1) = sub_4c43d0
        void var_34
        sub_5a7116(&var_34, 4, 8, sub_4c42f0)
        int32_t var_8_1 = 0xffffffff
        sub_5a71d9(&var_34, 4, 8, sub_4c43d0)
        int32_t eax_4 = esi[0x50]
        esi[0x50] = eax_4 + 1
        void* esi_1 = &esi[eax_4 * 0x14]
        *esi_1 = *(arg2 + 4)
        result = _strncpy(esi_1 + 0xc, arg2 + 0x18, 0x20)
        *(esi_1 + 0x2b) = 0
        *(esi_1 + 0x2c) = *(arg2 + 0x38)
        *(esi_1 + 0x30) = 4
    else
        while (*arg1 != *(arg2 + 4))
            eax_3 += 1
            arg1 = &arg1[0x14]
            
            if (eax_3 s>= esi[0x50])
                goto label_46935c
        
        result = sub_4c57f0("tried to invite player who's already invited to the game")
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
