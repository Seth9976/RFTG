// 函数名称: sub_5af00e
// 虚拟地址: 0x5af00e
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5af00e(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0x10
    int32_t __saved_ebp_1 = 0x10
    int32_t var_8 = 0x8aa390
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x8aa390 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_34
    void* const var_38_10 = &data_5af01a
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_24 = 0
    int32_t esi = arg2
    int32_t result
    
    if (esi == 4 || esi == 3)
    label_5af233:
        
        if (arg1 != 1 && arg1 != 3 && arg1 != 0xd && (arg1 s<= 0xf || arg1 s> 0x11))
            *__errno() = 0x16
            __invalid_parameter_noinfo()
        
        result = 0xffffffff
    else
        int32_t var_38 = 2
        int32_t result_1
        
        if (arg1 == 2 || arg1 == 0x15 || arg1 == 0x16 || arg1 == 6 || arg1 == 0xf)
            sub_5aeedd(0)
            int32_t var_8_1 = 0
            
            if ((arg1 == 2 || arg1 == 0x15) && data_becac0 == 0)
                if (SetConsoleCtrlHandler(sub_5aef2e, 1) != 1)
                    void* eax_5 = ___doserrno()
                    *eax_5 = GetLastError()
                    var_24 = 1
                    esi = arg2
                else
                    data_becac0 = 1
            
            if (arg1 == 2)
                result_1 = DecodePointer(data_becab0)
                
                if (esi != 2)
                    data_becab0 = EncodePointer(esi)
            else if (arg1 == 6)
            label_5af183:
                result_1 = DecodePointer(data_becab8)
                
                if (esi != 2)
                    data_becab8 = EncodePointer(esi)
            else if (arg1 == 0xf)
                result_1 = DecodePointer(data_becabc)
                
                if (esi != 2)
                    data_becabc = EncodePointer(esi)
            else if (arg1 == 0x15)
                result_1 = DecodePointer(data_becab4)
                
                if (esi != 2)
                    data_becab4 = EncodePointer(esi)
            else if (arg1 == 0x16)
                goto label_5af183
            
            int32_t var_8_2 = 0xfffffffe
            sub_5af213()
            
            if (var_24 != 0)
                goto label_5af233
            
            result = result_1
        else
            if (arg1 != 8 && arg1 != 4 && arg1 != 0xb)
                goto label_5af233
            
            uint32_t* eax
            void* ecx_1
            eax, ecx_1 = sub_5ace6b()
            uint32_t* esi_1 = eax
            
            if (esi_1 == 0)
                goto label_5af233
            
            if (esi_1[0x17] == 0x6b1de8)
                int128_t* eax_1 = sub_5abd7c(0x90)
                esi_1[0x17] = eax_1
                
                if (eax_1 == 0)
                    goto label_5af233
                
                eax, ecx_1 = sub_5ab990(eax_1, 0x6b1de8, 0x90)
            
            int32_t var_38_1 = esi_1[0x17]
            void* eax_2 = sub_5aefca(eax, arg1, ecx_1)
            
            if (eax_2 == 0)
                goto label_5af233
            
            result_1 = *(eax_2 + 8)
            
            if (arg2 != 2)
                void* eax_3 = eax_2 + 4
                
                while (*eax_3 == arg1)
                    *(eax_3 + 4) = arg2
                    eax_3 += 0xc
                    
                    if (eax_3 - 4 u>= 0x90 + esi_1[0x17])
                        break
            
            result = result_1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_5af24d
    return result
}
