// 函数名称: sub_50a1e0
// 虚拟地址: 0x50a1e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_50a1e0(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d4a1
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* result = arg1
    char* edi = nullptr
    int32_t var_14_1 = 0
    int32_t var_8_1 = 1
    char* eax_3 = arg2
    *result = eax_3
    
    if (eax_3 != 0 && *eax_3 != 0)
        void* eax_5 = sub_4c4060(result)
        *(eax_5 + 4) += 1
        eax_3 = arg2
    
    int32_t var_14_2 = 1
    
    while (true)
        int32_t ecx_1
        
        if (eax_3 == 0 || *eax_3 == 0)
            ecx_1 = 0
        else
            if (*(eax_3 - 0x10) != 0xfafafafa)
                sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                    "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            ecx_1 = *(eax_3 - 8)
        
        if (edi s>= ecx_1)
            break
        
        char* eax_7
        eax_7.b = *(sub_4c4410(result) + edi)
        
        if (eax_7.b != 0x5c)
            if (sub_5a83a7(sx.d(eax_7.b)) != 0)
                sub_4c4740(result, edi, sub_5aa073(sx.d(*(sub_4c4410(result) + edi))))
            
            eax_3 = arg2
            edi = &edi[1]
        else
            sub_4c4740(result, edi, 0x2f)
            eax_3 = arg2
            edi = &edi[1]
    
    var_8_1.b = 0
    
    if (eax_3 != 0 && *eax_3 != 0)
        if (*(eax_3 - 0x10) != 0xfafafafa)
            sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t temp0_1 = *(eax_3 - 0xc)
        *(eax_3 - 0xc) -= 1
        
        if (temp0_1 == 1)
            void* edx_1 = data_26a44e4
            int32_t edi_2 = *(eax_3 - 4) + 0x10
            
            if (edx_1 == 0)
                sub_4f4250()
                edx_1 = data_26a44e4
            
            int32_t eax_15 = 0
            int32_t* ecx_4
            
            while (true)
                if (edi_2 s<= 1 << (eax_15.b + 4))
                    ecx_4 = edx_1 + eax_15 * 0x14
                    break
                
                eax_15 += 1
                
                if (eax_15 s>= 7)
                    ecx_4 = edx_1 + 0x8c
                    break
            
            sub_4f4430(&eax_3[0xfffffff0], ecx_4, edi_2)
            result = arg1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
