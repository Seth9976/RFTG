// 函数名称: sub_51b170
// 虚拟地址: 0x51b170
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_51b170(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_696f28
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_44 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t var_30
    __builtin_memset(&var_30, 0, 0x20)
    int32_t eax_3 = *arg1
    void* result
    void* result_1
    bool cond:0_1
    
    if (eax_3 != 0x603)
        if (eax_3 == 0x604)
            var_30 = 0xb
            goto label_51b1d7
        
        int32_t var_48_1 = eax_3
        sub_4c5680("unknown sdl input message %d")
        int32_t var_8_3 = 0xffffffff
        result = result_1
        
        if (result != 0)
            cond:0_1 = *result == 0
        label_51b255:
            
            if (not(cond:0_1))
                result = sub_4c4060(&result_1)
                int32_t temp0_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp0_1 == 1)
                    int32_t esi_2 = *(result + 0xc) + 0x10
                    result = sub_4f4430(result, sub_4f4380(esi_2), esi_2)
    else
        var_30 = 0xc
    label_51b1d7:
        eax_3.b = arg1[3].b
        int32_t var_28_1 = 0
        int32_t eax_4 = sub_51b0b0(eax_3.b)
        void* edx_1 = data_27e7fcc
        
        if (edx_1 != 0)
            sub_4d7530(var_30)
            
            if (*(edx_1 + 0x42) == 0 || var_30 != 1
                    || (eax_4 != 0x74 && eax_4 != 0x79 && eax_4 != 0x7a))
                sub_4d7830()
            else
                sub_4d7330(&var_30)
        
        int32_t var_8_2 = 0xffffffff
        result = result_1
        
        if (result != 0)
            cond:0_1 = *result == 0
            goto label_51b255
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
