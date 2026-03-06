// 函数名称: sub_5b852b
// 虚拟地址: 0x5b852b
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b852b()
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0x2c
    int32_t __saved_ebp_1 = 0x2c
    int32_t var_8 = 0x8aa6d8
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x8aa6d8 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_50 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_50
    void* const var_54_13 = &data_5b8537
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_3c = 0
    int32_t var_30_1
    __builtin_memset(&var_30_1, 0, 0x14)
    sub_5aeedd(7)
    int32_t var_8_1 = 0
    void** var_24 = &data_8b9200
    int32_t var_2c
    int32_t var_28
    int32_t var_20
    
    if (sub_5b84e6(&var_20) == 0 && _rand_s(&var_28) == 0 && sub_5b84b9(&var_2c) == 0)
        uint32_t CodePage = sub_5aabad()
        data_bed2c4 = 0
        data_8b9214 = 0xffffffff
        data_8b9208 = 0xffffffff
        void* eax_3 = __getenv_helper_nolock("TZ")
        void* var_40_1 = eax_3
        
        if (eax_3 == 0 || *eax_3 == 0)
            int32_t eax_13 = data_bed2c8
            
            if (eax_13 != 0)
                __free_base(eax_13)
                data_bed2c8 = 0
            
            if (GetTimeZoneInformation(&data_bed218) != 0xffffffff)
                data_bed2c4 = 1
                int32_t eax_16 = data_bed218 * 0x3c
                var_20 = eax_16
                
                if (data_bed25e != 0)
                    var_20 = eax_16 + data_bed26c * 0x3c
                
                int32_t eax_18
                
                if (data_bed2b2 != 0)
                    eax_18 = data_bed2c0
                
                if (data_bed2b2 == 0 || eax_18 == 0)
                    var_28 = 0
                    var_2c = 0
                else
                    var_28 = 1
                    var_2c = (eax_18 - data_bed26c) * 0x3c
                
                BOOL usedDefaultChar
                
                if (WideCharToMultiByte(CodePage, 0, &data_bed21c, 0xffffffff, *var_24, 0x3f, nullptr, 
                        &usedDefaultChar) == 0 || usedDefaultChar != 0)
                    **var_24 = 0
                else
                    *(*var_24 + 0x3f) = 0
                
                if (WideCharToMultiByte(CodePage, 0, &data_bed270, 0xffffffff, var_24[1], 0x3f, 
                        nullptr, &usedDefaultChar) == 0 || usedDefaultChar != 0)
                    *var_24[1] = 0
                else
                    *(var_24[1] + 0x3f) = 0
            
            goto label_5b8724
        
        char* eax_4 = data_bed2c8
        
        if (eax_4 == 0)
        label_5b85fb:
            int32_t eax_9 = sub_5abd7c(_strlen(eax_3) + 1)
            data_bed2c8 = eax_9
            
            if (eax_9 == 0)
                goto label_5b8724
            
            void* eax_11 = _strlen(eax_3) + 1
            
            if (sub_5b04a4(data_bed2c8, eax_11, eax_3) == 0)
                goto label_5b8733
        else
            if (sub_5ac040(eax_3, eax_4) != 0)
                int32_t eax_6 = data_bed2c8
                
                if (eax_6 != 0)
                    __free_base(eax_6)
                
                goto label_5b85fb
            
        label_5b8724:
            var_30_1 = 1
        label_5b8733:
            data_8b9170 = var_20
            data_8b9174 = var_28
            data_8b9178 = var_2c
            int32_t var_8_2 = 0xfffffffe
            int32_t result = sub_5b87ae()
            
            if (var_30_1 != 0)
                goto label_5ac938
            
            if (sub_5b76aa(*var_24, 0x40, eax_3, 3) == 0)
                void* esi_2 = eax_3 + 3
                
                if (*esi_2 == 0x2d)
                    var_3c = 1
                    esi_2 += 1
                
                var_20 = sub_5a70f5(esi_2) * 0xe10
                
                while (true)
                    int32_t eax_35
                    eax_35.b = *esi_2
                    
                    if (eax_35.b != 0x2b)
                        if (eax_35.b s< 0x30)
                            break
                        
                        if (eax_35.b s> 0x39)
                            break
                    
                    esi_2 += 1
                
                if (*esi_2 == 0x3a)
                    esi_2 += 1
                    int32_t eax_37 = sub_5a70f5(esi_2) * 0x3c
                    var_20 += eax_37
                    
                    while (true)
                        eax_37.b = *esi_2
                        
                        if (eax_37.b s< 0x30)
                            break
                        
                        if (eax_37.b s> 0x39)
                            break
                        
                        esi_2 += 1
                    
                    if (*esi_2 == 0x3a)
                        esi_2 += 1
                        int32_t eax_38 = sub_5a70f5(esi_2)
                        var_20 += eax_38
                        
                        while (true)
                            eax_38.b = *esi_2
                            
                            if (eax_38.b s< 0x30)
                                break
                            
                            if (eax_38.b s> 0x39)
                                break
                            
                            esi_2 += 1
                
                if (var_3c != 0)
                    var_20 = neg.d(var_20)
                
                int32_t eax_39 = sx.d(*esi_2)
                var_28 = eax_39
                
                if (eax_39 == 0)
                    *var_24[1] = 0
                label_5b882c:
                    data_8b9170 = var_20
                    int32_t esi_4 = var_28
                    result = sub_5b8513()
                    data_8b9174 = esi_4
                label_5ac938:
                    fsbase->NtTib.ExceptionList = ExceptionList
                    void* const __saved_ebp_2 = &data_5b883d
                    return result
                
                if (sub_5b76aa(var_24[1], 0x40, esi_2, 3) == 0)
                    goto label_5b882c
    
    int32_t var_64
    __builtin_memset(&var_64, 0, 0x14)
    sub_5ad34e()
    noreturn
}
