// 函数名称: sub_4fc930
// 虚拟地址: 0x4fc930
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4fc930()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68ee84
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* esi = data_26a44e4
    
    if (esi == 0)
        sub_4f4250()
        esi = data_26a44e4
    
    int32_t edx = 0
    int32_t* esi_1
    
    while (true)
        if (1 << (edx.b + 4) s>= 0x128)
            esi_1 = esi + edx * 0x14
            break
        
        edx += 1
        
        if (edx s>= 7)
            esi_1 = esi + 0x8c
            break
    
    esi_1[3] += 1
    
    if (*esi_1 == 0)
        sub_4f4170(esi_1)
    
    int32_t* edi = *esi_1
    *esi_1 = *edi
    sub_5abfc0(edi, 0, 0x128)
    int32_t* var_14 = edi
    int32_t* var_18 = edi
    int32_t var_8_1 = 0
    
    if (edi == 0)
        edi = nullptr
    else
        void (__fastcall* var_30_1)(int32_t* arg1) = sub_4fdaa0
        sub_5a7116(edi, 0xc, 0xc, sub_5183f0)
        void (__fastcall* var_30_2)(int32_t* arg1) = sub_4fdaa0
        var_8_1.b = 1
        sub_5a7116(&edi[0x24], 0xc, 0xc, sub_5183f0)
    
    int32_t var_8_2 = 0xffffffff
    data_26a44ec = edi
    int32_t result_1 = 0
    
    while (true)
        int32_t* ebx_2 = result_1 + data_26a44ec
        
        if (*ebx_2 != 0)
            sub_4c5870("mNodeBuckets == NULL", &data_83f3d3, "c:\ax2010\engine\xMap.h", 0x72, 
                "XMap<class XString,struct Translation>::SetNumBuckets")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void* esi_2 = data_26a44e4
        
        if (esi_2 == 0)
            sub_4f4250()
            esi_2 = data_26a44e4
        
        int32_t eax_5 = 0
        int128_t** esi_3
        
        while (true)
            if (1 << (eax_5.b + 4) s>= 0x1000)
                esi_3 = esi_2 + eax_5 * 0x14
                break
            
            eax_5 += 1
            
            if (eax_5 s>= 7)
                esi_3 = esi_2 + 0x8c
                break
        
        esi_3[3] += 1
        int128_t* edi_1
        
        if (esi_3[4] != 0xffffffff)
            if (*esi_3 == 0)
                sub_4f4170(esi_3)
            
            edi_1 = *esi_3
            *esi_3 = *edi_1
        else
            edi_1 = sub_4cce80(0x1000)
        
        sub_5abfc0(edi_1, 0, 0x1000)
        int32_t eax_8 = data_26a44ec
        *ebx_2 = edi_1
        ebx_2[1] = 0x3ff
        
        if (*(result_1 + eax_8 + 0x90) != 0)
            break
        
        void* esi_4 = data_26a44e4
        
        if (esi_4 == 0)
            sub_4f4250()
            esi_4 = data_26a44e4
        
        int32_t eax_9 = 0
        int32_t* esi_5
        
        while (true)
            if (1 << (eax_9.b + 4) s>= 0x1000)
                esi_5 = esi_4 + eax_9 * 0x14
                break
            
            eax_9 += 1
            
            if (eax_9 s>= 7)
                esi_5 = esi_4 + 0x8c
                break
        
        esi_5[3] += 1
        int128_t* esi_6
        
        if (esi_5[4] != 0xffffffff)
            if (*esi_5 == 0)
                sub_4f4170(esi_5)
            
            int128_t* edi_2 = *esi_5
            *esi_5 = *edi_2
            sub_5abfc0(edi_2, 0, 0x1000)
            esi_6 = edi_2
        else
            esi_6 = sub_4cce80(0x1000)
            sub_5abfc0(esi_6, 0, 0x1000)
        
        int32_t result = result_1 + 0xc
        *(result_1 + eax_8 + 0x90) = esi_6
        *(result_1 + eax_8 + 0x94) = 0x3ff
        result_1 = result
        
        if (result s>= 0x90)
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
    
    sub_4c5870("mNodeBuckets == NULL", &data_83f3d3, "c:\ax2010\engine\xMap.h", 0x72, 
        "XMap<class XString,struct Translation>::SetNumBuckets")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
