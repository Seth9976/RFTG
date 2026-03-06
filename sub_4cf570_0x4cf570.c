// 函数名称: sub_4cf570
// 虚拟地址: 0x4cf570
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4cf570(int32_t* arg1, uint8_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68e5e8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    uint8_t* esi = arg2
    uint8_t* var_38 = esi
    sub_5a9d3d()
    sub_4ffc50(esi)
    void var_24
    int32_t** edi = zip_open(esi, 1, &var_24)
    int32_t** var_20 = edi
    
    if (edi == 0)
        uint8_t* var_38_3 = esi
        sub_4c5680("zip xpack open failed: %s")
        int32_t eax_4
        eax_4.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_4
    
    int32_t* eax_5 = *arg1
    char var_11 = 1
    
    if (eax_5 != 0)
        while (true)
            int32_t* edx_1 = eax_5[1]
            void* ebx_1 = *eax_5
            char* const eax_6 = *(ebx_1 + 0xc)
            
            if (eax_6 == 0)
                eax_6 = &data_83f3d3
            
            int32_t* eax_7
            int32_t edx_2
            eax_7, edx_2 = zip_source_file(edi, eax_6, 0, 0, 0, 0)
            
            if (eax_7 == 0)
                char* const eax_17 = *(ebx_1 + 0xc)
                
                if (eax_17 == 0)
                    eax_17 = &data_83f3d3
                
                char* const var_38_11 = eax_17
                sub_4c5680("zip xpack load failed: %s")
                var_11 = 0
                break
            
            char* const eax_8 = *(ebx_1 + 0x20)
            
            if (eax_8 == 0)
                eax_8 = &data_83f3d3
            
            char* var_18
            sub_51f2c0(eax_8, edx_2, eax_8, &var_18)
            int32_t var_8_1 = 0
            char* eax_9 = var_18
            
            if (eax_9 == 0)
                eax_9 = &data_83f3d3
            
            int32_t eax_10
            int32_t edx_3
            eax_10, edx_3 = zip_add(edi, eax_9, eax_7)
            
            if ((eax_10 & edx_3) == 0xffffffff)
                char* eax_18 = var_18
                
                if (eax_18 == 0)
                    eax_18 = &data_83f3d3
                
                char* var_38_12 = eax_18
                sub_4c5680("zip xpack add failed: %s")
                zip_source_free(eax_7)
                var_11 = 0
                int32_t var_8_3 = 0xffffffff
                sub_4c43d0(&var_18)
                break
            
            if (*(ebx_1 + 4) == 0x15)
                int32_t var_38_6 = 0
                
                if (zip_set_file_compression(edi, eax_10, edx_3, 0) != 0)
                    sub_4c5870("compressResult == 0", &data_83f3d3, "DefBin.cpp", 0x516, 
                        "DefBinWriteZipPackFile")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
            
            int32_t var_8_2 = 0xffffffff
            char* ebx_2 = var_18
            
            if (ebx_2 != 0 && *ebx_2 != 0)
                if (*(ebx_2 - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp0_1 = *(ebx_2 - 0xc)
                *(ebx_2 - 0xc) -= 1
                
                if (temp0_1 == 1)
                    void* edx_4 = data_26a44e4
                    int32_t esi_3 = *(ebx_2 - 4) + 0x10
                    
                    if (edx_4 == 0)
                        sub_4f4250()
                        edx_4 = data_26a44e4
                    
                    int32_t eax_12 = 0
                    int32_t* edi_2
                    
                    while (true)
                        if (esi_3 s<= 1 << (eax_12.b + 4))
                            edi_2 = edx_4 + eax_12 * 0x14
                            break
                        
                        eax_12 += 1
                        
                        if (eax_12 s>= 7)
                            edi_2 = edx_4 + 0x8c
                            break
                    
                    sub_4f4430(&ebx_2[0xfffffff0], edi_2, esi_3)
                    edi = var_20
            
            if (edx_1 == 0)
                break
            
            eax_5 = edx_1
        
        esi = arg2
    
    if (zip_close(edi) == 0xffffffff)
        uint8_t* var_38_9 = esi
        sub_4c5680("zip xpack close failed: %s")
        uint8_t* var_38_10 = esi
        sub_5a9d3d()
        int32_t eax_15
        eax_15.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_15
    
    if (var_11 != 0)
        int32_t eax_14
        eax_14.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_14
    
    uint8_t* var_38_13 = esi
    sub_5a9d3d()
    int32_t eax_21
    eax_21.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_21
}
