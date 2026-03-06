// 函数名称: sub_4027e0
// 虚拟地址: 0x4027e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4027e0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68e788
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* arg_4
    char* ebx = arg_4
    
    if (*(ebx + 8) != 0x28)
        sub_4c5870("message.dataLen == sizeof(MessageVoipJoinRequest)", &data_83f3d3, 
            "..\code\CardNet.cpp", 0x373, "CardNetGotVoipJoinRequest")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* eax_4 = sub_4b7170(*(ebx + 0x10))
    void* eax_8
    
    if (eax_4 != 0)
        int32_t edx_1 = *(data_27e7a44 + 0x70)
        int32_t ecx_4 = *eax_4
        int32_t var_2c_2 = edx_1
        *(eax_4 + 0x1b4)
        int32_t var_30_1 = ecx_4
        int32_t edx_2 = sub_4d2b50(*(eax_4 + 4), ebx, edx_1, ecx_4)
        void* ecx_5 = data_27e7a44
        int32_t var_14
        int32_t* var_34_1 = &var_14
        int32_t var_38_1 = 4
        var_14 = 0xf4243
        eax_8 = sub_4c7470(*(ecx_5 + 0x70), edx_2, ecx_5, &ebx[0xfe4])
    else
        int32_t var_8_1 = 0
        char* eax_6 = *sub_402140(ebx + 0xfe4, &arg_4)
        
        if (eax_6 == 0)
            eax_6 = &data_83f3d3
        
        char* var_2c = eax_6
        int32_t var_30 = *(ebx + 0x10)
        sub_4c57f0("got voip join request from unknown client %x at %s")
        int32_t var_8_2 = 0xffffffff
        eax_8 = arg_4
        
        if (eax_8 != 0 && *eax_8 != 0)
            eax_8 = sub_4c4060(&arg_4)
            int32_t temp0_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_3 = *(eax_8 + 0xc) + 0x10
                int32_t eax_12 = sub_4f4430(eax_8, sub_4f4380(esi_3), esi_3)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_12
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_8
}
