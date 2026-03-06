// 函数名称: sub_4b74b0
// 虚拟地址: 0x4b74b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_4b74b0(void** arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f308
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_3c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_24
    sub_4b62b0(&var_24)
    int32_t var_8_1 = 0
    char* ebx = var_24
    char* const eax_4 = &data_83f3d3
    
    if (ebx != 0)
        eax_4 = ebx
    
    char i
    
    do
        i = *eax_4
        eax_4 = &eax_4[1]
    while (i != 0)
    void* result = eax_4 - &eax_4[1]
    char* var_28 = &data_83f3d3
    
    if (ebx != 0)
        var_28 = ebx
    
    void* ecx = *arg1
    void* edi = result + 1
    
    if (ecx != 0)
        int32_t** edx_1 = data_27e7bb8
        result = zx.d(ecx.w)
        
        if (result u< edx_1[1])
            result = &(*edx_1)[result * 0x13]
            
            if (*(result + 0x48) == ecx)
                if (edi s> 0xfd0)
                    sub_4c5870("length <= MAX_NET_MESSAGE_SIZE", &data_83f3d3, "Network.cpp", 0x29f, 
                        "NetBufferStartMessage")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t var_20
                int32_t* var_40_1 = &var_20
                void* var_44_1 = result + 0x3c
                void* var_1c_1 = edi
                int32_t var_18_1 = 0xf4251
                var_20 = 0xfeedface
                char* var_48_1 = var_28
                void* var_4c_1 = result + 0x3c
                result = sub_4c72b0(edi, sub_4c72b0(0xc, edx_1, ecx), var_28)
    
    int32_t var_8_2 = 0xffffffff
    
    if (ebx != 0 && *ebx != 0)
        result = sub_4c4060(&var_24)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_3 = *(result + 0xc) + 0x10
            result = sub_4f4430(result, sub_4f4380(esi_3), esi_3)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
