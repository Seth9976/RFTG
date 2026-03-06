// 函数名称: sub_43b510
// 虚拟地址: 0x43b510
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_43b510()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_696b2e
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_31662b0 & 1) == 0)
        data_31662b0.d |= 1
        int32_t var_8_1 = 0
        data_31662ac = sub_4f5220(data_307ca50, "btn_ok")
        int32_t var_8_2 = 0xffffffff
    
    int32_t result = 0
    int32_t* arg_8
    
    if (arg_8 == data_31662ac)
        void* esi_1 = *(data_27e7a40 + 0x548)
        int32_t var_1c = 0
        int32_t var_18_1 = 0
        int32_t var_14_1 = 0
        
        if (sub_419400(&arg_8) != 0)
            int32_t eax_6 = *arg_8
            
            if (eax_6 != 0x48 && eax_6 != 0x21 && eax_6 != 0x20 && eax_6 != 0x1f && eax_6 != 0x47
                    && eax_6 != 0x1e)
                fsbase->NtTib.ExceptionList = ExceptionList
                return 0
        
        *(esi_1 + 0xbff8) = 0
        *(esi_1 + 0xc008) = 0
        *(esi_1 + 0xbfe4) = 0
        
        if (*(esi_1 + 0x2c0b8) != 0)
            *(esi_1 + 0x2c0b8) = 0
        else if (*(esi_1 + 0x2c098) == 0)
            int32_t edx_2 = sub_445f90()
            int32_t eax_8 = *(esi_1 + 0x210)
            
            if (eax_8 u> 6)
                sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x39d3, 
                    "GeneralButtonClickVR_OK")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            switch (eax_8)
                case 0, 4
                    void* eax_9 = data_27e7a40
                    void* edx_3 = *(eax_9 + 0x548)
                    void* eax_10 = *(eax_9 + 0x74)
                    var_1c = 4
                    sub_472e60(eax_10, edx_3, &var_1c, edx_3)
                case 1, 2
                    void* eax_11 = data_27e7a40
                    void* ecx_7 = *(eax_11 + 0x548)
                    void* eax_12 = *(eax_11 + 0x74)
                    var_1c = 5
                    sub_472e60(eax_12, edx_2, &var_1c, ecx_7)
                case 3
                    sub_462dd0(eax_8, *(esi_1 + 4), esi_1 + 0x438f4, 1, 0, *(esi_1 + 8))
                case 5
                    void* eax_14 = sub_46b2b0(*(data_27e7a40 + 0x74))
                    bool cond:0_1 = *(eax_14 + 0x1f8c) == 0xffffffff
                    *(eax_14 + 0x1f90) = 0
                    sub_46c3b0(0, cond:0_1)
        else
            *(esi_1 + 0x2c098) = 0
            sub_46bf90()
        
        result = 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
