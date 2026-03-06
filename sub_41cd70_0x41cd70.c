// 函数名称: sub_41cd70
// 虚拟地址: 0x41cd70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_41cd70(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_691dae
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void* var_54
    int32_t eax_2 = __security_cookie ^ &var_54
    int32_t __saved_edi
    int32_t var_64 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ebx = data_27e7a40
    void* edi = *(ebx + 0x548)
    int32_t eax_5 = *(edi + 0x43350)
    *(edi + 0x43354) = eax_5
    int32_t edx = *arg1
    bool cond:0 = (data_31656bc & 1) != 0
    *(edi + 0x43358) = edx
    *(edi + 0x4335c) = arg1[1]
    void* esi = (edx + (eax_5 << 2)) * 0x1c0 + *(ebx + 0x548) + 0x2c0c0
    
    if (not(cond:0))
        data_31656bc.d |= 1
        int32_t var_c_1 = 0
        int32_t eax_9 = sub_4f5220(data_307c504, "imgMoreText")
        int32_t var_c_2 = 0xffffffff
        ebx = data_27e7a40
        data_31656b8 = eax_9
    
    if (arg2 != data_31656b8)
        void* edx_1 = *(edi + 0x4335c)
        int32_t ecx_4 = *(edi + 0x43354)
        *(edi + 0x43880) = 0
        var_54 = edx_1
        bool cond:1_1 = sub_41cd30(ecx_4) != 0
        void* eax_11 = var_54
        
        if (not(cond:1_1))
            eax_11 += 1
        
        if (eax_11 == 0)
            void* ebx_1 = *(ebx + 0x548)
            *(ebx_1 + (*(ebx_1 + 0x43880) << 2) + 0x43360) = *(esi + 8)
            *(ebx_1 + 0x43880) += 1
        else if (eax_11 == 2)
            int32_t i_2 = 0
            
            if (*(esi + 0x28) s> 0)
                var_54 = esi + 0x20
                int32_t i
                
                do
                    void* eax_13 = *(ebx + 0x548)
                    int32_t ecx_6 = *(eax_13 + 0x43880)
                    int32_t edx_4 = *var_54
                    var_54 += 4
                    *(eax_13 + (ecx_6 << 2) + 0x43360) = edx_4
                    *(eax_13 + 0x43880) += 1
                    i = i_2 + 1
                    i_2 = i
                while (i s< *(esi + 0x28))
        else if (eax_11 == 3)
            int32_t i_3 = 0
            
            if (*(esi + 0x50) s> 0)
                var_54 = esi + 0x30
                int32_t i_1
                
                do
                    void* eax_16 = *(ebx + 0x548)
                    int32_t ecx_7 = *(eax_16 + 0x43880)
                    int32_t edx_6 = *var_54
                    var_54 += 8
                    *(eax_16 + (ecx_7 << 2) + 0x43360) = edx_6
                    *(eax_16 + 0x43880) += 1
                    i_1 = i_3 + 1
                    i_3 = i_1
                while (i_1 s< *(esi + 0x50))
    
    char* eax_19 = *(esi + (*(edi + 0x4335c) << 2) + 0x1a8)
    
    if (eax_19 != 0 && *eax_19 != 0)
        sub_4d6480(data_307beec)
        void var_4c
        sub_4d66f0(&var_4c)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_54)
    return 0
}
